/*
 * XREFs of sub_140052648 @ 0x140052648
 * Callers:
 *     sub_140053838 @ 0x140053838 (sub_140053838.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14004E2C8 @ 0x14004E2C8 (sub_14004E2C8.c)
 */

__int64 __fastcall sub_140052648(__int64 a1, char *a2, void *a3, __int64 a4)
{
  char v4; // bl
  int v7; // eax
  unsigned int v8; // edi
  int v10; // eax
  int v11; // ecx
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+54h] [rbp+Ch]
  int v15; // [rsp+68h] [rbp+20h] BYREF
  int v16; // [rsp+6Ch] [rbp+24h]

  v16 = HIDWORD(a4);
  v14 = HIDWORD(a1);
  v15 = 4096;
  v4 = 0;
  *a2 = 0;
  v13 = 0;
  v7 = NtQueryWnfStateData(&qword_1400C7DC0, 0LL, 0LL, &v13, a3, &v15);
  v8 = v7 | 0x10000000;
  if ( v7 >= 0 || v8 == -805306333 )
  {
    v10 = v13;
    if ( v13 )
    {
      v11 = v15;
      if ( v15 != 4096 )
      {
        sub_14004E2C8(retaddr, 625LL, (__int64)"onecore\\internal\\sdk\\inc\\wil\\resource.h", 2147549183LL);
        memset(a3, 0, 0x1000uLL);
        v11 = v15;
        v10 = v13;
      }
      if ( v10 )
      {
        if ( v11 == 4096 )
          v4 = 1;
      }
    }
    *a2 = v4;
    return 0LL;
  }
  else
  {
    sub_14000C2A8(retaddr, 716, (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h", v8);
    return v8;
  }
}
