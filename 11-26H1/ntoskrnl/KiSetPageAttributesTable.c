/*
 * XREFs of KiSetPageAttributesTable @ 0x140C0C54C
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x14052FDF4 (KeRestoreProcessorSpecificFeatures.c)
 *     KiInitializeKernel @ 0x140BF6190 (KiInitializeKernel.c)
 * Callees:
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KeFlushCurrentTbImmediately @ 0x1404E7AB0 (KeFlushCurrentTbImmediately.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 KiSetPageAttributesTable()
{
  bool v0; // di
  int v1; // r8d
  unsigned __int64 result; // rax
  __int64 i; // rcx
  char v4; // dl
  int v5; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v8; // ett
  unsigned __int64 v9; // [rsp+30h] [rbp+10h]
  unsigned __int64 v10; // [rsp+38h] [rbp+18h]

  v9 = 0x7010600070106LL;
  v0 = KeDisableInterrupts();
  result = __readmsr(0x277u);
  v10 = result;
  for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
  {
    v4 = *((_BYTE *)&v10 + i);
    if ( v4 == 6 )
    {
      if ( *((_BYTE *)&v9 + i) != 6 )
      {
        v5 = 2;
LABEL_11:
        __wbinvd();
        goto LABEL_12;
      }
    }
    else if ( v4 != *((_BYTE *)&v9 + i) )
    {
      v1 |= 1u;
    }
  }
  if ( !v1 )
    goto LABEL_15;
  v5 = v1 & 2;
  if ( (v1 & 2) != 0 )
    goto LABEL_11;
LABEL_12:
  KeFlushCurrentTbImmediately();
  __writemsr(0x277u, v9);
  if ( v5 )
    __wbinvd();
  result = KeFlushCurrentTbImmediately();
LABEL_15:
  if ( v0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v8 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v8 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
