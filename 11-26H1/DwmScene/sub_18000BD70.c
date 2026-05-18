/*
 * XREFs of sub_18000BD70 @ 0x18000BD70
 * Callers:
 *     sub_18000BC00 @ 0x18000BC00 (sub_18000BC00.c)
 * Callees:
 *     sub_18000C074 @ 0x18000C074 (sub_18000C074.c)
 *     sub_18000C1C0 @ 0x18000C1C0 (sub_18000C1C0.c)
 *     sub_18000C1F8 @ 0x18000C1F8 (sub_18000C1F8.c)
 *     sub_18000C388 @ 0x18000C388 (sub_18000C388.c)
 *     sub_18000C3B4 @ 0x18000C3B4 (sub_18000C3B4.c)
 *     sub_18000C878 @ 0x18000C878 (sub_18000C878.c)
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 *     sub_18000CA8C @ 0x18000CA8C (sub_18000CA8C.c)
 */

__int64 __fastcall sub_18000BD70(char a1)
{
  __int64 v3; // rcx
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rcx

  if ( dword_1801C7D70 <= 0 )
    return 0LL;
  --dword_1801C7D70;
  v4 = sub_18000C074();
  if ( dword_1801C7D74 != 2 )
  {
    sub_18000C8D4(7LL);
    __debugbreak();
    JUMPOUT(0x18000BDF3LL);
  }
  sub_18000C1C0(v3);
  sub_18000C878(v5);
  sub_18000CA8C(v6);
  dword_1801C7D74 = 0;
  LOBYTE(v7) = v4;
  sub_18000C388(v7);
  LOBYTE(v8) = a1;
  v9 = (unsigned __int8)sub_18000C3B4(v8, 0LL);
  sub_18000C1F8(v10);
  return v9;
}
