/*
 * XREFs of ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x18011775C
 * Callers:
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180080990 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B04C (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006B080 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces.c)
 *     ?RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Z @ 0x18011783C (-RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplic.c)
 *     ??0CApplicationFrameWrapper@@QEAA@XZ @ 0x18011795C (--0CApplicationFrameWrapper@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1801831E0 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *>(
        CApplicationFrameWrapper **a1,
        _QWORD *a2,
        struct IApplicationFrameManager **a3,
        struct IApplicationFrame **a4)
{
  unsigned int v8; // ebx
  void *v9; // rax
  CApplicationFrameWrapper *v10; // rdi
  __int64 v11; // rdx
  int v12; // ebp
  __int64 v13; // r8
  __int64 v14; // r9
  void *v16; // [rsp+20h] [rbp-28h] BYREF
  CApplicationFrameWrapper *v17; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0;
  *a1 = 0LL;
  v9 = operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v9;
  v17 = (CApplicationFrameWrapper *)v9;
  if ( !v9 )
  {
    v8 = -2147024882;
LABEL_8:
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v16);
    return v8;
  }
  v10 = CApplicationFrameWrapper::CApplicationFrameWrapper((CApplicationFrameWrapper *)v9);
  v17 = v10;
  v16 = 0LL;
  v12 = CApplicationFrameWrapper::RuntimeClassInitialize(
          v10,
          (struct IApplicationFrameService *)((*a2 + 40LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a2 >> 64)),
          *a3,
          *a4);
  if ( v12 >= 0 )
  {
    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(&v17, v11, v13, v14);
    *a1 = v10;
    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease((__int64 *)&v17);
    goto LABEL_8;
  }
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::Release((__int64)v10);
  return (unsigned int)v12;
}
