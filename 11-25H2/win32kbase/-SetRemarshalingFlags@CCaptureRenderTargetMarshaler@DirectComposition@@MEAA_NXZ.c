/*
 * XREFs of ?SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x14023B630
 * Callers:
 *     ?SetRemarshalingFlags@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x14023BAC0 (-SetRemarshalingFlags@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledDeviceUsageNoInline @ 0x14023B730 (Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CCaptureRenderTargetMarshaler *this)
{
  int *v2; // rdx
  int *v3; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  int v5; // ecx
  bool v6; // zf
  bool result; // al

  if ( *((_QWORD *)this + 13) )
    *((_DWORD *)this + 4) |= 0x20u;
  v2 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 12) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_DWORD *)this + 16) || *((_DWORD *)this + 15) )
  {
    *v2 = *((_DWORD *)this + 4) | 0x80;
    v3 = (int *)((char *)this + 16);
  }
  else
  {
    v3 = (int *)((char *)this + 16);
  }
  if ( *((_BYTE *)this + 56) )
    *v3 = *v2 | 0x200;
  if ( *((float *)this + 28) != 0.0 )
    *v3 |= 0x400u;
  IsEnabledDeviceUsageNoInline = Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledDeviceUsageNoInline(
                                   v3,
                                   v2);
  v5 = *((_DWORD *)this + 29);
  if ( IsEnabledDeviceUsageNoInline )
    v6 = v5 == 16;
  else
    v6 = v5 == 0;
  if ( !v6 )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((_DWORD *)this + 30) != 1 )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( !*((_BYTE *)this + 124) )
    *((_DWORD *)this + 4) |= 0x2000u;
  *((_QWORD *)this + 10) = 0LL;
  result = 1;
  *((_DWORD *)this + 4) &= ~0x100u;
  return result;
}
