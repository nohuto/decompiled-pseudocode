/*
 * XREFs of ??1AUTO_TGO@@MEAA@XZ @ 0x140112D38
 * Callers:
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x140112CF0 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     DrvChangeDisplaySettings @ 0x14013C570 (DrvChangeDisplaySettings.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1401C9A2C (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     _DrvChangeDisplaySettings_::_2_::AUTO_KM::_scalar_deleting_destructor_ @ 0x1401C9BB0 (_DrvChangeDisplaySettings_--_2_--AUTO_KM--_scalar_deleting_destructor_.c)
 *     ??_GAUTO_TGO@@MEAAPEAXI@Z @ 0x1401C9C00 (--_GAUTO_TGO@@MEAAPEAXI@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 */

void __fastcall AUTO_TGO::~AUTO_TGO(AUTO_TGO *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_QWORD *)this = &AUTO_TGO::`vftable';
  if ( !v1 )
    PopThreadGuardedObject((_QWORD *)this + 2);
}
