/*
 * XREFs of ?SetVector2Property@CNaturalAnimation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector2@@@Z @ 0x18027C440
 * Callers:
 *     ?SetProperty@CNaturalAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18027C010 (-SetProperty@CNaturalAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetVector2Property(__int64 a1, int a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // xmm0_8
  __int64 v5; // xmm0_8

  v3 = 0;
  switch ( a2 )
  {
    case '(':
      v5 = *a3;
      *(_BYTE *)(a1 + 532) |= 0x20u;
      *(_QWORD *)(a1 + 304) = v5;
      break;
    case ',':
      v4 = *a3;
      *(_BYTE *)(a1 + 532) |= 0x10u;
      *(_QWORD *)(a1 + 280) = v4;
      break;
    case '0':
      *(_QWORD *)(a1 + 316) = *a3;
      break;
    default:
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x410u, 0LL);
      break;
  }
  return v3;
}
