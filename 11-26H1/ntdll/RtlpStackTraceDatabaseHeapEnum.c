/*
 * XREFs of RtlpStackTraceDatabaseHeapEnum @ 0x180148900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpStackTraceDatabaseHeapEnum(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // r8d
  int v5; // eax

  if ( a1[4] != -571548178 )
  {
    v2 = a2[1];
    v3 = a1[28];
    if ( *a2 )
    {
      v4 = v2 | v3;
      v5 = a1[29];
      a1[28] = v4;
      a1[29] = a2[2] | v5;
    }
    else
    {
      a1[28] = v3 & ~v2;
      a1[29] &= ~a2[2];
    }
  }
  return 0LL;
}
