/*
 * XREFs of sub_140055840 @ 0x140055840
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_140006BCC @ 0x140006BCC (sub_140006BCC.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140038C2C @ 0x140038C2C (sub_140038C2C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14004B6F4 @ 0x14004B6F4 (sub_14004B6F4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140055840(__int64 a1, __int64 a2, LPVOID *a3)
{
  __int64 v6; // rax
  int v7; // edx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  unsigned __int16 *v13; // rax
  int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C0h] BYREF
  _UNKNOWN *retaddr; // [rsp+168h] [rbp+68h]

  v6 = sub_140006470(a1);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v6, "SrvSystemEffect_GetPreferredOutputFormat", a1 + 140);
  if ( a3 )
  {
    *a3 = 0LL;
    if ( !a2 )
    {
      v7 = 578;
      goto LABEL_5;
    }
    v9 = (unsigned int)*(unsigned __int16 *)(a2 + 16) + 18;
    v16 = 0LL;
    v10 = sub_14004B6F4(a2, v9, &v16);
    v8 = v10;
    if ( v10 < 0 )
    {
      sub_14000C2A8((int)retaddr, 585, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v10);
LABEL_8:
      sub_140003238(&v16);
      goto LABEL_21;
    }
    v11 = *(_QWORD *)(a1 + 96);
    v17 = 0LL;
    if ( v11 )
    {
      sub_140038C2C(&v18, v11);
      if ( v18 )
      {
        v12 = sub_1400B6010(v18);
        v8 = v12;
        if ( v12 < 0 )
        {
          sub_14000C2A8((int)retaddr, 593, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v12);
          sub_140003238(&v18);
LABEL_13:
          sub_140003238(&v17);
          goto LABEL_8;
        }
      }
      sub_140003238(&v18);
      if ( v17 )
      {
        v13 = (unsigned __int16 *)sub_1400B6010(v17);
        if ( !v13 )
        {
          v8 = -2004287480;
          sub_14000C2A8(
            (int)retaddr,
            600,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
            -2004287480);
          goto LABEL_13;
        }
        pv = 0LL;
        v14 = sub_140006BCC(v13, &pv);
        v8 = v14;
        if ( v14 < 0 )
        {
          sub_14000C2A8((int)retaddr, 603, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v14);
          CoTaskMemFree(pv);
          goto LABEL_13;
        }
        *a3 = pv;
        CoTaskMemFree(0LL);
      }
    }
    sub_140003238(&v17);
    sub_140003238(&v16);
    v8 = 0;
    goto LABEL_21;
  }
  v7 = 575;
LABEL_5:
  v8 = -2147024809;
  sub_14000C2A8((int)retaddr, v7, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", -2147024809);
LABEL_21:
  sub_1400066EC(&PerformanceCount);
  return v8;
}
