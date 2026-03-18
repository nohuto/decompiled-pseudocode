/*
 * XREFs of ?SetVector3Property@CNaturalAnimation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector3@@@Z @ 0x18027C4C8
 * Callers:
 *     ?SetProperty@CNaturalAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18027C010 (-SetProperty@CNaturalAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetVector3Property(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // ecx

  v3 = 0;
  switch ( a2 )
  {
    case '(':
      *(_QWORD *)(a1 + 304) = *(_QWORD *)a3;
      v6 = *(_DWORD *)(a3 + 8);
      *(_BYTE *)(a1 + 532) |= 0x20u;
      *(_DWORD *)(a1 + 312) = v6;
      break;
    case ',':
      *(_QWORD *)(a1 + 280) = *(_QWORD *)a3;
      v5 = *(_DWORD *)(a3 + 8);
      *(_BYTE *)(a1 + 532) |= 0x10u;
      *(_DWORD *)(a1 + 288) = v5;
      break;
    case '0':
      *(_QWORD *)(a1 + 316) = *(_QWORD *)a3;
      *(_DWORD *)(a1 + 324) = *(_DWORD *)(a3 + 8);
      break;
    default:
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x42Cu, 0LL);
      break;
  }
  return v3;
}
