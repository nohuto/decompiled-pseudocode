/*
 * XREFs of KiCheckRuntimeHistoryHashTableCleanup @ 0x140337B0C
 * Callers:
 *     KiRetireDpcList @ 0x140337730 (KiRetireDpcList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall KiCheckRuntimeHistoryHashTableCleanup(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  __int64 v8; // r14
  unsigned __int64 *v9; // rdi
  unsigned __int64 *v10; // rbx
  unsigned __int64 *v11; // r15
  unsigned __int64 *i; // rcx
  __int64 v13; // r9
  struct _KPRCB *v14; // rcx
  unsigned __int32 *v15; // r8
  unsigned __int32 v16; // eax
  __int64 v17; // rdx
  unsigned __int32 v18; // ett
  unsigned __int32 v19; // eax
  __int64 v20; // rdx
  unsigned __int32 v21; // ett
  __int64 v22; // [rsp+50h] [rbp+8h]

  v22 = MEMORY[0xFFFFF78000000008];
  result = MEMORY[0xFFFFF78000000008] - a1[1795];
  if ( result >= 0x35A4E900 && a1[1794] )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v19 = *SchedulerAssist;
      do
      {
        v20 = v19;
        LODWORD(v20) = v19 & 0xFFDFFFFF;
        v21 = v19;
        v19 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v19 & 0xFFDFFFFF, v19);
      }
      while ( v21 != v19 );
      if ( (v19 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v20, SchedulerAssist, a4);
    }
    _enable();
    v8 = a1[1794];
    v9 = *(unsigned __int64 **)(v8 + 8);
    v10 = v9;
    while ( v10 )
    {
      result = *v10;
      v10 = (unsigned __int64 *)result;
      if ( (result & 1) != 0 )
        break;
LABEL_12:
      if ( !result )
        goto LABEL_22;
      v11 = v10;
      if ( *((_BYTE *)v10 + 24) )
      {
        *((_BYTE *)v10 + 24) = 0;
      }
      else
      {
        _disable();
        KxAcquireSpinLock(a1 + 1802);
        for ( i = v9; (*i & 1) == 0; i = (unsigned __int64 *)*i )
        {
          if ( (unsigned __int64 *)*i == v10 )
          {
            *i = *v10;
            --*(_DWORD *)v8;
            *v10 |= 0x8000000000000002uLL;
            v10 = i;
            break;
          }
        }
        KxReleaseSpinLock(a1 + 1802);
        v14 = KeGetCurrentPrcb();
        v15 = (unsigned __int32 *)v14->SchedulerAssist;
        if ( v15 )
        {
          _m_prefetchw(v15);
          v16 = *v15;
          do
          {
            v17 = v16;
            LODWORD(v17) = v16 & 0xFFDFFFFF;
            v18 = v16;
            v16 = _InterlockedCompareExchange((volatile signed __int32 *)v15, v16 & 0xFFDFFFFF, v16);
          }
          while ( v18 != v16 );
          if ( (v16 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v14, v17, v15, v13);
        }
        _enable();
        ExFreePoolWithTag(v11, 0);
      }
    }
    ++v9;
    result = *(_QWORD *)(v8 + 8);
    while ( (unsigned __int64)v9 < result + 8 * ((unsigned __int64)*(unsigned int *)(v8 + 4) >> 5) )
    {
      v10 = (unsigned __int64 *)*v9;
      if ( (*v9 & 1) == 0 )
      {
        result = *v9;
        goto LABEL_12;
      }
      ++v9;
    }
LABEL_22:
    a1[1795] = v22;
    _disable();
  }
  return result;
}
