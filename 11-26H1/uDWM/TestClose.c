/*
 * XREFs of TestClose @ 0x1800D5D98
 * Callers:
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x1800797B4 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1?TestClose@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800D29CC (--1-$unique_storage@U-$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1-TestClose@@YAX0@ZU-$integr.c)
 * Callees:
 *     tip_details_GetKernelBaseModuleHandle @ 0x18008D110 (tip_details_GetKernelBaseModuleHandle.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

FARPROC __fastcall TestClose(__int64 a1)
{
  FARPROC result; // rax
  HMODULE KernelBaseModuleHandle; // rax

  result = (FARPROC)`TestClose'::`2'::s_pfnTestClose;
  if ( `TestClose'::`2'::s_pfnTestClose )
    return (FARPROC)((__int64 (__fastcall *)(__int64))result)(a1);
  KernelBaseModuleHandle = tip_details_GetKernelBaseModuleHandle();
  result = GetProcAddress(KernelBaseModuleHandle, "TestClose");
  `TestClose'::`2'::s_pfnTestClose = (__int64)result;
  if ( result )
    return (FARPROC)((__int64 (__fastcall *)(__int64))result)(a1);
  return result;
}
