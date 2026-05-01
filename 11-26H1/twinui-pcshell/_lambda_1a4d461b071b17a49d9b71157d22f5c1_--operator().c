/*
 * XREFs of _lambda_1a4d461b071b17a49d9b71157d22f5c1_::operator() @ 0x1803A0E10
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_88a858cd4cb28562f278f25c97312609___::Invoke @ 0x1803A1B30 (CAsyncCallbackWithLambda__lambda_88a858cd4cb28562f278f25c97312609___--Invoke.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1800FAD4C (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 *     ?CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ @ 0x1802C5E84 (-CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_1a4d461b071b17a49d9b71157d22f5c1_::operator()(
        CortanaAvailability *a1,
        unsigned __int8 *a2,
        unsigned int *a3)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(*(_QWORD *)a1 + 340LL) )
  {
    CortanaProactiveTelemetry::CortanaStoreAppExperienceManager_WNFReentrancyGuard((__int64)a1);
    *(_BYTE *)(*(_QWORD *)a1 + 341LL) = 1;
    return 0LL;
  }
  else
  {
    *(_BYTE *)(*(_QWORD *)a1 + 340LL) = 1;
    v5 = *(_QWORD *)a1;
    v6 = *(_QWORD *)a1;
    while ( 1 )
    {
      *(_BYTE *)(v6 + 341) = 0;
      v7 = CortanaAvailability::WriteCortanaAvailabilityToRegistry(a1, a2, a3);
      v8 = v7;
      if ( v7 < 0 )
        break;
      v6 = *(_QWORD *)a1;
      if ( !*(_BYTE *)(*(_QWORD *)a1 + 341LL) )
      {
        result = 0LL;
        goto LABEL_8;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x149,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    result = v8;
LABEL_8:
    *(_BYTE *)(v5 + 340) = 0;
  }
  return result;
}
