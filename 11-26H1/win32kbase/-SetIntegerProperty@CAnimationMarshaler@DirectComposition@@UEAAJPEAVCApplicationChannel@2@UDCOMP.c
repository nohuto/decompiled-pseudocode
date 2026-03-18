/*
 * XREFs of ?SetIntegerProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14023C4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int64 a4,
        _BYTE *a5)
{
  __int64 result; // rax
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  char v9; // r8

  result = 0LL;
  *a5 = 0;
  v6 = a3 - 1;
  if ( !v6 )
  {
    if ( *(_QWORD *)(a1 + 80) == a4 )
      return result;
    *(_QWORD *)(a1 + 80) = a4;
    goto LABEL_15;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *(_QWORD *)(a1 + 88) == a4 )
      return result;
    *(_QWORD *)(a1 + 88) = a4;
LABEL_15:
    *(_DWORD *)(a1 + 16) &= ~0x80u;
    goto LABEL_16;
  }
  v8 = v7 - 6;
  if ( !v8 )
  {
    if ( a4 <= 2 )
    {
      *(_DWORD *)(a1 + 140) = a4;
      goto LABEL_16;
    }
    return 3221225485LL;
  }
  if ( v8 != 2 )
    return 3221225485LL;
  v9 = *(_BYTE *)(a1 + 184);
  if ( (v9 & 2) != 0 || !a4 )
    return 3221225485LL;
  *(_BYTE *)(a1 + 184) = v9 | 2;
LABEL_16:
  *a5 = 1;
  return result;
}
