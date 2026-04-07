/*
 * XREFs of ??1CIconicBitmapRegistry@@UEAA@XZ @ 0x1800B6738
 * Callers:
 *     ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x1800AA350 (--_ECIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CIconicBitmapRegistry::~CIconicBitmapRegistry(CIconicBitmapRegistry *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CIconicBitmapRegistry::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v2 )
    CBaseObject::Release(v2);
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 6);
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 2);
}
