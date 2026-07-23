/*
 * XREFs of MiRevertThreadAffinity @ 0x1403CD44C
 * Callers:
 *     MiThreadWorker @ 0x1403CD1F0 (MiThreadWorker.c)
 * Callees:
 *     KeSetIdealProcessorThreadEx @ 0x140204930 (KeSetIdealProcessorThreadEx.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiDereferencePageChains @ 0x1403CD5A4 (MiDereferencePageChains.c)
 *     MiDereferenceAccelerator @ 0x140714388 (MiDereferenceAccelerator.c)
 */

__int64 __fastcall MiRevertThreadAffinity(__int64 a1)
{
  __int64 v2; // rcx
  volatile unsigned int v3; // edx
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    MiDereferenceAccelerator(v2);
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 != -1 )
    KeSetIdealProcessorThreadEx(KeGetCurrentThread(), v3, 0LL);
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 8LL);
  if ( v4 )
    PsDereferencePartition(v4);
  return MiDereferencePageChains(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL));
}
