/*
 * XREFs of ?NotifyCurrentPropertyValuesInternal@CPropertySet@@IEAAJI@Z @ 0x1801D3C9C
 * Callers:
 *     ?NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z @ 0x1801D3C90 (-NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z.c)
 * Callees:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18002320C (-NotifyPropertyValue@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYP.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDataType@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180167820 (-GetDataType@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA-AW4DCOM.c)
 */

__int64 __fastcall CPropertySet::NotifyCurrentPropertyValuesInternal(CPropertySet *this, unsigned int a2)
{
  unsigned int v4; // ebx
  int DataType; // eax
  int v7; // eax

  v4 = 0;
  while ( a2 )
  {
    if ( (a2 & 1) != 0 && v4 < *((_DWORD *)this + 28) )
    {
      DataType = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetDataType((__int64)this + 88, v4);
      v7 = CPropertySet::NotifyPropertyValue((__int64)this, v4, DataType);
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x20Fu, 0LL);
        return 0LL;
      }
    }
    a2 >>= 1;
    ++v4;
  }
  return 0LL;
}
