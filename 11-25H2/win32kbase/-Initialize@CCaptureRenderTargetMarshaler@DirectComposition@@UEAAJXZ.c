/*
 * XREFs of ?Initialize@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJXZ @ 0x1401994B0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledDeviceUsageNoInline @ 0x14023B730 (Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::Initialize(
        DirectComposition::CCaptureRenderTargetMarshaler *this)
{
  *((_DWORD *)this + 30) = 1;
  *((_BYTE *)this + 124) = 1;
  if ( (unsigned int)Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledDeviceUsageNoInline() )
    *((_DWORD *)this + 29) = 16;
  return 0LL;
}
