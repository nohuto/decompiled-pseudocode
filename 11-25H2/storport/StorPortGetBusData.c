/*
 * XREFs of StorPortGetBusData @ 0x140073D90
 * Callers:
 *     sub_1401B7210 @ 0x1401B7210 (sub_1401B7210.c)
 * Callees:
 *     sub_1400273F0 @ 0x1400273F0 (sub_1400273F0.c)
 *     sub_14006922C @ 0x14006922C (sub_14006922C.c)
 */

__int64 __fastcall StorPortGetBusData(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r9
  unsigned int v7; // r10d
  unsigned int v8; // r11d
  int *v9; // rcx
  __int64 v10; // rcx
  int *v12; // [rsp+30h] [rbp-18h] BYREF
  int *v13; // [rsp+38h] [rbp-10h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  sub_1400273F0(a1, &v12, &v13);
  if ( v12 )
  {
    v9 = v12 + 194;
    return (unsigned int)sub_14006922C((__int64)v9, v8, a5, v6, a6);
  }
  if ( v13 )
  {
    v10 = *((_QWORD *)v13 + 73);
    if ( v10 )
    {
      v9 = (int *)(v10 + 16);
      return (unsigned int)sub_14006922C((__int64)v9, v8, a5, v6, a6);
    }
  }
  return v7;
}
