/*
 * XREFs of ??1CapturedWindowRepresentation@@MEAA@XZ @ 0x18009BEE4
 * Callers:
 *     ??_GCapturedWindowRepresentation@@MEAAPEAXI@Z @ 0x18009BFC0 (--_GCapturedWindowRepresentation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180008110 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_GSecondaryWindow@CapturedWindowRepresentation@@QEAAPEAXI@Z @ 0x18009BFFC (--_GSecondaryWindow@CapturedWindowRepresentation@@QEAAPEAXI@Z.c)
 */

void __fastcall CapturedWindowRepresentation::~CapturedWindowRepresentation(
        CapturedWindowRepresentation *this,
        unsigned int a2)
{
  __int64 v3; // rsi
  char *i; // rdi
  CapturedWindowRepresentation::SecondaryWindow *v5; // rcx

  *(_QWORD *)this = &CapturedWindowRepresentation::`vftable';
  v3 = 0LL;
  for ( i = (char *)this + 48; (unsigned int)v3 < *((_DWORD *)this + 18); v3 = (unsigned int)(v3 + 1) )
  {
    v5 = *(CapturedWindowRepresentation::SecondaryWindow **)(*(_QWORD *)i + 8 * v3);
    if ( v5 )
      CapturedWindowRepresentation::SecondaryWindow::`scalar deleting destructor'(v5, a2);
  }
  *((_DWORD *)i + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)i, 8u);
  CBitmapSourceArray::~CBitmapSourceArray((void **)i);
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)this + 5);
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)this + 4);
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)this + 3);
  CBaseObject::~CBaseObject(this);
}
