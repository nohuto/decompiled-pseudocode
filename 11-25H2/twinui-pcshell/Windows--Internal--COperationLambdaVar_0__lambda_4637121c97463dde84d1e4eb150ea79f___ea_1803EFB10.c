/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_4637121c97463dde84d1e4eb150ea79f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::Run @ 0x1803EFB10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4637121c97463dde84d1e4eb150ea79f_::operator() @ 0x1803EC064 (_lambda_4637121c97463dde84d1e4eb150ea79f_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_4637121c97463dde84d1e4eb150ea79f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_4637121c97463dde84d1e4eb150ea79f_::operator()((_QWORD *)(a1 + 8), a4);
  return (unsigned int)a3;
}
