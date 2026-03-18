/*
 * XREFs of VslRegisterLogPages @ 0x1402D2200
 * Callers:
 *     PsIumResumeAfterHibernate @ 0x1404F463C (PsIumResumeAfterHibernate.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x1402D3E38 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1402D45D0 (VslpUnlockPagesForTransfer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 VslRegisterLogPages()
{
  int v0; // ebx
  __int64 result; // rax
  __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rdx
  unsigned int v5; // edi
  _QWORD v6[10]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v7[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v8; // [rsp+88h] [rbp-80h]
  __int64 v9; // [rsp+90h] [rbp-78h]

  v0 = PspIumLogBuffer;
  memset_0(v7, 0, 0x68uLL);
  memset_0(v6, 0, 0x48uLL);
  if ( !*(_QWORD *)&HvlpVsmVtlCallVa )
    return 3221225629LL;
  result = VslpLockPagesForTransfer((unsigned int)v6, v0, 0x2000, 1, 2);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v2) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v2);
    }
    v8 = v6[0];
    v9 = v6[7];
    v5 = VslpEnterIumSecureMode(2u, 0xFEu, 0, (__int64)v7);
    if ( KiIrqlFlags )
    {
      LOBYTE(v4) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
    }
    __writecr8(CurrentIrql);
    VslpUnlockPagesForTransfer(v6);
    return v5;
  }
  return result;
}
