/*
 * XREFs of ?RuntimeClassInitialize@GammaFlashAsyncOperation@@QEAAJMII@Z @ 0x1803530A4
 * Callers:
 *     ??$MakeAndInitialize@VGammaFlashAsyncOperation@@UIAsyncAction@Foundation@Windows@@AEAMAEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIAsyncAction@Foundation@Windows@@AEAMAEAI2@Z @ 0x18033C950 (--$MakeAndInitialize@VGammaFlashAsyncOperation@@UIAsyncAction@Foundation@Windows@@AEAMAEAIAEAI@D.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GammaFlashAsyncOperation::RuntimeClassInitialize(
        GammaFlashAsyncOperation *this,
        float a2,
        int a3,
        int a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((float *)this + 60) = a2;
  *((float *)this + 61) = a2;
  *((float *)this + 62) = a2;
  *((_DWORD *)this + 63) = a3;
  *((_DWORD *)this + 64) = a4;
  *((_BYTE *)this + 260) = 0;
  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 104LL))((char *)this + 16);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10B3,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
