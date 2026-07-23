/*
 * XREFs of VmpValidateMemoryRangeParameters @ 0x140B0A3C8
 * Callers:
 *     VmCreateMemoryRange @ 0x140821FF0 (VmCreateMemoryRange.c)
 *     VmDeleteMemoryRange @ 0x140B0A210 (VmDeleteMemoryRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpValidateMemoryRangeParameters(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // r8

  if ( a4 == -1 )
    return 10LL;
  if ( !a3 )
    return 20LL;
  if ( a3 > 0xFFFFFFFFFFFFFLL )
    return 30LL;
  if ( ((a2 | a1) & 0xFFF) != 0 )
    return 40LL;
  v4 = a3 << 12;
  if ( v4 + a2 <= a2 )
    return 50LL;
  if ( v4 + a1 <= a1 )
    return 60LL;
  return v4 + a2 > 0x7FFFFFFF0000LL ? 0x46 : 0;
}
