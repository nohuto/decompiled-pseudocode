/*
 * XREFs of ?RuntimeClassInitialize@PenWorkspaceDiscoverBrokerFactory@@QEAAJXZ @ 0x1801355E4
 * Callers:
 *     ??$MakeAndInitialize@VPenWorkspaceDiscoverBrokerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180135520 (--$MakeAndInitialize@VPenWorkspaceDiscoverBrokerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VPenWorkspaceDiscoverBroker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPenWorkspaceDiscoverBroker@@@Z @ 0x180135630 (--$MakeAndInitialize@VPenWorkspaceDiscoverBroker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPenWor.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBrokerFactory::RuntimeClassInitialize(PenWorkspaceDiscoverBrokerFactory *this)
{
  char *v1; // rbx
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)this + 24;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)this + 3);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<PenWorkspaceDiscoverBroker,PenWorkspaceDiscoverBroker,>(v1);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCF,
    (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
