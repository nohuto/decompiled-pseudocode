/*
 * XREFs of ?SetBufferProperty@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140236580
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140235B90 (-SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCO.c)
 */

__int64 __fastcall DirectComposition::CTurbulenceEffectMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax
  __int64 v7; // xmm0_8
  __int64 v8; // xmm0_8
  __int64 v9; // xmm0_8

  result = 0LL;
  *a6 = 0;
  switch ( a3 )
  {
    case 10:
      if ( a4 && a5 == 8 )
      {
        v9 = *a4;
        *(_DWORD *)(a1 + 16) |= 0x400u;
        *(_QWORD *)(a1 + 256) = v9;
        goto LABEL_14;
      }
      break;
    case 11:
      if ( a4 && a5 == 8 )
      {
        v8 = *a4;
        *(_DWORD *)(a1 + 16) |= 0x800u;
        *(_QWORD *)(a1 + 264) = v8;
        goto LABEL_14;
      }
      break;
    case 12:
      if ( a4 && a5 == 8 )
      {
        v7 = *a4;
        *(_DWORD *)(a1 + 16) |= 0x1000u;
        *(_QWORD *)(a1 + 272) = v7;
LABEL_14:
        *a6 = 1;
        return result;
      }
      break;
    default:
      return DirectComposition::CFilterEffectMarshaler::SetBufferProperty(a1, a2, a3, a4, a5, a6);
  }
  return 3221225485LL;
}
