/*
 * XREFs of ??_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z @ 0x18014ED10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DTexture@@MEAA@XZ @ 0x18014ED58 (--1CD3DTexture@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CD3DVidMemOnlyTexture *__fastcall CD3DVidMemOnlyTexture::`vector deleting destructor'(
        CD3DVidMemOnlyTexture *this,
        char a2)
{
  *(_QWORD *)this = &CD3DVidMemOnlyTexture::`vftable';
  CD3DTexture::~CD3DTexture(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x100uLL);
  return this;
}
