/*
 * XREFs of StorPortSetBusDataByOffset @ 0x140074D60
 * Callers:
 *     sub_1401B7760 @ 0x1401B7760 (sub_1401B7760.c)
 * Callees:
 *     sub_1400273F0 @ 0x1400273F0 (sub_1400273F0.c)
 *     sub_140069258 @ 0x140069258 (sub_140069258.c)
 */

__int64 __fastcall StorPortSetBusDataByOffset(__int64 a1)
{
  unsigned int v1; // r10d
  int *v2; // rcx
  __int64 v3; // rcx
  int *v5; // [rsp+30h] [rbp-18h] BYREF
  int *v6; // [rsp+38h] [rbp-10h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  sub_1400273F0(a1, &v5, &v6);
  if ( v5 )
  {
    v2 = v5 + 194;
    return (unsigned int)sub_140069258((__int64)v2);
  }
  if ( v6 )
  {
    v3 = *((_QWORD *)v6 + 73);
    if ( v3 )
    {
      v2 = (int *)(v3 + 16);
      return (unsigned int)sub_140069258((__int64)v2);
    }
  }
  return v1;
}
