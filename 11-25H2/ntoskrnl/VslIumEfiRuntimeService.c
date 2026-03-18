/*
 * XREFs of VslIumEfiRuntimeService @ 0x1402D2BB0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x1402D3E38 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1402D45D0 (VslpUnlockPagesForTransfer.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

unsigned __int64 __fastcall VslIumEfiRuntimeService(unsigned int a1, __int64 a2, int a3, __int128 *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // si
  int v10; // edi
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 result; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  _QWORD v16[10]; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v17[8]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v18; // [rsp+88h] [rbp-41h]
  __int64 v19; // [rsp+90h] [rbp-39h]
  __int64 v20; // [rsp+98h] [rbp-31h]
  unsigned __int64 v21; // [rsp+A0h] [rbp-29h]
  __int128 v22; // [rsp+A8h] [rbp-21h]
  __int128 v23; // [rsp+B8h] [rbp-11h]

  v5 = a1;
  memset_0(v17, 0, 0x68uLL);
  memset_0(v16, 0, 0x48uLL);
  if ( a2 )
  {
    LODWORD(result) = VslpLockPagesForTransfer((unsigned int)v16, a2, a3, 2, 1);
    if ( (result & 0x80000000) != 0LL )
      return (int)result;
  }
  v19 = v16[0];
  v20 = v16[7];
  v18 = v5;
  if ( a4 )
  {
    v14 = a4[1];
    v22 = *a4;
    v23 = v14;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v8);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&VslpIumEfiLock);
  v10 = VslpEnterIumSecureMode(2u, 0xFCu, 0, (__int64)v17);
  ExReleaseSpinLockExclusiveFromDpcLevel(&VslpIumEfiLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
  }
  __writecr8(CurrentIrql);
  if ( a4 )
  {
    v15 = v23;
    *a4 = v22;
    a4[1] = v15;
  }
  if ( v10 == -1073741811 )
  {
    v12 = 0x8000000000000002uLL;
  }
  else if ( v10 == -1073741801 )
  {
    v12 = 0x8000000000000009uLL;
  }
  else
  {
    v12 = v21;
    if ( v10 )
      v12 = 0x8000000000000003uLL;
  }
  if ( v16[0] )
    VslpUnlockPagesForTransfer(v16);
  return v12;
}
