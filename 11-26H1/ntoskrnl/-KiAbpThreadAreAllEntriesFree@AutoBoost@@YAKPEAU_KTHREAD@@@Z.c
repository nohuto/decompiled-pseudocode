/*
 * XREFs of ?KiAbpThreadAreAllEntriesFree@AutoBoost@@YAKPEAU_KTHREAD@@@Z @ 0x140445CE0
 * Callers:
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     KeAbThreadAreAllEntriesFree @ 0x140270FC4 (KeAbThreadAreAllEntriesFree.c)
 *     ?KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406007F8 (-KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AutoBoost::KiAbpThreadAreAllEntriesFree(AutoBoost *this, struct _KTHREAD *a2)
{
  _QWORD *v2; // r9
  __int64 v3; // r8
  _BOOL8 result; // rax

  v2 = (_QWORD *)*((_QWORD *)this + 142);
  result = 0;
  if ( !*v2 || (unsigned __int16)(1LL << *(_BYTE *)(*v2 + 14LL)) - 1 == (*(_WORD *)(*v2 + 8LL) | *(_WORD *)(*v2 + 10LL)) )
  {
    v3 = v2[1];
    if ( !v3 || (unsigned __int16)(1LL << *(_BYTE *)(v3 + 14)) - 1 == (*(_WORD *)(v3 + 8) | *(_WORD *)(v3 + 10)) )
      return 1;
  }
  return result;
}
