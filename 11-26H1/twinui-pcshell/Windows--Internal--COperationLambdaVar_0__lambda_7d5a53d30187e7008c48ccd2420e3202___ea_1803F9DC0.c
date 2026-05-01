/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_7d5a53d30187e7008c48ccd2420e3202__Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults___::Run @ 0x1803F9DC0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7d5a53d30187e7008c48ccd2420e3202_::operator() @ 0x1803F6714 (_lambda_7d5a53d30187e7008c48ccd2420e3202_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_7d5a53d30187e7008c48ccd2420e3202__Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults___::Run(
        __int64 a1,
        int a2,
        signed int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 16);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_7d5a53d30187e7008c48ccd2420e3202_::operator()((_QWORD *)(a1 + 8), a4, a3);
  return (unsigned int)a3;
}
