/*
 * XREFs of ??$MakeAndInitialize@VCViewPositionChangedEventArgs@@UIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@AEAURect@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@AEAURect@Foundation@7@@Z @ 0x180211C50
 * Callers:
 *     ??$MakeAndInitialize@VCViewPositionChangedEventArgs@@UIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@AEAURect@Foundation@6@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@012@AEAURect@Foundation@Windows@@@Z @ 0x1801C7800 (--$MakeAndInitialize@VCViewPositionChangedEventArgs@@UIViewPositionChangedEventArgs@Experience@S.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802248A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIJumpViewExperien.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CViewPositionChangedEventArgs@@QEAA@XZ @ 0x180363C50 (--0CViewPositionChangedEventArgs@@QEAA@XZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180366880 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewPosit.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CViewPositionChangedEventArgs,Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs,Windows::Foundation::Rect &>(
        _QWORD *a1,
        __int128 *a2)
{
  void *v4; // rax
  CViewPositionChangedEventArgs *v6; // rax
  __int128 v7; // xmm0
  CViewPositionChangedEventArgs *v8; // rdi
  unsigned int Interface; // ebx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( !v4 )
    return 2147942414LL;
  v6 = CViewPositionChangedEventArgs::CViewPositionChangedEventArgs((CViewPositionChangedEventArgs *)v4);
  v7 = *a2;
  v10 = 0LL;
  *((_OWORD *)v6 + 4) = v7;
  v8 = v6;
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs,Microsoft::WRL::FtmBase>::QueryInterface(
                v6,
                &GUID_a125a7cc_7993_4050_9333_9ab63091f258,
                a1);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs,Microsoft::WRL::FtmBase>::Release(v8);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v10);
  return Interface;
}
