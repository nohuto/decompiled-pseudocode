/*
 * XREFs of ?SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z @ 0x1400B9E3C
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x140036A78 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x1400B9350 (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x140067640 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

void __fastcall CMouseProcessor::SendInputStreamEndedMessage(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(*(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL), a2);
  InputExtensibilityCallout::CoreMsgSendMessage(*(_QWORD *)(UserSessionState + 16408), 19);
}
