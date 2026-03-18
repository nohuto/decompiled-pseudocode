/*
 * XREFs of ?numRect@RGNCOREOBJ@@QEBAKXZ @ 0x1400A81D0
 * Callers:
 *     EtwTraceLifetimeAccum @ 0x1400A7AA0 (EtwTraceLifetimeAccum.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1400A7F4C (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     ?sizeSave@RGNCOREOBJ@@QEBAKXZ @ 0x1400A8198 (-sizeSave@RGNCOREOBJ@@QEBAKXZ.c)
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNCOREOBJ::numRect(REGION_CORE **this)
{
  REGION_CORE *v1; // rcx
  __int64 result; // rax
  int v3; // ebx
  struct SCAN *pScan; // r8

  v1 = *this;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    return (*(__int64 (__fastcall **)(REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 240LL))(v1);
  v3 = *((_DWORD *)v1 + 6);
  pScan = REGION_CORE::get_pScan(v1);
  for ( result = 0LL; v3; --v3 )
  {
    result = (unsigned int)((*(_DWORD *)pScan >> 1) + result);
    pScan = (struct SCAN *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
  }
  return result;
}
