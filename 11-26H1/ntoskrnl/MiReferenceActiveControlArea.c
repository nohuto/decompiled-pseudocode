/*
 * XREFs of MiReferenceActiveControlArea @ 0x1402EDCE4
 * Callers:
 *     MiReferenceControlArea @ 0x1404694F0 (MiReferenceControlArea.c)
 *     MiReferenceExistingControlArea @ 0x14049E0E0 (MiReferenceExistingControlArea.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x1402EDD50 (MiRemoveUnusedSegment.c)
 */

__int64 __fastcall MiReferenceActiveControlArea(_DWORD *a1, __int64 a2)
{
  __int64 *v4; // rdx
  __int64 *v6; // r8

  v4 = *(__int64 **)(a2 + 80);
  if ( v4 )
  {
    do
    {
      v6 = (__int64 *)*v4;
      if ( (v4[1] & 4) != 0 )
        *((_DWORD *)v4 + 3) = 1;
      v4 = v6;
    }
    while ( v6 );
  }
  ++*(_QWORD *)(a2 + 24);
  MiRemoveUnusedSegment(a2);
  if ( (*a1 & 1) != 0 )
    *(_DWORD *)(a2 + 56) |= 0x8000u;
  else
    ++*(_QWORD *)(a2 + 48);
  return 0LL;
}
