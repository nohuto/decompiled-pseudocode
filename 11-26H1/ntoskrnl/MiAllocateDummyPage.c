/*
 * XREFs of MiAllocateDummyPage @ 0x140CF89FC
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 *     MiInitializeDummyPages @ 0x140CF9670 (MiInitializeDummyPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiSetPfnTbFlushStamp @ 0x14036D880 (MiSetPfnTbFlushStamp.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MxInstallMoreMemory @ 0x1406EC098 (MxInstallMoreMemory.c)
 */

__int64 MiAllocateDummyPage()
{
  int v0; // edx
  __int64 Page; // rax
  __int64 v2; // r14
  __int64 v3; // rbx
  int v4; // edx
  unsigned __int8 CurrentIrql; // si
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  MiAcquireNonPagedResources(&MiSystemPartition, 1uLL, 0LL, 1LL);
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v7);
  v0 = (unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)v7, 1u);
  Page = MiGetPage((__int64)&MiSystemPartition, DWORD2(v7) & 0xFFFFFF00 | v0, 0x80u);
  v2 = Page;
  if ( Page == -1 )
    MxInstallMoreMemory(2);
  v3 = 48 * Page - 0x220000000000LL;
  MiSetPfnTbFlushStamp(v3, 0LL, 0);
  *(_QWORD *)(v3 + 8) = 0xFFFFF68000000000uLL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v4);
  }
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v8);
    while ( *(__int64 *)(v3 + 24) < 0 );
  }
  *(_QWORD *)(v3 + 16) = MiMakeDemandZeroPte(4);
  *(_DWORD *)(v3 + 32) = *(_DWORD *)(v3 + 32) & 0xFFFF0000 | 2;
  *(_DWORD *)(v3 + 32) |= 0x70000u;
  *(_DWORD *)(v3 + 32) |= 0x200000u;
  *(_DWORD *)(v3 + 32) |= 0x80000u;
  *(_QWORD *)(v3 + 40) &= ~0x8000000000000000uLL;
  MiSetPfnContainingFrame(v3, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v2;
}
