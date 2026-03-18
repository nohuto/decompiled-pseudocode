/*
 * XREFs of ?SetIntegerProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1401900D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitiveGroupMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _BYTE *a5)
{
  __int64 result; // rax
  int v6; // r8d

  result = 0LL;
  *a5 = 0;
  v6 = a3 - 3;
  if ( !v6 )
  {
    if ( *(_QWORD *)(a1 + 64) == a4 )
      return result;
    *(_QWORD *)(a1 + 64) = a4;
LABEL_7:
    *(_DWORD *)(a1 + 16) &= ~0x40u;
    *a5 = 1;
    return result;
  }
  if ( v6 != 1 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 72) != a4 )
  {
    *(_QWORD *)(a1 + 72) = a4;
    goto LABEL_7;
  }
  return result;
}
