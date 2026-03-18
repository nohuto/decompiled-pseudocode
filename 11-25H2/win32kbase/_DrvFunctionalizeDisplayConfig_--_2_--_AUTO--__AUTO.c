/*
 * XREFs of _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x140112CF0
 * Callers:
 *     DrvFunctionalizeDisplayConfig @ 0x140157D40 (DrvFunctionalizeDisplayConfig.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1401C9C50 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--_scalar_deleting_destructor_.c)
 * Callees:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x140112D38 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140112D64 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

void __fastcall DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(PVOID *this)
{
  PVOID v2; // rcx

  *this = &off_140251AE0;
  FreePathsModality(this[6]);
  v2 = this[7];
  if ( v2 )
    ObfDereferenceObject(v2);
  AUTO_TGO::~AUTO_TGO((AUTO_TGO *)this);
}
