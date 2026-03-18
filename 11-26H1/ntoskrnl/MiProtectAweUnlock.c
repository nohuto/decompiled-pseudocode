/*
 * XREFs of MiProtectAweUnlock @ 0x140702224
 * Callers:
 *     MiProtectAweRegion @ 0x140701F34 (MiProtectAweRegion.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     MiReleaseProcessorFlushList @ 0x1403613C0 (MiReleaseProcessorFlushList.c)
 */

void __fastcall MiProtectAweUnlock(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx

  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 )
  {
    MiFlushTbList(v2);
    MiReleaseProcessorFlushList();
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 128);
  if ( v3 )
  {
    if ( *(_QWORD *)(a1 + 136) )
      *(_QWORD *)(a1 + 136) = 0LL;
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 104), v3);
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  LOBYTE(v3) = *(_BYTE *)(a1 + 112);
  MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 104), v3);
}
