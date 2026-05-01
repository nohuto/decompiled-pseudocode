/*
 * XREFs of ??$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificationDispatcher@@@Z @ 0x180236888
 * Callers:
 *     ??$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x1802CED20 (--$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$C.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180054134 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180084828 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEBAXXZ @ 0x1800B7E38 (-InternalAddRef@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@NotificationDispatcher@@QEAAJXZ @ 0x18030E500 (-RuntimeClassInitialize@NotificationDispatcher@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<NotificationDispatcher,NotificationDispatcher,>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rax
  RTL_SRWLOCK *v3; // rbx
  int v5; // edi
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = (RTL_SRWLOCK *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  v3 = v2;
  if ( !v2 )
    return 2147942414LL;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>((Microsoft::WRL::FtmBase *)v2);
  v3[5].Ptr = 0LL;
  v3->Ptr = &NotificationDispatcher::`vftable';
  v3[6].Ptr = 0LL;
  v3[7].Ptr = 0LL;
  v3[8].Ptr = 0LL;
  v3[9].Ptr = 0LL;
  InitializeSRWLock(v3 + 10);
  v7 = 0LL;
  LOBYTE(v3[11].Ptr) = 0;
  v6 = v3;
  v5 = NotificationDispatcher::RuntimeClassInitialize((NotificationDispatcher *)v3);
  if ( v5 >= 0 )
  {
    Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalAddRef((__int64 *)&v6);
    v5 = 0;
    *a1 = v3;
  }
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((volatile signed __int32 **)&v6);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v7);
  return (unsigned int)v5;
}
