/*
 * XREFs of imp_WdfRegistryQueryUnicodeString @ 0x14003EAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14003EF04 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x14003F1C0 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

int __fastcall imp_WdfRegistryQueryUnicodeString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        unsigned __int16 *ValueByteLength,
        _UNICODE_STRING *Value)
{
  FX_POOL **v5; // r14
  _FX_DRIVER_GLOBALS *v9; // rdi
  int result; // eax
  _UNICODE_STRING *v11; // rbx
  unsigned int MaximumLength; // esi
  ULONG Tag; // ecx
  void *v14; // rax
  int v15; // eax
  int v16; // esi
  size_t v17; // rdi
  wchar_t *Buffer; // rax
  int v19; // ebx
  unsigned __int16 v20; // r9
  FxRegKey *pKey; // [rsp+40h] [rbp-20h] BYREF
  __m128i v22; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int type; // [rsp+B0h] [rbp+50h] BYREF

  v5 = 0LL;
  pFxDriverGlobals = 0LL;
  pKey = 0LL;
  type = 0;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey,
    &pFxDriverGlobals);
  if ( !ValueName )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v9 = pFxDriverGlobals;
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( result >= 0 )
  {
    result = FxValidateUnicodeString(v9, ValueName);
    if ( result >= 0 )
    {
      v11 = Value;
      if ( Value )
      {
        result = FxValidateUnicodeString(v9, Value);
        if ( result < 0 )
          return result;
        MaximumLength = v11->MaximumLength;
        LODWORD(pFxDriverGlobals) = MaximumLength;
        if ( MaximumLength )
        {
          Tag = v9->Tag;
          v14 = retaddr;
          v22.m128i_i64[0] = 0LL;
          v22.m128i_i64[1] = 256LL;
          if ( !v9->FxPoolTrackingOn )
            v14 = 0LL;
          v5 = FxPoolAllocator(v9, &v9->FxPoolFrameworks, &v22, MaximumLength, Tag, v14);
          if ( v5 )
          {
LABEL_10:
            v15 = FxRegKey::_QueryValue(
                    pKey->m_Globals,
                    pKey->m_Key,
                    ValueName,
                    MaximumLength,
                    v5,
                    (unsigned int *)&pFxDriverGlobals,
                    &type);
            v16 = v15;
            if ( v15 < 0 )
            {
              if ( v15 == -2147483643 )
                goto LABEL_12;
            }
            else
            {
              if ( type - 1 <= 1 )
              {
LABEL_12:
                v17 = (unsigned int)pFxDriverGlobals;
                if ( ValueByteLength )
                  *ValueByteLength = (unsigned __int16)pFxDriverGlobals;
                if ( v15 >= 0 )
                {
                  if ( v11 )
                  {
                    memmove(v11->Buffer, v5, v17);
                    Buffer = v11->Buffer;
                    v11->Length = v17;
                    if ( !Buffer[((unsigned __int64)(unsigned __int16)v17 >> 1) - 1] )
                      v11->Length = v17 - 2;
                  }
                }
                goto LABEL_19;
              }
              v16 = -1073741788;
            }
LABEL_19:
            if ( v5 )
              FxPoolFree(v5);
            return v16;
          }
          v19 = -1073741670;
          v20 = 25;
        }
        else
        {
          v19 = -1073741811;
          v20 = 24;
        }
        WPP_IFR_SF_qd(v9, 2u, 2u, v20, WPP_FxRegistryAPI_cpp_Traceguids, Key, v19);
        return v19;
      }
      MaximumLength = 0;
      LODWORD(pFxDriverGlobals) = 0;
      goto LABEL_10;
    }
  }
  return result;
}
