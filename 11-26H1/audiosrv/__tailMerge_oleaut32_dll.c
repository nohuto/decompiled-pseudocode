/*
 * XREFs of __tailMerge_oleaut32_dll @ 0x1800B34C1
 * Callers:
 *     __imp_load_SysFreeString @ 0x1800B3540 (__imp_load_SysFreeString.c)
 *     __imp_load_VariantTimeToSystemTime @ 0x1800B3B1A (__imp_load_VariantTimeToSystemTime.c)
 *     __imp_load_SystemTimeToVariantTime @ 0x1800B3B2C (__imp_load_SystemTimeToVariantTime.c)
 *     __imp_load_SafeArrayGetLBound @ 0x1800B3BC9 (__imp_load_SafeArrayGetLBound.c)
 *     __imp_load_SafeArrayGetUBound @ 0x1800B3BDB (__imp_load_SafeArrayGetUBound.c)
 *     __imp_load_SafeArrayDestroy @ 0x1800B3BF9 (__imp_load_SafeArrayDestroy.c)
 *     __imp_load_SafeArrayCreate @ 0x1800B3C0B (__imp_load_SafeArrayCreate.c)
 *     __imp_load_SafeArrayGetVartype @ 0x1800B3C1D (__imp_load_SafeArrayGetVartype.c)
 *     __imp_load_SafeArrayCopy @ 0x1800B3C2F (__imp_load_SafeArrayCopy.c)
 *     __imp_load_SafeArrayUnlock @ 0x1800B3C41 (__imp_load_SafeArrayUnlock.c)
 *     __imp_load_SafeArrayLock @ 0x1800B3C53 (__imp_load_SafeArrayLock.c)
 *     __imp_load_SysAllocString @ 0x1800B425A (__imp_load_SysAllocString.c)
 *     __imp_load_VarBstrCmp @ 0x1800B4356 (__imp_load_VarBstrCmp.c)
 *     __imp_load_SysAllocStringByteLen @ 0x1800B4368 (__imp_load_SysAllocStringByteLen.c)
 *     __imp_load_SysStringByteLen @ 0x1800B437A (__imp_load_SysStringByteLen.c)
 *     __imp_load_BSTR_UserSize @ 0x1800B5B3C (__imp_load_BSTR_UserSize.c)
 *     __imp_load_BSTR_UserFree @ 0x1800B5B5C (__imp_load_BSTR_UserFree.c)
 *     __imp_load_LPSAFEARRAY_UserSize @ 0x1800B5B7C (__imp_load_LPSAFEARRAY_UserSize.c)
 *     __imp_load_BSTR_UserUnmarshal64 @ 0x1800B5BAC (__imp_load_BSTR_UserUnmarshal64.c)
 *     __imp_load_LPSAFEARRAY_UserFree @ 0x1800B5BDC (__imp_load_LPSAFEARRAY_UserFree.c)
 *     __imp_load_LPSAFEARRAY_UserUnmarshal @ 0x1800B5BFC (__imp_load_LPSAFEARRAY_UserUnmarshal.c)
 *     __imp_load_LPSAFEARRAY_UserFree64 @ 0x1800B5C4C (__imp_load_LPSAFEARRAY_UserFree64.c)
 *     __imp_load_LPSAFEARRAY_UserMarshal64 @ 0x1800B5C7C (__imp_load_LPSAFEARRAY_UserMarshal64.c)
 *     __imp_load_BSTR_UserUnmarshal @ 0x1800B5CAC (__imp_load_BSTR_UserUnmarshal.c)
 *     __imp_load_BSTR_UserMarshal @ 0x1800B5CCC (__imp_load_BSTR_UserMarshal.c)
 *     __imp_load_LPSAFEARRAY_UserUnmarshal64 @ 0x1800B5CEC (__imp_load_LPSAFEARRAY_UserUnmarshal64.c)
 *     __imp_load_LPSAFEARRAY_UserMarshal @ 0x1800B5D1C (__imp_load_LPSAFEARRAY_UserMarshal.c)
 *     __imp_load_BSTR_UserFree64 @ 0x1800B5D3C (__imp_load_BSTR_UserFree64.c)
 *     __imp_load_BSTR_UserSize64 @ 0x1800B5D5C (__imp_load_BSTR_UserSize64.c)
 *     __imp_load_LPSAFEARRAY_UserSize64 @ 0x1800B5D7C (__imp_load_LPSAFEARRAY_UserSize64.c)
 *     __imp_load_BSTR_UserMarshal64 @ 0x1800B5D9C (__imp_load_BSTR_UserMarshal64.c)
 *     __imp_load_GetErrorInfo @ 0x1800B6495 (__imp_load_GetErrorInfo.c)
 *     __imp_load_SysStringLen @ 0x1800B64B3 (__imp_load_SysStringLen.c)
 *     __imp_load_SetErrorInfo @ 0x1800B64D1 (__imp_load_SetErrorInfo.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088030 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_oleaut32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_oleaut32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
