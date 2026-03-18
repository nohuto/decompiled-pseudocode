/*
 * XREFs of AlpcpEndInitialization @ 0x140A90CE8
 * Callers:
 *     AlpcpCreateSection @ 0x1409BB8D8 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1409BC024 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x1409BC550 (AlpcpCreateSecurityContext.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpEndInitialization(__int64 a1)
{
  unsigned __int64 v1; // rbx
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v2, 0);
  *(_BYTE *)(a1 - 32) &= ~4u;
  v1 = a1 - 16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 - 16));
  KeAbPostRelease(v1);
}
