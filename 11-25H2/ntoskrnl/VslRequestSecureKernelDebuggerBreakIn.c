/*
 * XREFs of VslRequestSecureKernelDebuggerBreakIn @ 0x14058A9F0
 * Callers:
 *     KeFreezeExecution @ 0x1404D6470 (KeFreezeExecution.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v0) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v0);
    }
  }
  result = VslpEnterIumSecureMode(2u, 0x113u, 0, (__int64)v3);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
