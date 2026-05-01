/*
 * XREFs of _wil::MakeAndInitializeOrThrow_XamlGamingTaskViewHost_XamlViewHostInitializeArgs_const_&__::_1_::dtor$0 @ 0x180706509
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VXamlGamingTaskViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1806A069C (--1-$ComPtr@VXamlGamingTaskViewHost@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_XamlGamingTaskViewHost_XamlViewHostInitializeArgs_const____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<XamlGamingTaskViewHost>::~ComPtr<XamlGamingTaskViewHost>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
