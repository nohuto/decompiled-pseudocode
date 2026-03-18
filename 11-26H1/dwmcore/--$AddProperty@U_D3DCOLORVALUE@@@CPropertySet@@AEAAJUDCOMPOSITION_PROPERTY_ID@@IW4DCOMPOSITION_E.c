/*
 * XREFs of ??$AddProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x180167D68
 * Callers:
 *     ??$AddOrUpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DQuaternion@@@Z @ 0x180167AEC (--$AddOrUpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTY.c)
 *     ??$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector4@@@Z @ 0x180167C8C (--$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 *     ??$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBU_D3DCOLORVALUE@@@Z @ 0x180168C58 (--$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERT.c)
 * Callees:
 *     ?PropertyUpdated@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IPEBX@Z @ 0x1800230E0 (-PropertyUpdated@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@UD2DQuaternion@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@PEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180167E4C (--$AddProperty@UD2DQuaternion@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAlloca.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAIUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180168AD0 (-GetLocalOffset@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAIUDCO.c)
 */

__int64 __fastcall CPropertySet::AddProperty<_D3DCOLORVALUE>(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 a5)
{
  int v8; // eax
  unsigned int v9; // edi
  int LocalOffset; // eax
  unsigned int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0;
  v8 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DQuaternion>(
         a1 + 88,
         a4,
         a5,
         &v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 368;
  }
  else
  {
    LocalOffset = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetLocalOffset(a1 + 88, a2);
    if ( v13 != a2 || LocalOffset != a3 )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x177u, 0LL);
      return v9;
    }
    v8 = CPropertySet::PropertyUpdated(a1, a2, 1);
    v9 = v8;
    if ( v8 >= 0 )
      return 0;
    v12 = 379;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v12, 0LL);
  return v9;
}
