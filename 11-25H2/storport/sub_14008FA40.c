/*
 * XREFs of sub_14008FA40 @ 0x14008FA40
 * Callers:
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 *     sub_1400C18E0 @ 0x1400C18E0 (sub_1400C18E0.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140086C94 @ 0x140086C94 (sub_140086C94.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int16 __fastcall sub_14008FA40(__int64 a1, __int64 a2)
{
  __int128 v3; // xmm0
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // r11
  unsigned __int16 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  const wchar_t *v11; // rcx
  int v13; // [rsp+68h] [rbp-41h]
  __int128 v14; // [rsp+80h] [rbp-29h] BYREF
  __int128 v15; // [rsp+90h] [rbp-19h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-9h] BYREF
  char v17; // [rsp+A8h] [rbp-1h]
  __int128 v18; // [rsp+B0h] [rbp+7h] BYREF
  int v19; // [rsp+C0h] [rbp+17h]
  char v20; // [rsp+C4h] [rbp+1Bh]
  __int128 v21; // [rsp+C8h] [rbp+1Fh] BYREF
  __int128 v22; // [rsp+D8h] [rbp+2Fh]
  __int64 v23; // [rsp+E8h] [rbp+3Fh]
  char v24; // [rsp+F0h] [rbp+47h]

  if ( byte_140168DAA )
  {
    v19 = 0;
    v14 = 0LL;
    v20 = 0;
    v21 = 0LL;
    v23 = 0LL;
    v22 = 0LL;
    v24 = 0;
    v3 = *(_OWORD *)(a1 + 5064);
    v4 = *(_QWORD *)(a1 + 16);
    v16 = 0LL;
    v15 = v3;
    v17 = 0;
    v18 = 0LL;
    LOWORD(v5) = sub_1400403EC(v4, (__int64)&v14);
    v7 = *(unsigned __int16 **)(v6 + 6000);
    if ( v7 )
    {
      v21 = *(_OWORD *)(v7 + 12);
      v22 = *(_OWORD *)(v7 + 20);
      v23 = *((_QWORD *)v7 + 7);
      v16 = *((_QWORD *)v7 + 8);
      v18 = *(_OWORD *)(v7 + 2);
      v5 = *((_DWORD *)v7 + 5);
      v19 = v5;
    }
    if ( (byte_1401694F7 & 0x10) != 0 )
    {
      if ( v7 )
      {
        v8 = v7[1];
        v9 = *v7;
      }
      else
      {
        v8 = 0LL;
        v9 = 0LL;
      }
      v10 = *(_QWORD *)(v6 + 6160);
      if ( !v10 || (v11 = *(const wchar_t **)(v10 + 24)) == 0LL )
        v11 = (const wchar_t *)&unk_140149394;
      LOWORD(v5) = sub_140086C94(
                     (__int64)v11,
                     v8,
                     v9,
                     *(_DWORD *)(v6 + 56),
                     (__int64)&v15,
                     *((const wchar_t **)&v14 + 1),
                     (const char *)&v18,
                     v11,
                     v9,
                     v8,
                     (const char *)&v21,
                     (const char *)&v16,
                     *(_QWORD *)(a2 + 4),
                     v13,
                     a2);
    }
  }
  return v5;
}
