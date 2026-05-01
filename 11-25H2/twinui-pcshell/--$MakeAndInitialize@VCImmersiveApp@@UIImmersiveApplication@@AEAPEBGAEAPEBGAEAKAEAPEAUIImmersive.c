/*
 * XREFs of ??$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveApplication@@AEAPEBG1AEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Z @ 0x1800871D8
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180086D74 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x1801368F8 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ??0CImmersiveApp@@QEAA@XZ @ 0x1801EBE80 (--0CImmersiveApp@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CImmersiveApp,IImmersiveApplication,unsigned short const * &,unsigned short const * &,unsigned long &,IImmersiveMonitor * &,PER_APPLICATION_DATA * &,IIAMServiceProvider * &,unsigned __int64 &>(
        _QWORD *a1,
        const unsigned __int16 **a2,
        const unsigned __int16 **a3,
        unsigned int *a4,
        struct IImmersiveMonitor **a5,
        struct PER_APPLICATION_DATA **a6,
        struct IIAMServiceProvider **a7,
        unsigned __int64 *a8)
{
  void *v12; // rax
  CImmersiveApp *v14; // rdi
  int v15; // esi
  unsigned int v16; // ebx
  void *v17; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v12 = operator new(0x398uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v12;
  if ( !v12 )
    return 2147942414LL;
  v14 = CImmersiveApp::CImmersiveApp((CImmersiveApp *)v12);
  v17 = 0LL;
  v15 = CImmersiveApp::RuntimeClassInitialize(v14, *a2, *a3, *a4, *a5, *a6, *a7, *a8);
  if ( v15 >= 0 )
  {
    v16 = (**(__int64 (__fastcall ***)(CImmersiveApp *, GUID *, _QWORD *))v14)(
            v14,
            &GUID_8b14e88b_5663_4caf_b196_c31479262831,
            a1);
    (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v14 + 16LL))(v14);
    return v16;
  }
  else
  {
    if ( v14 )
      (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v14 + 16LL))(v14);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v17);
    return (unsigned int)v15;
  }
}
