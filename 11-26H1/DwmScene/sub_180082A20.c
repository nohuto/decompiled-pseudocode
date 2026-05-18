/*
 * XREFs of sub_180082A20 @ 0x180082A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180082524 @ 0x180082524 (sub_180082524.c)
 *     sub_180082A80 @ 0x180082A80 (sub_180082A80.c)
 */

_QWORD *__fastcall sub_180082A20(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v8[4]; // [rsp+28h] [rbp-20h] BYREF

  sub_180082524(a3, v8);
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
    v6 = *(unsigned int *)(v5 + 32);
  else
    v6 = 0xFFFFFFFFLL;
  sub_180082A80(v8[0], v6);
  *a2 = v8[0];
  a2[1] = v8[1];
  return a2;
}
