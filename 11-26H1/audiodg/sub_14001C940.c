/*
 * XREFs of sub_14001C940 @ 0x14001C940
 * Callers:
 *     <none>
 * Callees:
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001CCAC @ 0x14001CCAC (sub_14001CCAC.c)
 *     sub_140025EA4 @ 0x140025EA4 (sub_140025EA4.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_140076FB8 @ 0x140076FB8 (sub_140076FB8.c)
 *     sub_14007B100 @ 0x14007B100 (sub_14007B100.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14001C940(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v6; // edi
  int v7; // edx
  void *v8; // rax
  unsigned int *v9; // rbx
  int v10; // eax
  int v11; // r9d
  __int128 *v12; // r14
  unsigned int v13; // r12d
  const WCHAR *v14; // rsi
  HRESULT v15; // eax
  __int64 v16; // rdi
  int v17; // edx
  void *v18; // [rsp+40h] [rbp-29h] BYREF
  UINT32 length[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v20; // [rsp+50h] [rbp-19h] BYREF
  HSTRING v21; // [rsp+58h] [rbp-11h] BYREF
  __int128 v22; // [rsp+60h] [rbp-9h] BYREF
  __int128 v23; // [rsp+70h] [rbp+7h] BYREF
  int v24; // [rsp+80h] [rbp+17h]
  int v25; // [rsp+84h] [rbp+1Bh]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+5Fh]
  SIZE_T cb; // [rsp+D8h] [rbp+6Fh] BYREF
  HSTRING string; // [rsp+E0h] [rbp+77h] BYREF
  HSTRING v29; // [rsp+E8h] [rbp+7Fh] BYREF

  v18 = 0LL;
  LODWORD(cb) = 0;
  if ( a2 )
  {
    v23 = xmmword_1400C5F78;
    v24 = 1;
    v25 = 1;
    v4 = sub_14001CCAC(a1, &v23, 32LL, 0LL, 0, &cb);
    if ( ((int)(v4 + 0x80000000) < 0 || v4 == -2147024662) && (_DWORD)cb )
    {
      v8 = CoTaskMemAlloc((unsigned int)cb);
      sub_140008C08(&v18, v8);
      v9 = (unsigned int *)v18;
      if ( !v18 )
      {
        v6 = -2147024882;
        v7 = 2458;
        goto LABEL_29;
      }
      memset(v18, 0, (unsigned int)cb);
      v10 = sub_14001CCAC(a1, &v23, 32LL, v9, cb, &cb);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = v10;
        v7 = 2466;
        goto LABEL_30;
      }
      if ( (unsigned int)cb < 8 )
      {
        v6 = -2147418113;
        v7 = 2469;
        goto LABEL_29;
      }
      if ( (unsigned int)cb < 8 * (unsigned __int64)v9[1] + 8 )
      {
        v6 = -2147418113;
        v7 = 2471;
        goto LABEL_29;
      }
      v12 = (__int128 *)(v9 + 2);
      v13 = 0;
      v14 = (const WCHAR *)(v9 + 9);
      while ( v13 < v9[1] )
      {
        string = 0LL;
        *(_QWORD *)length = 0LL;
        WindowsDeleteString(0LL);
        v29 = 0LL;
        v22 = *v12;
        v15 = sub_14007B100(&v22, &v29);
        v6 = v15;
        if ( v15 < 0 )
        {
          v17 = 2481;
          goto LABEL_25;
        }
        v15 = sub_140025EA4(v14, 128LL, length);
        v6 = v15;
        if ( v15 < 0 )
        {
          v17 = 2482;
          goto LABEL_25;
        }
        WindowsDeleteString(string);
        string = 0LL;
        v15 = WindowsCreateString(v14, length[0], &string);
        v6 = v15;
        if ( v15 < 0 )
        {
          v17 = 2483;
LABEL_25:
          sub_14000C2A8((int)retaddr, v17, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v15);
          goto LABEL_26;
        }
        *(_QWORD *)length = a1;
        v21 = string;
        *(_QWORD *)&v22 = v29;
        sub_140076FB8(
          (unsigned int)&v20,
          (unsigned int)&v22,
          (_DWORD)v14 - 12,
          (unsigned int)&v21,
          (__int64)(v14 - 4),
          (__int64)(v14 - 2),
          (__int64)length);
        v16 = v20;
        if ( !v20 )
        {
          v6 = -2147024882;
          sub_14000C2A8(
            (int)retaddr,
            2491,
            (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
            -2147024882);
LABEL_26:
          WindowsDeleteString(string);
          string = 0LL;
          WindowsDeleteString(v29);
          v29 = 0LL;
          goto LABEL_31;
        }
        sub_1400B6010(a2);
        v12 = (__int128 *)((char *)v12 + 284);
        v14 += 142;
        v20 = 0LL;
        sub_1400B6010(v16);
        WindowsDeleteString(string);
        string = 0LL;
        WindowsDeleteString(v29);
        ++v13;
      }
      sub_140008C08(&v18, 0LL);
    }
    return 0LL;
  }
  v6 = -2147024809;
  v7 = 2429;
LABEL_29:
  v11 = v6;
LABEL_30:
  sub_14000C2A8((int)retaddr, v7, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v11);
LABEL_31:
  sub_140008C08(&v18, 0LL);
  return v6;
}
