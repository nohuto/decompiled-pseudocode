/*
 * XREFs of ?GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA?AW4IconicRepresentationType@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800B70EC
 * Callers:
 *     ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x1800B7788 (-_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource.c)
 * Callees:
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800B70C4 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA_ea_1800B70C4.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetIconicRepresentationTypeClosestToSize(
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *a1,
        int a2,
        unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int *v6; // rdi
  int v8; // ebp
  __int64 v9; // rbx
  struct CBitmapSource *BitmapSourceNoRef; // rax
  int v11; // eax
  int v12; // ecx
  _DWORD v14[10]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 5;
  v14[0] = 2;
  v14[2] = 4;
  v6 = v14;
  v8 = 0x7FFFFFFF;
  v9 = 3LL;
  v14[1] = 3;
  do
  {
    BitmapSourceNoRef = CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(a1, *v6, a3);
    if ( BitmapSourceNoRef )
    {
      v11 = *((_DWORD *)BitmapSourceNoRef + 32) - a2;
      v12 = -v11;
      if ( v11 > 0 )
        v12 = v11;
      if ( v12 < v8 )
      {
        v3 = *v6;
        v8 = v12;
      }
    }
    ++v6;
    --v9;
  }
  while ( v9 );
  return v3;
}
