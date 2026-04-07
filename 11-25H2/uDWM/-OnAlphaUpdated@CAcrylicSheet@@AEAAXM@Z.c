/*
 * XREFs of ?OnAlphaUpdated@CAcrylicSheet@@AEAAXM@Z @ 0x1800A1318
 * Callers:
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x1800361CC (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAcrylicSheet::OnAlphaUpdated(CAcrylicSheet *this, float a2)
{
  CVisual::SetOpacity(this, a2);
}
