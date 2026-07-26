/*
 * XREFs of ndisHistogramDeleteAllEntries @ 0x14013B9FC
 * Callers:
 *     ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x14013B6CC (-ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z.c)
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x14013BA78 (-ndisReinitializeHistograms@@YAJXZ.c)
 * Callees:
 *     ??_GNdisHistogramEntry@@QEAAPEAXI@Z @ 0x14013B540 (--_GNdisHistogramEntry@@QEAAPEAXI@Z.c)
 */

void **ndisHistogramDeleteAllEntries()
{
  _DWORD *v0; // rbx
  void **result; // rax
  _QWORD *v2; // rcx

  v0 = qword_14011EE68;
  while ( 1 )
  {
    result = *(void ***)v0;
    if ( *(_DWORD **)v0 == v0 )
      break;
    if ( result[1] != v0 || (v2 = *result, *((void ***)*result + 1) != result) )
      __fastfail(3u);
    *(_QWORD *)v0 = v2;
    v2[1] = v0;
    if ( result != (void **)16 )
      NdisHistogramEntry::`scalar deleting destructor'(result - 2);
  }
  v0[4] = 0;
  return result;
}
