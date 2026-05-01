/*
 * XREFs of ?PWSLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803F207C
 * Callers:
 *     ?Populate@PWSLayoutPolicyManager@@CAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@@Z @ 0x1803F0E88 (-Populate@PWSLayoutPolicyManager@@CAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VPWSLayoutParser@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPWSLayoutParser@@@Z @ 0x1803F18B4 (--$MakeAndInitialize@VPWSLayoutParser@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPWSLayoutParser@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PWSLayoutParser_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PWSLayoutParser *v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<PWSLayoutParser,PWSLayoutParser,>(&v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 238LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_6;
  }
  v3 = (**(__int64 (__fastcall ***)(PWSLayoutParser *, GUID *, void **))v8)(
         v8,
         &GUID_da51c3fa_dc0e_44eb_976a_3b7becd00205,
         a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 239LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  return v4;
}
