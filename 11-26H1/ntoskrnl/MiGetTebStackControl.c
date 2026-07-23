/*
 * XREFs of MiGetTebStackControl @ 0x140AA43EC
 * Callers:
 *     MiCheckForUserStackOverflow @ 0x140AA4214 (MiCheckForUserStackOverflow.c)
 * Callees:
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiGetTebStackControl(__int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int *Teb; // rsi
  unsigned __int64 ULong64FromUser; // r12
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned int *v9; // rdx
  unsigned __int64 v10; // rcx
  _KPROCESS *Process; // rax
  __int16 v13; // cx
  unsigned int *v15; // rsi
  unsigned int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 ULongFromUser; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+28h] [rbp-30h]

  CurrentThread = KeGetCurrentThread();
  Teb = (unsigned int *)CurrentThread->Teb;
  ULong64FromUser = RtlReadULong64FromUser(Teb + 2);
  v7 = RtlReadULong64FromUser(Teb + 1310) & 0xFFFFFFFFFFFFF000uLL;
  v8 = ((unsigned int)RtlReadULongFromUser(Teb + 1490) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
  v9 = Teb + 4;
  v10 = v8 + 4096;
  if ( !v8 )
    v10 = 0LL;
  if ( v10 < 0x3000 )
    v10 = 12288LL;
  *(_DWORD *)(a1 + 24) = 8;
  if ( a2 < ULong64FromUser && a2 >= v7 )
    goto LABEL_7;
  Process = CurrentThread->ApcState.Process;
  if ( Process[1].ReadyTime )
  {
    v13 = WORD2(Process[3].PerProcessorCycleTimes);
    if ( v13 == 332 || v13 == 452 )
    {
      v15 = Teb + 2048;
      if ( ((unsigned __int8)v15 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      ULongFromUser = (unsigned int)RtlReadULongFromUser(v15 + 1);
      v19 = (unsigned int)RtlReadULongFromUser(v15 + 899);
      v16 = RtlReadULongFromUser(v15 + 990);
      v7 = v19 & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 < ULongFromUser && a2 >= v7 )
      {
        v17 = (v16 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
        v10 = v17 + 4096;
        if ( !v17 )
          v10 = 0LL;
        if ( v10 < 0x2000 )
          v10 = 0x2000LL;
        v9 = v15 + 2;
        *(_DWORD *)(a1 + 24) = 4;
LABEL_7:
        *(_QWORD *)a1 = v10;
        *(_QWORD *)(a1 + 8) = v7;
        *(_QWORD *)(a1 + 16) = v9;
        return 0LL;
      }
    }
  }
  return 2147483649LL;
}
