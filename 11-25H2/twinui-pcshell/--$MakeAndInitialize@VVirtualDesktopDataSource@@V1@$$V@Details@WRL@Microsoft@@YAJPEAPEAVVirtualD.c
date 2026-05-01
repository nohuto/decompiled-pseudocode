/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopDataSource@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopDataSource@@@Z @ 0x1802262AC
 * Callers:
 *     ?VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802261CC (-VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopDataSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180226284 (-InternalRelease@-$ComPtr@VVirtualDesktopDataSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopDataSource@@QEAA@XZ @ 0x18047EC6C (--0VirtualDesktopDataSource@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopDataSource,VirtualDesktopDataSource,>(
        VirtualDesktopDataSource **a1)
{
  void *v2; // rax
  VirtualDesktopDataSource *v4; // rax
  volatile int *v5; // rdx
  VirtualDesktopDataSource *v6; // r8
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  void *v9; // [rsp+30h] [rbp+8h] BYREF
  VirtualDesktopDataSource *v10; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v2;
  if ( !v2 )
    return 2147942414LL;
  v4 = VirtualDesktopDataSource::VirtualDesktopDataSource((VirtualDesktopDataSource *)v2);
  v9 = 0LL;
  v6 = v4;
  v10 = v4;
  if ( v4 )
  {
    v7 = *((_QWORD *)v4 + 11);
    while ( v7 >= 0 )
    {
      if ( (_DWORD)v7 != 0x7FFFFFFF )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 11, v7 + 1, v7);
        if ( v8 != v7 )
          continue;
      }
      goto LABEL_10;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v7 + 16), v5);
  }
LABEL_10:
  *a1 = v6;
  Microsoft::WRL::ComPtr<VirtualDesktopDataSource>::InternalRelease((__int64 *)&v10);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v9);
  return 0LL;
}
