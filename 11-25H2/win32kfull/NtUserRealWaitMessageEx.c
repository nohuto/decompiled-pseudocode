/*
 * XREFs of NtUserRealWaitMessageEx @ 0x14029BF40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     xxxSleepThread2 @ 0x14001E134 (xxxSleepThread2.c)
 *     ?IsInsideMPH@@YAHXZ @ 0x140145CE0 (-IsInsideMPH@@YAHXZ.c)
 */

__int64 __fastcall NtUserRealWaitMessageEx(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // ebx

  EnterCrit(0LL, 0LL);
  if ( (a1 & 0xFFFFA200) != 0 )
  {
    UserSetLastError(1004);
    v7 = 0;
  }
  else
  {
    IsInsideMPH(v5, v4);
    v7 = xxxSleepThread2(a1, a2, 1, 0, 0LL);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
