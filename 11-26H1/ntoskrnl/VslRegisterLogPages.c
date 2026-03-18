/*
 * XREFs of VslRegisterLogPages @ 0x140411B34
 * Callers:
 *     PsIumResumeAfterHibernate @ 0x140527718 (PsIumResumeAfterHibernate.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040FF88 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410B74 (VslpUnlockPagesForTransfer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 VslRegisterLogPages()
{
  struct _MDL *v0; // rbx
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // bl
  unsigned int v5; // edi
  __int64 *v6[10]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v7[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 *v8; // [rsp+88h] [rbp-80h]
  __int64 *v9; // [rsp+90h] [rbp-78h]

  v0 = (struct _MDL *)PspIumLogBuffer;
  memset_0(v7, 0, 0x68uLL);
  memset_0(v6, 0, 0x48uLL);
  if ( !*(_QWORD *)&HvlpVsmVtlCallVa )
    return 3221225629LL;
  result = VslpLockPagesForTransfer((__int64)v6, v0, 0x2000u, 1, 2u);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v2) = 2;
      LOBYTE(v3) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v3, v2);
    }
    v8 = v6[0];
    v9 = v6[7];
    v5 = VslpEnterIumSecureMode(2u, 0x10Eu, 0, (__int64)v7);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    VslpUnlockPagesForTransfer(v6);
    return v5;
  }
  return result;
}
