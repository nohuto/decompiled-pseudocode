/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_4637121c97463dde84d1e4eb150ea79f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::_COperationLambdaVar_0__lambda_4637121c97463dde84d1e4eb150ea79f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______ @ 0x1803EBF4C
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_4637121c97463dde84d1e4eb150ea79f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::_scalar_deleting_destructor_ @ 0x1803EC8D0 (Windows--Internal--COperationLambdaVar_0__lambda_4637121c97463dde84d1e4eb150ea79f___ea_1803EC8D0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802D566C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void **__fastcall Windows::Internal::COperationLambdaVar_0__lambda_4637121c97463dde84d1e4eb150ea79f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::_COperationLambdaVar_0__lambda_4637121c97463dde84d1e4eb150ea79f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______(
        __int64 a1)
{
  void **result; // rax

  `eh vector destructor iterator'(
    (char *)(a1 + 32),
    8LL,
    1LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 16));
  result = &CCrashDetector::CHandler::`vftable';
  *(_QWORD *)a1 = &CCrashDetector::CHandler::`vftable';
  return result;
}
