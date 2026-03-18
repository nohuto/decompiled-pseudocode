/*
 * XREFs of ?ReadVirtualFunctionConfigBlock@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x14021C830
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::ReadVirtualFunctionConfigBlock(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK *a2)
{
  __int64 VirtualFunctionIndex; // rax

  WdLogSingleEntry1(2LL);
  VirtualFunctionIndex = a2->VirtualFunctionIndex;
  WdLogGlobalForLineNumber = 178;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DdiWriteVirtualFunctionConfigBlock is not supported for paravirtualization: %I64n",
    VirtualFunctionIndex,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225659LL;
}
