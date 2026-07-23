/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x140711DB4
 * Callers:
 *     MiLockVadRange @ 0x140A0666C (MiLockVadRange.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED(__int64 a1, __int64 a2)
{
  int v2; // esi
  unsigned __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 1448);
  v3 = a2 + 600;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 600), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 600));
  KeAbPostRelease(v3);
  *(_DWORD *)(a1 + 1448) = v2 & 0xFFFFFFFD;
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v6, v5);
}
