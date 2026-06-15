/*
 * XREFs of ?Cleanup@CProcess@@QEAAJH@Z @ 0x1800381E8
 * Callers:
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180020DBC (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18003B43C (--1CApplicationManager@@MEAA@XZ.c)
 * Callees:
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180011340 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18002129C (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 */

__int64 __fastcall CProcess::Cleanup(CProcess *this, int a2)
{
  CProcess::CleanupProcessTerminationWatcher(this, a2);
  CProcess::NotifyPLM((__int64)this, 1);
  return 0LL;
}
