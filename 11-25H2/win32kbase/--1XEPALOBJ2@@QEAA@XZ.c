/*
 * XREFs of ??1XEPALOBJ2@@QEAA@XZ @ 0x1401C58F8
 * Callers:
 *     bDeletePalette @ 0x1400C0AD0 (bDeletePalette.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1760 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall XEPALOBJ2::~XEPALOBJ2(struct _BASEOBJECT **this)
{
  struct _BASEOBJECT *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    HmgDecrementShareReferenceCountEx(v2, 0LL);
    *this = 0LL;
  }
  PopThreadGuardedObject(this + 1);
}
