/*
 * XREFs of PopDiagTraceFxComponentIdleState @ 0x1403B7B74
 * Callers:
 *     PopFxProcessWork @ 0x1403B8BD0 (PopFxProcessWork.c)
 *     PoFxCompleteIdleState @ 0x1404732B0 (PoFxCompleteIdleState.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402578F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxComponentIdleState(__int64 a1, int a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r11
  char v5; // r10
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v12; // [rsp+50h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+17h] BYREF
  int *v14; // [rsp+68h] [rbp+27h]
  __int64 v15; // [rsp+70h] [rbp+2Fh]
  int *v16; // [rsp+78h] [rbp+37h]
  __int64 v17; // [rsp+80h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  int v19; // [rsp+B0h] [rbp+6Fh] BYREF
  unsigned int v20; // [rsp+B8h] [rbp+77h] BYREF

  CurrentThread = (struct _KTHREAD *)&retaddr;
  v20 = a3;
  v19 = a2;
  v12 = a1;
  v4 = a3;
  v5 = a2;
  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 80);
    if ( v6 )
    {
      v7 = 3LL
         * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 896), 1u) % *(_DWORD *)(v6 + 880));
      v8 = *(_QWORD *)(v6 + 888);
      *(_QWORD *)(v8 + 8 * v7) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v8 + 8 * v7 + 8) = 8;
      *(_BYTE *)(v8 + 8 * v7 + 9) = v5;
      *(_WORD *)(v8 + 8 * v7 + 10) = KeGetCurrentPrcb()->Number;
      *(_WORD *)(v8 + 8 * v7 + 12) = KeGetCurrentThread()[1].CycleTime;
      CurrentThread = KeGetCurrentThread();
      *(_WORD *)(v8 + 8 * v7 + 14) = CurrentThread[1].CurrentRunTime;
      *(_QWORD *)(v8 + 8 * v7 + 16) = v4;
    }
  }
  if ( PopDiagHandleRegistered && PopDiagHandle )
  {
    if ( (v9 = *(_QWORD *)(PopDiagHandle + 32), v10 = 4LL, *(_DWORD *)(v9 + 96))
      && ((LOBYTE(CurrentThread) = *(_BYTE *)(v9 + 100), (unsigned __int8)CurrentThread >= 4u) || !(_BYTE)CurrentThread)
      && (LODWORD(CurrentThread) = *(_DWORD *)(v9 + 112), ((unsigned __int16)CurrentThread & 0x100) != 0)
      && (LOBYTE(CurrentThread) = 0, (*(_QWORD *)(v9 + 120) & 0x100LL) == *(_QWORD *)(v9 + 120))
      || *(_WORD *)(PopDiagHandle + 102)
      && (LOBYTE(CurrentThread) = EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 40) + 96LL, 4u, 256LL),
          (_BYTE)CurrentThread) )
    {
      UserData.Ptr = (ULONGLONG)&v12;
      *(_QWORD *)&UserData.Size = 8LL;
      v14 = &v19;
      v15 = v10;
      v16 = (int *)&v20;
      v17 = v10;
      LOBYTE(CurrentThread) = EtwWriteEx(
                                PopDiagHandle,
                                &POP_ETW_EVENT_COMPONENT_IDLE_STATE,
                                0LL,
                                1u,
                                0LL,
                                0LL,
                                3u,
                                &UserData);
    }
  }
  return (char)CurrentThread;
}
