/*
 * XREFs of ??$MakeAndInitialize@VTaskFlowImmersiveShellBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18020A42C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTaskFlowImmersiveShellBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1803ED190 (-CreateInstance@-$SimpleClassFactory@VTaskFlowImmersiveShellBroker@@$0A@@WRL@Microsoft@@UEAAJPEA.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1800275B4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TaskFlowImmersiveShellBroker@@QEAA@XZ @ 0x1803EBC68 (--0TaskFlowImmersiveShellBroker@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TaskFlowImmersiveShellBroker,IUnknown,>(_QWORD *a1)
{
  void *v2; // rax
  unsigned int v3; // ebx
  TaskFlowImmersiveShellBroker *v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v9; // [rsp+40h] [rbp+8h] BYREF
  TaskFlowImmersiveShellBroker *v10; // [rsp+48h] [rbp+10h]

  *a1 = 0LL;
  v2 = operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v2;
  if ( v2 )
  {
    v4 = TaskFlowImmersiveShellBroker::TaskFlowImmersiveShellBroker((TaskFlowImmersiveShellBroker *)v2);
    v10 = v4;
    v9 = 0LL;
    v5 = CImmersiveShellComponent::RegisterServiceInformation(
           (TaskFlowImmersiveShellBroker *)((char *)v4 + 72),
           (const struct _GUID *)&SID_TaskFlowImmersiveShellBroker);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v5 = CImmersiveShellComponent::RegisterServiceInformation(
             (TaskFlowImmersiveShellBroker *)((char *)v4 + 72),
             (const struct _GUID *)&SID_TaskFlowUserActivityMonitor);
      v3 = v5;
      if ( v5 >= 0 )
      {
        v3 = (**(__int64 (__fastcall ***)(TaskFlowImmersiveShellBroker *, GUID *, _QWORD *))v4)(
               v4,
               &GUID_00000000_0000_0000_c000_000000000046,
               a1);
        (*(void (__fastcall **)(TaskFlowImmersiveShellBroker *))(*(_QWORD *)v4 + 16LL))(v4);
        return v3;
      }
      v6 = 51LL;
    }
    else
    {
      v6 = 49LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v5);
    if ( v4 )
      (*(void (__fastcall **)(TaskFlowImmersiveShellBroker *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v9);
  return v3;
}
