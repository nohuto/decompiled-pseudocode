/*
 * XREFs of ?bEqual@RGNCOREOBJ@@QEBA_NAEBV1@@Z @ 0x14013CAF0
 * Callers:
 *     CddEngEqualRgn @ 0x1401FB9B0 (CddEngEqualRgn.c)
 * Callees:
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x14000EE30 (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memcmp @ 0x14024C590 (memcmp.c)
 */

char __fastcall RGNCOREOBJ::bEqual(REGION_CORE **this, REGION_CORE **a2)
{
  char v2; // bp
  REGION_CORE *v4; // rcx
  unsigned int pScan; // esi
  struct SCAN *v8; // rdi
  struct SCAN *v9; // rbx
  unsigned int pscnTail; // eax

  v2 = 0;
  v4 = *this;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
    return (*(unsigned int (__fastcall **)(REGION_CORE *, REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                        + 88LL))(
             v4,
             *a2) != 0;
  if ( *((_DWORD *)v4 + 6) == *((_DWORD *)*a2 + 6) )
  {
    pScan = (unsigned int)REGION_CORE::get_pScan(v4);
    v8 = REGION_CORE::get_pScan(*a2);
    v9 = REGION_CORE::get_pScan(*this);
    pscnTail = (unsigned int)REGION_CORE::get_pscnTail(*this);
    return memcmp(v9, v8, pscnTail - pScan) == 0;
  }
  return v2;
}
