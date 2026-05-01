/*
 * XREFs of wil::details::ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___::_ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___ @ 0x1802CB6A0
 * Callers:
 *     _CActionCenterExperienceManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1806AF94B (_CActionCenterExperienceManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 * Callees:
 *     ?Close@CActionCenterExperienceManager@@UEAAJXZ @ 0x18035DCB0 (-Close@CActionCenterExperienceManager@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall wil::details::ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___::_ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___(
        _BYTE *a1)
{
  int result; // eax

  if ( a1[8] )
  {
    a1[8] = 0;
    return CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)(*(_QWORD *)a1 + 80LL));
  }
  return result;
}
