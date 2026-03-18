/*
 * XREFs of HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration @ 0x140026C7C
 * Callers:
 *     HUBDSM_DeletingEndpointsForOldConfiguration @ 0x1400219F0 (HUBDSM_DeletingEndpointsForOldConfiguration.c)
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForCurrentConfiguration @ 0x140026D44 (HUBUCX_DeleteEndpointsAndFreeResourcesForCurrentConfiguration.c)
 * Callees:
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForInterface @ 0x140026D70 (HUBUCX_DeleteEndpointsAndFreeResourcesForInterface.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rsi
  __int64 *v4; // rax
  __int64 *v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 **v9; // r8

  v2 = a2 + 2;
  v4 = (__int64 *)a2[2];
  v6 = v4 - 1;
  v7 = *v4 - 8;
  if ( v2 != v4 )
  {
    v8 = *v4;
    do
    {
      if ( *(__int64 **)(v8 + 8) != v4 || (v9 = (__int64 **)v6[2], *v9 != v4) )
        __fastfail(3u);
      *v9 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      if ( *(__int64 **)(a1 + 80) == v6 )
        *(_QWORD *)(a1 + 80) = 0LL;
      if ( *(__int64 **)(a1 + 72) == v6 )
        *(_QWORD *)(a1 + 72) = 0LL;
      HUBUCX_DeleteEndpointsAndFreeResourcesForInterface(a1);
      v4 = (__int64 *)(v7 + 8);
      v6 = (__int64 *)v7;
      v8 = *(_QWORD *)(v7 + 8);
      v7 = v8 - 8;
    }
    while ( v2 != v4 );
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *a2);
}
