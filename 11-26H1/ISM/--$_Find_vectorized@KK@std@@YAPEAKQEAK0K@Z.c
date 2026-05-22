/*
 * XREFs of ??$_Find_vectorized@KK@std@@YAPEAKQEAK0K@Z @ 0x1800CE900
 * Callers:
 *     _lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___ @ 0x1800CE554 (_lambda_7f3c0264f4cfe5c0819e572d89a9031e_--operator()_std--shared_ptr_LegacyDeviceInfo___.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
const __m128i *__fastcall std::_Find_vectorized<unsigned long,unsigned long>(
        const __m128i *a1,
        const __m128i *a2,
        unsigned int _R8D)
{
  return _std_find_trivial_4(a1, a2, _R8D);
}
