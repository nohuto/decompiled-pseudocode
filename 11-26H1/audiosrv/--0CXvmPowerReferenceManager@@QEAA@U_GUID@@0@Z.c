/*
 * XREFs of ??0CXvmPowerReferenceManager@@QEAA@U_GUID@@0@Z @ 0x18010ECF8
 * Callers:
 *     ??$make_shared@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YA?AV?$shared_ptr@VCXvmPowerReferenceManager@@@0@$$QEBU_GUID@@0@Z @ 0x18010EB30 (--$make_shared@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YA-AV-$shared_ptr@VCXvmPower.c)
 * Callees:
 *     _lambda_f7a716bfe224096f553bb41568304cf0_::_lambda_f7a716bfe224096f553bb41568304cf0_ @ 0x1800ADDB8 (_lambda_f7a716bfe224096f553bb41568304cf0_--_lambda_f7a716bfe224096f553bb41568304cf0_.c)
 *     _lambda_cece36584f45002ca434a9cf14e98d42_::operator() @ 0x18010F10C (_lambda_cece36584f45002ca434a9cf14e98d42_--operator().c)
 */

// Hidden C++ exception states: #wind=2
struct _GUID *__fastcall CXvmPowerReferenceManager::CXvmPowerReferenceManager(
        struct _GUID *pv,
        struct _GUID *a2,
        struct _GUID *a3)
{
  _QWORD *v4; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  pv[2].Data1 = 0;
  *(_QWORD *)pv[2].Data4 = 2LL;
  pv[4] = 0LL;
  pv[5] = 0LL;
  pv[6] = 0LL;
  *(_QWORD *)&pv[3].Data1 = 0LL;
  *(_QWORD *)pv[3].Data4 = 0LL;
  pv[7].Data1 = -1;
  *(_DWORD *)&pv[7].Data2 = 0;
  *(_QWORD *)pv[7].Data4 = 0LL;
  *(_QWORD *)&pv[8].Data1 = 0LL;
  *(_QWORD *)pv[8].Data4 = 0LL;
  pv[1] = *a3;
  *pv = *a2;
  v4 = lambda_f7a716bfe224096f553bb41568304cf0_::_lambda_f7a716bfe224096f553bb41568304cf0_(&v6, (__int64)pv);
  lambda_cece36584f45002ca434a9cf14e98d42_::operator()(v4);
  if ( *(_QWORD *)&pv[8].Data1 )
    *(_QWORD *)pv[7].Data4 = CreateThreadpoolTimer(
                               (PTP_TIMER_CALLBACK)lambda_a5b20f628b6b681ff62fc21fdf557568_::_lambda_invoker_cdecl_,
                               pv,
                               0LL);
  return pv;
}
