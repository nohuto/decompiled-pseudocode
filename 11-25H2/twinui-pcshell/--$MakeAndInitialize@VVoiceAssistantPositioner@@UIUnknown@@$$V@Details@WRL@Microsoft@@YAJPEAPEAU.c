/*
 * XREFs of ??$MakeAndInitialize@VVoiceAssistantPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800E20C4
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VVoiceAssistantPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180237790 (-CreateInstance@-$SimpleClassFactory@VVoiceAssistantPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUn.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@VoiceAssistantPositioner@@QEAAJXZ @ 0x1800E218C (-RuntimeClassInitialize@VoiceAssistantPositioner@@QEAAJXZ.c)
 *     ??0VoiceAssistantPositioner@@QEAA@XZ @ 0x1800E21D4 (--0VoiceAssistantPositioner@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VoiceAssistantPositioner,IUnknown,>(_QWORD *a1)
{
  void *v2; // rax
  VoiceAssistantPositioner *v3; // rdi
  int v4; // ebx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  VoiceAssistantPositioner *v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = operator new(0x1B0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = (VoiceAssistantPositioner *)v2;
  if ( !v2 )
  {
    v4 = -2147024882;
LABEL_8:
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
    return (unsigned int)v4;
  }
  v3 = VoiceAssistantPositioner::VoiceAssistantPositioner((VoiceAssistantPositioner *)v2);
  v7 = v3;
  v6 = 0LL;
  v4 = VoiceAssistantPositioner::RuntimeClassInitialize(v3);
  if ( v4 < 0 )
  {
    if ( v3 )
      (*(void (__fastcall **)(VoiceAssistantPositioner *))(*(_QWORD *)v3 + 16LL))(v3);
    goto LABEL_8;
  }
  v4 = (**(__int64 (__fastcall ***)(VoiceAssistantPositioner *, GUID *, _QWORD *))v3)(
         v3,
         &GUID_00000000_0000_0000_c000_000000000046,
         a1);
  (*(void (__fastcall **)(VoiceAssistantPositioner *))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v4;
}
