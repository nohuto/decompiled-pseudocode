/*
 * XREFs of ?TaskbarLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18031E044
 * Callers:
 *     ?PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@W4TaskbarPinningSource@@@Z @ 0x18031AC50 (-PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskbarL.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VTaskbarLayoutParser@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTaskbarLayoutParser@@@Z @ 0x18031BCD0 (--$MakeAndInitialize@VTaskbarLayoutParser@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTaskbarLayout.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutParser_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  TaskbarLayoutParser *v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<TaskbarLayoutParser,TaskbarLayoutParser,>(&v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 280LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_6;
  }
  v3 = (**(__int64 (__fastcall ***)(TaskbarLayoutParser *, GUID *, void **))v8)(
         v8,
         &GUID_30c84a96_2f07_4ff0_9553_30ce1f23ccb3,
         a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 281LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  return v4;
}
