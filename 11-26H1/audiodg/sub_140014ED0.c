/*
 * XREFs of sub_140014ED0 @ 0x140014ED0
 * Callers:
 *     sub_140014350 @ 0x140014350 (sub_140014350.c)
 *     sub_140015070 @ 0x140015070 (sub_140015070.c)
 * Callees:
 *     sub_1400132C0 @ 0x1400132C0 (sub_1400132C0.c)
 *     sub_140014E60 @ 0x140014E60 (sub_140014E60.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

void __fastcall sub_140014ED0(__int64 a1, __int64 a2, int a3)
{
  bool v4; // zf
  __int64 v5; // rax
  void *v6; // rdx
  int *v7; // rax
  int v8; // [rsp+30h] [rbp-29h] BYREF
  int v9; // [rsp+38h] [rbp-21h] BYREF
  __int64 v10; // [rsp+40h] [rbp-19h] BYREF
  __int64 v11; // [rsp+48h] [rbp-11h] BYREF
  char v12[16]; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v13; // [rsp+60h] [rbp+7h]
  __int64 v14; // [rsp+68h] [rbp+Fh]
  int *v15; // [rsp+70h] [rbp+17h]
  __int64 v16; // [rsp+78h] [rbp+1Fh]
  __int64 *v17; // [rsp+80h] [rbp+27h]
  __int64 v18; // [rsp+88h] [rbp+2Fh]
  int *v19; // [rsp+90h] [rbp+37h]
  __int64 v20; // [rsp+98h] [rbp+3Fh]

  if ( *(_BYTE *)(a1 + 74) )
  {
    v4 = *(_BYTE *)(a1 + 75) == 0;
    v5 = *(_QWORD *)(a1 + 360);
    *(_QWORD *)(a1 + 368) = v5;
    *(_BYTE *)(a1 + 74) = 0;
    if ( v4 )
    {
      if ( (byte_1400E8401 & 8) == 0 )
        goto LABEL_6;
      v10 = v5;
      v6 = &unk_1400C56B8;
      v9 = *(_DWORD *)(a1 + 244);
      v13 = &v11;
      v15 = &v9;
      v17 = &v10;
      v7 = &v8;
      v8 = 0;
      v11 = a1;
    }
    else
    {
      RtwqSetLongRunning(*(_DWORD *)(a1 + 240), 0);
      *(_BYTE *)(a1 + 75) = 0;
      if ( (byte_1400E8401 & 8) == 0 )
      {
LABEL_6:
        if ( !*(_BYTE *)(a1 + 75) )
          sub_1400132C0(a1);
        return;
      }
      v6 = &unk_1400C56E0;
      v11 = *(_QWORD *)(a1 + 368);
      v8 = *(_DWORD *)(a1 + 244);
      v13 = &v10;
      v15 = &v8;
      v17 = &v11;
      v7 = &v9;
      v9 = 0;
      v10 = a1;
    }
    v19 = v7;
    v14 = 8LL;
    v16 = 4LL;
    v18 = 8LL;
    v20 = 4LL;
    sub_140014E60(0, (_DWORD)v6, a3, 5, (__int64)v12);
    goto LABEL_6;
  }
}
