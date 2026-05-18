/*
 * XREFs of sub_18001CC6C @ 0x18001CC6C
 * Callers:
 *     sub_18001CFE8 @ 0x18001CFE8 (sub_18001CFE8.c)
 *     sub_18002A494 @ 0x18002A494 (sub_18002A494.c)
 *     sub_18002E5CC @ 0x18002E5CC (sub_18002E5CC.c)
 *     sub_18002E884 @ 0x18002E884 (sub_18002E884.c)
 *     sub_18002F750 @ 0x18002F750 (sub_18002F750.c)
 *     sub_18004BDD8 @ 0x18004BDD8 (sub_18004BDD8.c)
 *     sub_18004BEA0 @ 0x18004BEA0 (sub_18004BEA0.c)
 *     sub_18004BFB8 @ 0x18004BFB8 (sub_18004BFB8.c)
 *     sub_18004C408 @ 0x18004C408 (sub_18004C408.c)
 *     sub_18004C514 @ 0x18004C514 (sub_18004C514.c)
 *     sub_18004C620 @ 0x18004C620 (sub_18004C620.c)
 *     sub_18004D70C @ 0x18004D70C (sub_18004D70C.c)
 *     sub_18004E0D4 @ 0x18004E0D4 (sub_18004E0D4.c)
 *     sub_18004E128 @ 0x18004E128 (sub_18004E128.c)
 *     sub_18004F194 @ 0x18004F194 (sub_18004F194.c)
 *     sub_180075850 @ 0x180075850 (sub_180075850.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CF60 @ 0x18001CF60 (sub_18001CF60.c)
 */

_QWORD *__fastcall sub_18001CC6C(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v5; // r9
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // eax

  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  *a2 = v5;
  v6 = v5;
  a2[1] = 0LL;
  for ( a2[2] = *(_QWORD *)a1; !*((_BYTE *)v6 + 25); v6 = (__int64 *)*v6 )
  {
    *a2 = v6;
    sub_1800148EC(a3);
    v7 = sub_1800148EC((__int64)(v6 + 4));
    if ( (int)sub_18001CF60(v7, v6[6], v8, *(_QWORD *)(a3 + 16)) >= 0 )
    {
      a2[2] = v6;
      v9 = 1;
    }
    else
    {
      v6 += 2;
      v9 = 0;
    }
    *((_DWORD *)a2 + 2) = v9;
  }
  return a2;
}
