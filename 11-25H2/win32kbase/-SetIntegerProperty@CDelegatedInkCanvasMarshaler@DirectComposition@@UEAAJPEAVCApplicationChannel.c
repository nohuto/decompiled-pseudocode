/*
 * XREFs of ?SetIntegerProperty@CDelegatedInkCanvasMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x14022E350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDelegatedInkCanvasMarshaler::SetIntegerProperty(
        DirectComposition::CDelegatedInkCanvasMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 != 1 )
    return 3221225485LL;
  if ( *((_QWORD *)this + 9) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *((_QWORD *)this + 9) = a4;
    *a5 = 1;
  }
  return result;
}
