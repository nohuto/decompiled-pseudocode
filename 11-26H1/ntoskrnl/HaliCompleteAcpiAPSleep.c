/*
 * XREFs of HaliCompleteAcpiAPSleep @ 0x1404B9050
 * Callers:
 *     HaliSaveProcessorContextAndSleep @ 0x140723120 (HaliSaveProcessorContextAndSleep.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B938C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpFlushAndWait @ 0x140722F50 (HalpFlushAndWait.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     KeWriteProtectPAT @ 0x140BF80B0 (KeWriteProtectPAT.c)
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
      result = (unsigned int)dword_140F87670[0];
      if ( !dword_140F87670[0] )
        break;
      if ( (++v7 & dword_140FBB03C) != 0 || !qword_140FBB040 )
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
      _InterlockedIncrement(dword_140F87670);
      SchedulerAssist = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
        _InterlockedOr(SchedulerAssist, 0x20000u);
      v5 = 0;
      while ( 1 )
      {
        result = (unsigned int)dword_140F87670[0];
        if ( !dword_140F87670[0] )
          break;
        if ( (++v5 & dword_140FBB03C) != 0 || !qword_140FBB040 )
          _mm_pause();
        else
          guard_dispatch_icall_no_overrides(v5, v3);
      }
    }
    else
    {
      return HalpFlushAndWait(dword_140F87670);
    }
  }
  return result;
}
