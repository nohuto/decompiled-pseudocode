/*
 * XREFs of sub_1800475BC @ 0x1800475BC
 * Callers:
 *     sub_18004A530 @ 0x18004A530 (sub_18004A530.c)
 * Callees:
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_180047660 @ 0x180047660 (sub_180047660.c)
 *     sub_1800479B8 @ 0x1800479B8 (sub_1800479B8.c)
 */

__int64 __fastcall sub_1800475BC(__int64 a1, __int64 a2)
{
  int v4; // r10d
  int v5; // r8d
  int v6; // r9d
  __int64 result; // rax

  *(_DWORD *)(a1 + 300) = *(_DWORD *)(a2 + 204);
  v4 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 120) = v4;
  v5 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 112) = v5;
  *(_DWORD *)(a1 + 116) = v5;
  *(_DWORD *)(a1 + 124) = v4;
  *(_WORD *)(a1 + 308) = *(_WORD *)(a2 + 112);
  sub_18001DCFC(&qword_1801BD2E8, 3);
  result = *(unsigned int *)(a2 + 28);
  if ( (result & 0x800) != 0 )
    result = sub_1800479B8(a1, *(_DWORD *)(a1 + 116), *(_DWORD *)(a1 + 124), v6, *(_DWORD *)(a2 + 28));
  if ( *(_DWORD *)(a1 + 120) )
    return sub_180047660(a1, a2);
  return result;
}
