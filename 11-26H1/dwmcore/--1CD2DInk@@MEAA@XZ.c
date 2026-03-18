/*
 * XREFs of ??1CD2DInk@@MEAA@XZ @ 0x1802A9280
 * Callers:
 *     ??_ECD2DInk@@MEAAPEAXI@Z @ 0x1802A92C0 (--_ECD2DInk@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 */

void __fastcall CD2DInk::~CD2DInk(CD2DInk *this)
{
  *(_QWORD *)this = &CD2DInk::`vftable';
  ReleaseInterfaceNoNULL<ID2D1Ink>(*((_QWORD *)this + 9));
  ReleaseInterfaceNoNULL<ID2D1Ink>(*((_QWORD *)this + 10));
  CD2DResource::~CD2DResource(this);
}
