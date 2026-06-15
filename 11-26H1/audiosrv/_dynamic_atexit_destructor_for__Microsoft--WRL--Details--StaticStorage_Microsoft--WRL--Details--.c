/*
 * XREFs of _dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::GenericReleaseNotifier__lambda_b07e40d598d2e6cc64bbba968f53c163____2_Windows::Internal::SvcHostModule_::instance___ @ 0x18016CB70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 dynamic_atexit_destructor_for__Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::GenericReleaseNotifier__lambda_b07e40d598d2e6cc64bbba968f53c163____2_Windows::Internal::SvcHostModule_::instance___()
{
  __int64 result; // rax

  if ( byte_1801D7AA8 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))qword_1801D7A90)(&qword_1801D7A90, 0LL);
    byte_1801D7AA8 = 0;
  }
  return result;
}
