/*
 * XREFs of MiInitializePartitionThreads @ 0x140870040
 * Callers:
 *     MmCreatePartition @ 0x14087015C (MmCreatePartition.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiInitializePartitionThreads(__int64 a1)
{
  int v2; // eax
  _DWORD *v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 result; // rax
  __int64 v7; // rcx
  _DWORD v8[8]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v9[8]; // [rsp+70h] [rbp+7h]
  __int64 v10; // [rsp+D0h] [rbp+67h] BYREF

  v10 = 0LL;
  v2 = 0;
  v3 = v8;
  do
    *v3++ = v2++;
  while ( v2 < 8 );
  v4 = 0LL;
  v9[0] = MiTrimmingThread;
  v9[1] = MiAgingThread;
  v9[2] = MiZeroPageThread;
  v9[3] = MiRebuildLargePagesThread;
  v9[4] = MiBalanceSetThread;
  v9[5] = MiDereferenceSegmentThread;
  v9[6] = MiMappedPageWriter;
  v9[7] = MiThreadFaultClusterAgingThread;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 128LL);
  while ( (unsigned int)v4 < 8 )
  {
    result = PsCreateSystemThreadEx(&v10, 0x1FFFFFLL, 0LL, v5, 0LL, v9[v4], a1, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v7 = (unsigned int)v8[v4];
    v4 = (unsigned int)(v4 + 1);
    *(_QWORD *)(a1 + 8 * v7 + 184) = v10;
  }
  return 0LL;
}
