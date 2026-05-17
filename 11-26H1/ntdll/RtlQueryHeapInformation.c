/*
 * XREFs of RtlQueryHeapInformation @ 0x180091560
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x180090DF0 (RtlQueryProcessHeapInformation.c)
 *     RtlpGetHeapTag @ 0x18009174C (RtlpGetHeapTag.c)
 *     RtlpReadProcessHeaps @ 0x1800C501C (RtlpReadProcessHeaps.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180144D20 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpStackTraceEtwCallback @ 0x18014F9F0 (RtlpHpStackTraceEtwCallback.c)
 * Callees:
 *     RtlpQueryExtendedHeapInformation @ 0x180092520 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpTagQueryTags @ 0x1800EB628 (RtlpHpTagQueryTags.c)
 *     RtlpQueryMemoryUsageInformation @ 0x18011E7F4 (RtlpQueryMemoryUsageInformation.c)
 *     RtlpHpStackTraceSerialize @ 0x1801223E0 (RtlpHpStackTraceSerialize.c)
 */

__int64 __fastcall RtlQueryHeapInformation(__int64 a1, int a2, _QWORD *a3, unsigned __int64 a4, _QWORD *a5)
{
  unsigned int v6; // r9d
  unsigned int v7; // r9d

  if ( a2 == -2147483647 )
  {
    if ( a4 >= 8 )
    {
      *a3 = &RtlpHeapFailureInfo;
      v7 = 0;
      if ( a5 )
        *a5 = 8LL;
    }
    else
    {
      if ( a5 )
        *a5 = 8LL;
      return (unsigned int)-1073741789;
    }
    return v7;
  }
  else
  {
    v6 = 0;
    if ( a2 )
    {
      switch ( a2 )
      {
        case 8:
          return RtlpQueryMemoryUsageInformation(a1, a3, a4, a5);
        case 7:
          if ( !a1 || !a3 || *(_DWORD *)(a1 + 16) != -571548178 )
            return (unsigned int)-1073741811;
          if ( a5 )
            *a5 = 8LL;
          if ( a4 == 8 )
            *a3 = *(_QWORD *)(a1 + 104);
          else
            return (unsigned int)-1073741811;
          return v6;
        case 5:
          return RtlpHpStackTraceSerialize(a3, a4, a5, 0LL);
        case 1:
          if ( a5 )
            *a5 = 4LL;
          if ( a4 >= 4 )
          {
            LOBYTE(v6) = RtlpDisableBreakOnFailureCookie == 0;
            *(_DWORD *)a3 = v6;
            return 0LL;
          }
          else
          {
            return 3221225507LL;
          }
        case 2:
          if ( a4 >= 0x58 )
            return RtlpQueryExtendedHeapInformation(a3, a4, a5, 0LL);
          else
            return 3221225485LL;
        case 4:
          return RtlpHpTagQueryTags(a3);
        default:
          return 3221225485LL;
      }
    }
    else if ( *(_DWORD *)(a1 + 16) == -571548178 || (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
    {
      if ( a4 >= 4 )
      {
        if ( *(_DWORD *)(a1 + 16) == -571548178 )
          *(_DWORD *)a3 = 2;
        else
          *(_DWORD *)a3 = *(unsigned __int8 *)(a1 + 419);
        if ( a5 )
          *a5 = 4LL;
        return 0LL;
      }
      else
      {
        if ( a5 )
          *a5 = 4LL;
        return 3221225507LL;
      }
    }
    else
    {
      return 3221225474LL;
    }
  }
}
