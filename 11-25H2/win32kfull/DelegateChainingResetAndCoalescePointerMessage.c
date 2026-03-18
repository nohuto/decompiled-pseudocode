/*
 * XREFs of DelegateChainingResetAndCoalescePointerMessage @ 0x1401FCD4C
 * Callers:
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140063928 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall DelegateChainingResetAndCoalescePointerMessage(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  int v5; // ebx
  __int64 UserSessionState; // rax

  v4 = -__CFSHR__(*(_DWORD *)(a3 + 100), 6);
  v5 = -__CFSHR__(*(_DWORD *)(a3 + 100), 7);
  if ( *(_DWORD *)(a3 + 24) == 595 )
    return 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return CTouchProcessor::DelegateChainingResetAndCoalescePointerMessage(
           *(CTouchProcessor **)(UserSessionState + 3256),
           *(_QWORD *)(a3 + 40),
           0,
           v4,
           v5,
           *(_DWORD *)(a3 + 24));
}
