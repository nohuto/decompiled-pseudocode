/*
 * XREFs of ?PlayTransitionToFindInStart@CStartExperienceManager@@UEAAJXZ @ 0x180382FE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall CStartExperienceManager::PlayTransitionToFindInStart(CStartExperienceManager *this)
{
  _QWORD v2[4]; // [rsp+30h] [rbp-38h] BYREF

  v2[0] = 6LL;
  memset(&v2[1], 0, 24);
  RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, v2, 32LL, 0LL);
  return 0LL;
}
