/*
 * XREFs of ??1CSpriteShapeMarshaler@DirectComposition@@UEAA@XZ @ 0x140116A38
 * Callers:
 *     ??_ECSpriteShapeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140116A00 (--_ECSpriteShapeMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall DirectComposition::CSpriteShapeMarshaler::~CSpriteShapeMarshaler(
        DirectComposition::CSpriteShapeMarshaler *this)
{
  char *v1; // rcx

  *(_QWORD *)this = &DirectComposition::CSpriteShapeMarshaler::`vftable';
  v1 = (char *)*((_QWORD *)this + 11);
  if ( v1 )
    GreDeleteFastMutex(v1);
}
