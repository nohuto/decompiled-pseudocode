/*
 * XREFs of VfUtilAddressRangeRemove @ 0x140C27694
 * Callers:
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140C276C8 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     ViDeadlockRemoveResource @ 0x140C3E008 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x140C3E1A8 (ViDeadlockRemoveThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfUtilAddressRangeRemove(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 == *a1 )
    *a1 += a3;
  result = a2 + a3;
  if ( a2 + a3 == a1[1] )
  {
    result = a1[1] - a3;
    a1[1] = result;
  }
  return result;
}
