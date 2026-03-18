/*
 * XREFs of ??$UpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector4@@@Z @ 0x180168EEC
 * Callers:
 *     ?SetProperty@CPropertySet@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800234D0 (-SetProperty@CPropertySet@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@.c)
 *     ??$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector4@@@Z @ 0x180167C8C (--$AddOrUpdateProperty@UD2DVector4@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 * Callees:
 *     ?PropertyUpdated@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IPEBX@Z @ 0x1800230E0 (-PropertyUpdated@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$GetPropertyValue@UD2DQuaternion@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAPEAUD2DQuaternion@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180167AB0 (--$GetPropertyValue@UD2DQuaternion@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeA.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<D2DVector4>(__int64 a1, unsigned int a2, int a3, _QWORD *a4)
{
  _QWORD *v7; // rcx
  _QWORD *Property; // rax
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx

  if ( a2 < *(_DWORD *)(a1 + 112) && (v7 = (_QWORD *)(a1 + 88), *(_DWORD *)(*v7 + 8LL * a2) == a3) )
  {
    Property = (_QWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(
                           (__int64)v7,
                           a2);
    v9 = *a4 - *Property;
    if ( *a4 == *Property )
      v9 = a4[1] - Property[1];
    if ( v9 && (*(_OWORD *)Property = *(_OWORD *)a4, v10 = CPropertySet::PropertyUpdated(a1, a2, 2), v11 = v10, v10 < 0) )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1A2u, 0LL);
    else
      return 0;
  }
  else
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x199u, 0LL);
  }
  return v11;
}
