/*
 * XREFs of ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x140211B4C
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ValidateDDEConvPair @ 0x140211B04 (ValidateDDEConvPair.c)
 *     xxxDDETrackPostHook @ 0x14026E294 (xxxDDETrackPostHook.c)
 *     xxxDDETrackGetMessageHook @ 0x140290AA0 (xxxDDETrackGetMessageHook.c)
 *     NtUserImpersonateDdeClientWindow @ 0x1402B64A0 (NtUserImpersonateDdeClientWindow.c)
 * Callees:
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 */

struct tagDDECONV *__fastcall FindDdeConv(struct tagWND *a1, struct tagWND *a2)
{
  __int64 UserSessionState; // rax
  struct tagDDECONV *result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  for ( result = (struct tagDDECONV *)GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41376), 1u);
        result && *((struct tagWND **)result + 6) != a2;
        result = (struct tagDDECONV *)*((_QWORD *)result + 3) )
  {
    ;
  }
  return result;
}
