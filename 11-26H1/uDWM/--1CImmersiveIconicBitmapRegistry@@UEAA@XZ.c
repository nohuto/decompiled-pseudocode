/*
 * XREFs of ??1CImmersiveIconicBitmapRegistry@@UEAA@XZ @ 0x1800B6D40
 * Callers:
 *     ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x1800AA3A0 (--_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x18003D848 (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x1800B6DF4 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::~CImmersiveIconicBitmapRegistry(
        CImmersiveIconicBitmapRegistry *this,
        unsigned int a2)
{
  __int64 *v3; // rdi
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v4; // rcx

  *(_QWORD *)this = &CImmersiveIconicBitmapRegistry::`vftable';
  v3 = (__int64 *)((char *)this + 16);
  while ( *((_DWORD *)this + 10) )
  {
    v4 = *(CImmersiveIconicBitmapRegistry::CImmersiveIconicResource **)*v3;
    if ( v4 )
      CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v4, a2);
    DynArray<CAnimationComponent *,0>::RemoveAt(v3, 0);
  }
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 6);
  CBitmapSourceArray::~CBitmapSourceArray((void **)v3);
}
