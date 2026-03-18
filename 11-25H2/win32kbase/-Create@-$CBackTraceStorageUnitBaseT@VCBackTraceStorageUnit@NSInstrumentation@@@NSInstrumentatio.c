/*
 * XREFs of ?Create@?$CBackTraceStorageUnitBaseT@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@SAPEAVCBackTraceStorageUnit@2@_KQEBVCBackTrace@2@PEAV32@@Z @ 0x1401D32A4
 * Callers:
 *     ?Insert@?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@_KQEBVCBackTrace@2@@Z @ 0x1401D3830 (-Insert@-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@Q.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CBackTraceStorageUnitBaseT<NSInstrumentation::CBackTraceStorageUnit>::Create(
        __int64 a1,
        __int128 *a2,
        __int64 a3)
{
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0

  result = ExAllocatePool2(258LL, 184LL, 810120021LL);
  if ( result )
  {
    v7 = *a2;
    *(_QWORD *)(result + 8) = a1;
    v8 = a2[1];
    *(_OWORD *)(result + 16) = v7;
    v9 = a2[2];
    *(_OWORD *)(result + 32) = v8;
    v10 = a2[3];
    *(_OWORD *)(result + 48) = v9;
    v11 = a2[4];
    *(_OWORD *)(result + 64) = v10;
    v12 = a2[5];
    *(_OWORD *)(result + 80) = v11;
    v13 = a2[6];
    *(_OWORD *)(result + 96) = v12;
    v14 = a2[8];
    *(_OWORD *)(result + 112) = v13;
    *(_OWORD *)(result + 128) = a2[7];
    v15 = a2[9];
    *(_OWORD *)(result + 144) = v14;
    *(_OWORD *)(result + 160) = v15;
    *(_QWORD *)result = a3;
    *(_DWORD *)(result + 176) = 1;
  }
  return result;
}
