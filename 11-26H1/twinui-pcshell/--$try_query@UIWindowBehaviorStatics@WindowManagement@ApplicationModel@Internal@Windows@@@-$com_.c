/*
 * XREFs of ??$try_query@UIWindowBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWindowBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18020EC70
 * Callers:
 *     _lambda_d7884d2305cb98080a7771b114819b2a_::operator() @ 0x18043ABF0 (_lambda_d7884d2305cb98080a7771b114819b2a_--operator().c)
 *     _lambda_ceee1b9c54d49ba2255ffab17ffe7895_::operator() @ 0x180446590 (_lambda_ceee1b9c54d49ba2255ffab17ffe7895_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics,wil::err_exception_policy>::try_query<Windows::Internal::ApplicationModel::WindowManagement::IWindowBehaviorStatics>(
        void (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  void (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx

  v3 = *a1;
  *a2 = 0LL;
  (**v3)(v3, &GUID_d928b176_b291_4bd6_9f6f_2e21e3ef6cbc, a2);
  return a2;
}
