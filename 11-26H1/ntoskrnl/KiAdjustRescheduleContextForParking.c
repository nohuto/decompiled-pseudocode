/*
 * XREFs of KiAdjustRescheduleContextForParking @ 0x1403375CC
 * Callers:
 *     KiParkCurrentProcessor @ 0x14033670C (KiParkCurrentProcessor.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405FB3A0 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140338930 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 */

_KTHREAD *__fastcall KiAdjustRescheduleContextForParking(struct _KI_RESCHEDULE_CONTEXT *a1, struct _KPRCB *a2)
{
  _KTHREAD *result; // rax
  unsigned __int8 *v4; // r8
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // r10
  unsigned __int8 AllCompareThreadStateFlags; // dl
  _KPRCB *Prcb; // rax
  _KTHREAD **p_Blink; // r9
  __int64 i; // rdx
  __int64 v10; // rdx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v11; // rcx
  _KPRCB *v12; // rcx
  _KTHREAD *IdleThread; // rax

  result = a2->NextThread;
  if ( !result && (result = a2->CurrentThread) == 0LL || result->Process != (_KPROCESS *)&unk_140FC9F40 )
  {
    result = (_KTHREAD *)KeGetCurrentPrcb();
    if ( (HIDWORD(result[11].UserAbEntries) & 0x10000) == 0 )
    {
      RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(a1, a2);
      AllCompareThreadStateFlags = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
      RescheduleContextEntryForPrcb->___u5[0] &= ~2u;
      Prcb = RescheduleContextEntryForPrcb->Prcb;
      RescheduleContextEntryForPrcb->CompareThread = RescheduleContextEntryForPrcb->Prcb->IdleThread;
      RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
      result = Prcb->IdleThread;
      *((_BYTE *)&RescheduleContextEntryForPrcb->0 + 1) &= ~1u;
      RescheduleContextEntryForPrcb->NewThread = result;
      if ( (AllCompareThreadStateFlags & 2) != 0 )
      {
        v10 = 0LL;
        if ( *v4 )
        {
          do
          {
            v11 = (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)&v4[40 * v10 + 16];
            if ( v11 != RescheduleContextEntryForPrcb )
            {
              v4[40 * v10 + 50] &= ~2u;
              v12 = v11->Prcb;
              *(_QWORD *)&v4[40 * v10 + 32] = v12->IdleThread;
              v4[40 * v10 + 48] = v4[40 * v10 + 48] & 0xC0 | 5;
              IdleThread = v12->IdleThread;
              v4[40 * v10 + 49] &= ~1u;
              *(_QWORD *)&v4[40 * v10 + 40] = IdleThread;
            }
            result = (_KTHREAD *)*v4;
            v10 = (unsigned int)(v10 + 1);
          }
          while ( (unsigned int)v10 < (unsigned int)result );
        }
        *((_DWORD *)v4 + 1) = 0;
      }
      p_Blink = 0LL;
      for ( i = 0LL; (unsigned int)i < *v4; i = (unsigned int)(i + 1) )
      {
        result = (_KTHREAD *)&v4[40 * i];
        if ( (struct _KPRCB *)result->Header.WaitListHead.Blink == a2 )
        {
          p_Blink = (_KTHREAD **)&result->Header.WaitListHead.Blink;
          break;
        }
      }
      if ( p_Blink[1] )
      {
        result = p_Blink[1];
        if ( (a2->SchedulerSubNode->NonParkedSet & (unsigned __int64)result->SchedulerApc.SystemArgument1) != 0 )
          p_Blink[1] = 0LL;
      }
    }
  }
  return result;
}
