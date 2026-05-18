/*
 * XREFs of sub_180024FEC @ 0x180024FEC
 * Callers:
 *     sub_18002506C @ 0x18002506C (sub_18002506C.c)
 *     sub_18002F2EC @ 0x18002F2EC (sub_18002F2EC.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_18005FFB4 @ 0x18005FFB4 (sub_18005FFB4.c)
 *     sub_1800D44E0 @ 0x1800D44E0 (sub_1800D44E0.c)
 *     sub_1800D49E0 @ 0x1800D49E0 (sub_1800D49E0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180024FEC(__int64 *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  int v5; // eax

  *a2 = *(_QWORD *)(*a1 + 8);
  a2[1] = 0LL;
  v3 = *a1;
  v4 = (__int64 *)*a2;
  a2[2] = v3;
  while ( !*((_BYTE *)v4 + 25) )
  {
    *a2 = v4;
    if ( *((_DWORD *)v4 + 8) >= *a3 )
    {
      a2[2] = v4;
      v5 = 1;
    }
    else
    {
      v4 += 2;
      v5 = 0;
    }
    *((_DWORD *)a2 + 2) = v5;
    v4 = (__int64 *)*v4;
  }
  return a2;
}
