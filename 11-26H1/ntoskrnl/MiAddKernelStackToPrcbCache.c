/*
 * XREFs of MiAddKernelStackToPrcbCache @ 0x14040AF98
 * Callers:
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 * Callees:
 *     MiKernelShadowStackIdealForCaching @ 0x14040B330 (MiKernelShadowStackIdealForCaching.c)
 */

__int64 __fastcall MiAddKernelStackToPrcbCache(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v4; // esi
  __int64 v7; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v9; // rdi

  v3 = *(_DWORD *)(a1 + 8);
  v4 = 0;
  if ( *(_DWORD *)(a1 + 4) == 5 )
  {
    v7 = 34608LL;
  }
  else
  {
    MiKernelShadowStackIdealForCaching(a2 - 8 * a3 + 8);
    v7 = 34616LL;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !*(_QWORD *)((char *)&CurrentPrcb->MxCsr + v7) && CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0] == v3 )
  {
    if ( *(_DWORD *)(a1 + 4) != 5 )
    {
      LOBYTE(v4) = _InterlockedCompareExchange64(
                     (volatile signed __int64 *)((char *)CurrentPrcb + v7),
                     *(_QWORD *)(a1 + 40),
                     0LL) == 0;
      return v4;
    }
    v9 = a2 << 25 >> 16;
    *(_QWORD *)(v9 + 4064) = qword_140E34D20 ^ v9;
    *(_DWORD *)(v9 + 4088) = 1;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)((char *)CurrentPrcb + v7), v9 + 4080, 0LL) )
      return 1LL;
  }
  return 0LL;
}
