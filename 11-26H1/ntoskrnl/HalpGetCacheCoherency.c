/*
 * XREFs of HalpGetCacheCoherency @ 0x140780DA0
 * Callers:
 *     HalGetAdapterV3 @ 0x140783334 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140783920 (HalGetAdapterV2.c)
 * Callees:
 *     KeSystemFullyCacheCoherent @ 0x1405F1010 (KeSystemFullyCacheCoherent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     IoQueryInterface @ 0x140AA8B20 (IoQueryInterface.c)
 */

char __fastcall HalpGetCacheCoherency(__int64 a1, __int64 a2, _BYTE *a3)
{
  char result; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  _OWORD v7[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v8; // [rsp+60h] [rbp-18h]

  v8 = 0LL;
  *a3 = 0;
  memset(v7, 0, sizeof(v7));
  if ( a1 )
  {
    result = *(_BYTE *)(a1 + 72);
    *a3 = result;
  }
  else if ( a2 && (int)IoQueryInterface(a2, 1LL, &GUID_DMA_CACHE_COHERENCY_INTERFACE, 40LL, 1, 0LL, v7) >= 0 )
  {
    v6 = *((_QWORD *)&v7[0] + 1);
    *a3 = v8;
    return guard_dispatch_icall_no_overrides(v6, v5);
  }
  else
  {
    *a3 = 1;
    result = KeSystemFullyCacheCoherent();
    if ( !result )
      *a3 = 0;
  }
  return result;
}
