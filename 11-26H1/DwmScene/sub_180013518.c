/*
 * XREFs of sub_180013518 @ 0x180013518
 * Callers:
 *     sub_180013268 @ 0x180013268 (sub_180013268.c)
 *     sub_1800294F4 @ 0x1800294F4 (sub_1800294F4.c)
 *     sub_18005FF1C @ 0x18005FF1C (sub_18005FF1C.c)
 *     sub_18007FA94 @ 0x18007FA94 (sub_18007FA94.c)
 *     sub_180087AAC @ 0x180087AAC (sub_180087AAC.c)
 *     sub_18008CC50 @ 0x18008CC50 (sub_18008CC50.c)
 *     sub_1800C2850 @ 0x1800C2850 (sub_1800C2850.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_180013518(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18000E26C(*(void **)(a1 + 8), 16LL * *(_QWORD *)(a1 + 16));
  return result;
}
