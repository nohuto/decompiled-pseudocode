/*
 * XREFs of sub_140046AC0 @ 0x140046AC0
 * Callers:
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 *     sub_1400D5148 @ 0x1400D5148 (sub_1400D5148.c)
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 *     sub_140198640 @ 0x140198640 (sub_140198640.c)
 *     sub_1401AED30 @ 0x1401AED30 (sub_1401AED30.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140046AC0(__int64 a1)
{
  int *v1; // rax
  int v2; // ecx
  bool v3; // zf
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v1 = *(int **)(a1 + 64);
  v2 = *v1;
  if ( *v1 == 1094997074 )
  {
    v3 = (*((_BYTE *)v1 + 109) & 0x40) == 0;
    return !v3;
  }
  if ( v2 == 1431193940 )
  {
    v3 = (*((_BYTE *)v1 + 507) & 2) == 0;
    return !v3;
  }
  if ( v2 == 1314275652 )
  {
    v5 = *((_QWORD *)v1 + 20);
    if ( !v5 )
      return 0;
    v6 = *(_QWORD *)(v5 + 8);
    return v6 && *(_BYTE *)(v6 + 65);
  }
  if ( v2 != 1314278989 )
    return 0;
  v7 = *((_QWORD *)v1 + 16);
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v8 )
    return 0;
  return *(_BYTE *)(v8 + 41) != 0;
}
