/*
 * XREFs of sub_140005910 @ 0x140005910
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_140006BCC @ 0x140006BCC (sub_140006BCC.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14004B6F4 @ 0x14004B6F4 (sub_14004B6F4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140005910(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  void *v13; // rax
  int v14; // eax
  unsigned int v15; // edi
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19[2]; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-B0h] BYREF
  void *retaddr; // [rsp+188h] [rbp+88h]

  sub_140006470();
  sub_140006980(&PerformanceCount);
  *a5 = 0LL;
  v17 = 0LL;
  if ( a3 && (v8 = sub_14004B6F4(a3, (unsigned int)*(unsigned __int16 *)(a3 + 16) + 18, &v17), v9 = v8, v8 < 0) )
  {
    sub_14000C2A8(retaddr, 309LL, "avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", (unsigned int)v8);
    if ( v17 )
      sub_1400B6010(v17);
  }
  else
  {
    v19[0] = 0LL;
    if ( a4 && (v10 = sub_14004B6F4(a4, (unsigned int)*(unsigned __int16 *)(a4 + 16) + 18, v19), v9 = v10, v10 < 0) )
    {
      sub_14000C2A8(retaddr, 319LL, "avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", (unsigned int)v10);
      if ( v19[0] )
        sub_1400B6010(v19[0]);
      if ( v17 )
        sub_1400B6010(v17);
    }
    else
    {
      v18 = 0LL;
      v11 = sub_1400B6010(a1 + 8);
      v9 = v11;
      if ( v11 < 0 )
      {
        sub_14000C2A8(retaddr, 332LL, "avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", (unsigned int)v11);
        if ( v18 )
          sub_1400B6010(v18);
        if ( v19[0] )
          sub_1400B6010(v19[0]);
        goto LABEL_14;
      }
      v12 = v18;
      if ( !v18 )
      {
LABEL_10:
        if ( v12 )
          sub_1400B6010(v12);
        if ( v19[0] )
          sub_1400B6010(v19[0]);
LABEL_14:
        if ( v17 )
          sub_1400B6010(v17);
        goto LABEL_16;
      }
      v13 = (void *)sub_1400B6010(v18);
      if ( v13 )
      {
        v14 = sub_140006BCC(v13);
        v15 = v14;
        if ( v14 < 0 )
        {
          sub_14000C2A8(retaddr, 339LL, "avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", (unsigned int)v14);
          sub_140003238(&v18);
          sub_140003238(v19);
          sub_140003238(&v17);
          v9 = v15;
          goto LABEL_16;
        }
        v12 = v18;
        goto LABEL_10;
      }
      v9 = -2004287480;
      sub_14000C2A8(retaddr, 337LL, "avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", 2290679816LL);
      if ( v18 )
        sub_1400B6010(v18);
      if ( v19[0] )
        sub_1400B6010(v19[0]);
      if ( v17 )
        sub_1400B6010(v17);
    }
  }
LABEL_16:
  sub_1400066EC(&PerformanceCount);
  return v9;
}
