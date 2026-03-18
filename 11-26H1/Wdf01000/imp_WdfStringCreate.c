/*
 * XREFs of imp_WdfStringCreate @ 0x1400183B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x14001867C (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140018748 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14003EF04 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1400422F0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfStringCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        const _UNICODE_STRING *UnicodeString,
        _WDF_OBJECT_ATTRIBUTES *StringAttributes,
        WDFSTRING__ **String)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  void *ParentObject; // rdx
  int result; // eax
  unsigned __int64 v10; // rdx
  unsigned int v11; // r9d
  int v12; // ebx
  FxString *v13; // rax
  __int64 v14; // rax
  FxObject *v15; // rsi
  void *retaddr; // [rsp+68h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+70h] [rbp+8h] BYREF
  FxObject *pParent; // [rsp+88h] [rbp+20h] BYREF

  v5 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pFxDriverGlobals = CONTAINING_RECORD(DriverGlobals, _FX_DRIVER_GLOBALS, Public);
  if ( FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], StringAttributes, 0) >= 0 )
  {
    ParentObject = StringAttributes->ParentObject;
    pParent = 0LL;
    FxObjectHandleGetPtrAndGlobals(v5, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent, &pFxDriverGlobals);
    v5 = pFxDriverGlobals;
  }
  if ( !String )
    FxVerifierNullBugCheck(v5, retaddr);
  *String = 0LL;
  result = FxVerifierCheckIrqlLevel(v5, 0);
  if ( result >= 0 )
  {
    result = FxValidateObjectAttributes(v5, StringAttributes, 0);
    v12 = result;
    if ( result >= 0 )
    {
      if ( !UnicodeString || (result = FxValidateUnicodeString(v5, UnicodeString), v12 = result, result >= 0) )
      {
        v13 = (FxString *)FxObjectHandleAlloc2(v5, v10, 0x78uLL, v11, StringAttributes, 0, FxObjectTypeExternal);
        if ( v13 && (FxString::FxString(v13, v5), (v15 = (FxObject *)v14) != 0LL) )
        {
          if ( UnicodeString )
            v12 = FxDuplicateUnicodeString(
                    *(_FX_DRIVER_GLOBALS **)(v14 + 16),
                    UnicodeString,
                    (_UNICODE_STRING *)(v14 + 104));
          if ( v12 < 0 || (v12 = FxObject::Commit(v15, StringAttributes, (void **)String, 0LL, 1u), v12 < 0) )
            FxObject::DeleteFromFailedCreate(v15);
        }
        else
        {
          v12 = -1073741670;
          WPP_IFR_SF_D(v5, 2u, 2u, 0xAu, WPP_FxStringAPI_cpp_Traceguids, 0xC000009A);
        }
        return v12;
      }
    }
  }
  return result;
}
