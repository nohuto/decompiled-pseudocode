/*
 * XREFs of ??$try_query@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1802C77F0
 * Callers:
 *     _lambda_69007988d7502f280df03ae50b96fe74_::operator() @ 0x18035D404 (_lambda_69007988d7502f280df03ae50b96fe74_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_78dc17297d8421306f6aba57b33a70a5___::Run @ 0x180360810 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_78dc17297d8421306f6aba57b33a70a5___--Run.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *a1;
  *a2 = 0LL;
  (*(void (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v3 + 24LL))(
    v3,
    &GUID_df65db57_d504_456e_8bd7_004ce308d8d9,
    a2);
  return a2;
}
