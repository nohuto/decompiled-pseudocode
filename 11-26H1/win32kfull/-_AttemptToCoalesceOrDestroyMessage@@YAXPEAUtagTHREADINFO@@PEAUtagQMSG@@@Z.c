/*
 * XREFs of ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x14025E4B0
 * Callers:
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1401E9238 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     DelQEntry @ 0x140095C20 (DelQEntry.c)
 *     IsPointerInputMessage @ 0x1400969D0 (IsPointerInputMessage.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140096A20 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x140096C84 (DelegateReleasePointerMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

void __fastcall _AttemptToCoalesceOrDestroyMessage(struct tagTHREADINFO *a1, struct tagQMSG *a2)
{
  struct tagQMSG *v4; // rdx
  char v5; // di
  __int64 v6; // rbp
  struct tagQMSG *v7; // r14
  char v8; // bl
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx

  v5 = 1;
  if ( !IsPointerInputMessage(*((_DWORD *)a2 + 6))
    || !(unsigned int)DelegateReleasePointerMessage((__int64)a1, (__int64)v4) )
  {
    CleanEventMessage(a2, v4);
    DelQEntry(*((_QWORD *)a1 + 58) + 24LL, (__int64)a2, 1);
  }
  v6 = *((_QWORD *)a1 + 58);
  v7 = *(struct tagQMSG **)(v6 + 88);
  if ( v7 == a2 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
      || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v8 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v5 = 0;
    }
    if ( v8 || v5 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
      LOBYTE(v10) = v5;
      LOBYTE(v11) = v8;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        18,
        15,
        (__int64)&WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
        v6,
        (char)v7);
    }
    *(_QWORD *)(*((_QWORD *)a1 + 58) + 88LL) = 0LL;
  }
}
