/*
 * XREFs of ?GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ @ 0x1400D1338
 * Callers:
 *     ?Clear@LastWokenThread@@YAXXZ @ 0x1400CCAC0 (-Clear@LastWokenThread@@YAXXZ.c)
 *     ?OnDaemonTimer@LastWokenThread@@YAXXZ @ 0x1400D12C0 (-OnDaemonTimer@LastWokenThread@@YAXXZ.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x14010AFBC (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?GetKind@LastWokenThread@@YA?AW4LastWokenThreadKind@@XZ @ 0x140159500 (-GetKind@LastWokenThread@@YA-AW4LastWokenThreadKind@@XZ.c)
 * Callees:
 *     <none>
 */

struct _tagWIN32KUSERSESSIONSTATE *__fastcall GetCurrentProcessUserGlobals(__int64 a1)
{
  return *(struct _tagWIN32KUSERSESSIONSTATE **)(PsGetCurrentProcessWin32Process(a1) + 1208);
}
