/*
 * XREFs of HalpIommuGetExceptionList @ 0x14058BFB0
 * Callers:
 *     IvtProcessDeviceExceptions @ 0x140BF0684 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     <none>
 */

__int64 *HalpIommuGetExceptionList()
{
  return &HalpIommuExceptionList;
}
