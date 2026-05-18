/*
 * XREFs of sub_1800291F0 @ 0x1800291F0
 * Callers:
 *     sub_18001155C @ 0x18001155C (sub_18001155C.c)
 *     sub_180016BD8 @ 0x180016BD8 (sub_180016BD8.c)
 *     sub_180024760 @ 0x180024760 (sub_180024760.c)
 *     sub_1800249B8 @ 0x1800249B8 (sub_1800249B8.c)
 *     sub_180051C70 @ 0x180051C70 (sub_180051C70.c)
 *     sub_18006A92C @ 0x18006A92C (sub_18006A92C.c)
 *     sub_18007E080 @ 0x18007E080 (sub_18007E080.c)
 *     sub_18007F6E8 @ 0x18007F6E8 (sub_18007F6E8.c)
 *     sub_1800817A0 @ 0x1800817A0 (sub_1800817A0.c)
 *     sub_180082524 @ 0x180082524 (sub_180082524.c)
 *     sub_180082C80 @ 0x180082C80 (sub_180082C80.c)
 *     sub_180082D10 @ 0x180082D10 (sub_180082D10.c)
 *     sub_180082E7C @ 0x180082E7C (sub_180082E7C.c)
 *     sub_180082FE8 @ 0x180082FE8 (sub_180082FE8.c)
 *     sub_180083154 @ 0x180083154 (sub_180083154.c)
 *     sub_1800832C0 @ 0x1800832C0 (sub_1800832C0.c)
 *     sub_180084A60 @ 0x180084A60 (sub_180084A60.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 */

__int64 __fastcall sub_1800291F0(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  volatile signed __int32 *v7; // rcx
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = sub_1800162D0(v9, a2);
  v5 = *v4;
  *v4 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = v5;
  v6 = v4[1];
  v4[1] = *(_QWORD *)(a1 + 80);
  v7 = (volatile signed __int32 *)v9[1];
  *(_QWORD *)(a1 + 80) = v6;
  if ( v7 )
    sub_180010F00(v7);
  result = *a2;
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(*a2 + 244LL);
  return result;
}
