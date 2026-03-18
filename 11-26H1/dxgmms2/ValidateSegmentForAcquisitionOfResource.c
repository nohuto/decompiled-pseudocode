/*
 * XREFs of ValidateSegmentForAcquisitionOfResource @ 0x1400D32C8
 * Callers:
 *     AcquireGPUResourcesFromSegmentSet @ 0x1400D26E8 (AcquireGPUResourcesFromSegmentSet.c)
 *     AcquireGpuResources @ 0x1400D2F84 (AcquireGpuResources.c)
 *     AcquireGPUResourcesFromPreferredSegmentSet @ 0x140114670 (AcquireGPUResourcesFromPreferredSegmentSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateSegmentForAcquisitionOfResource(__int64 a1, __int64 *a2, unsigned int a3, int a4, char a5)
{
  __int64 v5; // rdi
  __int64 v6; // rbp
  int v7; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  _QWORD *v11; // rax

  v5 = *a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 1752) + 8LL * a3);
  if ( *(_DWORD *)(v6 + 108) == 1 )
  {
    if ( (*(_DWORD *)(v5 + 28) & 0x80u) != 0 && *(_DWORD *)(v5 + 184) || (*(_DWORD *)(v5 + 28) & 0x40) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(a1);
        WdLogGlobalForLineNumber = 2232;
      }
      return 3221225473LL;
    }
  }
  else if ( a4 == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(a1);
      WdLogGlobalForLineNumber = 2223;
    }
    return 3221225473LL;
  }
  if ( a4 == 2 && *(_DWORD *)(v6 + 108) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(a1);
      WdLogGlobalForLineNumber = 2245;
    }
  }
  else
  {
    if ( *(int *)(v5 + 184) > 0 && *(_DWORD *)(v6 + 108) == 1 )
    {
      if ( *(_BYTE *)(v5 + 40) )
      {
        v9 = a1 + 56;
        a1 = **(unsigned int **)(v5 + 368);
        if ( (a1 & 4) != 0 && (a1 = *(_QWORD *)(*(_QWORD *)v9 + 24LL), (*(_DWORD *)(a1 + 444) & 8) == 0)
          || (*(_DWORD *)(v6 + 64) & 0x2004) == 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(a1);
            WdLogGlobalForLineNumber = 2270;
            v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10);
            v11[3] = (**(_DWORD **)(v5 + 368) >> 2) & 1;
            v11[4] = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 24LL) + 444LL) >> 3) & 1;
            v11[5] = (*(_DWORD *)(v6 + 64) >> 2) & 1;
            v11[6] = (*(_DWORD *)(v6 + 64) >> 13) & 1;
            WdLogGlobalForLineNumber = 2276;
          }
          return 3221225473LL;
        }
      }
      else if ( a4 != 1 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(a1);
          WdLogGlobalForLineNumber = 2285;
        }
        return 3221225473LL;
      }
    }
    v7 = *(_DWORD *)((char *)a2 + (-(__int64)(a5 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 40);
    if ( _bittest(&v7, a3) )
      return 0LL;
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(a1);
      WdLogGlobalForLineNumber = 2299;
    }
  }
  return 3221225473LL;
}
