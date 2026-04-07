/*
 * XREFs of ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x18005867C
 * Callers:
 *     ??$TryAppendAllRectangles@V?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@Z @ 0x18005850C (--$TryAppendAllRectangles@V-$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@Uta.c)
 * Callees:
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180063E54 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 */

__int64 __fastcall FastRegion::CRegion::BeginIterator(_DWORD **a1, __int64 a2)
{
  __int64 v2; // r10
  _DWORD *v3; // rdx
  __int64 v4; // rcx
  FastRegion::Internal::CRgnData *v5; // rcx
  __int64 v6; // rdx

  v2 = a2;
  v3 = *a1;
  *(_QWORD *)v2 = *a1;
  if ( *v3 )
  {
    *(_QWORD *)(v2 + 8) = &v3[2 * *v3 + 1];
    *(_QWORD *)(v2 + 16) = v3 + 3;
    v4 = (int)v3[4] + 12LL;
    *(_DWORD *)(v2 + 32) = 0;
    v5 = (FastRegion::Internal::CRgnData *)((char *)v3 + v4);
    *(_QWORD *)(v2 + 24) = v5;
    v6 = ((__int64)v3 + (int)v3[6] - (_QWORD)v5 + 20) >> 3;
    *(_DWORD *)(v2 + 36) = v6;
    if ( (int)v6 <= 0 )
      FastRegion::Internal::CRgnData::StepIterator(v5, (struct FastRegion::CRegion::Iterator *)v2);
  }
  else
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
  }
  return v2;
}
