/*
 * XREFs of sub_14000C7BC @ 0x14000C7BC
 * Callers:
 *     sub_14000C5E0 @ 0x14000C5E0 (sub_14000C5E0.c)
 *     sub_140064B44 @ 0x140064B44 (sub_140064B44.c)
 * Callees:
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 *     sub_1400499AC @ 0x1400499AC (sub_1400499AC.c)
 *     sub_140075610 @ 0x140075610 (sub_140075610.c)
 */

__int64 __fastcall sub_14000C7BC(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  __int64 v5; // rdi
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF

  v7 = a1;
  v1 = sub_14000DA4C();
  v5 = v1;
  if ( byte_1400E9750 )
    return sub_1400499AC(448LL);
  v7 = 0LL;
  if ( v1 && (unsigned int)RtlAllocateMemoryBlockLookaside(v1, 448LL, &v7) == -1073741670 )
  {
    sub_140075610(v5, 0x100000LL);
    RtlAllocateMemoryBlockLookaside(v5, 448LL, &v7);
  }
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000EE40(v3, v2, v4, 6, v5, 192, 0, 0);
  return v7;
}
