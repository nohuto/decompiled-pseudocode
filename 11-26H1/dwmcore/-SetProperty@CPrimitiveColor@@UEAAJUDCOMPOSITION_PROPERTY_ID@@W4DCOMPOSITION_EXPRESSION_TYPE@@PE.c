/*
 * XREFs of ?SetProperty@CPrimitiveColor@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18027D730
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnColorChanged@CPrimitiveColor@@AEAAXXZ @ 0x18021B7EC (-OnColorChanged@CPrimitiveColor@@AEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveColor::SetProperty(CPrimitiveColor *a1, int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 v8; // rax
  float *v9; // rbx
  unsigned int v10; // ebx

  if ( a3 != 18 )
    goto LABEL_14;
  v4 = *a4;
  v5 = a2 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
        {
LABEL_14:
          v10 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x46u, 0LL);
          return v10;
        }
        v8 = 84LL;
      }
      else
      {
        v8 = 80LL;
      }
    }
    else
    {
      v8 = 76LL;
    }
  }
  else
  {
    v8 = 72LL;
  }
  v9 = (float *)((char *)a1 + v8);
  if ( !(CPrimitiveColor *)((char *)a1 + v8) )
    goto LABEL_14;
  if ( *v9 != v4 )
  {
    *v9 = v4;
    CPrimitiveColor::OnColorChanged(a1);
  }
  return v9 == 0LL ? 0x80070057 : 0;
}
