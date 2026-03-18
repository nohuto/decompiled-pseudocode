/*
 * XREFs of ?PresentRateSupportsOverlay@CGlobalCompositionSurfaceInfo@@UEAA_NXZ @ 0x1801FE340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalCompositionSurfaceInfo::PresentRateSupportsOverlay(CGlobalCompositionSurfaceInfo *this)
{
  unsigned __int64 v1; // r9
  unsigned __int64 v2; // r10
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 299) )
  {
    v4 = CCommonRegistryData::OverlayMinFPSToKeep;
  }
  else
  {
    v1 = *((_QWORD *)this + 35);
    if ( v1 )
    {
      v2 = *((_QWORD *)g_pComposition + 37);
      if ( v2 >= v1
        && v2 - v1 <= g_qpcFrequency.QuadPart
                    * (unsigned __int64)(unsigned int)CCommonRegistryData::OverlayDebounceTimeMs
                    / 0x3E8 )
      {
        return 0;
      }
    }
    v4 = CCommonRegistryData::OverlayMinFPSToEnable;
  }
  if ( !v4 )
    return 1;
  v5 = *((_QWORD *)this + 4);
  v6 = 0;
  NtQueryCompositionSurfaceFrameRate(v5, &v6);
  return v6 >= v4;
}
