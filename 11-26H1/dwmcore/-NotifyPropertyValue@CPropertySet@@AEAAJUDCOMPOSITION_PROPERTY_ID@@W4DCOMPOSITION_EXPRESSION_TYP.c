/*
 * XREFs of ?NotifyPropertyValue@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18002320C
 * Callers:
 *     ?PropertyUpdated@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IPEBX@Z @ 0x1800230E0 (-PropertyUpdated@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IPEBX@Z.c)
 *     ??$UpdateProperty@M@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x180023350 (--$UpdateProperty@M@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE.c)
 *     ?SetProperty@CPropertySet@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800234D0 (-SetProperty@CPropertySet@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@.c)
 *     ??$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180024920 (--$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITI.c)
 *     ?NotifyCurrentPropertyValuesInternal@CPropertySet@@IEAAJI@Z @ 0x1801D3C9C (-NotifyCurrentPropertyValuesInternal@CPropertySet@@IEAAJI@Z.c)
 * Callees:
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector3@@@Z @ 0x180025070 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@M@Z @ 0x18011115C (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@M@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector2@@@Z @ 0x180111700 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVe.c)
 *     ??$GetPropertyValue@UD2DQuaternion@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAPEAUD2DQuaternion@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180167AB0 (--$GetPropertyValue@UD2DQuaternion@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeA.c)
 *     ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180183FD0 (-NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2D.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector4@@@Z @ 0x180190108 (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVe.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DMatrix@@@Z @ 0x1801A41F0 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2D.c)
 */

__int64 __fastcall CPropertySet::NotifyPropertyValue(__int64 a1, unsigned int a2, int a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 Property; // rax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax

  switch ( a3 )
  {
    case 18:
      PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(a1 + 88);
      v5 = CPropertyChangeResource::NotifyScalarPropertyChanged(a1, a2);
      v6 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x231u, 0LL);
        return v6;
      }
      break;
    case 104:
      Property = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(a1 + 88);
      v9 = CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(a1, a2, Property);
      v6 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x241u, 0LL);
        return v6;
      }
      break;
    case 35:
      v16 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(a1 + 88);
      v17 = CPropertyChangeResource::NotifyVector2PropertyChanged(a1, a2, v16);
      v6 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x234u, 0LL);
        return v6;
      }
      break;
    case 52:
      v14 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(a1 + 88);
      v15 = CPropertyChangeResource::NotifyVector3PropertyChanged(a1, a2, v14);
      v6 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x237u, 0LL);
        return v6;
      }
      break;
    case 69:
      v12 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(a1 + 88);
      v13 = CPropertyChangeResource::NotifyVector4PropertyChanged(a1, a2, v12);
      v6 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x23Au, 0LL);
        return v6;
      }
      break;
    case 265:
      v10 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(a1 + 88);
      v11 = CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(a1, a2, v10);
      v6 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x244u, 0LL);
        return v6;
      }
      break;
  }
  return 0;
}
