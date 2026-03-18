/*
 * XREFs of ?SetIntegerProperty@CRemoteRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140243010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRemoteRenderTargetMarshaler::SetIntegerProperty(
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
  if ( *(_QWORD *)(a1 + 64) != a4 )
  {
    *(_DWORD *)(a1 + 16) |= 0x100u;
    *(_QWORD *)(a1 + 64) = a4;
    *a5 = 1;
  }
  return result;
}
