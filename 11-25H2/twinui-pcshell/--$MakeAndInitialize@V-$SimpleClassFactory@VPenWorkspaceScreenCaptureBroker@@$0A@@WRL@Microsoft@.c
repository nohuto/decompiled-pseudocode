/*
 * XREFs of ??$MakeAndInitialize@V?$SimpleClassFactory@VPenWorkspaceScreenCaptureBroker@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VPenWorkspaceScreenCaptureBroker@@$0A@@12@@Z @ 0x1803DFDCC
 * Callers:
 *     ??$CreateClassFactory@V?$SimpleClassFactory@VPenWorkspaceScreenCaptureBroker@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1803DFD00 (--$CreateClassFactory@V-$SimpleClassFactory@VPenWorkspaceScreenCaptureBroker@@$0A@@WRL@Microsoft.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$SimpleClassFactory@VPenWorkspaceScreenCaptureBroker@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1803E005C (--0-$SimpleClassFactory@VPenWorkspaceScreenCaptureBroker@@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<PenWorkspaceScreenCaptureBroker,0>,Microsoft::WRL::SimpleClassFactory<PenWorkspaceScreenCaptureBroker,0>,>(
        __int64 *a1)
{
  unsigned int v2; // edi
  void *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  if ( v3 )
  {
    v4 = Microsoft::WRL::SimpleClassFactory<PenWorkspaceScreenCaptureBroker,0>::SimpleClassFactory<PenWorkspaceScreenCaptureBroker,0>(v3);
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
