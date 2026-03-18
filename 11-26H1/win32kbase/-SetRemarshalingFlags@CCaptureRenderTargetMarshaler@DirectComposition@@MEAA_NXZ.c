/*
 * XREFs of ?SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x140245D50
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline @ 0x1402289DC (Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledDeviceUsageNoInline @ 0x140245E5C (Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CCaptureRenderTargetMarshaler *this)
{
  _DWORD *v1; // rax
  int *v3; // rcx
  int *v4; // rsi
  int *v5; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  int v7; // ecx
  int *v8; // rax
  bool result; // al

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 13) )
    *v1 |= 0x40u;
  if ( *((_QWORD *)this + 12) )
    *v1 |= 0x80u;
  v3 = (int *)((char *)this + 16);
  if ( *((_DWORD *)this + 16) || *((_DWORD *)this + 15) )
    *v1 |= 0x100u;
  if ( *((_BYTE *)this + 56) )
  {
    *v3 |= 0x400u;
    v4 = (int *)((char *)this + 16);
  }
  else
  {
    v4 = v3;
  }
  if ( *((float *)this + 28) == 0.0 )
  {
    v5 = v4;
  }
  else
  {
    v5 = (int *)((char *)this + 16);
    *v4 = *v3 | 0x800;
  }
  IsEnabledDeviceUsageNoInline = Feature_Capture_MinUpdateIntervalDefaultValue__private_IsEnabledDeviceUsageNoInline();
  v7 = *((_DWORD *)this + 29);
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( v7 != 16 )
    {
      *v5 = *v4 | 0x1000;
      v5 = (int *)((char *)this + 16);
    }
  }
  else if ( v7 )
  {
    *v5 |= 0x1000u;
  }
  if ( *((_DWORD *)this + 30) == 1 )
  {
    v8 = v5;
  }
  else
  {
    *v5 |= 0x2000u;
    v8 = (int *)((char *)this + 16);
  }
  if ( !*((_BYTE *)this + 124) )
  {
    *v5 |= 0x4000u;
    v5 = v8;
  }
  if ( (unsigned int)Feature_Capture_WindowExclusionBackport__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *((_QWORD *)this + 17) )
      *v5 |= 0x10000u;
    if ( *((_QWORD *)this + 18) )
      *v5 |= 0x20000u;
  }
  *v5 &= ~0x200u;
  result = 1;
  *((_QWORD *)this + 10) = 0LL;
  return result;
}
