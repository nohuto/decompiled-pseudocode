/*
 * XREFs of KiUpdateProcessorCount @ 0x140BF9458
 * Callers:
 *     KiUpdateNumberProcessorsIpi @ 0x140BFB230 (KiUpdateNumberProcessorsIpi.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KiGetCurrentGroupCount @ 0x1405F2444 (KiGetCurrentGroupCount.c)
 */

__int64 __fastcall KiUpdateProcessorCount(__int64 a1, int a2)
{
  unsigned int v3; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  volatile CCHAR v8; // al
  __int64 result; // rax

  KiActiveGroups = KiGetCurrentGroupCount();
  _disable();
  LODWORD(KeNumberProcessors_0) = KeNumberProcessors_0 + 1;
  KeAddProcessorAffinityEx((unsigned __int16 *)&stru_140FC11F0.WaitRegister.Flags, v3);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v6 = *SchedulerAssist;
    do
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange(SchedulerAssist, v6 & 0xFFDFFFFF, v6);
    }
    while ( v7 != v6 );
    if ( (v6 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  if ( !a2 )
  {
    v8 = KeNumberProcessorsGroup0;
    KeNumberProcessorsGroup0 = v8 + 1;
  }
  ++*(_DWORD *)(MmWriteableSharedUserData + 960);
  ++*(_WORD *)(MmWriteableSharedUserData + 874);
  result = MmWriteableSharedUserData;
  *(_BYTE *)(MmWriteableSharedUserData + 964) = KiActiveGroups;
  return result;
}
