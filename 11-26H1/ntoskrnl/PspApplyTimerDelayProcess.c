/*
 * XREFs of PspApplyTimerDelayProcess @ 0x140619E40
 * Callers:
 *     PspTimerDelayProcess @ 0x14061A450 (PspTimerDelayProcess.c)
 *     PspTimerDelayWorkerRoutine @ 0x14061A4C0 (PspTimerDelayWorkerRoutine.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x14061A1B0 (PspSetProcessTimerDelayForKTimers.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x14061A328 (PspSetProcessTimerDelayForWin32.c)
 */

__int64 __fastcall PspApplyTimerDelayProcess(signed __int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v3; // esi
  signed __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int8 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  signed __int64 v9; // rax
  unsigned __int64 v10; // rbx
  signed __int64 v11; // rtt
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  signed __int64 i; // rax
  signed __int64 v15; // rax
  signed __int64 v16; // rdi
  bool v17; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = a1;
  v5 = 0LL;
  --CurrentThread->SpecialApcDisable;
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 4u);
  if ( a2 )
  {
    a1 = 3518437209LL;
    v6 = 0;
    v5 = (*a2 / 0x2710u) & 0x3FFFFFFF | ((unsigned __int64)((a2[1] / 0x2710u) & 0x3FFFFFFF) << 30);
  }
  else
  {
    v6 = 1;
  }
  v7 = *(_QWORD *)(v4 + 1776);
  v8 = v7 & 0x3FFFFFFF;
  if ( v6 )
  {
    if ( (v7 & 0x3FFFFFFF) == 0 && (v7 & 0xFFFFFFFC0000000LL) == 0 )
      goto LABEL_25;
    v5 = v7 & 0xFFFFFFFFFFFFFFFLL;
  }
  else if ( v8 == (v5 & 0x3FFFFFFF) )
  {
    v8 = v5 & 0xFFFFFFFFC0000000uLL;
    a1 = v7 & 0xFFFFFFFC0000000LL;
    if ( (v7 & 0xFFFFFFFC0000000LL) == (v5 & 0xFFFFFFFFC0000000uLL) )
      goto LABEL_25;
  }
  v9 = v7 & 0x7FFFFFFFFFFFFFFFLL;
  a1 = ((unsigned __int64)v6 << 61) | 0x8000000000000000uLL;
  v8 = 0x4000000000000000LL;
  v10 = a1 | v5;
  while ( 1 )
  {
    v11 = v9;
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 1776), v10, v9);
    if ( v11 == v9 )
      break;
    if ( v9 < 0 )
    {
      if ( v6 )
      {
        v10 = v9 ^ (v9 ^ v10) & 0xF000000000000000uLL;
      }
      else if ( (v9 & 0x2000000000000000LL) == 0 )
      {
        goto LABEL_25;
      }
      v10 |= 0x4000000000000000uLL;
    }
    else
    {
      a1 = 0xBFFFFFFFFFFFFFFFuLL;
      v10 &= ~0x4000000000000000uLL;
      if ( v6 )
        v10 = v9 ^ (v9 ^ v10) & 0xF000000000000000uLL;
    }
  }
  if ( (v10 & 0x4000000000000000LL) == 0 )
  {
    PspSetProcessTimerDelayForKTimers(v4, 0x4000000000000000LL, 0xF000000000000000uLL);
    v3 = PspSetProcessTimerDelayForWin32(v4);
    v13 = v10;
    for ( i = v10; ; i = v16 )
    {
      a1 = v13 & 0x1FFFFFFFFFFFFFFFLL;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 1776), a1, i);
      v16 = v15;
      if ( v10 == v15 )
        break;
      v10 = v15;
      PspSetProcessTimerDelayForKTimers(v4, v8, v12);
      v3 = PspSetProcessTimerDelayForWin32(v4);
      v13 = v16;
    }
  }
LABEL_25:
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(a1, v8);
  return v3;
}
