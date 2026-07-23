/*
 * XREFs of RtlpFcWriteHighLowHigh @ 0x1404F717C
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140866EE0 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1408674B4 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140AC0D04 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcManagerStartBootPhase @ 0x140CF6D90 (CmFcManagerStartBootPhase.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF6E68 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall RtlpFcWriteHighLowHigh(__int64 a1, __int64 a2)
{
  unsigned __int32 v2; // eax
  __int64 v3; // r9
  __int64 v4; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  __int64 v7; // rdx
  unsigned __int32 v8; // ett
  int v10; // [rsp+3Ch] [rbp+14h]

  v10 = HIDWORD(a2);
  LOBYTE(v2) = KeDisableInterrupts();
  *(_DWORD *)(v3 + 8) = v10;
  *(_QWORD *)v3 = v4;
  if ( (_BYTE)v2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v2 = *SchedulerAssist;
      do
      {
        v7 = v2;
        LODWORD(v7) = v2 & 0xFFDFFFFF;
        v8 = v2;
        v2 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v2 & 0xFFDFFFFF, v2);
      }
      while ( v8 != v2 );
      if ( (v2 & 0x200000) != 0 )
        LOBYTE(v2) = KiRemoveSystemWorkPriorityKick(CurrentPrcb, v7, SchedulerAssist, v3);
    }
    _enable();
  }
  return v2;
}
