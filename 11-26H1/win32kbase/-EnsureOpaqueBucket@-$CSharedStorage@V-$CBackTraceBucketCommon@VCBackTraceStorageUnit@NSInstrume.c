/*
 * XREFs of ?EnsureOpaqueBucket@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAV?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@2@PEAVCHashBucket@12@@Z @ 0x1400B96D0
 * Callers:
 *     ?Insert@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1400B8B6C (-Insert@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::EnsureOpaqueBucket(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  __int64 v5; // rsi

  result = *(_QWORD **)(a2 + 8);
  if ( !result )
  {
    v5 = *(_QWORD *)(a1 + 40);
    result = (_QWORD *)ExAllocatePool2(258LL, 16LL, 826897237LL);
    if ( result )
    {
      *result = 0LL;
      result[1] = v5;
      ++*(_DWORD *)(a1 + 36);
      *(_QWORD *)(a2 + 8) = result;
    }
  }
  return result;
}
