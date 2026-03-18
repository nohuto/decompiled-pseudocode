/*
 * XREFs of ?SetBufferProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140155EF0
 * Callers:
 *     ?SetBufferProperty@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14023B990 (-SetBufferProperty@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCAppl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetBufferProperty(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  __int64 v8; // rcx

  result = 0LL;
  *a6 = 0;
  if ( a3 != 2 || a5 != 8 )
    return 3221225485LL;
  v8 = *a4;
  *((_DWORD *)this + 4) |= 0x80u;
  *(_QWORD *)((char *)this + 60) = v8;
  *a6 = 1;
  return result;
}
