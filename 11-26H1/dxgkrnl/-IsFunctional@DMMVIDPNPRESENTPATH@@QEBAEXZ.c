/*
 * XREFs of ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14002DB64
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140342C10 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1403EF914 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1404014A0 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x14002DE0C (-IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x14002DFB0 (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsFunctional(DMMVIDPNPRESENTPATH *this)
{
  struct DMMVIDPNTARGETMODESET *v2; // rax

  v2 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)this + 11));
  if ( *((struct DMMVIDPNTARGETMODESET **)v2 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)v2 + 48)
    || !*((_QWORD *)v2 + 18)
    || (ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v2 + 88)),
        v2 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)this + 12)),
        *((struct DMMVIDPNTARGETMODESET **)v2 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)v2 + 48))
    || !*((_QWORD *)v2 + 18) )
  {
    if ( v2 )
      ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v2 + 88));
  }
  else
  {
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v2 + 88));
    if ( DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(
           this,
           *((enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)this + 28))
      && DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(*((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)this + 29)) )
    {
      return 1;
    }
  }
  return 0;
}
