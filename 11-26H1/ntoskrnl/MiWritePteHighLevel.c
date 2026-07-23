/*
 * XREFs of MiWritePteHighLevel @ 0x1406F7808
 * Callers:
 *     MiTransformValidPteInPlace @ 0x1403444D8 (MiTransformValidPteInPlace.c)
 *     MiStackTheftFreezeProcessors @ 0x1406F81CC (MiStackTheftFreezeProcessors.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1403658EC (MiInsertRecursiveTbFlushEntries.c)
 *     KeIpiGenericCall @ 0x1404A43F0 (KeIpiGenericCall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlDeleteBarrier @ 0x140625E10 (RtlDeleteBarrier.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __fastcall MiWritePteHighLevel(ULONG_PTR a1, ULONG_PTR a2, ULONG_PTR a3, int a4, __int64 a5)
{
  void *v9; // rax
  __int64 v10; // r9
  _KPROCESS *v11; // rax
  char v12; // dl
  unsigned __int64 KernelWaitTime; // rax
  __int64 v14; // rax
  int v15; // ebx
  unsigned __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR Context[3]; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+48h] [rbp-B8h]
  _BYTE v21[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  _RTL_BARRIER Barrier; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+120h] [rbp+20h]

  memset_0(v21, 0, 0xD4uLL);
  v23 = a5;
  Context[0] = a2;
  v20 = 0;
  Context[1] = a1;
  Context[2] = a3;
  v9 = MiVaToFlushVm(a2);
  MiInitializeTbFlushList((__int64)Barrier.Reserved3, (__int64)v9, 20, 1, a4);
  v10 = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL
    && a1 <= 0xFFFFF6FB7DBED7F8uLL
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v11 = MiPteHasShadow();
    if ( v11 )
    {
      KernelWaitTime = v11[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v14 = *(_QWORD *)(KernelWaitTime + 8 * ((a1 >> 3) & 0x1FF));
        if ( (v14 & 0x20) != 0 )
          v12 |= 0x20u;
        LOBYTE(v10) = v12 | 0x42;
        if ( (v14 & 0x42) == 0 )
          LOBYTE(v10) = v12;
      }
    }
  }
  v15 = 0;
  v16 = a2;
  while ( 1 )
  {
    v16 = (__int64)(v16 << 25) >> 16;
    if ( v16 < 0xFFFFF68000000000uLL || v16 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    ++v15;
  }
  if ( (v10 & 0x80u) == 0LL )
  {
    MiInsertRecursiveTbFlushEntries((__int64)Barrier.Reserved3, v15, a2);
    v21[0] = 0;
  }
  else
  {
    MiInsertLargeTbFlushEntry((__int64)Barrier.Reserved3, v15, a2);
    v21[0] = v15;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  Barrier.Reserved2 = KeNumberProcessors_0;
  Barrier.Reserved1 = KeNumberProcessors_0;
  KeIpiGenericCall(MiWritePteHighLevelIsr, (ULONG_PTR)Context);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return RtlDeleteBarrier(&Barrier);
}
