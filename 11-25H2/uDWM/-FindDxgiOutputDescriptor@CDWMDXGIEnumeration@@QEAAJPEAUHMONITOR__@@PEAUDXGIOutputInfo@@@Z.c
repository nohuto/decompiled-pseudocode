/*
 * XREFs of ?FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x18008BE84
 * Callers:
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x180094068 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSI.c)
 *     ?IsMonitorVirtual@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1800AD150 (-IsMonitorVirtual@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindDxgiOutputDescriptor@CDWMDXGIAdapter@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x18008BF10 (-FindDxgiOutputDescriptor@CDWMDXGIAdapter@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z.c)
 */

__int64 __fastcall CDWMDXGIEnumeration::FindDxgiOutputDescriptor(
        CDWMDXGIEnumeration *this,
        HMONITOR a2,
        struct DXGIOutputInfo *a3)
{
  unsigned int v3; // ebp
  unsigned int v7; // ebx
  __int64 v8; // rdi
  int DxgiOutputDescriptor; // eax

  v3 = *((_DWORD *)this + 20);
  v7 = -2147024809;
  v8 = 0LL;
  while ( (unsigned int)v8 < v3 )
  {
    DxgiOutputDescriptor = CDWMDXGIAdapter::FindDxgiOutputDescriptor(
                             *(CDWMDXGIAdapter **)(*((_QWORD *)this + 7) + 8 * v8),
                             a2,
                             a3);
    v8 = (unsigned int)(v8 + 1);
    v7 = DxgiOutputDescriptor;
    if ( DxgiOutputDescriptor >= 0 )
      break;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DxgiOutputDescriptor, 0xB5u, 0LL);
  }
  return v7;
}
