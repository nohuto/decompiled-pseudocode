/*
 * XREFs of KeSetSchedulingGroupCycleNotification @ 0x14052EC80
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KeSetSchedulingGroupCycleNotification(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 *v7; // r15
  __int64 v8; // r12
  _QWORD *v9; // r14
  __int64 v10; // rbp
  int v11; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v7 = KiProcessorBlock;
      v8 = (unsigned int)KeNumberProcessors_0;
      v9 = (_QWORD *)(a1 + 128);
      do
      {
        v10 = *v7;
        v11 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(&v11);
          while ( *(_QWORD *)(v10 + 48) );
        }
        v9[5] = *v9;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 48), 0LL);
        ++v7;
        v9 += 58;
        --v8;
      }
      while ( v8 );
    }
    *(_QWORD *)(a1 + 80) = a2;
    _InterlockedExchange64((volatile __int64 *)(a1 + 32), a3);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
