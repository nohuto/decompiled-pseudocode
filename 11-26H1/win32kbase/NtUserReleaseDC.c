/*
 * XREFs of NtUserReleaseDC @ 0x14003BF40
 * Callers:
 *     <none>
 * Callees:
 *     ReleaseCacheDC @ 0x14003BF80 (ReleaseCacheDC.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 */

_BOOL8 __fastcall NtUserReleaseDC(__int64 a1)
{
  _BOOL8 v2; // rbx

  EnterSharedCrit(0LL);
  v2 = (unsigned int)ReleaseCacheDC(a1, 0LL) != 2;
  UserSessionSwitchLeaveCritWithNonPaged();
  return v2;
}
