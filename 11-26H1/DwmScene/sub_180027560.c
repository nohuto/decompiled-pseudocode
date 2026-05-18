/*
 * XREFs of sub_180027560 @ 0x180027560
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025E8C @ 0x180025E8C (sub_180025E8C.c)
 */

bool __fastcall sub_180027560(__int64 a1, __int64 a2)
{
  bool v2; // al
  int v3; // r8d
  _DWORD *v4; // r9
  char v5; // cl

  v2 = sub_180025E8C(a1, *(_QWORD *)(a2 + 8));
  v5 = 0;
  if ( v2 )
    return *v4 == v3;
  return v5;
}
