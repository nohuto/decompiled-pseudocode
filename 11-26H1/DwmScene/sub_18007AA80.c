/*
 * XREFs of sub_18007AA80 @ 0x18007AA80
 * Callers:
 *     sub_1800420D0 @ 0x1800420D0 (sub_1800420D0.c)
 *     sub_180048B60 @ 0x180048B60 (sub_180048B60.c)
 *     sub_180049E40 @ 0x180049E40 (sub_180049E40.c)
 *     sub_18004FC50 @ 0x18004FC50 (sub_18004FC50.c)
 *     sub_1800587B0 @ 0x1800587B0 (sub_1800587B0.c)
 *     sub_1800880D0 @ 0x1800880D0 (sub_1800880D0.c)
 *     sub_18008E8B0 @ 0x18008E8B0 (sub_18008E8B0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007AA80(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  sub_1800143E4(*a2 + 24LL, a1 + 24);
  *(_BYTE *)(*a2 + 72LL) = *(_BYTE *)(a1 + 72);
  result = *(unsigned int *)(a1 + 76);
  *(_DWORD *)(*a2 + 76LL) = result;
  v5 = a2[1];
  if ( v5 )
    return sub_180010EC8(v5);
  return result;
}
