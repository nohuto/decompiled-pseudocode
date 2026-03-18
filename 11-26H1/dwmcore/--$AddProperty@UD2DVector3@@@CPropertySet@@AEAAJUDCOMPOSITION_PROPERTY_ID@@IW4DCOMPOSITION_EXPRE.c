/*
 * XREFs of ??$AddProperty@UD2DVector3@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x180168E0C
 * Callers:
 *     ??$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector3@@@Z @ 0x180168D38 (--$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 * Callees:
 *     ?PropertyUpdated@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IPEBX@Z @ 0x1800230E0 (-PropertyUpdated@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@UD2DVector3@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@PEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180167BC0 (--$AddProperty@UD2DVector3@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAIUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180168AD0 (-GetLocalOffset@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAIUDCO.c)
 */

__int64 __fastcall CPropertySet::AddProperty<D2DVector3>(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  int v8; // eax
  unsigned int v9; // edi
  int LocalOffset; // eax
  unsigned int v12; // [rsp+20h] [rbp-28h]
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0;
  v8 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DVector3>(a1 + 88, a4, a5, &v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 368;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v12, 0LL);
    return v9;
  }
  LocalOffset = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetLocalOffset(a1 + 88, a2);
  if ( v13 != a2 || LocalOffset != a3 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x177u, 0LL);
    return v9;
  }
  v8 = CPropertySet::PropertyUpdated(a1, a2, 1);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 379;
    goto LABEL_8;
  }
  return 0;
}
