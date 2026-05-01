/*
 * XREFs of wil::details::ScopeExitFn__lambda_1938ada5abcf11b8f621c93591fa504c___::_ScopeExitFn__lambda_1938ada5abcf11b8f621c93591fa504c___ @ 0x1802C7828
 * Callers:
 *     __lambda_c8a2fb21ce249544899dca467e4f9e40_::operator()_::_1_::dtor$1 @ 0x1806ADC6F (__lambda_c8a2fb21ce249544899dca467e4f9e40_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_1938ada5abcf11b8f621c93591fa504c___::_ScopeExitFn__lambda_1938ada5abcf11b8f621c93591fa504c___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[16] )
  {
    a1[16] = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 128LL) + 40LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 128LL),
             **((_QWORD **)a1 + 1));
  }
  return result;
}
