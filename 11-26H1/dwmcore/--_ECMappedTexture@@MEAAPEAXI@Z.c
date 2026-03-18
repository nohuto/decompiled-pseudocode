/*
 * XREFs of ??_ECMappedTexture@@MEAAPEAXI@Z @ 0x1802B8860
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CMappedTexture@@MEAA@XZ @ 0x1802B881C (--1CMappedTexture@@MEAA@XZ.c)
 */

CMappedTexture *__fastcall CMappedTexture::`vector deleting destructor'(CMappedTexture *this, char a2)
{
  CMappedTexture::~CMappedTexture(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
