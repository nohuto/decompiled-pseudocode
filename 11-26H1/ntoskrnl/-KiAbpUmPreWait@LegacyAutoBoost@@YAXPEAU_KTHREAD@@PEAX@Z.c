/*
 * XREFs of ?KiAbpUmPreWait@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x1404798C0
 * Callers:
 *     KeWaitForAlertByThreadId @ 0x140223DF0 (KeWaitForAlertByThreadId.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall LegacyAutoBoost::KiAbpUmPreWait(LegacyAutoBoost *this, struct _KTHREAD *a2, void *a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 i; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v8; // eax
  __int64 v9; // rdx
  unsigned __int32 v10; // ett
  __int64 v11; // [rsp+30h] [rbp+8h]

  _disable();
  v4 = *((_QWORD *)this + 100);
  if ( v4 )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v11 = *(_QWORD *)(v4 + 8 * i);
      if ( (struct _KTHREAD *)(v11 & 0x7FFFFFFFFFFFFFFCLL) == a2 )
      {
        LOBYTE(v11) = v11 | 1;
        *(_QWORD *)(v4 + 8 * i) = v11;
        break;
      }
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v8 = *SchedulerAssist;
    do
    {
      v9 = v8;
      LODWORD(v9) = v8 & 0xFFDFFFFF;
      v10 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v8 & 0xFFDFFFFF, v8);
    }
    while ( v10 != v8 );
    if ( (v8 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v9, SchedulerAssist, a4);
  }
  _enable();
}
