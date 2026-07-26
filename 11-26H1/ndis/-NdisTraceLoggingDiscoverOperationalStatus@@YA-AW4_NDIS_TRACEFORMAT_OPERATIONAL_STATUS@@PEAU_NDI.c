/*
 * XREFs of ?NdisTraceLoggingDiscoverOperationalStatus@@YA?AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400734A0
 * Callers:
 *     ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x1400067C0 (-NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisTraceLoggingDiscoverOperationalStatus(__int64 a1)
{
  int v1; // edx
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v7; // eax
  int v8; // edx
  int v9; // edx

  v1 = *(_DWORD *)(a1 + 4064);
  if ( v1 == 2 )
  {
    v8 = *(_DWORD *)(a1 + 4068);
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
        return 3LL;
      if ( v9 == 1 )
        return 4LL;
    }
    return 2LL;
  }
  else
  {
    if ( v1 == 4 )
      return 6LL;
    v2 = v1 - 1;
    if ( !v2 )
      return 1LL;
    v3 = v2 - 2;
    if ( !v3 )
      return 5LL;
    v4 = v3 - 2;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( !v5 )
        return 10LL;
      if ( v5 == 1 )
        return 11LL;
      return 6LL;
    }
    v7 = *(_DWORD *)(a1 + 4068);
    if ( v7 )
    {
      if ( v7 == 4 )
        return 8LL;
      if ( v7 == 8 )
        return 9LL;
    }
    return 7LL;
  }
}
