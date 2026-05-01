/*
 * XREFs of ?HampActResetToStopped@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180017E80
 * Callers:
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180012EA8 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180016FA4 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180012D50 (-HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 */

void __fastcall HampActResetToStopped(struct _HAM_ACTIVITY *a1)
{
  *((_DWORD *)a1 + 138) &= 0xFFFFC0FF;
  *((_DWORD *)a1 + 139) = 0;
  *((_WORD *)a1 + 280) = 0;
  HampActCancelExpirationTimer(a1);
  *((_DWORD *)a1 + 138) &= ~0x40u;
}
