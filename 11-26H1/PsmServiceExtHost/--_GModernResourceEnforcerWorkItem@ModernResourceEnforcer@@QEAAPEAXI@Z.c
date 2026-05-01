/*
 * XREFs of ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x18005A638
 * Callers:
 *     ??$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@Z @ 0x18000DD48 (--$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEn.c)
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000E264 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 * Callees:
 *     ??1ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ @ 0x18005A8B4 (--1ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18006EED4 (--3@YAXPEAX@Z.c)
 */

ModernResourceEnforcer::ModernResourceEnforcerWorkItem *__fastcall ModernResourceEnforcer::ModernResourceEnforcerWorkItem::`scalar deleting destructor'(
        ModernResourceEnforcer::ModernResourceEnforcerWorkItem *this)
{
  ModernResourceEnforcer::ModernResourceEnforcerWorkItem::~ModernResourceEnforcerWorkItem(this);
  operator delete(this);
  return this;
}
