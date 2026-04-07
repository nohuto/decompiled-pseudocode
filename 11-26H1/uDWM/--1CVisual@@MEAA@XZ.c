/*
 * XREFs of ??1CVisual@@MEAA@XZ @ 0x18001BC80
 * Callers:
 *     ??1CContainerVisual@@MEAA@XZ @ 0x18001BAC0 (--1CContainerVisual@@MEAA@XZ.c)
 *     ??1CClientArea@@MEAA@XZ @ 0x18006028C (--1CClientArea@@MEAA@XZ.c)
 *     ??_ECVisual@@MEAAPEAXI@Z @ 0x180069000 (--_ECVisual@@MEAAPEAXI@Z.c)
 *     ??_ECWindowTarget@@UEAAPEAXI@Z @ 0x1800A95D0 (--_ECWindowTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CVisual::~CVisual(CVisual *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CVisual::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 6) = 0LL;
  }
  CBaseObject::~CBaseObject(this);
}
