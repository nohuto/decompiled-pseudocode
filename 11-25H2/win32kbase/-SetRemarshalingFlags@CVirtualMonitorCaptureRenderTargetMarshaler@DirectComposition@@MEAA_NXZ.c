/*
 * XREFs of ?SetRemarshalingFlags@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x14023BAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x14023B630 (-SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this)
{
  bool result; // al

  result = DirectComposition::CCaptureRenderTargetMarshaler::SetRemarshalingFlags(this);
  if ( *((_QWORD *)this + 23) )
  {
    *((_DWORD *)this + 4) |= 0x8000u;
    result = 1;
  }
  if ( *((_DWORD *)this + 38) || *((_DWORD *)this + 40) || *((_DWORD *)this + 39) || *((_DWORD *)this + 41) )
  {
    *((_DWORD *)this + 4) |= 0x10000u;
    return 1;
  }
  return result;
}
