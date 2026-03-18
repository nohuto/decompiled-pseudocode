/*
 * XREFs of ??1CCombinedGeometry@@MEAA@XZ @ 0x18019F83C
 * Callers:
 *     ??_ECCombinedGeometry@@MEAAPEAXI@Z @ 0x18019F7F0 (--_ECCombinedGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x18019F890 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x18019F8D8 (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 */

void __fastcall CCombinedGeometry::~CCombinedGeometry(CCombinedGeometry *this)
{
  CCyclicResourceListEntry *v2; // rbx

  *(_QWORD *)this = &CCombinedGeometry::`vftable'{for `CGeometry'};
  v2 = (CCombinedGeometry *)((char *)this + 136);
  *((_QWORD *)this + 17) = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  CCombinedGeometry::UnRegisterNotifiers(this);
  CCyclicResourceListEntry::~CCyclicResourceListEntry(v2);
  CGeometry::~CGeometry((struct CResource **)this);
}
