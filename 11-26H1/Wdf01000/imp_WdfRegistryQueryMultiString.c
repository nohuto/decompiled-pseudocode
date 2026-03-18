/*
 * XREFs of imp_WdfRegistryQueryMultiString @ 0x14003C530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140015458 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140018748 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x14003B3A0 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     ?Add@FxCollection@@QEAAEPEAVFxObject@@@Z @ 0x14003C92C (-Add@FxCollection@@QEAAEPEAVFxObject@@@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14003EF04 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x14003F1C0 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x140083830 (-_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z.c)
 *     ?Assign@FxString@@QEAAJPEBG@Z @ 0x140083D00 (-Assign@FxString@@QEAAJPEBG@Z.c)
 *     WPP_IFR_SF_qZd @ 0x140099AE8 (WPP_IFR_SF_qZd.c)
 */

int __fastcall imp_WdfRegistryQueryMultiString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        _WDF_OBJECT_ATTRIBUTES *StringsAttributes,
        WDFCOLLECTION__ *Collection)
{
  WDFCOLLECTION__ *v8; // r14
  _FX_DRIVER_GLOBALS *v9; // rdi
  int result; // eax
  unsigned __int8 v11; // dl
  int v12; // ebx
  unsigned int v13; // r8d
  unsigned int v14; // ebx
  ULONG Tag; // ecx
  void *v16; // rax
  FX_POOL **v17; // rax
  unsigned __int64 v18; // rdx
  unsigned int v19; // r9d
  const wchar_t *v20; // r13
  FX_POOL **v21; // rax
  FxString *v22; // rax
  FxObject *v23; // rsi
  FxObject *v24; // rcx
  __int64 v25; // rax
  unsigned int i; // esi
  _FX_DRIVER_GLOBALS **ObjectGlobals; // [rsp+20h] [rbp-50h]
  unsigned int _a3; // [rsp+38h] [rbp-38h]
  FxCollection *pCollection; // [rsp+40h] [rbp-30h] BYREF
  __m128i pFxDriverGlobals; // [rsp+50h] [rbp-20h] BYREF
  FxRegKey *pKey; // [rsp+60h] [rbp-10h] BYREF
  FxDeviceBase *v32; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+38h]
  void *dummy; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int type; // [rsp+C0h] [rbp+50h] BYREF
  _WDF_OBJECT_ATTRIBUTES *ObjectType; // [rsp+C8h] [rbp+58h]

  ObjectType = StringsAttributes;
  pFxDriverGlobals.m128i_i64[0] = 0LL;
  pCollection = 0LL;
  pKey = 0LL;
  LODWORD(dummy) = 0;
  type = 0;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey,
    (_FX_DRIVER_GLOBALS **)&pFxDriverGlobals);
  if ( !ValueName )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)pFxDriverGlobals.m128i_i64[0], retaddr);
  v8 = Collection;
  if ( !Collection )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)pFxDriverGlobals.m128i_i64[0], retaddr);
  v9 = (_FX_DRIVER_GLOBALS *)pFxDriverGlobals.m128i_i64[0];
  result = FxValidateObjectAttributes((_FX_DRIVER_GLOBALS *)pFxDriverGlobals.m128i_i64[0], StringsAttributes, 0);
  if ( result >= 0 )
  {
    result = FxVerifierCheckIrqlLevel(v9, 0);
    if ( result >= 0 )
    {
      result = FxValidateUnicodeString(v9, ValueName);
      if ( result >= 0 )
      {
        FxObjectHandleGetPtr(v9, (unsigned __int64)v8, 0x100Eu, (void **)&pCollection);
        v32 = FxDeviceBase::_SearchForDevice(v9, StringsAttributes);
        v12 = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, 0, 0LL, (unsigned int *)&dummy, &type);
        if ( (int)(v12 + 0x80000000) < 0 || v12 == -2147483643 )
        {
          if ( type != 7 )
            return -1073741788;
          v14 = (unsigned int)dummy;
          if ( !(_DWORD)dummy )
          {
            WPP_IFR_SF_qZd(v9, v11, v13, 0x14u, (const _GUID *)ObjectGlobals, Key, ValueName, _a3);
            return -1073741687;
          }
          Tag = v9->Tag;
          v16 = retaddr;
          pFxDriverGlobals.m128i_i64[0] = 0LL;
          pFxDriverGlobals.m128i_i64[1] = 256LL;
          if ( !v9->FxPoolTrackingOn )
            v16 = 0LL;
          v17 = FxPoolAllocator(v9, &v9->FxPoolFrameworks, &pFxDriverGlobals, (unsigned int)dummy, Tag, v16);
          pFxDriverGlobals.m128i_i64[0] = (__int64)v17;
          if ( !v17 )
          {
            WPP_IFR_SF_qd(v9, 2u, 2u, 0x15u, WPP_FxRegistryAPI_cpp_Traceguids, Key, -1073741670);
            return -1073741670;
          }
          v12 = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, v14, v17, (unsigned int *)&dummy, &type);
          if ( v12 >= 0 )
          {
            v12 = FxRegKey::_VerifyMultiSzString(
                    v9,
                    ValueName,
                    (wchar_t *)pFxDriverGlobals.m128i_i64[0],
                    (unsigned int)dummy);
            if ( v12 >= 0 )
            {
              v20 = (const wchar_t *)pFxDriverGlobals.m128i_i64[0];
              type = pCollection->m_Count;
              while ( 1 )
              {
                if ( !*v20 )
                  goto LABEL_41;
                v21 = FxObjectHandleAlloc2(v9, v18, 0x78uLL, v19, ObjectType, 0, FxObjectTypeExternal);
                if ( !v21 )
                  break;
                FxString::FxString((FxString *)v21, v9);
                v23 = v22;
                if ( !v22 )
                  break;
                if ( v32 )
                  v22->m_DeviceBase = v32;
                v12 = FxString::Assign(v22, v20);
                v24 = v23;
                if ( v12 < 0 )
                  goto LABEL_31;
                v12 = FxObject::Commit(v23, ObjectType, &dummy, 0LL, 1u);
                v24 = v23;
                if ( v12 < 0 )
                  goto LABEL_31;
                if ( !FxCollection::Add(pCollection, v23) )
                {
                  v12 = -1073741670;
                  WPP_IFR_SF_qqd(v9, 2u, 2u, 0x16u, WPP_FxRegistryAPI_cpp_Traceguids, Key, Collection, 0xC000009A);
                  v24 = v23;
LABEL_31:
                  FxObject::DeleteFromFailedCreate(v24);
LABEL_36:
                  WPP_IFR_SF_qd(v9, 2u, 2u, 0x17u, WPP_FxRegistryAPI_cpp_Traceguids, Key, v12);
                  for ( i = type;
                        pCollection->m_Count > i;
                        FxCollectionInternal::Remove(&pCollection->FxCollectionInternal, i) )
                  {
                    ;
                  }
                  goto LABEL_41;
                }
                v25 = -1LL;
                do
                  ++v25;
                while ( v20[v25] );
                v20 += v25 + 1;
              }
              v12 = -1073741670;
              goto LABEL_36;
            }
          }
LABEL_41:
          FxPoolFree(pFxDriverGlobals.m128i_i64[0]);
        }
        else
        {
          WPP_IFR_SF_qd(v9, 2u, 2u, 0x13u, WPP_FxRegistryAPI_cpp_Traceguids, Key, v12);
        }
        return v12;
      }
    }
  }
  return result;
}
