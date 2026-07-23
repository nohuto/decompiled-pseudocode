/*
 * XREFs of IoRecordIoAttribution @ 0x1402078B0
 * Callers:
 *     <none>
 * Callees:
 *     IopFindDiskIoAttribution @ 0x140207950 (IopFindDiskIoAttribution.c)
 *     IopRecordIoAttribution @ 0x140207A74 (IopRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x14021EF64 (IoDiskIoAttributionDereference.c)
 */

__int64 __fastcall IoRecordIoAttribution(__int64 a1, _DWORD *a2)
{
  __int64 DiskIoAttribution; // rax
  __int64 v4; // rsi
  __int64 i; // rdi
  int v6; // eax
  int v7; // ebx

  if ( *a2 == 1 )
  {
    DiskIoAttribution = IopFindDiskIoAttribution(a1, a2);
    v4 = DiskIoAttribution;
    if ( DiskIoAttribution )
    {
      for ( i = DiskIoAttribution; i; i = *(_QWORD *)(i + 176) )
      {
        v6 = a2[1];
        if ( (v6 & 0x800) == 0 || (v6 & 0x200) != 0 || *(_QWORD *)(i + 176) )
        {
          v7 = IopRecordIoAttribution(i, a2, 0LL);
          if ( v7 < 0 )
            goto LABEL_9;
        }
      }
      v7 = 0;
LABEL_9:
      IoDiskIoAttributionDereference(v4);
    }
    else
    {
      return (unsigned int)-1073741816;
    }
  }
  else
  {
    return (unsigned int)-1073741735;
  }
  return (unsigned int)v7;
}
