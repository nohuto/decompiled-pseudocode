/*
 * XREFs of SynchronizeContext @ 0x140146EF0
 * Callers:
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 *     _lambda_7336048acd17859272a6f98208d72592_::_lambda_invoker_cdecl_ @ 0x140215A30 (_lambda_7336048acd17859272a6f98208d72592_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x140067640 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SynchronizeContext(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 UserSessionState; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19144) )
  {
    v4 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v3, v2) + 19144) + 8LL);
    v3 = *(_QWORD *)(W32GetUserSessionState(v4, v5) + 19144);
    if ( *(_QWORD *)(*(_QWORD *)(v3 + 8) + 176LL) )
      v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v3, v2) + 19144) + 8LL) + 176LL);
  }
  UserSessionState = W32GetUserSessionState(v3, v2);
  return InputExtensibilityCallout::CoreMsgSendMessage(*(_QWORD *)(UserSessionState + 16408), 20);
}
