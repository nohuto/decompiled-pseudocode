/*
 * XREFs of ?Release@CShoulderTapExperienceManager@@UEAAKXZ @ 0x1802A3F40
 * Callers:
 *     ?Release@VectorChangedEventArgs@Internal@Collections@Foundation@Windows@@W7EAAKXZ @ 0x180385E10 (-Release@VectorChangedEventArgs@Internal@Collections@Foundation@Windows@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CShoulderTapExperienceManager::Release(CShoulderTapExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(this);
}
