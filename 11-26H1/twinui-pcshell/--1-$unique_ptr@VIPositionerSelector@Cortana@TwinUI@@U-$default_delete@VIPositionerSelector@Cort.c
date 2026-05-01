/*
 * XREFs of ??1?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1803719BC
 * Callers:
 *     _CortanaSharedExperienceManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1806E68A3 (_CortanaSharedExperienceManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _CortanaSharedExperienceManager::RuntimeClassInitialize_::_1_::dtor$0_0 @ 0x1806E68B5 (_CortanaSharedExperienceManager--RuntimeClassInitialize_--_1_--dtor$0_0.c)
 * Callees:
 *     ??R?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@QEBAXPEAVIPositionerSelector@Cortana@TwinUI@@@Z @ 0x180371D78 (--R-$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@QEBAXPEAVIPositionerSelector@Co.c)
 */

__int64 __fastcall wistd::unique_ptr<TwinUI::Cortana::IPositionerSelector,wistd::default_delete<TwinUI::Cortana::IPositionerSelector>>::~unique_ptr<TwinUI::Cortana::IPositionerSelector,wistd::default_delete<TwinUI::Cortana::IPositionerSelector>>(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return wistd::default_delete<TwinUI::Cortana::IPositionerSelector>::operator()();
  return result;
}
