/*
 * XREFs of ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x1800B7788
 * Callers:
 *     ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x1800B72E0 (-RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@H.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x18008A828 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800B70C4 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA_ea_1800B70C4.c)
 *     ?GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA?AW4IconicRepresentationType@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800B70EC (-GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistr.c)
 *     ?GetIconicRepresentationTypeFromSize@CImmersiveIconicBitmapRegistry@@QEAA?AW4IconicRepresentationType@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800B7190 (-GetIconicRepresentationTypeFromSize@CImmersiveIconicBitmapRegistry@@QEAA-AW4IconicRepresentatio.c)
 *     ?_RequestBitmap@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B78E0 (-_RequestBitmap@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@W4IconicRepr.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::_RegisterIconicRepresentation(
        CImmersiveIconicBitmapRegistry *this,
        struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *a2,
        HWND a3,
        int a4,
        enum DEVICE_SCALE_FACTOR a5,
        bool a6,
        enum IconicRepresentationType *a7,
        enum IconicRepresentationType *a8)
{
  unsigned int v12; // esi
  unsigned int IconicRepresentationTypeFromSize; // eax
  unsigned int v14; // ebx
  unsigned int IconicRepresentationTypeClosestToSize; // eax
  int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  int v20; // r8d

  v12 = 0;
  IconicRepresentationTypeFromSize = CImmersiveIconicBitmapRegistry::GetIconicRepresentationTypeFromSize(
                                       (__int64)this,
                                       a4,
                                       a5);
  v14 = IconicRepresentationTypeFromSize;
  if ( a6
    && !CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
          a2,
          IconicRepresentationTypeFromSize,
          a5) )
  {
    IconicRepresentationTypeClosestToSize = CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetIconicRepresentationTypeClosestToSize(
                                              a2,
                                              a4,
                                              a5);
    if ( IconicRepresentationTypeClosestToSize != 5 )
      v14 = IconicRepresentationTypeClosestToSize;
  }
  if ( a8 )
    *(_DWORD *)a8 = v14;
  if ( *((_BYTE *)a2 + 40)
    || CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(a2, v14, a5) )
  {
    if ( *((_BYTE *)a2 + 40) )
      v14 = 1;
  }
  else
  {
    v16 = CImmersiveIconicBitmapRegistry::_RequestBitmap(this, a2, v14, (unsigned int)a5);
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x99u, 0LL);
      return v12;
    }
    v14 = 1;
  }
  *(_DWORD *)a7 = v14;
  ++*((_DWORD *)a2 + 11);
  v17 = v14 - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( !v18 )
    {
      v20 = 6;
      goto LABEL_22;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v20 = 7;
      goto LABEL_22;
    }
    if ( v19 == 1 )
    {
      v20 = 8;
      goto LABEL_22;
    }
  }
  v20 = 9;
LABEL_22:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(1LL, (int)&UdwmSelectIconicRepresentation_Info, v20, a3);
  return v12;
}
