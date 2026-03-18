/*
 * XREFs of ?SetBufferProperty@CRadialGradientBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140236070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRadialGradientBrushMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax
  int v7; // r8d
  int v8; // r8d
  __int64 v9; // xmm0_8
  __int64 v10; // xmm0_8
  __int64 v11; // xmm0_8

  result = 0LL;
  *a6 = 0;
  v7 = a3 - 5;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 && a4 && a5 == 8 )
      {
        v9 = *a4;
        *(_DWORD *)(a1 + 16) |= 0x1000u;
        *(_QWORD *)(a1 + 120) = v9;
LABEL_13:
        *a6 = 1;
        return result;
      }
    }
    else if ( a4 && a5 == 8 )
    {
      v10 = *a4;
      *(_DWORD *)(a1 + 16) |= 0x800u;
      *(_QWORD *)(a1 + 112) = v10;
      goto LABEL_13;
    }
  }
  else if ( a4 && a5 == 8 )
  {
    v11 = *a4;
    *(_DWORD *)(a1 + 16) |= 0x400u;
    *(_QWORD *)(a1 + 104) = v11;
    goto LABEL_13;
  }
  return 3221225485LL;
}
