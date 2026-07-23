/*
 * XREFs of ?KiAbpEntryGetResourceSafe@AutoBoost@@YAPEAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x140441E70
 * Callers:
 *     ?KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEAU_AB_BOOST_CONTEXT@1@PEAT_AB_IO_BOOST@1@@Z @ 0x140377280 (-KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEA.c)
 *     ?KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z @ 0x140384934 (-KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z.c)
 *     ?KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406007F8 (-KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall AutoBoost::KiAbpEntryGetResourceSafe(AutoBoost *this, struct AutoBoost::_AB_THREAD_ENTRY *a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)this;
  if ( (*((_BYTE *)this + 32) & 2) != 0 )
    return (_QWORD *)result[3];
  return result;
}
