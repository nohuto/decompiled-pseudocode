/*
 * XREFs of sub_14001F358 @ 0x14001F358
 * Callers:
 *     sub_14001F1BC @ 0x14001F1BC (sub_14001F1BC.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001EB30 @ 0x14001EB30 (sub_14001EB30.c)
 */

__int64 __fastcall sub_14001F358(int *a1, __int64 a2, _WORD *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-78h]
  int v7; // [rsp+28h] [rbp-70h]
  int v8; // [rsp+30h] [rbp-68h]
  int v9; // [rsp+38h] [rbp-60h]
  int v10; // [rsp+40h] [rbp-58h]
  int v11; // [rsp+48h] [rbp-50h]
  int v12; // [rsp+50h] [rbp-48h]
  int v13; // [rsp+58h] [rbp-40h]
  int v14; // [rsp+60h] [rbp-38h]
  int v15; // [rsp+68h] [rbp-30h]
  int v16; // [rsp+70h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]

  v16 = *((unsigned __int8 *)a1 + 15);
  v15 = *((unsigned __int8 *)a1 + 14);
  v14 = *((unsigned __int8 *)a1 + 13);
  v13 = *((unsigned __int8 *)a1 + 12);
  v12 = *((unsigned __int8 *)a1 + 11);
  v11 = *((unsigned __int8 *)a1 + 10);
  v10 = *((unsigned __int8 *)a1 + 9);
  v9 = *((unsigned __int8 *)a1 + 8);
  v8 = *((unsigned __int16 *)a1 + 3);
  v7 = *((unsigned __int16 *)a1 + 2);
  v6 = *a1;
  v3 = sub_14001EB30(
         a3,
         260LL,
         (__int64)L"%s\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\MMDevices\\EffectsPacks",
         v6,
         v7,
         v8,
         v9,
         v10,
         v11,
         v12,
         v13,
         v14,
         v15,
         v16);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 13, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp", v3);
  return v4;
}
