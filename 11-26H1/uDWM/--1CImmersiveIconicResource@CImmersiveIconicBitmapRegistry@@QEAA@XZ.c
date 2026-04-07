/*
 * XREFs of ??1CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA@XZ @ 0x1800B6DA4
 * Callers:
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x1800B6DF4 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::~CImmersiveIconicResource(
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *this)
{
  __int64 i; // rbx
  CBaseObject *v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
  {
    v3 = *(CBaseObject **)(*((_QWORD *)this + 1) + 8 * i);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 1);
}
