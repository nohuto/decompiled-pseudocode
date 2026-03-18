/*
 * XREFs of ?UnReferenceOnThreadTermination@CRefUnRefPointerMsgId@@SAXPEAX@Z @ 0x140216FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004D5C0 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall CRefUnRefPointerMsgId::UnReferenceOnThreadTermination(unsigned __int64 a1, int a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(UserSessionState + 3256), a1, 8);
}
