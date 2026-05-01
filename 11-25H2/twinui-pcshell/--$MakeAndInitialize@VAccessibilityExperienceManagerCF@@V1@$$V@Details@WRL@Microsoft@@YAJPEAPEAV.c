/*
 * XREFs of ??$MakeAndInitialize@VAccessibilityExperienceManagerCF@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAccessibilityExperienceManagerCF@@@Z @ 0x1802C635C
 * Callers:
 *     ??$CreateClassFactory@VAccessibilityExperienceManagerCF@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180223760 (--$CreateClassFactory@VAccessibilityExperienceManagerCF@@@Details@WRL@Microsoft@@YAJPEAIPEBUCrea.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AccessibilityExperienceManagerCF@@QEAA@XZ @ 0x18047B0DC (--0AccessibilityExperienceManagerCF@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AccessibilityExperienceManagerCF,AccessibilityExperienceManagerCF,>(
        AccessibilityExperienceManagerCF **a1)
{
  void *v2; // rax
  AccessibilityExperienceManagerCF *v4; // rax
  AccessibilityExperienceManagerCF *v5; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( !v2 )
    return 2147942414LL;
  v4 = AccessibilityExperienceManagerCF::AccessibilityExperienceManagerCF((AccessibilityExperienceManagerCF *)v2);
  v5 = v4;
  v6 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(AccessibilityExperienceManagerCF *))(*(_QWORD *)v4 + 8LL))(v4);
  *a1 = v5;
  if ( v5 )
    (*(void (__fastcall **)(AccessibilityExperienceManagerCF *))(*(_QWORD *)v5 + 16LL))(v5);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  return 0LL;
}
