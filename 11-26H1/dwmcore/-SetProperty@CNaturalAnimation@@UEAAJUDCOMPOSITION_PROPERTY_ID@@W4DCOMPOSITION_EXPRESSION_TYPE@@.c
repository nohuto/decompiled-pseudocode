/*
 * XREFs of ?SetProperty@CNaturalAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18027C010
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetScalarProperty@CNaturalAnimation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@M@Z @ 0x18027C0F8 (-SetScalarProperty@CNaturalAnimation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@M@Z.c)
 *     ?SetTimespanProperty@CNaturalAnimation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@AEBUTimeSpan@@@Z @ 0x18027C310 (-SetTimespanProperty@CNaturalAnimation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@AEBUTimeSpan@@@Z.c)
 *     ?SetVector2Property@CNaturalAnimation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector2@@@Z @ 0x18027C440 (-SetVector2Property@CNaturalAnimation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector2@@@Z.c)
 *     ?SetVector3Property@CNaturalAnimation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector3@@@Z @ 0x18027C4C8 (-SetVector3Property@CNaturalAnimation@@AEAAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector3@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetProperty(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  switch ( a3 )
  {
    case 18:
      v5 = CNaturalAnimation::SetScalarProperty();
      v4 = v5;
      if ( v5 >= 0 )
        return v4;
      v7 = 555;
      goto LABEL_14;
    case 35:
      v5 = CNaturalAnimation::SetVector2Property(a1, a2, a4);
      v4 = v5;
      if ( v5 >= 0 )
        return v4;
      v7 = 559;
      goto LABEL_14;
    case 42:
      v5 = CNaturalAnimation::SetTimespanProperty(a1, a2, a4);
      v4 = v5;
      if ( v5 >= 0 )
        return v4;
      v7 = 567;
      goto LABEL_14;
    case 52:
      v5 = CNaturalAnimation::SetVector3Property(a1, a2, a4);
      v4 = v5;
      if ( v5 >= 0 )
        return v4;
      v7 = 563;
LABEL_14:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, v7, 0LL);
      return v4;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x23Bu, 0LL);
  return v4;
}
