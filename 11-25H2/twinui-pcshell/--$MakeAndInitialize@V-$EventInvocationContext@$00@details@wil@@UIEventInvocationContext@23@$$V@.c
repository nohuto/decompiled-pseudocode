/*
 * XREFs of ??$MakeAndInitialize@V?$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEventInvocationContext@details@wil@@@Z @ 0x1803F6120
 * Callers:
 *     ??$MakeAndInitialize@V?$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIEventInvocationContext@details@wil@@@WRL@Microsoft@@@012@@Z @ 0x1803F61BC (--$MakeAndInitialize@V-$EventInvocationContext@$00@details@wil@@UIEventInvocationCo_ea_1803F61BC.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802248A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIJumpViewExperien.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$EventInvocationContext@$00@details@wil@@QEAA@XZ @ 0x1803F6F8C (--0-$EventInvocationContext@$00@details@wil@@QEAA@XZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIEventInvocationContext@details@wil@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803FA320 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1803FA320.c)
 *     ?RuntimeClassInitialize@?$EventInvocationContext@$00@details@wil@@QEAAJXZ @ 0x1803FB0C0 (-RuntimeClassInitialize@-$EventInvocationContext@$00@details@wil@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<wil::details::EventInvocationContext<1>,wil::details::IEventInvocationContext,>(
        _QWORD *a1)
{
  void *v2; // rax
  int Interface; // edi
  void *v4; // rax
  __int64 v5; // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  if ( v2 )
  {
    v4 = (void *)wil::details::EventInvocationContext<1>::EventInvocationContext<1>(v2);
    v7 = 0LL;
    v5 = (__int64)v4;
    Interface = wil::details::EventInvocationContext<1>::RuntimeClassInitialize(v4);
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,wil::details::IEventInvocationContext,Microsoft::WRL::FtmBase>::QueryInterface(
                    v5,
                    &GUID_da6f771e_d39d_405e_aa6c_1a3cccb72a39,
                    a1);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs,Microsoft::WRL::FtmBase>::Release(v5);
  }
  else
  {
    Interface = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  return (unsigned int)Interface;
}
