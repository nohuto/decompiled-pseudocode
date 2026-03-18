/*
 * XREFs of TrimMarkedForEvictionAllocations @ 0x14009B0D4
 * Callers:
 *     ?TrimMarkedForEvictionAllocations@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAX_K@Z @ 0x1400B28B0 (-TrimMarkedForEvictionAllocations@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAX_K@Z.c)
 *     PageInAllocation_0 @ 0x1400D2924 (PageInAllocation_0.c)
 * Callees:
 *     ?TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z @ 0x14009B2F8 (-TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z.c)
 */

__int64 __fastcall TrimMarkedForEvictionAllocations(__int64 a1, unsigned __int64 a2)
{
  unsigned __int16 i; // bx
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  for ( i = 0; ; ++i )
  {
    result = i;
    if ( (unsigned int)i >= *(_DWORD *)(a1 + 136) )
      break;
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 1752) + 8LL * i);
    if ( *(_DWORD *)(v5 + 108) != 1 && *(_QWORD *)(v5 + 264) != v5 + 264 )
    {
      VIDMM_SEGMENT::TrimMarkedForEvictionAllocations((VIDMM_SEGMENT *)v5, &v6);
      if ( !v6 )
      {
        result = *(_QWORD *)&g_IsInternalReleaseOrDbg;
        if ( g_IsInternalReleaseOrDbg )
        {
          result = WdLogNewEntry5_WdTrace();
          WdLogGlobalForLineNumber = 1463;
        }
        return result;
      }
    }
  }
  return result;
}
