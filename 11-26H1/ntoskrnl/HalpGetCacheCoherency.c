/*
 * XREFs of HalpGetCacheCoherency @ 0x1407838A0
 * Callers:
 *     HalGetAdapterV3 @ 0x140785E68 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140786454 (HalGetAdapterV2.c)
 * Callees:
 *     KeSystemFullyCacheCoherent @ 0x1405F3980 (KeSystemFullyCacheCoherent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IoQueryInterface @ 0x1409DC050 (IoQueryInterface.c)
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
