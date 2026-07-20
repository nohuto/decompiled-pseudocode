/*
 * XREFs of SmpInitCoreProcessArray @ 0x140018878
 * Callers:
 *     SmpInitializeSessionManagement @ 0x14000E800 (SmpInitializeSessionManagement.c)
 * Callees:
 *     <none>
 */

__int64 SmpInitCoreProcessArray()
{
  int v0; // edi
  SIZE_T v1; // rsi
  _OWORD *Heap; // rax

  v0 = SmpNumberInitialSessions;
  v1 = 40LL * (unsigned int)SmpNumberInitialSessions;
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v1);
  SmpCoreProcessIds = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  if ( v0 )
  {
    *Heap = 0xFFFFFFFFuLL;
    Heap[1] = 0uLL;
    *((_QWORD *)Heap + 4) = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
    qmemcpy((char *)Heap + 40, Heap, 8 * ((v1 - 40) >> 3));
  }
  return 0LL;
}
