/*
 * XREFs of ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x1800B87A4
 * Callers:
 *     ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x1800B8324 (-RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@H.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800972A4 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800B80F8 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA_ea_1800B80F8.c)
 *     ?GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA?AW4IconicRepresentationType@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800B8120 (-GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistr.c)
 *     ?GetIconicRepresentationTypeFromSize@CImmersiveIconicBitmapRegistry@@QEAA?AW4IconicRepresentationType@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800B81D4 (-GetIconicRepresentationTypeFromSize@CImmersiveIconicBitmapRegistry@@QEAA-AW4IconicRepresentatio.c)
 *     ?_RequestBitmap@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B8904 (-_RequestBitmap@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@W4IconicRepr.c)
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
  __int64 v17; // r8

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
  if ( *(_DWORD *)a7 != 1 )
  {
    switch ( *(_DWORD *)a7 )
    {
      case 2:
        v17 = 6LL;
        goto LABEL_22;
      case 3:
        v17 = 7LL;
        goto LABEL_22;
      case 4:
        v17 = 8LL;
        goto LABEL_22;
    }
  }
  v17 = 9LL;
LABEL_22:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer((__int64)a7, (__int64)&UdwmSelectIconicRepresentation_Info, v17, a3);
  return v12;
}
