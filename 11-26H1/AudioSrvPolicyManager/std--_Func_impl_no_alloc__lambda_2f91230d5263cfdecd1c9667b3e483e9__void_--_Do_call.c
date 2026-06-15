/*
 * XREFs of std::_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_::_Do_call @ 0x180019B50
 * Callers:
 *     <none>
 * Callees:
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEBG_KKH@Z @ 0x180019B84 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEBG_KKH@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_::_Do_call(__int64 a1)
{
  const unsigned __int16 *v1; // rdx

  v1 = *(const unsigned __int16 **)(a1 + 8);
  if ( *((_QWORD *)v1 + 3) > 7uLL )
    v1 = *(const unsigned __int16 **)v1;
  return CApplicationManager::OnHostedAppStateChanged(
           (CApplicationManager *)a1,
           v1,
           *(_QWORD *)(a1 + 24),
           *(_DWORD *)(a1 + 32),
           *(_DWORD *)(a1 + 36));
}
