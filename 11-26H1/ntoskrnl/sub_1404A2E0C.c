/*
 * XREFs of sub_1404A2E0C @ 0x1404A2E0C
 * Callers:
 *     sub_1408807A8 @ 0x1408807A8 (sub_1408807A8.c)
 *     sub_1409F05F8 @ 0x1409F05F8 (sub_1409F05F8.c)
 * Callees:
 *     sub_1404A2E80 @ 0x1404A2E80 (sub_1404A2E80.c)
 *     sub_1404A2EE0 @ 0x1404A2EE0 (sub_1404A2EE0.c)
 */

__int64 __fastcall sub_1404A2E0C(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v8; // ebx
  int v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+24h] [rbp-24h]
  int v12; // [rsp+2Ch] [rbp-1Ch]
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+34h] [rbp-14h]
  __int64 v15; // [rsp+38h] [rbp-10h]

  v8 = a5 - a3;
  v10 = a2;
  v11 = a1;
  v12 = 0;
  v15 = a3;
  v12 = sub_1404A2E80(&v10, (unsigned int)(a5 - a3));
  v13 = v8 + a7;
  v14 = v12;
  sub_1404A2EE0(&v10, a6 - a5, a4);
  return 0LL;
}
