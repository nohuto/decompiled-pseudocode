/*
 * XREFs of ?Create@?$CBackTraceStorageUnitBaseT@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@SAPEAVCBackTraceStorageUnit@2@_KQEBVCBackTrace@2@PEAV32@@Z @ 0x1400B9834
 * Callers:
 *     ?Insert@?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@_KQEBVCBackTrace@2@@Z @ 0x1400B9780 (-Insert@-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@Q.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CBackTraceStorageUnitBaseT<NSInstrumentation::CBackTraceStorageUnit>::Create(
        __int64 a1,
        _OWORD *a2,
        __int64 a3)
{
  __int64 result; // rax

  result = ExAllocatePool2(258LL, 184LL, 810120021LL);
  if ( result )
  {
    *(_QWORD *)(result + 8) = a1;
    *(_OWORD *)(result + 16) = *a2;
    *(_OWORD *)(result + 32) = a2[1];
    *(_OWORD *)(result + 48) = a2[2];
    *(_OWORD *)(result + 64) = a2[3];
    *(_OWORD *)(result + 80) = a2[4];
    *(_OWORD *)(result + 96) = a2[5];
    *(_OWORD *)(result + 112) = a2[6];
    *(_OWORD *)(result + 128) = a2[7];
    *(_OWORD *)(result + 144) = a2[8];
    *(_OWORD *)(result + 160) = a2[9];
    *(_QWORD *)result = a3;
    *(_DWORD *)(result + 176) = 1;
  }
  return result;
}
