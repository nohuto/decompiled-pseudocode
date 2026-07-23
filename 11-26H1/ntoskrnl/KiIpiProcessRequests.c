/*
 * XREFs of KiIpiProcessRequests @ 0x14047B410
 * Callers:
 *     KiIpiInterruptSubDispatch @ 0x140734A40 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     KiIpiProcessRequest @ 0x14032E310 (KiIpiProcessRequest.c)
 */

char __fastcall KiIpiProcessRequests(_KTRAP_FRAME *a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  char v4; // si
  char *v5; // rbx
  signed __int64 v6; // rax
  __int64 v7; // rcx
  volatile signed __int32 *SchedulerAssist; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  _m_prefetchw(&CurrentPrcb->Mailbox);
  if ( CurrentPrcb->Mailbox )
  {
    CurrentPrcb->IpiFrame = a1;
    v5 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
    if ( v5 )
    {
      v4 = 1;
      while ( 1 )
      {
        v6 = v5 - (char *)CurrentPrcb;
        v7 = (__int64)v5;
        v5 = *(char **)v5;
        KiIpiProcessRequest(v7, KiProcessorBlock[(unsigned int)((v6 - 52928) >> 6)], a3);
        SchedulerAssist = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
          _InterlockedDecrement(SchedulerAssist + 8);
        if ( !v5 )
        {
          v5 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
          if ( !v5 )
            break;
        }
      }
    }
  }
  return v4;
}
