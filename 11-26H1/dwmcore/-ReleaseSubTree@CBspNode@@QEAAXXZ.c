/*
 * XREFs of ?ReleaseSubTree@CBspNode@@QEAAXXZ @ 0x18019DFF8
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180073624 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 *     ??1CBspNode@@EEAA@XZ @ 0x18019DF7C (--1CBspNode@@EEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x1800AD3DC (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 */

void __fastcall CBspNode::ReleaseSubTree(CBspNode *this)
{
  ReleaseInterface<CPolygon>((__int64 *)this + 2);
  ReleaseInterface<CPolygon>((__int64 *)this + 3);
}
