/*
 * XREFs of sub_140039148 @ 0x140039148
 * Callers:
 *     sub_140042620 @ 0x140042620 (sub_140042620.c)
 *     sub_140042F5C @ 0x140042F5C (sub_140042F5C.c)
 *     sub_140053AA4 @ 0x140053AA4 (sub_140053AA4.c)
 *     sub_140054728 @ 0x140054728 (sub_140054728.c)
 *     sub_140065220 @ 0x140065220 (sub_140065220.c)
 *     sub_140073340 @ 0x140073340 (sub_140073340.c)
 *     sub_140073850 @ 0x140073850 (sub_140073850.c)
 *     StorPortCompleteRequest @ 0x1400739A0 (StorPortCompleteRequest.c)
 *     StorPortGetDeviceBase @ 0x140073E10 (StorPortGetDeviceBase.c)
 *     StorPortGetUncachedExtension @ 0x140073F80 (StorPortGetUncachedExtension.c)
 *     sub_1400750D4 @ 0x1400750D4 (sub_1400750D4.c)
 *     sub_1401B72D0 @ 0x1401B72D0 (sub_1401B72D0.c)
 *     sub_1401B73A0 @ 0x1401B73A0 (sub_1401B73A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140039148(_BYTE *a1)
{
  if ( !a1 || (a1[248] & 1) != 0 )
    return 0LL;
  else
    return *(_QWORD *)a1;
}
