/*
 * XREFs of ?InRegion@ThreadRestrictNewHandlesRegion@@QEAA_NI@Z @ 0x1400D0078
 * Callers:
 *     ?Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z @ 0x1401C5120 (-Protect@ThreadRestrictNewHandlesRegion@@SA_NPEAU_GRETHREAD@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ThreadRestrictNewHandlesRegion::InRegion(ThreadRestrictNewHandlesRegion *this, int a2)
{
  unsigned __int64 i; // r8

  for ( i = 0LL; i < *((_QWORD *)this + 4); ++i )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 5) + 4 * i) == a2 )
      return 1;
  }
  return 0;
}
