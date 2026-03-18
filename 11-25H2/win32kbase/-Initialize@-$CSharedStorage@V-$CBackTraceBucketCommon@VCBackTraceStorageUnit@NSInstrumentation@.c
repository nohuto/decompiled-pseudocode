/*
 * XREFs of ?Initialize@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NI@Z @ 0x1401D3724
 * Callers:
 *     ?Create@?$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@SAPEAV12@XZ @ 0x14019AD78 (-Create@-$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@.c)
 * Callees:
 *     <none>
 */

char __fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Initialize(
        __int64 a1)
{
  char v1; // bl
  _DWORD *Pool2; // rax
  __int64 v4; // rax
  unsigned int i; // ecx
  __int64 v6; // rax
  _QWORD *v7; // rax

  v1 = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  Pool2 = (_DWORD *)ExAllocatePool2(258LL, 4LL, 843674453LL);
  if ( Pool2 )
    *Pool2 = 0;
  *(_QWORD *)(a1 + 40) = Pool2;
  *(_QWORD *)(a1 + 32) = 256LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  v4 = ExAllocatePool2(258LL, 4096LL, 1682535253LL);
  *(_QWORD *)(a1 + 48) = v4;
  if ( v4 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 32); v7[1] = 0LL )
    {
      v6 = i++;
      v7 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v6);
      *v7 = 0LL;
    }
    return 1;
  }
  return v1;
}
