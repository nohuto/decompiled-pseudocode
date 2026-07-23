/*
 * XREFs of CcRecalculateVacbArrayHighwaterMark @ 0x1404095E4
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x140408E70 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x140408F40 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall CcRecalculateVacbArrayHighwaterMark(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 8) + 1;
  if ( *(_DWORD *)(a1 + 8) != -1 )
  {
    do
    {
      if ( *(_QWORD *)(a1 + 40LL * (unsigned int)--v1 + 24) )
        break;
      *(_DWORD *)(a1 + 8) = v1;
    }
    while ( v1 );
  }
}
