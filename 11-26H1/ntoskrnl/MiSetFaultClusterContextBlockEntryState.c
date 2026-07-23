/*
 * XREFs of MiSetFaultClusterContextBlockEntryState @ 0x140467AA4
 * Callers:
 *     MiDetermineThreadFaultCluster @ 0x1402B7E68 (MiDetermineThreadFaultCluster.c)
 *     MiPerformFaultClusterMaintenance @ 0x1402CD110 (MiPerformFaultClusterMaintenance.c)
 *     MiConfirmFaultClusterDescriptor @ 0x1402CEDB0 (MiConfirmFaultClusterDescriptor.c)
 *     MiLockAndConfirmFaultClusterDescriptor @ 0x1403A14FC (MiLockAndConfirmFaultClusterDescriptor.c)
 *     MiClearFaultClusterContext @ 0x140467884 (MiClearFaultClusterContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetFaultClusterContextBlockEntryState(__int64 a1, int a2)
{
  __int64 v3; // rax
  char v4; // r8
  char v5; // cl
  __int64 v6; // r10
  int v7; // ebx
  int v8; // r9d
  __int64 result; // rax
  signed __int32 v10; // ett
  int v11; // edx

  v3 = *(_QWORD *)(a1 + 40) >> 60;
  v4 = 2 * v3;
  v5 = 2 * v3;
  v6 = a1 - 48 * v3;
  v7 = a2 << (2 * v3);
  v8 = ((int)HIDWORD(*(_QWORD *)(v6 - 8)) >> (2 * v3)) & 3;
  v10 = HIDWORD(*(_QWORD *)(v6 - 8));
  result = (unsigned int)_InterlockedCompareExchange(
                           (volatile signed __int32 *)(v6 - 4),
                           (a2 << v5) | v10 & ~(3 << v5),
                           v10);
  if ( v10 != (_DWORD)result )
  {
    do
    {
      v11 = result;
      v8 = ((int)result >> v4) & 3;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)(v6 - 4),
                               v7 | result & ~(3 << v5),
                               result);
    }
    while ( (_DWORD)result != v11 );
  }
  if ( v8 == 3 )
  {
    result = *(_QWORD *)(v6 - 16);
    _InterlockedDecrement64((volatile signed __int64 *)(result + 32));
  }
  return result;
}
