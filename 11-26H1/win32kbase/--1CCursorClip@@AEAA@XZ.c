/*
 * XREFs of ??1CCursorClip@@AEAA@XZ @ 0x14008FA0C
 * Callers:
 *     UnInitializeInputComponents @ 0x1401B3AFC (UnInitializeInputComponents.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ @ 0x14008F720 (-Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ.c)
 */

void __fastcall CCursorClip::~CCursorClip(CCursorClip *this, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rcx

  v5 = (char *)*((_QWORD *)this + 32);
  if ( v5 )
    GreDeleteFastMutex(v5, a2, a3, a4);
  CCursorClip::DeadzoneJumping::Cleanup((char **)this + 34, a2, a3, a4);
}
