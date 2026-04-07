/*
 * XREFs of ?v_ShouldIncludeInSnapshot@CDCompDesktopThumbnail@@UEAA_NPEAVCWindowData@@@Z @ 0x1800AE4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CDCompDesktopThumbnail::v_ShouldIncludeInSnapshot(CDCompDesktopThumbnail *this, struct CWindowData *a2)
{
  unsigned int v2; // r9d
  __int64 i; // r8
  __int64 v4; // r10

  if ( (*((_BYTE *)a2 + 740) & 1) != 0 )
    return 0;
  v2 = *((_DWORD *)a2 + 140);
  if ( v2 )
  {
    for ( i = 0LL; (unsigned int)i < v2; i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(*((_QWORD *)a2 + 67) + 8 * i);
      if ( *(_BYTE *)(v4 + 34) && *(_DWORD *)(v4 + 120) == 1 )
        return 0;
    }
  }
  return 1;
}
