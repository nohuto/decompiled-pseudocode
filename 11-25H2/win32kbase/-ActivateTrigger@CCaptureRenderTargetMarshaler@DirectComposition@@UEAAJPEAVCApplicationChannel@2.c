/*
 * XREFs of ?ActivateTrigger@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEA_N@Z @ 0x14023B4D0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Capture_RequestFrameAPI__private_IsEnabledDeviceUsageNoInline @ 0x14023B784 (Feature_Capture_RequestFrameAPI__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::ActivateTrigger(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        bool *a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  *a4 = 0;
  if ( a3 == 10 && (unsigned int)Feature_Capture_RequestFrameAPI__private_IsEnabledDeviceUsageNoInline(this, a2) )
  {
    *((_DWORD *)this + 4) |= 0x4000u;
    *a4 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
