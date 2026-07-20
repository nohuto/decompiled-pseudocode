/*
 * XREFs of SmpTerminateCSR @ 0x1400056C0
 * Callers:
 *     SmpStopCsr @ 0x140007420 (SmpStopCsr.c)
 *     SmpDestroyControlBlock @ 0x1400075E8 (SmpDestroyControlBlock.c)
 * Callees:
 *     SmpDereferenceKnownSubSys @ 0x140005F60 (SmpDereferenceKnownSubSys.c)
 *     SmpGetProcessId @ 0x1400078F0 (SmpGetProcessId.c)
 *     SmLogFailureInt @ 0x140007A08 (SmLogFailureInt.c)
 *     SmpCheckSubSysStatus @ 0x14000B500 (SmpCheckSubSysStatus.c)
 *     SmpSessionIdIsInitialSessions @ 0x14000B530 (SmpSessionIdIsInitialSessions.c)
 *     SmpSetCoreProcessIds @ 0x14001893C (SmpSetCoreProcessIds.c)
 *     SmpWaitForStatusChange @ 0x140019224 (SmpWaitForStatusChange.c)
 */

__int64 __fastcall SmpTerminateCSR(unsigned int a1, __int64 a2, __int64 a3)
{
  _QWORD **v4; // rbx
  _QWORD *i; // rax
  _QWORD *v6; // rsi
  __int64 v7; // r8
  _QWORD **v8; // r11
  unsigned int v9; // esi
  _QWORD **v10; // rbx
  NTSTATUS v11; // edi
  int ProcessId; // eax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD **v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // [rsp+30h] [rbp-28h] BYREF
  _QWORD **v22; // [rsp+38h] [rbp-20h]
  __int128 v23; // [rsp+40h] [rbp-18h] BYREF

  v22 = &v21;
  *(_QWORD *)&v23 = 0LL;
  v21 = &v21;
  v4 = (_QWORD **)(SmpKnownSubSysTable + 24LL * (a1 & 0x1F));
  *((_QWORD *)&v23 + 1) = v4;
  RtlAcquireSRWLockExclusive(v4 + 2, 3LL * (a1 & 0x1F), a3);
LABEL_2:
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    if ( *((_DWORD *)i - 2) == a1 )
    {
      v6 = i - 9;
      if ( i != (_QWORD *)72 )
      {
        while ( 1 )
        {
          if ( !(unsigned int)SmpCheckSubSysStatus(v6) )
          {
            _InterlockedIncrement((volatile signed __int32 *)v6);
            SmpWaitForStatusChange(v15, 0LL, &v23);
            if ( (v6[1] & 4) != 0 )
            {
              SmpDereferenceKnownSubSys(v6);
              goto LABEL_2;
            }
            SmpDereferenceKnownSubSys(v6);
          }
          v16 = (_QWORD **)v6[9];
          v17 = v6 + 9;
          _InterlockedOr((volatile signed __int32 *)v6 + 2, 4u);
          v18 = v6[9];
          if ( *(_QWORD **)(v18 + 8) != v6 + 9
            || (v19 = (_QWORD *)v6[10], (_QWORD *)*v19 != v17)
            || (*v19 = v18, *(_QWORD *)(v18 + 8) = v19, v20 = v22, *v22 != &v21) )
          {
LABEL_11:
            __fastfail(3u);
          }
          v6[10] = v22;
          *v17 = &v21;
          *v20 = v17;
          v22 = (_QWORD **)(v6 + 9);
          if ( v16 != v4 )
          {
            v6 = v16 - 9;
            if ( *((_DWORD *)v16 - 2) == a1 )
              continue;
          }
          goto LABEL_6;
        }
      }
      break;
    }
  }
LABEL_6:
  RtlReleaseSRWLockExclusive(v4 + 2);
  if ( v21 != &v21 )
  {
    if ( (unsigned __int8)SmpSessionIdIsInitialSessions(a1) )
    {
      LOBYTE(v7) = 1;
      v23 = 0LL;
      SmpSetCoreProcessIds(a1, &v23, v7);
      v8 = (_QWORD **)v21;
    }
    v9 = a1;
    while ( 1 )
    {
      if ( v8[1] != &v21 )
        goto LABEL_11;
      v14 = *v8;
      if ( (_QWORD **)(*v8)[1] != v8 )
        goto LABEL_11;
      v21 = *v8;
      v10 = v8 - 9;
      v14[1] = &v21;
      v11 = NtTerminateProcess(*(v8 - 5), 0);
      if ( ((v11 + 0x80000000) & 0x80000000) == 0 && v11 != -1073741558 )
        break;
      v11 = NtWaitForSingleObject(v10[4], 0, 0LL);
      if ( v11 < 0 )
        goto LABEL_18;
LABEL_14:
      SmpDereferenceKnownSubSys(v10);
      v8 = (_QWORD **)v21;
      if ( v21 == &v21 )
        return 0LL;
    }
    ProcessId = SmpGetProcessId(v10[4]);
    SmLogFailureInt((unsigned int)"SmpTerminateProcessAndWait", 91, ProcessId, 0, v11);
LABEL_18:
    SmLogFailureInt((unsigned int)"SmpTerminateCSR", 221, *((_DWORD *)v10 + 6), v9, v11);
    goto LABEL_14;
  }
  return 0LL;
}
