/*
 * XREFs of HalpBlkMceFastForward @ 0x140C82510
 * Callers:
 *     HalpBlkMachineCheckAbort @ 0x140C83B80 (HalpBlkMachineCheckAbort.c)
 *     HalpBlkNmiInterrupt @ 0x140C83D00 (HalpBlkNmiInterrupt.c)
 * Callees:
 *     HalpBlkFatalErrorHalt @ 0x140C82910 (HalpBlkFatalErrorHalt.c)
 */

char __fastcall HalpBlkMceFastForward(__int64 a1, char a2)
{
  unsigned __int64 v2; // r9
  char v5; // bl
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // rsi
  __int64 v10; // rcx
  int v11; // r14d
  volatile signed __int32 *v12; // rax
  __int64 v13; // rcx
  char *v14; // rdx
  char *v15; // r8
  char *v16; // r9

  v2 = *(_QWORD *)(a1 + 384);
  v5 = 0;
  v6 = *(unsigned __int64 *)((char *)&KeGetPcr()->NtTib.ExceptionList[4].Next[3].Next + 4);
  if ( v2 <= v6 && v2 >= v6 - 0x2000 )
  {
    v5 = 1;
    _InterlockedAdd((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[151].Handler, 1u);
  }
  v7 = *(unsigned __int64 *)((char *)&KeGetPcr()->NtTib.ExceptionList[4].Next[2].Handler + 4);
  if ( v2 <= v7 && v2 >= v7 - 0x2000 )
  {
    v5 |= 2u;
    _InterlockedAdd((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[151].Handler + 1, 1u);
  }
  v8 = *(_QWORD *)(a1 + 360);
  if ( v8 >= (unsigned __int64)&HalpBlkMceExitMceTailMceBegin && v8 < (unsigned __int64)&HalpBlkMceExitMceTailMceEnd )
  {
    v5 |= 4u;
    _InterlockedAdd((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[152], 1u);
  }
  if ( v8 >= (unsigned __int64)&HalpBlkMceExitMceTailNmiBegin && v8 < (unsigned __int64)HalpBlkMceExitMceTailNmiEnd )
  {
    v5 |= 4u;
    _InterlockedAdd((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[152], 1u);
  }
  ExceptionList = KeGetPcr()->NtTib.ExceptionList;
  v10 = v5 & 1;
  if ( a2 || (v5 & 1) != 0 )
  {
    v12 = (volatile signed __int32 *)KeGetPcr()->NtTib.ExceptionList;
    _InterlockedAdd(v12 + 611, 1u);
    if ( (v5 & 1) != 0 )
    {
      v12 = (volatile signed __int32 *)KeGetPcr()->NtTib.ExceptionList;
      _InterlockedAdd(v12 + 615, 1u);
    }
    v11 = 1;
    if ( a2 )
    {
      if ( (v5 & 1) != 0 )
      {
        LOBYTE(v10) = 2;
        HalpBlkFatalErrorHalt(v10, a1);
      }
      goto LABEL_19;
    }
  }
  else
  {
    _InterlockedAdd((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[153], 1u);
    v11 = 0;
  }
  LOBYTE(v12) = v5 & 6;
  if ( (v5 & 6) == 2 )
  {
    LOBYTE(v10) = 18;
    HalpBlkFatalErrorHalt(v10, a1);
  }
  v13 = 2344LL;
  if ( !v11 )
LABEL_19:
    v13 = 2264LL;
  v14 = (char *)ExceptionList + v13;
  v15 = (char *)ExceptionList + v13;
  v16 = (char *)ExceptionList + v13;
  if ( (v5 & 4) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[154], 1u);
    *(_EXCEPTION_REGISTRATION_RECORD *)(a1 + 360) = *(_EXCEPTION_REGISTRATION_RECORD *)((char *)ExceptionList + v13);
    *(_EXCEPTION_REGISTRATION_RECORD *)(a1 + 376) = *(_EXCEPTION_REGISTRATION_RECORD *)((char *)ExceptionList + v13 + 16);
    *(_QWORD *)(a1 + 392) = *(_EXCEPTION_REGISTRATION_RECORD **)((char *)&ExceptionList[2].Next + v13);
    *(_QWORD *)(a1 + 48) = *((_QWORD *)v14 + 5);
    *(_QWORD *)(a1 + 56) = *((_QWORD *)v15 + 6);
    *(_QWORD *)(a1 + 64) = *((_QWORD *)v16 + 7);
    v12 = (volatile signed __int32 *)KeGetPcr()->NtTib.ExceptionList;
    _InterlockedAdd(v12 + 610, 1u);
    *(_WORD *)((char *)&ExceptionList->Handler + v13) = 0;
  }
  if ( !a2 )
  {
    _InterlockedAdd((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[152].Next + 1, 1u);
    *(_EXCEPTION_REGISTRATION_RECORD *)((char *)ExceptionList + v13) = *(_EXCEPTION_REGISTRATION_RECORD *)(a1 + 360);
    *(_EXCEPTION_REGISTRATION_RECORD *)((char *)ExceptionList + v13 + 16) = *(_EXCEPTION_REGISTRATION_RECORD *)(a1 + 376);
    *(_EXCEPTION_REGISTRATION_RECORD **)((char *)&ExceptionList[2].Next + v13) = *(_EXCEPTION_REGISTRATION_RECORD **)(a1 + 392);
    *((_QWORD *)v14 + 5) = *(_QWORD *)(a1 + 48);
    *((_QWORD *)v15 + 6) = *(_QWORD *)(a1 + 56);
    v12 = *(volatile signed __int32 **)(a1 + 64);
    *((_QWORD *)v16 + 7) = v12;
  }
  return (char)v12;
}
