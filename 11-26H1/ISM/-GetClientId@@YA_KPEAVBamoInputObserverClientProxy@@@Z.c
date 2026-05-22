/*
 * XREFs of ?GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z @ 0x18013C2E0
 * Callers:
 *     ?RegisterObserverClient@?$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x18013C3E0 (-RegisterObserverClient@-$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub@@.c)
 *     ?UnregisterObserverClient@?$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x18013C4E0 (-UnregisterObserverClient@-$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub.c)
 * Callees:
 *     ?GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180068C78 (-GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 */

__int64 __fastcall GetClientId(struct BamoInputObserverClientProxy *a1)
{
  __int64 v1; // rbx

  v1 = *((unsigned int *)a1 + 10);
  return (v1 << 32) | (unsigned int)Microsoft::Bamo::BaseBamoPeer::GetPeerId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a1 + 4) + 16LL));
}
