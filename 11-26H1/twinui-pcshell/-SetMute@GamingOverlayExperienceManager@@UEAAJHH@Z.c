/*
 * XREFs of ?SetMute@GamingOverlayExperienceManager@@UEAAJHH@Z @ 0x180353C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

int __fastcall GamingOverlayExperienceManager::SetMute(GamingOverlayExperienceManager *this, int a2, int a3)
{
  GamingAudio::AppList *v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (GamingAudio::AppList *)*((_QWORD *)this + 160);
  if ( v3 )
    return GamingAudio::AppList::SetMute(v3, a2, a3);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA63,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)0x80070057LL);
  return -2147024809;
}
