/*
 * XREFs of ?CAppLayoutAnimationData_CreateInstance@@YAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1806A16DC
 * Callers:
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18069BA88 (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VCAppLayoutAnimationData@@AEAPEAUIApplicationView@@AEAW4APP_LAYOUT_ANIMATION_TYPE@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAppLayoutAnimationData@@@12@AEAPEAUIApplicationView@@AEAW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806A15A4 (--$Make@VCAppLayoutAnimationData@@AEAPEAUIApplicationView@@AEAW4APP_LAYOUT_ANIMATION_TYPE@@@Deta.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutAnimationData_CreateInstance(
        __int64 a1,
        int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, _QWORD *),
        _QWORD *a4)
{
  __int64 (__fastcall ***v5)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v6; // edi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+38h] [rbp+10h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a2;
  v10 = a1;
  *a4 = 0LL;
  Microsoft::WRL::Details::Make<CAppLayoutAnimationData,IApplicationView * &,enum APP_LAYOUT_ANIMATION_TYPE &>(
    &v12,
    &v10,
    &v11);
  v5 = v12;
  if ( v12 )
  {
    v7 = (**v12)(v12, &GUID_7c93abb6_c8f6_47f7_b9be_628444a831bc, a4);
    v6 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33,
        (int)"pcshell\\twinui\\applayout\\lib\\applayoutanimationdata.cpp",
        (const char *)(unsigned int)v7);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v5)[2])(v5);
  }
  else
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (int)"pcshell\\twinui\\applayout\\lib\\applayoutanimationdata.cpp",
      (const char *)0x8007000ELL);
  }
  return v6;
}
