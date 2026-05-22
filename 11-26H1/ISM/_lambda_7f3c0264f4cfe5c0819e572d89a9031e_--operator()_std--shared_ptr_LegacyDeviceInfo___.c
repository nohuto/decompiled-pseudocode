/*
 * XREFs of _lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___ @ 0x1800CE554
 * Callers:
 *     ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x1800CF1C4 (-FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ.c)
 * Callees:
 *     ??$_Find_vectorized@KK@std@@YAPEAKQEAK0K@Z @ 0x1800CE900 (--$_Find_vectorized@KK@std@@YAPEAKQEAK0K@Z.c)
 */

bool __fastcall lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___(
        _QWORD **a1,
        unsigned int **a2)
{
  return std::_Find_vectorized<unsigned long,unsigned long>(**a1, (*a1)[1], **a2) != (*a1)[1];
}
