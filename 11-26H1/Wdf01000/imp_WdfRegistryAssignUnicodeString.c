/*
 * XREFs of imp_WdfRegistryAssignUnicodeString @ 0x14009A130
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14003D748 (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14003EF04 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

__int64 __fastcall imp_WdfRegistryAssignUnicodeString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        const _UNICODE_STRING *Value)
{
  _FX_DRIVER_GLOBALS *v7; // rbx
  __int64 result; // rax
  ULONG Tag; // ecx
  ULONG DataSize; // esi
  void *v11; // rax
  FX_POOL **v12; // rax
  FX_POOL **v13; // r15
  NTSTATUS _a2; // edi
  unsigned __int16 v15; // r9
  __m128i v16; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 retaddr; // [rsp+88h] [rbp+38h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+90h] [rbp+40h] BYREF
  FxRegKey *pKey; // [rsp+A0h] [rbp+50h] BYREF

  pFxDriverGlobals = 0LL;
  pKey = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey,
    &pFxDriverGlobals);
  if ( !ValueName )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( !Value )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v7 = pFxDriverGlobals;
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(v7, ValueName);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(v7, Value);
      if ( (int)result >= 0 )
      {
        Tag = v7->Tag;
        DataSize = Value->Length + 2;
        v11 = (void *)retaddr;
        v16.m128i_i64[0] = 0LL;
        v16.m128i_i64[1] = 256LL;
        if ( !v7->FxPoolTrackingOn )
          v11 = 0LL;
        v12 = FxPoolAllocator(v7, &v7->FxPoolFrameworks, &v16, DataSize, Tag, v11);
        v13 = v12;
        if ( v12 )
        {
          memmove(v12, Value->Buffer, Value->Length);
          *((_WORD *)v13 + ((unsigned __int64)Value->Length >> 1)) = 0;
          _a2 = ZwSetValueKey(pKey->m_Key, ValueName, 0, 1u, v13, DataSize);
          FxPoolFree(v13);
          if ( _a2 >= 0 )
          {
            FxRegKey::_VerifyStateSeparationRegistryPolicy(pKey->m_Globals, pKey->m_Key);
            return (unsigned int)_a2;
          }
          v15 = 38;
        }
        else
        {
          _a2 = -1073741670;
          v15 = 37;
        }
        WPP_IFR_SF_qd(v7, 2u, 2u, v15, WPP_FxRegistryAPI_cpp_Traceguids, Key, _a2);
        return (unsigned int)_a2;
      }
    }
  }
  return result;
}
