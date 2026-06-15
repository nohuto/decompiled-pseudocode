/*
 * XREFs of sub_14003DB4C @ 0x14003DB4C
 * Callers:
 *     sub_140016310 @ 0x140016310 (sub_140016310.c)
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 */

__int64 sub_14003DB4C()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int v2; // ebx
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp-28h]

  v2 = RtlUnlockModuleSection(sub_1400B5010);
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000EE40(v1, v0, v3, 11, 0, 0, 0, 0, v5, 0, v2);
  return v2 | 0x10000000u;
}
