/*
 * XREFs of sub_140132DA8 @ 0x140132DA8
 * Callers:
 *     sub_140133728 @ 0x140133728 (sub_140133728.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_1401322D4 @ 0x1401322D4 (sub_1401322D4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_140132DA8(__int64 a1, char a2, char a3, char a4, char a5, char a6)
{
  __int64 v9; // rbx
  __int128 v10; // xmm0
  __int64 v11; // r8
  __int16 v12; // r11
  __int64 v13; // rax
  __int64 v14; // rax
  __int16 *v15; // rax
  __int16 v16; // dx
  __int128 v17; // [rsp+90h] [rbp-80h] BYREF
  __int128 v18; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-60h] BYREF
  char v20; // [rsp+B8h] [rbp-58h]
  __int128 v21; // [rsp+C0h] [rbp-50h] BYREF
  int v22; // [rsp+D0h] [rbp-40h]
  char v23; // [rsp+D4h] [rbp-3Ch]
  __int128 v24; // [rsp+D8h] [rbp-38h] BYREF
  __int128 v25; // [rsp+E8h] [rbp-28h]
  __int64 v26; // [rsp+F8h] [rbp-18h]
  char v27; // [rsp+100h] [rbp-10h]

  if ( byte_140168DAA )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      if ( v9 )
      {
        v22 = 0;
        v18 = 0LL;
        v23 = 0;
        v21 = 0LL;
        v26 = 0LL;
        v24 = 0LL;
        v27 = 0;
        v25 = 0LL;
        v19 = 0LL;
        v20 = 0;
        v10 = *(_OWORD *)(v9 + 5064);
        v17 = 0LL;
        v18 = v10;
        sub_1400403EC(*(_QWORD *)(v9 + 16), (__int64)&v17);
        v13 = *(_QWORD *)(v9 + 6000);
        if ( v13 )
        {
          v24 = *(_OWORD *)(v13 + 24);
          v25 = *(_OWORD *)(v13 + 40);
          v26 = *(_QWORD *)(v13 + 56);
          v19 = *(_QWORD *)(*(_QWORD *)(v9 + 6000) + 64LL);
          v14 = *(_QWORD *)(v9 + 6000);
          v21 = *(_OWORD *)(v14 + 4);
          v22 = *(_DWORD *)(v14 + 20);
        }
        if ( (byte_1401694F8 & 0x10) != 0 )
        {
          v15 = *(__int16 **)(v9 + 6000);
          if ( v15 )
          {
            v12 = v15[1];
            v16 = *v15;
          }
          else
          {
            LOBYTE(v16) = v12;
          }
          sub_1401322D4(
            (*(unsigned __int8 *)(v9 + 111) >> 3) & 1,
            &stru_14014A340,
            v11,
            *(_DWORD *)(v9 + 56),
            (__int64)&v18,
            *((const wchar_t **)&v17 + 1),
            (const char *)&v21,
            v16,
            v12,
            (const char *)&v24,
            (const char *)&v19,
            a2,
            (*(_BYTE *)(v9 + 111) & 8) != 0,
            a3,
            a4,
            a5,
            a6);
        }
      }
    }
  }
}
