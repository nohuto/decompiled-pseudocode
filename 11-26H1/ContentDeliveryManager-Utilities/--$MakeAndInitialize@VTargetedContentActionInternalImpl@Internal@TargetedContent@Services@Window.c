/*
 * XREFs of ??$MakeAndInitialize@VTargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UITargetedContentActionInternal@2345@W4ActionServices@Actions@CreativeFramework@@AEAUActionContext@89@AEAPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Details@WRL@Microsoft@@YAJPEAPEAUITargetedContentActionInternal@Internal@TargetedContent@Services@Windows@@$$QEAW4ActionServices@Actions@CreativeFramework@@AEAUActionContext@9CreativeFramework@@AEAPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@7@@Z @ 0x18006C144
 * Callers:
 *     ?CreateAction@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@PEAPEAUITargetedContentActionInternal@2345@@Z @ 0x18006F2E0 (-CreateAction@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUH.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800219B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180029964 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180039560 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICont.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UITargetedContentActionInternal@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UITargetedContentActionInternal@Internal@TargetedContent@Services@Windows@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18006BD10 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UITar.c)
 *     ??0TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x18006D9B8 (--0TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4ActionServices@Actions@CreativeFramework@@AEBUActionContext@78@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x180070104 (-RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Wind.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal,enum CreativeFramework::Actions::ActionServices,CreativeFramework::Actions::ActionContext &,Windows::Foundation::Collections::IMapView<HSTRING__ *,HSTRING__ *> * &>(
        _QWORD *a1,
        unsigned int *a2,
        __int64 a3,
        _QWORD *a4)
{
  void *v8; // rax
  int v9; // edi
  __int64 v10; // rbx
  volatile int *v11; // rdx
  void *v13; // [rsp+20h] [rbp-28h]
  void *v14; // [rsp+28h] [rbp-20h]
  void *v15; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v8;
  v13 = v8;
  if ( v8 )
  {
    v14 = v8;
    v10 = Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::TargetedContentActionInternalImpl((Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *)v8);
    v15 = 0LL;
    v9 = Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::RuntimeClassInitialize(
           v10,
           *a2,
           a3,
           *a4,
           v13,
           v14);
    if ( v9 >= 0 )
      v9 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal>>(
             v10,
             &GUID_e762b6be_f3b7_4977_bc20_4388a551b5b4,
             a1);
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::Release(
        v10,
        v11);
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v15);
  return (unsigned int)v9;
}
