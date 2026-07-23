/*
 * XREFs of MiTradeForPageTablePage @ 0x14033D4EC
 * Callers:
 *     MiTradePageMarkedActive @ 0x140292720 (MiTradePageMarkedActive.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiReplacePageTablePage @ 0x14033E3DC (MiReplacePageTablePage.c)
 *     MiReleaseFaultState @ 0x14038FB40 (MiReleaseFaultState.c)
 *     KeSwapDirectoryTableBase @ 0x14047D69C (KeSwapDirectoryTableBase.c)
 */

__int64 __fastcall MiTradeForPageTablePage(__int64 a1)
{
  __int64 v2; // rdi
  _KPROCESS *v4; // rdx
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD v8[5]; // [rsp+20h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-28h]
  _KPROCESS *Process; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+5Ch] [rbp-14h]
  unsigned int v13; // [rsp+60h] [rbp-10h]
  int v14; // [rsp+64h] [rbp-Ch]
  unsigned __int64 KernelWaitTime; // [rsp+68h] [rbp-8h]
  int v16; // [rsp+80h] [rbp+10h] BYREF

  v14 = 0;
  v8[0] = *(_QWORD *)(a1 + 200);
  v8[1] = *(_QWORD *)(a1 + 176);
  v8[3] = *(_QWORD *)(a1 + 240);
  v8[4] = *(_QWORD *)(a1 + 248);
  v8[2] = *(_QWORD *)(a1 + 136);
  v11 = 0;
  v13 = 0;
  KernelWaitTime = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v12 = *(_DWORD *)(a1 + 8);
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 256) + 40LL) & 0xFFFFFFFFFFLL) == *(_QWORD *)(a1 + 240) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 200) + 184LL) & 0x2000000) != 0
      || _interlockedbittestandset((volatile signed __int32 *)(*(_QWORD *)(a1 + 224) + 1532LL), 1u) )
    {
      return 1LL;
    }
    v4 = Process;
    v5 = *(_DWORD *)(a1 + 16) | 0x200;
    *(_DWORD *)(a1 + 16) = v5;
    if ( v4->DirectoryTableBase >> 12 != *(_QWORD *)(a1 + 240) )
    {
      v13 = 1;
      KernelWaitTime = v4[2].KernelWaitTime;
      *(_DWORD *)(a1 + 16) = v5 | 0x2000;
    }
    LOBYTE(v4) = 17;
    MiReleaseFaultState(a1 + 32, v4, 0LL);
    KeSwapDirectoryTableBase(Process, v13, v8);
    MiLockWorkingSetExclusive(*(_QWORD *)(a1 + 200), v6, v7);
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 224) + 1532LL), 0xFFFFFFFD);
  }
  else
  {
    MiReplacePageTablePage(v8);
  }
  if ( v11 < 0 )
    return 1LL;
  _InterlockedIncrement(&dword_140EF8FF0);
  v2 = *(_QWORD *)(a1 + 256);
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v16);
    while ( *(__int64 *)(v2 + 24) < 0 );
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 256) + 32LL) = *(_DWORD *)(*(_QWORD *)(a1 + 256) + 32LL) & 0xFFF8FFFF | 0x50000;
  *(_QWORD *)(*(_QWORD *)(a1 + 256) + 24LL) = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 24LL) & 0xC000000000000000uLL | 1;
  _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 256) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
