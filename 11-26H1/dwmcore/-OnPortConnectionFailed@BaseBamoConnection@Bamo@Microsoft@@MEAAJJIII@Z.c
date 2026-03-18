/*
 * XREFs of ?OnPortConnectionFailed@BaseBamoConnection@Bamo@Microsoft@@MEAAJJIII@Z @ 0x180240550
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x180241188 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::OnPortConnectionFailed(
        Microsoft::Bamo::BaseBamoConnection *this,
        int a2)
{
  Microsoft::Bamo::BaseBamoConnection::TrackError(this, a2);
  return 0LL;
}
