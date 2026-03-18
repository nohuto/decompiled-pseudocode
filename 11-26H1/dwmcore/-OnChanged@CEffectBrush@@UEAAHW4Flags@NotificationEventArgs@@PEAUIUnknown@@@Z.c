/*
 * XREFs of ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801ACAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x1801ACAD8 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x180217C7C (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 */

_BOOL8 __fastcall CEffectBrush::OnChanged(CEffectBrush *a1)
{
  CEffectBrush::TryCreateEffectInstance(a1);
  return CEffectBrush::HasValidTemplate(a1);
}
