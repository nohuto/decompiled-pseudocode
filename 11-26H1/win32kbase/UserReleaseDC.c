/*
 * XREFs of UserReleaseDC @ 0x14003AEA0
 * Callers:
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x14003BF80 (ReleaseCacheDC.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 */

__int64 __fastcall UserReleaseDC(__int64 a1)
{
  EnterSharedCrit(0LL);
  LODWORD(a1) = ReleaseCacheDC(a1, 0LL) != 2;
  UserSessionSwitchLeaveCritWithNonPaged();
  return (unsigned int)a1;
}
