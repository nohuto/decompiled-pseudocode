/*
 * XREFs of imp_WdfRegistryAssignString @ 0x14003CC40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14003D748 (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14003EF04 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

NTSTATUS __fastcall imp_WdfRegistryAssignString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        WDFSTRING__ *String)
{
  NTSTATUS result; // eax
  NTSTATUS _a2; // edi
  FxString *pString; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+18h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+70h] [rbp+20h] BYREF
  FxRegKey *pKey; // [rsp+80h] [rbp+30h] BYREF

  pFxDriverGlobals = 0LL;
  pString = 0LL;
  pKey = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey,
    &pFxDriverGlobals);
  if ( !ValueName )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( !String )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( result >= 0 )
  {
    result = FxValidateUnicodeString(pFxDriverGlobals, ValueName);
    if ( result >= 0 )
    {
      FxObjectHandleGetPtr(pFxDriverGlobals, (unsigned __int64)String, 0x1007u, (void **)&pString);
      _a2 = ZwSetValueKey(
              pKey->m_Key,
              ValueName,
              0,
              1u,
              pString->m_UnicodeString.Buffer,
              (unsigned __int16)(pString->m_UnicodeString.Length + 2));
      if ( _a2 < 0 )
        WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 2u, 0x27u, WPP_FxRegistryAPI_cpp_Traceguids, Key, _a2);
      else
        FxRegKey::_VerifyStateSeparationRegistryPolicy(pKey->m_Globals, pKey->m_Key);
      return _a2;
    }
  }
  return result;
}
