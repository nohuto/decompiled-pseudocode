/*
 * XREFs of ??$MakeAndInitialize@V?$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@@Z @ 0x1805F9CB4
 * Callers:
 *     ??$CreateClassFactory@V?$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1805F98E0 (--$CreateClassFactory@V-$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@@Details@W.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@QEAA@XZ @ 0x1805FD9AC (--0-$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<wil::wrl_factory_for_winrt_com_class<CopilotHotkeyManager>,wil::wrl_factory_for_winrt_com_class<CopilotHotkeyManager>,>(
        __int64 *a1)
{
  unsigned int v2; // ebx
  void *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  if ( v3 )
  {
    v4 = wil::wrl_factory_for_winrt_com_class<CopilotHotkeyManager>::wrl_factory_for_winrt_com_class<CopilotHotkeyManager>(v3);
    v5 = v4;
    v7 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  return v2;
}
