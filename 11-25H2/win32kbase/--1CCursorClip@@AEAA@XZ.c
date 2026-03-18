/*
 * XREFs of ??1CCursorClip@@AEAA@XZ @ 0x1400CFA3C
 * Callers:
 *     ?UnInitialize@CCursorClip@@SAJXZ @ 0x1400CF254 (-UnInitialize@CCursorClip@@SAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ @ 0x1400CFA70 (-Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ.c)
 */

void __fastcall CCursorClip::~CCursorClip(CCursorClip *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 32);
  if ( v2 )
    GreDeleteFastMutex(v2);
  CCursorClip::DeadzoneJumping::Cleanup((CCursorClip *)((char *)this + 272));
}
