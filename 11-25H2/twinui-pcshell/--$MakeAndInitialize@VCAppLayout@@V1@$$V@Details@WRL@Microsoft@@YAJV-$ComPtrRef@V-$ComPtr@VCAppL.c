/*
 * XREFs of ??$MakeAndInitialize@VCAppLayout@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCAppLayout@@@WRL@Microsoft@@@012@@Z @ 0x18007E194
 * Callers:
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x18007E104 (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180174950 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWin.c)
 *     ??0CAppLayout@@QEAA@XZ @ 0x180221280 (--0CAppLayout@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAppLayout,CAppLayout,>(_QWORD *a1)
{
  unsigned int v2; // edi
  void *v3; // rax
  CAppLayout *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // r8
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( *a1 )
  {
    *a1 = 0LL;
    ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IWindowingEnvironmentConfig,IWindowingEnvironmentConfigInternal>::Release)();
  }
  *a1 = 0LL;
  v3 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v3;
  if ( v3 )
  {
    v4 = CAppLayout::CAppLayout((CAppLayout *)v3);
    v8 = 0LL;
    if ( v4 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((CAppLayout *)((char *)v4 + 52), v5);
      *a1 = v6;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IWindowingEnvironmentConfig,IWindowingEnvironmentConfigInternal>::Release(v6);
    }
    else
    {
      *a1 = 0LL;
    }
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return v2;
}
