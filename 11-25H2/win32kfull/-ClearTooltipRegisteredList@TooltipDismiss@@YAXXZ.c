/*
 * XREFs of ?ClearTooltipRegisteredList@TooltipDismiss@@YAXXZ @ 0x14026E5E0
 * Callers:
 *     ?DismissTooltips@TooltipDismiss@@YAXXZ @ 0x14022C174 (-DismissTooltips@TooltipDismiss@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall TooltipDismiss::ClearTooltipRegisteredList(TooltipDismiss *this, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  void *v5; // rcx

  v4 = *(_QWORD **)(W32GetUserSessionState(this, a2) + 71200);
  while ( v4 )
  {
    v5 = v4;
    v4 = (_QWORD *)v4[1];
    Win32FreePool(v5);
  }
  *(_QWORD *)(W32GetUserSessionState(v3, v2) + 71200) = 0LL;
}
