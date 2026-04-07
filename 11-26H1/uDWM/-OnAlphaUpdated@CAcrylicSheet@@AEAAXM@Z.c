/*
 * XREFs of ?OnAlphaUpdated@CAcrylicSheet@@AEAAXM@Z @ 0x1800959D8
 * Callers:
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18005E18C (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAcrylicSheet::OnAlphaUpdated(CAcrylicSheet *this, float a2, __int64 a3)
{
  CVisual::SetOpacity(this, a2, a3);
}
