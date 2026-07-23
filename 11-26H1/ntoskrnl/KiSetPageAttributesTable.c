/*
 * XREFs of KiSetPageAttributesTable @ 0x140C1275C
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x1405322F4 (KeRestoreProcessorSpecificFeatures.c)
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KeFlushCurrentTbImmediately @ 0x1404E0E70 (KeFlushCurrentTbImmediately.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

void KiSetPageAttributesTable()
{
  bool v0; // di
  int v1; // r8d
  __int64 i; // rcx
  char v3; // dl
  int v4; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  unsigned __int64 v9; // [rsp+30h] [rbp+10h]
  unsigned __int64 v10; // [rsp+38h] [rbp+18h]

  v9 = 0x7010600070106LL;
  v0 = KeDisableInterrupts();
  v10 = __readmsr(0x277u);
  for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
  {
    v3 = *((_BYTE *)&v10 + i);
    if ( v3 == 6 )
    {
      if ( *((_BYTE *)&v9 + i) != 6 )
      {
        v4 = 2;
LABEL_11:
        __wbinvd();
        goto LABEL_12;
      }
    }
    else if ( v3 != *((_BYTE *)&v9 + i) )
    {
      v1 |= 1u;
    }
  }
  if ( !v1 )
    goto LABEL_15;
  v4 = v1 & 2;
  if ( (v1 & 2) != 0 )
    goto LABEL_11;
LABEL_12:
  KeFlushCurrentTbImmediately();
  __writemsr(0x277u, v9);
  if ( v4 )
    __wbinvd();
  KeFlushCurrentTbImmediately();
LABEL_15:
  if ( v0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v7 = *SchedulerAssist;
      do
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange(SchedulerAssist, v7 & 0xFFDFFFFF, v7);
      }
      while ( v8 != v7 );
      if ( (v7 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
}
