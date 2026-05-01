/*
 * XREFs of ?MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180374C48
 * Callers:
 *     ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18037428C (-ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetViewPresentationMode@CToastCenterExperienceManager@@AEAAJW4PresentationMode@UI@Holographic@Internal@Windows@@@Z @ 0x180375CD0 (-SetViewPresentationMode@CToastCenterExperienceManager@@AEAAJW4PresentationMode@UI@Holographic@I.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CToastCenterExperienceManager::MoveToastCenterViewToHolographic(CToastCenterExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 94);
  if ( v2 && !*((_BYTE *)this + 760) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 48LL))(v2, *((_QWORD *)this + 16));
    if ( v3 < 0 )
    {
      v4 = 1718LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
    v3 = CToastCenterExperienceManager::SetViewPresentationMode(this, 1LL);
    if ( v3 < 0 )
    {
      v4 = 1719LL;
      goto LABEL_5;
    }
    *((_BYTE *)this + 760) = 1;
  }
  return 0LL;
}
