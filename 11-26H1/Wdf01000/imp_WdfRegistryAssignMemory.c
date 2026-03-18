/*
 * XREFs of imp_WdfRegistryAssignMemory @ 0x140099CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateMemoryOffsets@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@@Z @ 0x140002234 (-ValidateMemoryOffsets@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14003D748 (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14003EF04 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfRegistryAssignMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        ULONG ValueType,
        WDFMEMORY__ *Memory,
        _WDFMEMORY_OFFSET *MemoryOffsets)
{
  WDFMEMORY__ *_a2; // rdi
  __int64 result; // rax
  char *v10; // r12
  unsigned __int64 BufferLength; // rax
  _WDFMEMORY_OFFSET *v12; // r15
  signed int _a3; // r14d
  unsigned __int16 v14; // r9
  NTSTATUS v15; // eax
  unsigned int v16; // edi
  FxRegKey *pKey; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-8h]
  unsigned __int64 retaddr; // [rsp+88h] [rbp+38h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+90h] [rbp+40h] BYREF
  IFxMemory *pMemory; // [rsp+A0h] [rbp+50h] BYREF
  ULONG Type; // [rsp+A8h] [rbp+58h]

  Type = ValueType;
  pFxDriverGlobals = 0LL;
  pMemory = 0LL;
  pKey = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey,
    &pFxDriverGlobals);
  if ( !ValueName )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  _a2 = Memory;
  if ( !Memory )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(pFxDriverGlobals, ValueName);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(pFxDriverGlobals, (unsigned __int64)_a2, 0x100Au, (void **)&pMemory);
      v10 = (char *)pMemory->GetBuffer(pMemory);
      BufferLength = pMemory->GetBufferSize(pMemory);
      v12 = MemoryOffsets;
      v18 = BufferLength;
      if ( MemoryOffsets )
      {
        _a3 = IFxMemory::ValidateMemoryOffsets(pMemory, MemoryOffsets);
        if ( _a3 < 0 )
        {
          v14 = 33;
LABEL_10:
          WPP_IFR_SF_qqd(pFxDriverGlobals, 2u, 2u, v14, WPP_FxRegistryAPI_cpp_Traceguids, Key, _a2, _a3);
          return (unsigned int)_a3;
        }
        BufferLength = v12->BufferLength;
        if ( BufferLength )
        {
          if ( BufferLength > 0xFFFFFFFF )
          {
            v14 = 34;
            _a3 = -1073741675;
            goto LABEL_10;
          }
        }
        else
        {
          LODWORD(BufferLength) = v18;
        }
        v10 += v12->BufferOffset;
      }
      v15 = ZwSetValueKey(pKey->m_Key, ValueName, 0, Type, v10, BufferLength);
      v16 = v15;
      if ( v15 < 0 )
        WPP_IFR_SF_qd(pFxDriverGlobals, 2u, 2u, 0x23u, WPP_FxRegistryAPI_cpp_Traceguids, Key, v15);
      else
        FxRegKey::_VerifyStateSeparationRegistryPolicy(pKey->m_Globals, pKey->m_Key);
      return v16;
    }
  }
  return result;
}
