/*
 * XREFs of ACPICMButtonNotifyByDeviceObject @ 0x140048160
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPICMButtonNotify @ 0x14004819C (ACPICMButtonNotify.c)
 */

__int64 __fastcall ACPICMButtonNotifyByDeviceObject(ULONG_PTR a1, unsigned int a2)
{
  __int64 result; // rax

  result = ACPIInternalGetDeviceExtension(a1);
  if ( result )
    return ACPICMButtonNotify(a1, result, a2);
  return result;
}
