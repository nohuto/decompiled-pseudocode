/*
 * XREFs of ?ReleaseAllReferences@CSpriteShapeMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140059B00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x140022208 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CSnapshotMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140059B60 (-ReleaseAllReferences@CSnapshotMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CSpriteShapeMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[8]);
  v4 = this[9];
  this[8] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  v5 = this[10];
  this[9] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
  this[10] = 0LL;
  DirectComposition::CSnapshotMarshaler::ReleaseAllReferences((DirectComposition::CSnapshotMarshaler *)this, a2);
}
