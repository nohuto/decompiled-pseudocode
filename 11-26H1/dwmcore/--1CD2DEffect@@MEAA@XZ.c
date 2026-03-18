/*
 * XREFs of ??1CD2DEffect@@MEAA@XZ @ 0x1801CC98C
 * Callers:
 *     ??_GCD2DEffect@@MEAAPEAXI@Z @ 0x1801CC950 (--_GCD2DEffect@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 */

void __fastcall CD2DEffect::~CD2DEffect(CD2DEffect *this)
{
  *(_QWORD *)this = &CD2DEffect::`vftable';
  ReleaseInterfaceNoNULL<ID2D1Ink>(*((_QWORD *)this + 9));
  CD2DResource::~CD2DResource(this);
}
