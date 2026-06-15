/*
 * XREFs of sub_140038070 @ 0x140038070
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 *     sub_140075610 @ 0x140075610 (sub_140075610.c)
 */

__int64 __fastcall sub_140038070(unsigned __int64 a1, __int64 a2)
{
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = RtlAllocateMemoryZone(a2, a1, &v11);
  if ( !v11 )
  {
    v9 = 0x100000LL;
    if ( a1 > 0x100000 )
      v9 = (a1 + 0x2000) & 0xFFFFFFFFFFFFE000uLL;
    sub_140075610(a2, v9);
    v4 = RtlAllocateMemoryZone(a2, a1, &v11);
  }
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000EE40(v6, v5, v7, 6, a2, a1, 0, 0, v10, 0, v4);
  return v11;
}
