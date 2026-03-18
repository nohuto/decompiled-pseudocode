/*
 * XREFs of ??_ECCachedTexture@@MEAAPEAXI@Z @ 0x1802B15D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CCachedTexture@@MEAA@XZ @ 0x1802B14DC (--1CCachedTexture@@MEAA@XZ.c)
 */

CCachedTexture *__fastcall CCachedTexture::`vector deleting destructor'(CCachedTexture *this, char a2)
{
  CCachedTexture::~CCachedTexture(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
