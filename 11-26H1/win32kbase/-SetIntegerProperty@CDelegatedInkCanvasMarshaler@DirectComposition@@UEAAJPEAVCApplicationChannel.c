/*
 * XREFs of ?SetIntegerProperty@CDelegatedInkCanvasMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140236C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDelegatedInkCanvasMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _BYTE *a5)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 != 1 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 72) != a4 )
  {
    *(_DWORD *)(a1 + 16) |= 0x80u;
    *(_QWORD *)(a1 + 72) = a4;
    *a5 = 1;
  }
  return result;
}
