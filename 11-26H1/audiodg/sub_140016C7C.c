/*
 * XREFs of sub_140016C7C @ 0x140016C7C
 * Callers:
 *     sub_140016BCC @ 0x140016BCC (sub_140016BCC.c)
 *     InitFn @ 0x14003E530 (InitFn.c)
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 */

__int64 __fastcall sub_140016C7C(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  char v4; // di
  char v5; // si
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  v12 = 0LL;
  v4 = a2;
  v5 = a1;
  v6 = RtlCreateMemoryBlockLookaside(&v12, 0LL, a1, a2, a3);
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000EE40(v8, v7, v9, 3, v12, v5, v4, v3, v11, 0, v6);
  return v12;
}
