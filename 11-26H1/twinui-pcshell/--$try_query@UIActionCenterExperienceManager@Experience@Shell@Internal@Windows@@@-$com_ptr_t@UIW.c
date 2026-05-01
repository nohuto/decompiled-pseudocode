/*
 * XREFs of ??$try_query@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1802BE69C
 * Callers:
 *     _lambda_97caca280bc1831b2fa8b4bd22a72139_::operator() @ 0x180364288 (_lambda_97caca280bc1831b2fa8b4bd22a72139_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28132f5df19164a3808f46d0aa9e9f4d___::Run @ 0x180367880 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_28132f5df19164a3808f46d0aa9e9f4d___--Run.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
