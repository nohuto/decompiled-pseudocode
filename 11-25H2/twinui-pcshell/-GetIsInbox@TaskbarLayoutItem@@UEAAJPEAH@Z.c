/*
 * XREFs of ?GetIsInbox@TaskbarLayoutItem@@UEAAJPEAH@Z @ 0x180321D50
 * Callers:
 *     ?GetIsInbox@TaskbarLayoutItem@@W7EAAJPEAH@Z @ 0x180321D60 (-GetIsInbox@TaskbarLayoutItem@@W7EAAJPEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskbarLayoutItem::GetIsInbox(TaskbarLayoutItem *this, int *a2)
{
  *a2 = *((unsigned __int8 *)this + 124);
  return 0LL;
}
