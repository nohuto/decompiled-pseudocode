/*
 * XREFs of ?SetFloatProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023EB10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023ECC0 (-SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetFloatProperty(
        __int64 a1,
        __int64 a2,
        float a3,
        char *a4)
{
  float v6; // xmm0_4
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  float *v10; // r9
  float v11; // xmm1_4
  char v12; // cl
  int v13; // edx
  int v14; // edx

  v6 = 0.0;
  v7 = *(_BYTE *)(a1 + 145) != 0 ? 0xC000000D : 0;
  if ( (unsigned int)a2 > 0xB )
  {
    switch ( (_DWORD)a2 )
    {
      case 0xC:
        v8 = 124LL;
        goto LABEL_27;
      case 0xD:
        v8 = 128LL;
        goto LABEL_27;
      case 0xE:
        v8 = 132LL;
        goto LABEL_27;
      case 0xF:
        v8 = 136LL;
        goto LABEL_27;
      case 0x10:
        v8 = 140LL;
        goto LABEL_27;
    }
    goto LABEL_21;
  }
  switch ( (_DWORD)a2 )
  {
    case 0xB:
      v8 = 120LL;
      goto LABEL_27;
    case 5:
      v6 = FLOAT_N2097152_0;
      v9 = -8193;
      v8 = 96LL;
      break;
    case 6:
      v6 = FLOAT_N2097152_0;
      v9 = -16385;
      v8 = 100LL;
      break;
    case 7:
      v6 = FLOAT_N2097152_0;
      v9 = -32769;
      v8 = 104LL;
      break;
    case 8:
      v6 = FLOAT_N2097152_0;
      v9 = -65537;
      v8 = 108LL;
      break;
    case 9:
      v8 = 112LL;
      goto LABEL_27;
    case 0xA:
      v8 = 116LL;
LABEL_27:
      v9 = -4097;
      break;
    default:
LABEL_21:
      LODWORD(v7) = DirectComposition::CGeometryMarshaler::SetFloatProperty(a1, a2, v7);
      return (unsigned int)v7;
  }
  v10 = (float *)(a1 + v8);
  if ( a1 + v8 && (int)v7 >= 0 )
  {
    v11 = FLOAT_2097152_0;
    if ( a3 <= 2097152.0 )
      v11 = fmaxf(a3, v6);
    if ( *v10 == v11 )
    {
      v12 = 0;
    }
    else
    {
      *v10 = v11;
      v12 = 1;
    }
    *a4 = v12;
    v13 = a2 - 5;
    if ( !v13 || (v14 = v13 - 1) == 0 || (unsigned int)(v14 - 1) < 2 )
    {
      *a4 = 1;
LABEL_41:
      *(_DWORD *)(a1 + 16) &= v9;
      return (unsigned int)v7;
    }
    if ( v12 )
      goto LABEL_41;
  }
  return (unsigned int)v7;
}
