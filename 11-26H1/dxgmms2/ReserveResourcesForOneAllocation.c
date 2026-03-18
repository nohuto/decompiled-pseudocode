/*
 * XREFs of ReserveResourcesForOneAllocation @ 0x140051AC4
 * Callers:
 *     ?PbmmReserveResources@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@I@Z @ 0x140051954 (-PbmmReserveResources@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@I@Z.c)
 * Callees:
 *     ReserveResourcesFromSegment @ 0x140051BBC (ReserveResourcesFromSegment.c)
 */

__int64 __fastcall ReserveResourcesForOneAllocation(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v6; // ebp
  unsigned int v8; // edi
  unsigned int v9; // r14d
  unsigned int v10; // eax
  char v11; // cl
  __int64 v12; // r15
  int v13; // eax

  v6 = -1073741823;
  if ( a2[18] + a2[19] == a2[15] )
    return 0LL;
  v8 = a2[14];
  v9 = 0;
  while ( v8 )
  {
    v10 = a2[21];
    v11 = 6 * v9;
    while ( v9 < 5 )
    {
      if ( ((v10 >> v11) & 0x1F) != 0 )
      {
        v12 = ((v10 >> v11) & 0x1F) - 1;
        if ( _bittest((const int *)&v8, v12) )
          goto LABEL_10;
      }
      ++v9;
      v11 += 6;
    }
    _BitScanForward((unsigned int *)&v12, v8);
LABEL_10:
    v13 = ReserveResourcesFromSegment(a1, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v12), a3, a2, a3);
    v6 = v13;
    if ( v13 >= 0 )
      break;
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = v13;
      WdLogGlobalForLineNumber = 581;
    }
    v8 &= ~(1 << v12);
  }
  return v6;
}
