/*
 * XREFs of _Microsoft::WRL::Details::Make_CStartExperienceManager_bool__::_1_::dtor$0 @ 0x1806B8F81
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18021FFB4 (--1-$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::Details::Make_CStartExperienceManager_bool__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int64 *result; // rax

  result = (volatile signed __int64 *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CStartExperienceManager>::~ComPtr<CStartExperienceManager>(*(volatile signed __int64 ***)(a2 + 64));
  }
  return result;
}
