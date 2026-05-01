/*
 * XREFs of ??1?$ComPtr@VAccessibilityExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D18D0
 * Callers:
 *     _AccessibilityExperienceManagerCF::CreateInstance_::_1_::dtor$0 @ 0x1806B07B3 (_AccessibilityExperienceManagerCF--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AccessibilityExperienceManager>::~ComPtr<AccessibilityExperienceManager>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<AccessibilityExperienceManager>::InternalRelease(a1);
}
