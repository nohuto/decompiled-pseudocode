/*
 * XREFs of PnprSwap @ 0x1405DE720
 * Callers:
 *     PnprEndMirroring @ 0x140BF7670 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x140BF7744 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     MmUnmapReservedMapping @ 0x1403CBB70 (MmUnmapReservedMapping.c)
 *     PnprSwapFinalize @ 0x1405DE92C (PnprSwapFinalize.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PnprMirrorMarkedPages @ 0x140BF7F18 (PnprMirrorMarkedPages.c)
 */

__int64 __fastcall PnprSwap(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // rax
  int v7; // eax
  _DWORD *v8; // rax
  int v9; // eax
  __int64 i; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 result; // rax

  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    if ( *(int *)(PnprContext + 200) < 2 )
      *(_DWORD *)(PnprContext + 200) = 2;
    v2 = PnprMirrorMarkedPages();
    if ( v2 < 0 )
    {
      v3 = PnprContext;
      v4 = *(_DWORD *)(PnprContext + 33288);
      if ( !v4 )
        v4 = 2607;
      v5 = *(_DWORD *)(PnprContext + 33292);
      *(_DWORD *)(PnprContext + 33288) = v4;
      if ( !v5 )
        v5 = 1;
LABEL_10:
      *(_DWORD *)(v3 + 33292) = v5;
      goto LABEL_35;
    }
    v6 = (_DWORD *)PnprContext;
    *(_DWORD *)(PnprContext + 204) = 1;
    v6[50] = 3;
    while ( v6[51] < v6[44] )
    {
      _mm_pause();
      v6 = (_DWORD *)PnprContext;
    }
  }
  if ( *(_QWORD *)(PnprContext + 33264) )
  {
    v2 = guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), a2);
    if ( v2 < 0 )
    {
      v3 = PnprContext;
      v7 = *(_DWORD *)(PnprContext + 33288);
      if ( !v7 )
        v7 = 2627;
      *(_DWORD *)(PnprContext + 33288) = v7;
      v5 = *(_DWORD *)(v3 + 33292);
      if ( !v5 )
        v5 = 8;
      goto LABEL_10;
    }
  }
  v8 = (_DWORD *)PnprContext;
  *(_DWORD *)(PnprContext + 204) = 1;
  v8[50] = 4;
  while ( v8[51] < v8[44] )
  {
    _mm_pause();
    v8 = (_DWORD *)PnprContext;
  }
  v9 = PnprSwapFinalize();
  v3 = PnprContext;
  v2 = v9;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(PnprContext + 176); i = (unsigned int)(i + 1) )
    {
      v11 = *(_QWORD *)(v3 + 136) + 24 * i;
      if ( v11 )
      {
        v12 = *(_QWORD *)v11;
        if ( *(_QWORD *)v11 )
        {
          if ( (*(_BYTE *)(v12 + 10) & 1) != 0 )
            MmUnmapReservedMapping(*(PVOID *)(v11 + 8), 0x51706E50u, (PMDL)v12);
        }
      }
      v13 = *(_QWORD *)(PnprContext + 144) + 24 * i;
      if ( v13 )
      {
        v14 = *(_QWORD *)v13;
        if ( *(_QWORD *)v13 )
        {
          if ( (*(_BYTE *)(v14 + 10) & 1) != 0 )
            MmUnmapReservedMapping(*(PVOID *)(v13 + 8), 0x51706E50u, (PMDL)v14);
        }
      }
      v3 = PnprContext;
    }
  }
LABEL_35:
  result = (unsigned int)v2;
  *(_DWORD *)(v3 + 200) = 5;
  return result;
}
