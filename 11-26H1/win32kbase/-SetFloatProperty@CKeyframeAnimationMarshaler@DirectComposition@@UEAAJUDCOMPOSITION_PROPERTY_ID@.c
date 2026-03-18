/*
 * XREFs of ?SetFloatProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x140195840
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x1401B3040 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetFloatProperty(
        __int64 a1,
        int a2,
        float a3,
        _BYTE *a4)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 0;
  switch ( a2 )
  {
    case 16:
      if ( a3 < 0.0 )
        return 3221225485LL;
      if ( *(float *)(a1 + 276) == a3 )
        return result;
      *(float *)(a1 + 276) = a3;
LABEL_23:
      *(_DWORD *)(a1 + 16) &= ~0x1000u;
      goto LABEL_24;
    case 17:
      if ( a3 <= 0.0 && a3 != -1.0 )
        return 3221225485LL;
      if ( *(float *)(a1 + 280) == a3 )
        return result;
      *(float *)(a1 + 280) = a3;
      goto LABEL_23;
    case 31:
      if ( a3 == 0.0
        || a3 >= 0.0625 && a3 <= 16.0
        || COERCE_FLOAT(LODWORD(a3) ^ _xmm) >= 0.0625 && COERCE_FLOAT(LODWORD(a3) ^ _xmm) <= 16.0 )
      {
        if ( *(float *)(a1 + 284) == a3 )
          return result;
        *(_DWORD *)(a1 + 16) &= ~0x20000u;
        *(float *)(a1 + 284) = a3;
        goto LABEL_24;
      }
      break;
    case 33:
      if ( a3 >= 0.0 && a3 <= 1.0 )
      {
        *(_DWORD *)(a1 + 16) &= ~0x8000u;
        *(float *)(a1 + 288) = a3;
LABEL_24:
        *a4 = 1;
        return result;
      }
      break;
    default:
      return DirectComposition::CResourceMarshaler::SetFloatProperty();
  }
  return 3221225485LL;
}
