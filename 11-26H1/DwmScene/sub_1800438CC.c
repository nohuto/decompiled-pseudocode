/*
 * XREFs of sub_1800438CC @ 0x1800438CC
 * Callers:
 *     sub_180077D20 @ 0x180077D20 (sub_180077D20.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180042580 @ 0x180042580 (sub_180042580.c)
 *     sub_18007E840 @ 0x18007E840 (sub_18007E840.c)
 */

char __fastcall sub_1800438CC(__int64 a1, unsigned __int16 a2)
{
  char v3; // di
  bool v4; // bl
  __int64 v6; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  unsigned __int16 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v3 = 0;
  sub_18007E840(*(_QWORD *)(a1 + 120), &v7, a2);
  v4 = v7 != 0;
  if ( v8 )
    sub_180010EC8(v8);
  if ( v4 )
    return 1;
  v6 = sub_180042580(a1 + 200, (__int64)&v9);
  if ( v6 == *(_QWORD *)(a1 + 200) )
    return 0;
  if ( *(_DWORD *)(v6 + 32) == 1 || *(_DWORD *)(v6 + 32) == 2 )
    return 1;
  return v3;
}
