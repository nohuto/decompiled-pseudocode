/*
 * XREFs of ?SetBufferProperty@CLineGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x14023ED90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLineGeometryMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax
  int v7; // r8d
  __int64 v8; // xmm0_8
  __int64 v9; // xmm0_8

  result = 0LL;
  *a6 = 0;
  v7 = a3 - 5;
  if ( v7 )
  {
    if ( v7 == 1 && a4 && a5 == 8 )
    {
      v8 = *a4;
      *(_DWORD *)(a1 + 16) |= 0x2000u;
      *(_QWORD *)(a1 + 104) = v8;
LABEL_9:
      *a6 = 1;
      return result;
    }
  }
  else if ( a4 && a5 == 8 )
  {
    v9 = *a4;
    *(_DWORD *)(a1 + 16) |= 0x1000u;
    *(_QWORD *)(a1 + 96) = v9;
    goto LABEL_9;
  }
  return 3221225485LL;
}
