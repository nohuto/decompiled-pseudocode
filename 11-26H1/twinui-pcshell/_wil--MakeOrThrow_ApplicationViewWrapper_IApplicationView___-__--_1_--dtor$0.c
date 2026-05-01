/*
 * XREFs of _wil::MakeOrThrow_ApplicationViewWrapper_IApplicationView___&__::_1_::dtor$0 @ 0x1806D21DE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x18020E660 (--1-$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_ApplicationViewWrapper_IApplicationView______::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<ApplicationViewWrapper>::~ComPtr<ApplicationViewWrapper>(*(__int64 **)(a2 + 64));
  }
  return result;
}
