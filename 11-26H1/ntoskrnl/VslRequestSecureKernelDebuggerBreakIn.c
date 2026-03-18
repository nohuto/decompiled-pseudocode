/*
 * XREFs of VslRequestSecureKernelDebuggerBreakIn @ 0x1405C3DEC
 * Callers:
 *     KeFreezeExecution @ 0x140508FA0 (KeFreezeExecution.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 VslRequestSecureKernelDebuggerBreakIn()
{
  int v0; // edx
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  _BYTE v3[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v3, 0, 0x68uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v0) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v0);
    }
  }
  result = VslpEnterIumSecureMode(2u, 0x122u, 0, (__int64)v3);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
