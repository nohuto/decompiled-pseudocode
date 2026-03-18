/*
 * XREFs of DpiSetDevicePowerTransitionState @ 0x140032BD0
 * Callers:
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1400323CC (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1400325B4 (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiRequestDevicePowerState @ 0x140032628 (DpiRequestDevicePowerState.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiSetDevicePowerTransitionState(__int64 a1, int a2)
{
  __int64 result; // rax
  bool v5; // zf

  result = WdLogSingleEntry3(9LL, a1, a2, 0LL);
  v5 = bTracingEnabled == 0;
  WdLogGlobalForLineNumber = 4488;
  *(_DWORD *)(a1 + 4288) = a2;
  if ( !v5 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    return McTemplateK0pt_EtwWriteTransfer(
             (__int64)&DxgkControlGuid_Context,
             (__int64)&Dxgk_SetDevicePowerTransitionState);
  return result;
}
