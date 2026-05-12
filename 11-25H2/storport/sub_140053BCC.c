/*
 * XREFs of sub_140053BCC @ 0x140053BCC
 * Callers:
 *     sub_140042F5C @ 0x140042F5C (sub_140042F5C.c)
 *     sub_140053AA4 @ 0x140053AA4 (sub_140053AA4.c)
 *     StorPortGetDeviceBase @ 0x140073E10 (StorPortGetDeviceBase.c)
 *     StorPortGetUncachedExtension @ 0x140073F80 (StorPortGetUncachedExtension.c)
 *     sub_1400D8BF0 @ 0x1400D8BF0 (sub_1400D8BF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140053BCC(_BYTE *a1)
{
  if ( a1 && (a1[248] & 1) != 0 )
    return *(_QWORD *)a1;
  else
    return 0LL;
}
