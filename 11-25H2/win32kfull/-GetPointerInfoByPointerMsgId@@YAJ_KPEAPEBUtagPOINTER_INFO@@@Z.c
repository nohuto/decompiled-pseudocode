/*
 * XREFs of ?GetPointerInfoByPointerMsgId@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z @ 0x1401A2850
 * Callers:
 *     ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1401A2734 (-OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z.c)
 *     ?GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x140266CA0 (-GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPointerInfoByPointerMsgId(unsigned __int64 a1, const struct tagPOINTER_INFO **a2)
{
  __int64 UserSessionState; // rax
  const struct tagPOINTER_INFO *PointerInfo; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  PointerInfo = CTouchProcessor::GetPointerInfo(*(CTouchProcessor **)(UserSessionState + 3256), a1);
  *a2 = PointerInfo;
  return PointerInfo == 0LL ? 0xC000000D : 0;
}
