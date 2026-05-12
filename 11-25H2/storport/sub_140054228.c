/*
 * XREFs of sub_140054228 @ 0x140054228
 * Callers:
 *     sub_14003E780 @ 0x14003E780 (sub_14003E780.c)
 * Callees:
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_140054228(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  char v7; // [rsp+30h] [rbp-D0h] BYREF
  char v8; // [rsp+31h] [rbp-CFh] BYREF
  char v9; // [rsp+32h] [rbp-CEh] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v17; // [rsp+70h] [rbp-90h]
  __int64 v18; // [rsp+78h] [rbp-88h]
  __int64 v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  int *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  char *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  char *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  char *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  int *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  int *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  int *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  int *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  int *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]

  if ( *(_DWORD *)(a1 + 2272)
    || *(_DWORD *)(a1 + 2276)
    || *(_DWORD *)(a1 + 2280)
    || (v2 = *(_QWORD *)(a1 + 24), *(_DWORD *)(v2 + 5356))
    || *(_DWORD *)(v2 + 5352) )
  {
    if ( (unsigned int)dword_140168178 > 5 )
    {
      if ( sub_14003F840(a1, 0x400000000000LL) )
      {
        v6 = *(_DWORD **)(v3 + 24);
        v18 = 16LL;
        v20 = 16LL;
        v17 = v6 + 1266;
        v19 = a1 + 2104;
        v10 = v6[14];
        v21 = &v10;
        v7 = *(_BYTE *)(a1 + 104);
        v23 = &v7;
        v8 = *(_BYTE *)(a1 + 105);
        v25 = &v8;
        v9 = *(_BYTE *)(a1 + 106);
        v27 = &v9;
        v29 = &v11;
        v12 = *(_DWORD *)(a1 + 2276);
        v31 = &v12;
        v13 = *(_DWORD *)(a1 + 2280);
        v33 = &v13;
        v22 = 4LL;
        v24 = 1LL;
        v26 = 1LL;
        v28 = 1LL;
        v11 = v5;
        v30 = 4LL;
        v32 = 4LL;
        v34 = 4LL;
        v14 = v6[1339];
        v35 = &v14;
        v36 = 4LL;
        v15 = v6[1338];
        v37 = &v15;
        v38 = 4LL;
        sub_140037A5C((__int64)v6, (unsigned __int8 *)dword_14015A352, v4, v5, 0xDu, &v16);
      }
    }
    *(_QWORD *)(a1 + 2272) = 0LL;
    *(_DWORD *)(a1 + 2280) = 0;
  }
}
