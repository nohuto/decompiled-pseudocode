/*
 * XREFs of ??$MakeAndInitialize@VCPPIAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCPPIAllUpViewService@@@WRL@Microsoft@@@012@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x1802A4938
 * Callers:
 *     ?CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FA1C0 (-CPPIAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPPIAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x1800FA270 (-InternalRelease@-$ComPtr@VCPPIAllUpViewService@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CPPIAllUpViewService@@QEAA@XZ @ 0x1802A49D4 (--0CPPIAllUpViewService@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPPIAllUpViewService,CPPIAllUpViewService,IMultitaskingViewTaskScheduler * &>(
        __int64 *a1,
        __int64 *a2)
{
  unsigned int v4; // edi
  void *v5; // rax
  CPPIAllUpViewService *v6; // rax
  __int64 v7; // rdx
  CPPIAllUpViewService *v8; // rsi
  volatile int *v9; // rdx
  void *v11; // [rsp+40h] [rbp+8h] BYREF
  CPPIAllUpViewService *v12; // [rsp+48h] [rbp+10h] BYREF

  Microsoft::WRL::ComPtr<CPPIAllUpViewService>::InternalRelease(a1);
  v4 = 0;
  *a1 = 0LL;
  v5 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v5;
  if ( v5 )
  {
    v6 = CPPIAllUpViewService::CPPIAllUpViewService((CPPIAllUpViewService *)v5);
    v7 = *a2;
    v8 = v6;
    v12 = v6;
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v6 + 6, v7);
    if ( v8 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((CPPIAllUpViewService *)((char *)v8 + 44), v9);
    *a1 = (__int64)v8;
    Microsoft::WRL::ComPtr<CPPIAllUpViewService>::InternalRelease((__int64 *)&v12);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
