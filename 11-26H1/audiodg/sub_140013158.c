/*
 * XREFs of sub_140013158 @ 0x140013158
 * Callers:
 *     sub_140015070 @ 0x140015070 (sub_140015070.c)
 * Callees:
 *     sub_140014E60 @ 0x140014E60 (sub_140014E60.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

void __fastcall sub_140013158(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdx
  int *v5; // rax
  void *v6; // rdx
  int *v7; // rcx
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

  v3 = *(_QWORD *)(a1 + 368);
  *(_BYTE *)(a1 + 74) = 1;
  if ( v3 && v3 < 10000 )
  {
    if ( (byte_1400E8401 & 8) == 0 )
      return;
    v9 = *(unsigned __int8 *)(a1 + 75);
    v8 = *(_DWORD *)(a1 + 244);
    v11 = v3;
    v13 = &v10;
    v5 = &v8;
    v14 = 8LL;
    v17 = &v11;
    v6 = &unk_1400C5680;
    v18 = 8LL;
    v7 = &v9;
    v10 = a1;
    goto LABEL_5;
  }
  if ( !*(_BYTE *)(a1 + 75) )
  {
    RtwqSetLongRunning(*(_DWORD *)(a1 + 240), 1);
    *(_BYTE *)(a1 + 75) = 1;
    if ( (byte_1400E8401 & 8) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 368);
      v9 = *(_DWORD *)(a1 + 244);
      v13 = &v11;
      v5 = &v9;
      v14 = 8LL;
      v17 = &v10;
      v6 = &unk_1400C56C8;
      v18 = 8LL;
      v7 = &v8;
      v8 = 1;
      v11 = a1;
LABEL_5:
      v15 = v5;
      v16 = 4LL;
      v19 = v7;
      v20 = 4LL;
      sub_140014E60((_DWORD)v7, (_DWORD)v6, a3, 5, (__int64)v12);
    }
  }
}
