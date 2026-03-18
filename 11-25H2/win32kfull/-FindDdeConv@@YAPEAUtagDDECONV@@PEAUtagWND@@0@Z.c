/*
 * XREFs of ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1401DCF78
 * Callers:
 *     ValidateDDEConvPair @ 0x1401DCF30 (ValidateDDEConvPair.c)
 *     xxxDDETrackGetMessageHook @ 0x140255BA4 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x140255D80 (xxxDDETrackPostHook.c)
 *     xxxDDETrackSendHook @ 0x140256024 (xxxDDETrackSendHook.c)
 *     _ImpersonateDdeClientWindow @ 0x1402B2A18 (_ImpersonateDdeClientWindow.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 */

struct tagDDECONV *__fastcall FindDdeConv(struct tagWND *a1, struct tagWND *a2)
{
  __int64 UserSessionState; // rax
  struct tagDDECONV *result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  for ( result = (struct tagDDECONV *)GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41336), 1u);
        result && *((struct tagWND **)result + 6) != a2;
        result = (struct tagDDECONV *)*((_QWORD *)result + 3) )
  {
    ;
  }
  return result;
}
