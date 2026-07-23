/*
 * XREFs of HalpReadWriteWheaPhysicalMemory @ 0x14059DB50
 * Callers:
 *     HalpReadWheaPhysicalMemory @ 0x14059DB30 (HalpReadWheaPhysicalMemory.c)
 *     HalpWriteWheaPhysicalMemory @ 0x14059DCE0 (HalpWriteWheaPhysicalMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     HalpRemapVirtualAddress64 @ 0x14048987C (HalpRemapVirtualAddress64.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall HalpReadWriteWheaPhysicalMemory(char a1, __int64 a2, unsigned int a3, char *a4)
{
  char *v4; // r14
  unsigned int v5; // edi
  __int64 v6; // rbx
  int v7; // eax
  unsigned int Number; // ecx
  char *TrapFrame; // r12
  KSPIN_LOCK *p_FirstArgument; // rbp
  char v11; // r13
  unsigned __int8 CurrentIrql; // si
  __int64 v13; // r15
  __int64 v14; // r11
  char *v15; // rdx
  char *v16; // rcx
  unsigned __int8 v19; // [rsp+68h] [rbp+10h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( !a2 )
    return 3221225485LL;
  if ( a3 > 8 )
    return 3221225485LL;
  v7 = 278;
  if ( !_bittest(&v7, a3) || !a4 )
    return 3221225485LL;
  Number = KeGetPcr()->Prcb.Number;
  if ( HalpProcessorInMceHandler == Number )
  {
    TrapFrame = (char *)IommuInterfaceStateChangeCallbackPushLock.TrapFrame;
    p_FirstArgument = (KSPIN_LOCK *)&IommuInterfaceStateChangeCallbackPushLock.FirstArgument;
  }
  else if ( HalpProcessorInNmiHandler == Number )
  {
    TrapFrame = (char *)IommuInterfaceStateChangeCallbackPushLock.ApcState.ApcListHead[0].Flink;
    p_FirstArgument = (KSPIN_LOCK *)&IommuInterfaceStateChangeCallbackPushLock.ApcState.ApcListHead[1];
  }
  else
  {
    TrapFrame = (char *)IommuInterfaceStateChangeCallbackPushLock.ApcState.ApcListHead[0].Blink;
    p_FirstArgument = (KSPIN_LOCK *)&IommuInterfaceStateChangeCallbackPushLock.SystemCallNumber;
  }
  v11 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v19 = CurrentIrql;
  if ( CurrentIrql < 0xFu )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    v19 = CurrentIrql;
    v11 = 1;
  }
  KxAcquireSpinLock(p_FirstArgument);
  if ( v5 )
  {
    do
    {
      HalpRemapVirtualAddress64((unsigned __int64)TrapFrame, v6, 1);
      v13 = v5;
      v14 = v6 & 0xFFF;
      if ( v5 >= 4096 - (int)v14 )
        v13 = (unsigned int)(4096 - v14);
      if ( a1 )
      {
        v15 = &TrapFrame[v14];
        v16 = v4;
      }
      else
      {
        v15 = v4;
        v16 = &TrapFrame[v14];
      }
      memmove(v16, v15, (unsigned int)v13);
      v6 += v13;
      v4 += v13;
      v5 -= v13;
    }
    while ( v5 );
    CurrentIrql = v19;
  }
  KxReleaseSpinLock(p_FirstArgument);
  if ( v11 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
