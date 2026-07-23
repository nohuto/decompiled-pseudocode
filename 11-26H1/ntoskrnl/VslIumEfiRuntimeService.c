/*
 * XREFs of VslIumEfiRuntimeService @ 0x14040EEF0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall VslIumEfiRuntimeService(unsigned int a1, __int64 a2, int a3, __int128 *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // di
  int v10; // esi
  unsigned __int64 v11; // rbx
  unsigned __int64 result; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  _QWORD v15[10]; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v16[8]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v17; // [rsp+88h] [rbp-41h]
  __int64 v18; // [rsp+90h] [rbp-39h]
  __int64 v19; // [rsp+98h] [rbp-31h]
  unsigned __int64 v20; // [rsp+A0h] [rbp-29h]
  __int128 v21; // [rsp+A8h] [rbp-21h]
  __int128 v22; // [rsp+B8h] [rbp-11h]

  v5 = a1;
  memset_0(v16, 0, 0x68uLL);
  memset_0(v15, 0, 0x48uLL);
  if ( a2 )
  {
    LODWORD(result) = VslpLockPagesForTransfer((unsigned int)v15, a2, a3, 2, 1);
    if ( (result & 0x80000000) != 0LL )
      return (int)result;
  }
  v18 = v15[0];
  v19 = v15[7];
  v17 = v5;
  if ( a4 )
  {
    v13 = a4[1];
    v21 = *a4;
    v22 = v13;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v8, 15LL);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&VslpReservedTransferLock.KernelStack);
  v10 = VslpEnterIumSecureMode(2u, 0x10Cu, 0, (__int64)v16);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&VslpReservedTransferLock.KernelStack);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( a4 )
  {
    v14 = v22;
    *a4 = v21;
    a4[1] = v14;
  }
  if ( v10 == -1073741811 )
  {
    v11 = 0x8000000000000002uLL;
  }
  else if ( v10 == -1073741801 )
  {
    v11 = 0x8000000000000009uLL;
  }
  else
  {
    v11 = v20;
    if ( v10 )
      v11 = 0x8000000000000003uLL;
  }
  if ( v15[0] )
    VslpUnlockPagesForTransfer(v15);
  return v11;
}
