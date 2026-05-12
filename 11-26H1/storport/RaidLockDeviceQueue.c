/*
 * XREFs of RaidLockDeviceQueue @ 0x14004D4D4
 * Callers:
 *     RaUnitStopDeviceIrp @ 0x14018AF74 (RaUnitStopDeviceIrp.c)
 *     StorProcessNVMeNewUnit @ 0x140191C34 (StorProcessNVMeNewUnit.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RaidLockDeviceQueue(__int64 a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt

  *(_BYTE *)(a1 + 37) = 1;
  result = *(_QWORD *)(a1 + 88);
  do
  {
    if ( (result & 3) != 0 )
      break;
    v2 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), result | 2, result);
  }
  while ( v2 != result );
  return result;
}
