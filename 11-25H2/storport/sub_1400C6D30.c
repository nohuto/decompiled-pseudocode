/*
 * XREFs of sub_1400C6D30 @ 0x1400C6D30
 * Callers:
 *     sub_1400C7D1C @ 0x1400C7D1C (sub_1400C7D1C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400C6D30(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 128);
  if ( v1 && (v2 = *(_QWORD *)(v1 + 584)) != 0 && (v3 = *(_QWORD *)(v2 + 120)) != 0 )
    return *(unsigned int *)(v3 + 4);
  else
    return 0LL;
}
