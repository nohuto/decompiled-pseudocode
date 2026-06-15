/*
 * XREFs of sub_14007DE90 @ 0x14007DE90
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001CCAC @ 0x14001CCAC (sub_14001CCAC.c)
 *     sub_1400383F4 @ 0x1400383F4 (sub_1400383F4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140075E54 @ 0x140075E54 (sub_140075E54.c)
 *     sub_140075EEC @ 0x140075EEC (sub_140075EEC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14007DE90(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  void *v5; // rdi
  unsigned int v6; // esi
  int v7; // r9d
  int v8; // edx
  int v9; // eax
  DWORD v10; // r12d
  void *v11; // rax
  char *v12; // rbx
  int v13; // eax
  HSTRING *v14; // rax
  int ActivationFactory; // eax
  __int64 v16; // rsi
  int v17; // eax
  int v18; // edx
  int v19; // r9d
  const OLECHAR *StringRawBuffer; // rax
  __int64 v21; // r14
  int v22; // eax
  void *v23; // rax
  SIZE_T cb; // [rsp+38h] [rbp-51h] BYREF
  __int64 v26; // [rsp+40h] [rbp-49h] BYREF
  int v27; // [rsp+48h] [rbp-41h]
  __int64 v28; // [rsp+50h] [rbp-39h] BYREF
  __int64 v29; // [rsp+58h] [rbp-31h] BYREF
  void *v30; // [rsp+60h] [rbp-29h] BYREF
  char *v31; // [rsp+68h] [rbp-21h] BYREF
  __int64 v32; // [rsp+70h] [rbp-19h]
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-11h] BYREF
  __int64 v34; // [rsp+90h] [rbp+7h]
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+5Fh]

  v32 = a1;
  cb = 0LL;
  v27 = 0;
  v31 = 0LL;
  v5 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  if ( a2 )
  {
    if ( !a3 )
    {
      v6 = -2147024809;
      v7 = -2147024809;
      v8 = 2546;
      goto LABEL_14;
    }
    if ( !a4 )
    {
      v6 = -2147467261;
      v7 = -2147467261;
      v8 = 2547;
      goto LABEL_14;
    }
    *a4 = 0LL;
    v9 = sub_1400B6010(a3);
    v6 = v9;
    if ( v9 < 0 )
    {
      v8 = 2551;
LABEL_13:
      v7 = v9;
      goto LABEL_14;
    }
    v10 = HIDWORD(cb) + 48;
    v11 = CoTaskMemAlloc((unsigned int)(HIDWORD(cb) + 48));
    sub_140008C08((void **)&v31, v11);
    v12 = v31;
    if ( !v31 )
    {
      v6 = -2147024882;
      v7 = -2147024882;
      v8 = 2555;
      goto LABEL_14;
    }
    v9 = sub_1400B6010(a2);
    v6 = v9;
    if ( v9 < 0 )
    {
      v8 = 2559;
      goto LABEL_13;
    }
    WindowsDeleteString(0LL);
    v13 = sub_1400B6010(a2);
    v6 = v13;
    if ( v13 < 0 )
    {
      sub_14000C2A8((int)retaddr, 2560, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v13);
      WindowsDeleteString(0LL);
      goto LABEL_50;
    }
    if ( v29 )
      sub_1400B6010(v29);
    v14 = sub_140075E54((HSTRING *)&hstringHeader);
    ActivationFactory = RoGetActivationFactory(*v14, &unk_1400C8108, &v29);
    v6 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      sub_14000C2A8(
        (int)retaddr,
        2561,
        (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
        ActivationFactory);
      WindowsDeleteString(0LL);
      goto LABEL_50;
    }
    v16 = v29;
    if ( v28 )
      sub_1400B6010(v28);
    v17 = sub_1400B6010(v16);
    v6 = v17;
    if ( v17 >= 0 )
    {
      v17 = sub_1400B6010(v28);
      v6 = v17;
      if ( v17 >= 0 )
      {
        *(_OWORD *)v12 = xmmword_1400C5F78;
        *((_DWORD *)v12 + 4) = 2;
        *((_DWORD *)v12 + 5) = 1;
        StringRawBuffer = WindowsGetStringRawBuffer(0LL, 0LL);
        v17 = CLSIDFromString(StringRawBuffer, (LPCLSID)(v12 + 24));
        v6 = v17;
        if ( v17 >= 0 )
        {
          *((_DWORD *)v12 + 10) = v27;
          v21 = v32;
          v22 = sub_14001CCAC(v32, v12, v10, 0LL, 0, (DWORD *)&cb);
          v6 = v22;
          if ( (!v22 || v22 == -2147024662) && (_DWORD)cb )
          {
            v23 = CoTaskMemAlloc((unsigned int)cb);
            sub_140008C08(&v30, v23);
            v5 = v30;
            if ( !v30 )
            {
              v6 = -2147024882;
              v19 = -2147024882;
              v18 = 2584;
              goto LABEL_26;
            }
            v17 = sub_14001CCAC(v21, v12, v10, v30, cb, (DWORD *)&cb);
            v6 = v17;
            if ( v17 < 0 )
            {
              v18 = 2589;
              goto LABEL_25;
            }
          }
          else if ( v22 < 0 )
          {
            v19 = v22;
            v18 = 2593;
            goto LABEL_26;
          }
          if ( v26 )
            sub_1400B6010(v26);
          v34 = 0LL;
          sub_1400383F4(&hstringHeader, L"Windows.Storage.Streams.DataWriter", 0x23u, 0x22u);
          v17 = sub_140075EEC(v34, &v26);
          v6 = v17;
          if ( v17 >= 0 )
          {
            if ( v5 && (v17 = sub_1400B6010(v26), v6 = v17, v17 < 0) )
            {
              v18 = 2601;
            }
            else
            {
              v17 = sub_1400B6010(v26);
              v6 = v17;
              if ( v17 >= 0 )
              {
                WindowsDeleteString(0LL);
                v6 = 0;
                goto LABEL_50;
              }
              v18 = 2603;
            }
          }
          else
          {
            v18 = 2597;
          }
          goto LABEL_25;
        }
        v18 = 2567;
      }
      else
      {
        v18 = 2563;
      }
    }
    else
    {
      v18 = 2562;
    }
LABEL_25:
    v19 = v17;
LABEL_26:
    sub_14000C2A8((int)retaddr, v18, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v19);
    WindowsDeleteString(0LL);
    goto LABEL_50;
  }
  v6 = -2147024809;
  v7 = -2147024809;
  v8 = 2545;
LABEL_14:
  sub_14000C2A8((int)retaddr, v8, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v7);
  WindowsDeleteString(0LL);
LABEL_50:
  sub_140003238(&v28);
  sub_140003238(&v26);
  sub_140003238(&v29);
  sub_140008C08(&v30, 0LL);
  sub_140008C08((void **)&v31, 0LL);
  return v6;
}
