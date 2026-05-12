/*
 * XREFs of StorCreateIoGateways @ 0x1400AEDA8
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x140060120 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorIsSoftNumaOptIn @ 0x14005C038 (StorIsSoftNumaOptIn.c)
 */

__int64 __fastcall StorCreateIoGateways(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  unsigned int v4; // r8d
  int v5; // eax
  __int64 Pool; // rax
  __int64 result; // rax
  unsigned int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // rbx

  v2 = 1;
  if ( StorIsSoftNumaOptIn(a1) )
  {
    v4 = g_ProcessorCountPerGateway;
    v5 = g_MaximumProcessorCount - 1;
    *(_DWORD *)(v3 + 1040) = g_ProcessorCountPerGateway;
    v2 = v4 * ((v4 + v5) / v4) / v4;
  }
  Pool = RaidAllocatePool(72LL, 320LL * v2, 1095197010LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 1024) = Pool;
  if ( !Pool )
    return 3221225626LL;
  v8 = 0;
  if ( v2 )
  {
    v9 = 0LL;
    do
    {
      v10 = v9 + *(_QWORD *)(a1 + 1024);
      *(_DWORD *)(v10 + 28) = 1000;
      *(_DWORD *)(v10 + 32) = 1000;
      KeInitializeSpinLock((PKSPIN_LOCK)v10);
      *(_DWORD *)(v10 + 284) = v8;
      *(_QWORD *)(v10 + 16) = v10 + 8;
      ++v8;
      *(_QWORD *)(v10 + 8) = v10 + 8;
      v9 += 320LL;
      *(_DWORD *)(v10 + 128) = 0;
      *(_QWORD *)(v10 + 272) = v10 + 264;
      *(_QWORD *)(v10 + 264) = v10 + 264;
      *(_QWORD *)(v10 + 48) = a1;
    }
    while ( v8 < v2 );
  }
  *(_DWORD *)(a1 + 1048) = 1000;
  result = 0LL;
  *(_DWORD *)(a1 + 1036) = v2;
  return result;
}
