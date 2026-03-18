/*
 * XREFs of ??$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z @ 0x180168374
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x180167FC8 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?PropertyUpdated@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IPEBX@Z @ 0x1800230E0 (-PropertyUpdated@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@IPEBX@Z.c)
 *     ??$UpdateProperty@M@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x180023350 (--$UpdateProperty@M@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18007F840 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJPEFBUPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@I@Z @ 0x1801685AC (-AddMultipleAndSet@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUs.c)
 *     ?RemoveAt@?$DynArray@UPropertyInfo@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@$0A@@@QEAAJI@Z @ 0x180168BD8 (-RemoveAt@-$DynArray@UPropertyInfo@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAll.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<float>(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r14
  __int64 v6; // r13
  __int64 v7; // rbx
  unsigned int v8; // edi
  int v9; // esi
  int v10; // ebx
  unsigned int v11; // edi
  unsigned int v13; // eax
  unsigned int v14; // eax
  int updated; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v17; // [rsp+68h] [rbp+10h]
  int v18; // [rsp+78h] [rbp+20h] BYREF
  int v19; // [rsp+7Ch] [rbp+24h]

  v3 = a1 + 88;
  if ( *(_BYTE *)(a2 + 20) )
  {
    v6 = *(unsigned int *)(a1 + 144);
    v7 = *(unsigned int *)(a2 + 8);
    v8 = *(_DWORD *)(a1 + 112);
    v17 = *(_DWORD *)(a2 + 12);
    if ( (v6 & 0xE0000000) != 0 )
    {
      v9 = -2147483637;
    }
    else
    {
      v18 = *(_DWORD *)(a2 + 16);
      v19 = v6 & 0x1FFFFFFF;
      v9 = DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::AddMultipleAndSet(
             a1 + 88,
             &v18);
      if ( v9 >= 0 )
      {
        v9 = DynArrayImpl<0>::Grow(v3 + 32, 1u, 4, 1, 0LL);
        if ( v9 >= 0 )
        {
          *(_DWORD *)(v3 + 56) += 4;
          *(_DWORD *)(v6 + *(_QWORD *)(v3 + 32)) = *a3;
          if ( (unsigned int)v7 >= *(_DWORD *)(v3 + 24) )
            ModuleFailFastForHRESULT(-2147024809, retaddr);
          if ( v8 != (_DWORD)v7 || (*(_DWORD *)(*(_QWORD *)v3 + 8 * v7 + 4) & 0x1FFFFFFF) != v17 )
          {
            v10 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x177u, 0LL);
            v11 = -2003303421;
LABEL_24:
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x148u, 0LL);
            return v11;
          }
          v10 = CPropertySet::PropertyUpdated(a1, v7, 1);
          v9 = v10;
          if ( v10 >= 0 )
            return 0;
          v13 = 379;
LABEL_14:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v13, 0LL);
          v11 = v10;
          goto LABEL_24;
        }
        DynArray<PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::PropertyInfo,0>::RemoveAt(v3, v8);
      }
    }
    v10 = v9;
    v13 = 368;
    goto LABEL_14;
  }
  v14 = *(_DWORD *)(a2 + 8);
  if ( v14 >= *(_DWORD *)(a1 + 112) )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  if ( *(_DWORD *)(a2 + 12) == (*(_DWORD *)(*(_QWORD *)v3 + 8LL * v14 + 4) & 0x1FFFFFFF) )
  {
    updated = CPropertySet::UpdateProperty<float>(a1, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 16), a3);
    v11 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x152u, 0LL);
      return v11;
    }
    return 0;
  }
  v11 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x14Fu, 0LL);
  return v11;
}
