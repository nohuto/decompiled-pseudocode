/*
 * XREFs of ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x1801ACAD8
 * Callers:
 *     ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801ACAB0 (-OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x180217C7C (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 *     ?SetPropertySet@?$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@QEAAJPEAVCPropertySet@@@Z @ 0x18024E550 (-SetPropertySet@-$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@QEAAJPEAVCPropertySet@@@Z.c)
 *     ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18026E530 (-OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CEffectBrush::HasValidTemplate(CEffectBrush *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 14);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 80) != 0LL;
  return result;
}
