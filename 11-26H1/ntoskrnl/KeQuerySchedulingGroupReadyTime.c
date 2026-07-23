/*
 * XREFs of KeQuerySchedulingGroupReadyTime @ 0x1404A40F0
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x140775FF8 (PspQueryJobHierarchyAccountingInformation.c)
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeQuerySchedulingGroupReadyTime(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // rdi
  __int64 *v4; // r14
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rbp
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v3 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v4 = KiProcessorBlock;
    v5 = v1 + 128;
    v6 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v7 = *v4;
      v9 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v9);
        while ( *(_QWORD *)(v7 + 48) );
      }
      v3 += *(_QWORD *)(v5 + 56);
      if ( (*(_BYTE *)(v5 + 128) & 1) != 0 )
        v3 += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v5 + 64);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
      ++v4;
      v5 += 464LL;
      --v6;
    }
    while ( v6 );
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v3;
}
