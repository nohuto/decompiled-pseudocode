/*
 * XREFs of KiSetAddressPolicy @ 0x140247450
 * Callers:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x140246EA0 (KiDetachProcess.c)
 *     KiLoadDirectoryTableBase @ 0x140247600 (KiLoadDirectoryTableBase.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     MiUnlockStealVm @ 0x140294D10 (MiUnlockStealVm.c)
 *     KeForceDetachProcess @ 0x1402C6C30 (KeForceDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402C7110 (KeUnstackDetachProcess.c)
 *     KiAttachProcess @ 0x1402C76D0 (KiAttachProcess.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x1404CC940 (KiSynchronizeAddressPolicyTarget.c)
 *     KiEnableKvaShadowing @ 0x140BF8180 (KiEnableKvaShadowing.c)
 * Callees:
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     KxSetAddressPolicy @ 0x1407284D0 (KxSetAddressPolicy.c)
 */

__int64 __fastcall KiSetAddressPolicy(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  char v3; // bl
  __int64 result; // rax
  __int64 v5; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v8; // r8
  int v9; // ett

  v3 = KeDisableInterrupts(a1, a2, (unsigned int)a1);
  result = KxSetAddressPolicy(v2);
  if ( v3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v8 = (unsigned int)result;
        LODWORD(v8) = result & 0xFFDFFFFF;
        v9 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v9 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb, SchedulerAssist, v8, v5);
    }
    _enable();
  }
  return result;
}
