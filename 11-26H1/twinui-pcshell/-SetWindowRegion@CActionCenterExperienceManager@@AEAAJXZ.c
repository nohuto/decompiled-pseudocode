/*
 * XREFs of ?SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ @ 0x1803679A4
 * Callers:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x180099D14 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x180237FD4 (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180074CE0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_fcaf91f45d912a8af4ef843f26ff2189___ @ 0x1803635EC (Windows--Internal--ComTaskPool--QueueTask__lambda_fcaf91f45d912a8af4ef843f26ff2189___.c)
 *     _lambda_fcaf91f45d912a8af4ef843f26ff2189_::_lambda_fcaf91f45d912a8af4ef843f26ff2189_ @ 0x180363980 (_lambda_fcaf91f45d912a8af4ef843f26ff2189_--_lambda_fcaf91f45d912a8af4ef843f26ff2189_.c)
 */

__int64 __fastcall CActionCenterExperienceManager::SetWindowRegion(
        CActionCenterExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int v11[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v13[24]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *((float *)this + 162) <= 0.0 || *((float *)this + 163) <= 0.0 )
    return 0LL;
  v3 = ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 19), a2);
  v4 = *((_OWORD *)this + 40);
  *(_QWORD *)v11 = v3;
  v12 = v4;
  v5 = lambda_fcaf91f45d912a8af4ef843f26ff2189_::_lambda_fcaf91f45d912a8af4ef843f26ff2189_((__int64)v13, v11, &v12);
  v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_fcaf91f45d912a8af4ef843f26ff2189___(
         v7,
         v6,
         *((_DWORD *)this + 166),
         v5);
  v9 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BB,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  return v9;
}
