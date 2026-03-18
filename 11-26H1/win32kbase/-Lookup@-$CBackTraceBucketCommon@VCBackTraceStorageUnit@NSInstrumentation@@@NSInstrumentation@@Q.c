/*
 * XREFs of ?Lookup@?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@_K@Z @ 0x1400B9A18
 * Callers:
 *     ?Lookup@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1400B8C38 (-Lookup@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 * Callees:
 *     memcmp @ 0x14024C590 (memcmp.c)
 */

volatile signed __int32 *__fastcall NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>::Lookup(
        volatile signed __int32 **a1,
        const void *a2,
        __int64 a3)
{
  volatile signed __int32 *i; // rbx

  for ( i = *a1; ; i = *(volatile signed __int32 **)i )
  {
    if ( !i )
      return 0LL;
    if ( *((_QWORD *)i + 1) == a3 && !memcmp((const void *)(i + 4), a2, 0xA0uLL) )
      break;
  }
  _InterlockedIncrement(i + 44);
  return i;
}
