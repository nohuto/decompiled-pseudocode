/*
 * XREFs of ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x18003AC78
 * Callers:
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x1800371C4 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ??R_lambda_057488ec2a114cea6fb77af5c8c7453a_@@QEBA@PEBDAEAGG@Z @ 0x18002A588 (--R_lambda_057488ec2a114cea6fb77af5c8c7453a_@@QEBA@PEBDAEAGG@Z.c)
 */

bool __fastcall wil::details_abi::SerializedFailure::Serialize(
        const struct FEATURE_ERROR *a1,
        unsigned __int64 *a2,
        _OWORD *a3,
        unsigned __int64 a4)
{
  unsigned __int16 *v5; // r14
  unsigned __int8 *file; // rdx
  _OWORD *v9; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v10[5]; // [rsp+28h] [rbp-41h] BYREF
  _OWORD *v11; // [rsp+50h] [rbp-19h] BYREF
  char *v12; // [rsp+58h] [rbp-11h] BYREF
  _OWORD v13[2]; // [rsp+60h] [rbp-9h] BYREF
  int v14; // [rsp+80h] [rbp+17h]
  unsigned __int64 v15; // [rsp+E8h] [rbp+7Fh] BYREF

  v15 = a4;
  v11 = a3;
  v12 = (char *)a3 + a4;
  v9 = a3;
  v14 = 0;
  v5 = (unsigned __int16 *)v13;
  v13[0] = 0LL;
  *a2 = 36LL;
  v13[1] = 0LL;
  if ( a4 >= 0x24 )
  {
    v5 = (unsigned __int16 *)a3;
    *a3 = 0LL;
    a3[1] = 0LL;
    *((_DWORD *)a3 + 8) = 0;
    *(_DWORD *)a3 = a1->hr;
    *((_WORD *)a3 + 2) = a1->lineNumber;
    *((_DWORD *)a3 + 3) = a1->callerReturnAddressOffset;
    *((_WORD *)a3 + 9) = a1->originLineNumber;
    *((_DWORD *)a3 + 6) = a1->originCallerReturnAddressOffset;
    v9 = (_OWORD *)((char *)v9 + 36);
  }
  file = (unsigned __int8 *)a1->file;
  v10[0] = &v11;
  v10[1] = a2;
  v10[2] = &v15;
  v10[3] = &v9;
  v10[4] = &v12;
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, file, v5 + 3, 0);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, (unsigned __int8 *)a1->process, v5 + 16, 0);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, (unsigned __int8 *)a1->module, v5 + 4, v5[16]);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(
    (__int64)v10,
    (unsigned __int8 *)a1->callerModule,
    v5 + 5,
    v5[4]);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, (unsigned __int8 *)a1->message, v5 + 8, 0);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, (unsigned __int8 *)a1->originFile, v5 + 10, v5[3]);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(
    (__int64)v10,
    (unsigned __int8 *)a1->callerModule,
    v5 + 5,
    v5[4]);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(
    (__int64)v10,
    (unsigned __int8 *)a1->originModule,
    v5 + 11,
    v5[4]);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(
    (__int64)v10,
    (unsigned __int8 *)a1->originCallerModule,
    v5 + 14,
    v5[11]);
  _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, (unsigned __int8 *)a1->originName, v5 + 15, 0);
  return *a2 <= v15;
}
