/*
 * XREFs of _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x14002D748
 * Callers:
 *     DrvFunctionalizeDisplayConfig @ 0x14002E708 (DrvFunctionalizeDisplayConfig.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1401F48D0 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--_scalar_deleting_destructor_.c)
 * Callees:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x14002D790 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14002DDE8 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

void __fastcall DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(PVOID *this)
{
  PVOID v2; // rcx

  *this = &off_14024F1F0;
  FreePathsModality(this[6]);
  v2 = this[7];
  if ( v2 )
    ObfDereferenceObject(v2);
  AUTO_TGO::~AUTO_TGO((AUTO_TGO *)this);
}
