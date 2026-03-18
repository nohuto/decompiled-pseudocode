/*
 * XREFs of FreePointerMessageParams @ 0x140069664
 * Callers:
 *     DelQEntry @ 0x140066E80 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140067260 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x140068030 (-FreeQEntry@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreePointerMessageParams(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // r8

  if ( *(_DWORD *)(a1 + 24) != 595 )
  {
    if ( *(_DWORD *)(a1 + 96) )
    {
      UserSessionState = W32GetUserSessionState(a1, a2);
      v4 = 3LL;
    }
    else
    {
      UserSessionState = W32GetUserSessionState(a1, a2);
      v4 = 2LL;
    }
    CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(UserSessionState + 3256), *(_QWORD *)(a1 + 40), v4, a1);
  }
}
