/*
 * XREFs of ??$Make@VCMonitor@@PEAUStreamConnectionSettings@@_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCMonitor@@@12@$$QEAPEAUStreamConnectionSettings@@$$QEA_N@Z @ 0x18011B3CC
 * Callers:
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@@Z @ 0x18011E32C (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@Capabili.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CMonitor@@QEAA@PEAUStreamConnectionSettings@@_N@Z @ 0x18011B578 (--0CMonitor@@QEAA@PEAUStreamConnectionSettings@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
CMonitor **__fastcall Microsoft::WRL::Details::Make<CMonitor,StreamConnectionSettings *,bool>(
        CMonitor **a1,
        struct StreamConnectionSettings **a2,
        bool *a3)
{
  void *v6; // rax
  CMonitor *v7; // rdi
  void *v9; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new[](0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v6;
  if ( v6 )
  {
    v7 = CMonitor::CMonitor((CMonitor *)v6, *a2, *a3);
    if ( *a1 )
      (*(void (__fastcall **)(CMonitor *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v7;
    v9 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v9);
  return a1;
}
