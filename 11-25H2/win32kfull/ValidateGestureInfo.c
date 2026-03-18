/*
 * XREFs of ValidateGestureInfo @ 0x14026EF64
 * Callers:
 *     SendGestureMessage @ 0x14021FF48 (SendGestureMessage.c)
 *     NtUserInjectGesture @ 0x14029A330 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureInfo(_DWORD *a1)
{
  if ( *a1 == 56 && a1[7] && a1[12] <= 0x400u )
    return 1LL;
  UserSetLastError(87);
  return 0LL;
}
