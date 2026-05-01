/*
 * XREFs of ?GammaFlash@GamingOverlayExperienceManager@@UEAAJMIIPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x1803473F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VGammaFlashAsyncOperation@@UIAsyncAction@Foundation@Windows@@AEAMAEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIAsyncAction@Foundation@Windows@@AEAMAEAI2@Z @ 0x18033C950 (--$MakeAndInitialize@VGammaFlashAsyncOperation@@UIAsyncAction@Foundation@Windows@@AEAMAEAIAEAI@D.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GammaFlash(
        GamingOverlayExperienceManager *this,
        float a2,
        unsigned int a3,
        unsigned int a4,
        struct Windows::Foundation::IAsyncAction **a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  float v9; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  v9 = a2;
  v5 = Microsoft::WRL::Details::MakeAndInitialize<GammaFlashAsyncOperation,Windows::Foundation::IAsyncAction,float &,unsigned int &,unsigned int &>(
         a5,
         &v9,
         &v10,
         &v11);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x287,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
