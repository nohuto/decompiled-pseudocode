/*
 * XREFs of ?OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801EC0E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewUncloaking(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v2; // rax
  _WORD v4[2]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+34h] [rbp-34h]
  __int64 v6; // [rsp+38h] [rbp-30h]
  __int64 v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-20h]

  v4[1] = *((_WORD *)this + 296);
  v2 = *((_QWORD *)this + 75);
  v4[0] = 0;
  v5 = 3;
  v6 = v2;
  v7 = *((_QWORD *)this + 76);
  v8 = *((_QWORD *)this + 77);
  RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, v4, 32LL);
  return 0LL;
}
