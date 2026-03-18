/*
 * XREFs of SendAppClipChanged @ 0x140066730
 * Callers:
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x14006665C (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x140067640 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SendAppClipChanged(_OWORD *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  _DWORD v4[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v4, 0, 32);
  v4[0] = 2;
  *(_OWORD *)&v4[2] = *a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _DWORD *, __int64))InputExtensibilityCallout::CoreMsgSendMessage)(
           *(_QWORD *)(UserSessionState + 16408),
           0LL,
           v4,
           32LL);
}
