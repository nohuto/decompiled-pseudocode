/*
 * XREFs of sub_1400165C0 @ 0x1400165C0
 * Callers:
 *     sub_140015F50 @ 0x140015F50 (sub_140015F50.c)
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 *     sub_14003E994 @ 0x14003E994 (sub_14003E994.c)
 */

__int64 sub_1400165C0()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int v2; // ebx
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp-28h]

  v2 = RtlLockModuleSection(sub_1400B5010);
  if ( v2 == -1073741663 )
  {
    v2 = sub_14003E994(0x100000LL);
    if ( v2 >= 0 )
      v2 = RtlLockModuleSection(sub_1400B5010);
  }
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000EE40(v1, v0, v3, 10, 0, 0, 0, 0, v5, 0, v2);
  return v2 | 0x10000000u;
}
