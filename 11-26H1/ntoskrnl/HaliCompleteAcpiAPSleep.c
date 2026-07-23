/*
 * XREFs of HaliCompleteAcpiAPSleep @ 0x1404B2880
 * Callers:
 *     HaliSaveProcessorContextAndSleep @ 0x140727CF0 (HaliSaveProcessorContextAndSleep.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B2BBC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpFlushAndWait @ 0x140727B20 (HalpFlushAndWait.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     KeWriteProtectPAT @ 0x140BFE0B0 (KeWriteProtectPAT.c)
 */

__int64 __fastcall HaliCompleteAcpiAPSleep(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v3; // rdx
  volatile signed __int32 *SchedulerAssist; // rax
  unsigned int v5; // ebx
  __int64 result; // rax
  unsigned int v7; // ebx

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (_BYTE)a1 )
  {
    v7 = 0;
    while ( 1 )
    {
      result = (unsigned int)dword_140F87A50[0];
      if ( !dword_140F87A50[0] )
        break;
      if ( (++v7 & dword_140FBB3DC) != 0 || !qword_140FBB3E0 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v7, a2);
    }
  }
  else
  {
    if ( CurrentPrcb->CpuVendor == 1 )
    {
      LOBYTE(a1) = 1;
      KeWriteProtectPAT(a1);
    }
    if ( (unsigned __int8)HalpIsMicrosoftCompatibleHvLoaded() )
    {
      _InterlockedIncrement(dword_140F87A50);
      SchedulerAssist = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
        _InterlockedOr(SchedulerAssist, 0x20000u);
      v5 = 0;
      while ( 1 )
      {
        result = (unsigned int)dword_140F87A50[0];
        if ( !dword_140F87A50[0] )
          break;
        if ( (++v5 & dword_140FBB3DC) != 0 || !qword_140FBB3E0 )
          _mm_pause();
        else
          guard_dispatch_icall_no_overrides(v5, v3);
      }
    }
    else
    {
      return HalpFlushAndWait(dword_140F87A50);
    }
  }
  return result;
}
