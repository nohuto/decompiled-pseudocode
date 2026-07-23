/*
 * XREFs of HvlpInitializeBootProcessor @ 0x1405BCB5C
 * Callers:
 *     HvlPhase0Initialize @ 0x14079419C (HvlPhase0Initialize.c)
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x1402F3138 (HvlpGetLpcbByLpIndex.c)
 *     HvlGetLpIndexFromProcessorIndex @ 0x1402F31A0 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlpGetRegister64 @ 0x1404CA750 (HvlpGetRegister64.c)
 *     HvlEnlightenProcessor @ 0x140532D60 (HvlEnlightenProcessor.c)
 *     HvlpMapStatisticsPage @ 0x1405BCD60 (HvlpMapStatisticsPage.c)
 *     HvlpAllocateEarlyPages @ 0x1405C229C (HvlpAllocateEarlyPages.c)
 *     HvlpMapEarlyPages @ 0x1405C24F8 (HvlpMapEarlyPages.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvlpInitializeBootProcessor(__int64 a1)
{
  __int64 v1; // rdi
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 EarlyPages; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int LpIndexFromProcessorIndex; // eax
  _LIST_ENTRY *LpcbByLpIndex; // rbx
  __int64 v10; // rdx
  void *v11; // rax
  void *v12; // rbx
  __int64 v13; // rdx
  signed __int32 v14[8]; // [rsp+0h] [rbp-40h] BYREF
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  __int128 v16; // [rsp+28h] [rbp-18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+38h] BYREF
  __int64 v18; // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  v1 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  if ( HvlHypervisorConnected )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedOr(v14, 0);
    v15 = 0LL;
    v19 = 0LL;
    if ( (HvlpFlags & 0x80000) != 0 )
    {
      if ( (HvlpFlags & 2) != 0 )
      {
        HvlpGetRegister64(589843, &v17);
        v6 = v17 & 0xFFFFFFFFFFFFF000uLL;
        CurrentPrcb->VirtualApicAssistPage.QuadPart = v17 & 0xFFFFFFFFFFFFF000uLL;
        CurrentPrcb->VirtualApicAssist = (void *)HvlpMapEarlyPages(v6, v7, 4LL);
      }
      else
      {
        EarlyPages = HvlpAllocateEarlyPages(a1, 1LL, &CurrentPrcb->VirtualApicAssistPage, 4LL, v15);
        CurrentPrcb->VirtualApicAssist = (void *)EarlyPages;
        if ( !EarlyPages )
          return 3221225626LL;
      }
    }
    if ( (HvlpFlags & 2) != 0 && (HvlpFlags & 0x20) != 0 )
    {
      HvlpGetRegister64(655379, &v18);
      LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(CurrentPrcb->Number);
      LpcbByLpIndex = HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex);
      LpcbByLpIndex[2].Flink = (struct _LIST_ENTRY *)HvlpMapEarlyPages(v18 & 0xFFFFFFFFFFFFF000uLL, v10, 4LL);
    }
    if ( (HvlpFlags & 2) == 0 && (HvlpFlags & 0x8000) != 0 )
    {
      v11 = (void *)((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))HvlpAllocateEarlyPages)(
                      a1,
                      1LL,
                      &v15,
                      4LL);
      v12 = v11;
      if ( v11 )
      {
        memset_0(v11, 0, 0x80uLL);
        CurrentPrcb->SchedulerAssist = v12;
      }
    }
    if ( (HvlpRootFlags & 0x10) != 0 )
    {
      v16 = 0LL;
      if ( (int)HvlpMapStatisticsPage(2LL, &v16, &v19) >= 0 )
        v1 = HvlpMapEarlyPages(v19, v13, 4LL);
      CurrentPrcb->StatisticsPage = (unsigned __int64 *)v1;
    }
    HvlEnlightenProcessor(0);
  }
  return 0LL;
}
