/*
 * XREFs of TR_ReAllocateTransferRingSegmentsForOffload @ 0x14004BDD4
 * Callers:
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x14003D300 (UsbDevice_HandleAddAndDropEndpointsState.c)
 * Callees:
 *     TR_EnsureSegments @ 0x140018C60 (TR_EnsureSegments.c)
 *     XilCoreCommonBuffer_ReleaseBuffers @ 0x140033370 (XilCoreCommonBuffer_ReleaseBuffers.c)
 *     TR_AcquireSegment @ 0x14003350C (TR_AcquireSegment.c)
 *     TR_ReleaseSegment @ 0x14004BE54 (TR_ReleaseSegment.c)
 */

__int64 __fastcall TR_ReAllocateTransferRingSegmentsForOffload(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD **v3; // rdx
  int v4; // edi

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  TR_ReleaseSegment(a1, *(_QWORD *)(a1 + 176));
  v3 = (_QWORD **)(a1 + 208);
  *(_QWORD *)(a1 + 176) = 0LL;
  if ( *v3 != v3 )
    XilCoreCommonBuffer_ReleaseBuffers(v2 + 88, v3);
  *(_DWORD *)(a1 + 20) = 4096;
  v4 = TR_EnsureSegments(a1, 1u, 0);
  if ( v4 >= 0 )
    *(_QWORD *)(a1 + 176) = TR_AcquireSegment(a1);
  return (unsigned int)v4;
}
