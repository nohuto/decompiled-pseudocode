/*
 * XREFs of sub_1400A3650 @ 0x1400A3650
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400A20F4 @ 0x1400A20F4 (sub_1400A20F4.c)
 *     sub_1400A2D44 @ 0x1400A2D44 (sub_1400A2D44.c)
 */

char __fastcall sub_1400A3650(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rcx
  double v7; // xmm0_8
  char v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = 0;
  LOBYTE(v4) = sub_1400A20F4((_QWORD *)(a1 - 8), &v10, &v9);
  if ( (_BYTE)v4 )
  {
    v6 = v10;
    v7 = *(float *)(a1 + 164);
    *(_DWORD *)(a1 + 484) = *(_DWORD *)(v10 + 56);
    v4 = *(_DWORD *)(v6 + 56);
    v5 = (unsigned int)(int)((double)v4 * 10000000.0 / v7 + 0.5);
  }
  else
  {
    *(_DWORD *)(a1 + 484) = 0;
    v5 = 0LL;
  }
  *a2 = v5;
  if ( (byte_1400E8401 & 4) != 0 )
    LOBYTE(v4) = sub_1400A2D44(
                   **(unsigned int **)(a1 + 80),
                   *(unsigned int *)(*(_QWORD *)(a1 + 80) + 4LL),
                   a1 - 8,
                   3,
                   **(_DWORD **)(a1 + 80),
                   *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL),
                   v5,
                   0);
  return v4;
}
