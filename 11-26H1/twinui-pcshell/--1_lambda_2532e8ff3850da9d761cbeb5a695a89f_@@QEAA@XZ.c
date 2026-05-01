/*
 * XREFs of ??1_lambda_2532e8ff3850da9d761cbeb5a695a89f_@@QEAA@XZ @ 0x180401A70
 * Callers:
 *     ??$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemPropertyChangedArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAUIViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostItemPropertyChangedArgs@@@Z @ 0x1803FF9F8 (--$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemProperty.c)
 *     ??1?$__func@V_lambda_2532e8ff3850da9d761cbeb5a695a89f_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEAA@XZ @ 0x180401C30 (--1-$__func@V_lambda_2532e8ff3850da9d761cbeb5a695a89f_@@$$A6AJPEAU-$ITypedEventHandler@PEAUIView.c)
 *     ?destroy@?$__func@V_lambda_2532e8ff3850da9d761cbeb5a695a89f_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEAAXXZ @ 0x180408EC0 (-destroy@-$__func@V_lambda_2532e8ff3850da9d761cbeb5a695a89f_@@$$A6AJPEAU-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x180404448 (-InternalRelease@-$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall _lambda_2532e8ff3850da9d761cbeb5a695a89f_::~_lambda_2532e8ff3850da9d761cbeb5a695a89f_(
        _lambda_2532e8ff3850da9d761cbeb5a695a89f_ *this)
{
  __int64 v2; // rcx

  Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease((char *)this + 8);
  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
