/*
 * XREFs of ?IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ @ 0x1402DB7D8
 * Callers:
 *     ?DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1402DAD90 (-DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1403419E8 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140342C10 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@@Z @ 0x1403B55C0 (-DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::IsHdrAllowedOnVidPnPath(DMMVIDPNTARGET **this)
{
  char v2; // di
  struct DMMVIDPNTARGETMODESET *v3; // rbx
  __int64 v4; // rax
  int v5; // eax

  v2 = 0;
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 305220) )
    return 0;
  if ( !*(_DWORD *)(*((_QWORD *)this[12] + 12) + 92LL) )
  {
    v3 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(this[11]);
    v4 = *((_QWORD *)v3 + 18);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 72);
      if ( v5 == 4 || v5 == 3 )
        goto LABEL_5;
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 821;
    }
    v2 = 1;
LABEL_5:
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v3 + 88));
    return v2;
  }
  return 1;
}
