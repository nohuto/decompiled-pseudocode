/*
 * XREFs of ?FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x18007A0E4
 * Callers:
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18007D428 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindDxgiOutputDescriptor@CDWMDXGIAdapter@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x18007A174 (-FindDxgiOutputDescriptor@CDWMDXGIAdapter@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z.c)
 */

__int64 __fastcall CDWMDXGIEnumeration::FindDxgiOutputDescriptor(
        CDWMDXGIEnumeration *this,
        HMONITOR a2,
        struct DXGIOutputInfo *a3)
{
  unsigned int v3; // ebp
  unsigned int v7; // ebx
  __int64 i; // rdi
  int DxgiOutputDescriptor; // eax

  v3 = *((_DWORD *)this + 20);
  v7 = -2147024809;
  for ( i = 0LL; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
  {
    DxgiOutputDescriptor = CDWMDXGIAdapter::FindDxgiOutputDescriptor(
                             *(CDWMDXGIAdapter **)(*((_QWORD *)this + 7) + 8 * i),
                             a2,
                             a3);
    v7 = DxgiOutputDescriptor;
    if ( DxgiOutputDescriptor >= 0 )
      break;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DxgiOutputDescriptor, 0xB5u, 0LL);
  }
  return v7;
}
