/*
 * XREFs of ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x140095B80
 * Callers:
 *     DestroyThreadsMessages @ 0x140093F10 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x140094860 (FreeMessageList.c)
 *     FindQMsg @ 0x1400955A0 (FindQMsg.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x140096DC8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeQEntry(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 UserSessionState; // rax

  v2 = a1;
  if ( (*(_DWORD *)(a1 + 100) & 8) != 0 && !*(_DWORD *)(a1 + 96) )
  {
    if ( (v4 = *(_DWORD *)(a1 + 24), v4 >= 0x241) && v4 <= 0x244
      || (v5 = v4 - 581, v5 <= 0x12) && (a1 = 507647LL, _bittest((const int *)&a1, v5)) )
    {
      UserSessionState = W32GetUserSessionState(a1, a2);
      CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(UserSessionState + 3256), *(_QWORD *)(v2 + 40), 2LL, v2);
    }
  }
  v3 = W32GetUserSessionState(a1, a2);
  Win32FreeToPagedLookasideList(*(_QWORD *)(v3 + 16864), v2);
}
