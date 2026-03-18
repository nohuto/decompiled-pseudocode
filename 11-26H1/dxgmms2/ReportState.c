/*
 * XREFs of ReportState @ 0x14012524C
 * Callers:
 *     ?ReportState@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBAXXZ @ 0x14009BE40 (-ReportState@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBAXXZ.c)
 * Callees:
 *     ?ReportSegmentState@VIDMM_SEGMENT@@QEBAXXZ @ 0x1400ECD00 (-ReportSegmentState@VIDMM_SEGMENT@@QEBAXXZ.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEBAXXZ @ 0x1401252CC (-ReportSegment@VIDMM_SEGMENT@@QEBAXXZ.c)
 */

__int64 __fastcall ReportState(__int64 a1)
{
  unsigned __int16 v1; // bx
  unsigned __int16 v3; // si
  unsigned int v4; // ecx
  __int64 result; // rax

  v1 = 0;
  v3 = 0;
  if ( *(_DWORD *)(a1 + 136) )
  {
    do
    {
      VIDMM_SEGMENT::ReportSegment(*(VIDMM_SEGMENT **)(*(_QWORD *)(a1 + 1752) + 8LL * v3));
      v4 = *(_DWORD *)(a1 + 136);
      result = ++v3;
    }
    while ( v3 < v4 );
    if ( v4 )
    {
      do
      {
        VIDMM_SEGMENT::ReportSegmentState(*(VIDMM_SEGMENT **)(*(_QWORD *)(a1 + 1752) + 8LL * v1++));
        result = v1;
      }
      while ( (unsigned int)v1 < *(_DWORD *)(a1 + 136) );
    }
  }
  return result;
}
