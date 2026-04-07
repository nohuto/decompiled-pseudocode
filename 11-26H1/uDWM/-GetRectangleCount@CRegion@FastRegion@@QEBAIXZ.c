/*
 * XREFs of ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800586FC
 * Callers:
 *     ??$TryAppendAllRectangles@V?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@Z @ 0x18005850C (--$TryAppendAllRectangles@V-$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@Uta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::CRegion::GetRectangleCount(int **this)
{
  int *v1; // rdx
  int *v2; // r8

  v1 = *this;
  if ( !**this )
    return 0LL;
  v2 = &v1[2 * *v1 + 1];
  return ((__int64)v2 + v2[1] - (__int64)v1[4] - (__int64)(v1 + 3)) >> 3;
}
