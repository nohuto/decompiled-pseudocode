/*
 * XREFs of sub_1400C93F4 @ 0x1400C93F4
 * Callers:
 *     sub_1400CF37C @ 0x1400CF37C (sub_1400CF37C.c)
 *     sub_1400D06C0 @ 0x1400D06C0 (sub_1400D06C0.c)
 *     sub_14010F610 @ 0x14010F610 (sub_14010F610.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400C93F4(__int64 a1)
{
  int v1; // ecx

  v1 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 592) + 319LL);
  if ( (_BYTE)v1 == 0xFF )
    return 4LL;
  else
    return (unsigned int)(v1 << 12);
}
