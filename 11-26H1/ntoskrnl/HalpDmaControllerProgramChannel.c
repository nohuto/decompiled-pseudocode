/*
 * XREFs of HalpDmaControllerProgramChannel @ 0x1404381C8
 * Callers:
 *     HalMapTransferEx @ 0x140437D70 (HalMapTransferEx.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerProgramChannel(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rsi
  unsigned __int8 CurrentIrql; // di
  char v9; // r14
  unsigned __int64 v10; // rdx
  unsigned __int8 v11; // bl
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx

  v7 = (_QWORD *)a1;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0;
  if ( CurrentIrql == 15 )
    goto LABEL_8;
  v10 = *(unsigned __int8 *)(a1 + 176);
  v11 = KeGetCurrentIrql();
  if ( v11 != (_BYTE)v10 )
    __writecr8(v10);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = v11;
    KiRaiseIrqlProcessIrqlFlags(a1, v10);
  }
  CurrentIrql = v11;
  KxAcquireSpinLock(v7 + 21);
  v12 = *(_QWORD *)(a2 + 360);
  v9 = 1;
  if ( v12 && (*(_DWORD *)(v12 + 12) & 1) != 0 )
  {
    KxReleaseSpinLock(v7 + 21);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    __writecr8(v11);
    return 3221225760LL;
  }
  else
  {
LABEL_8:
    v13 = v7[7];
    v14 = 160LL * *(unsigned int *)(a2 + 380);
    *(_QWORD *)(v14 + v13 + 8) = a3;
    *(_QWORD *)(v14 + v13 + 16) = a4;
    guard_dispatch_icall_no_overrides(v7[8], *(unsigned int *)(a2 + 380));
    if ( v9 )
    {
      KxReleaseSpinLock(v7 + 21);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
}
