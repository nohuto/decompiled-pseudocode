/*
 * XREFs of VmUnpinMemoryRange @ 0x1408237E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     VmUnpinMemoryRanges @ 0x140823890 (VmUnpinMemoryRanges.c)
 */

__int64 __fastcall VmUnpinMemoryRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v6[2]; // [rsp+40h] [rbp-28h] BYREF

  if ( a4 == -1 || (a2 & 0xFFF) != 0 || (a1 & 0xFFF) != 0 || !a3 )
    return 3221225485LL;
  if ( !KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink )
    return 3221225608LL;
  v5 = a2 >> 12;
  v6[1] = a3;
  v6[0] = a1 >> 12;
  return VmUnpinMemoryRanges(v6, &v5, 1LL);
}
