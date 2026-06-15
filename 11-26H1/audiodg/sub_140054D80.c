/*
 * XREFs of sub_140054D80 @ 0x140054D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400115FC @ 0x1400115FC (sub_1400115FC.c)
 *     sub_140026C6C @ 0x140026C6C (sub_140026C6C.c)
 *     sub_14002A170 @ 0x14002A170 (sub_14002A170.c)
 *     sub_140033E34 @ 0x140033E34 (sub_140033E34.c)
 *     sub_140048384 @ 0x140048384 (sub_140048384.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140055CB4 @ 0x140055CB4 (sub_140055CB4.c)
 *     sub_140073A74 @ 0x140073A74 (sub_140073A74.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140054D80(__int64 a1, __int128 *a2, __int64 a3, int a4, _DWORD *a5, _QWORD *a6)
{
  int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  int v13; // eax
  __int64 v15; // [rsp+80h] [rbp-80h] BYREF
  __int64 v16; // [rsp+88h] [rbp-78h] BYREF
  __int64 v17; // [rsp+90h] [rbp-70h] BYREF
  __int64 v18; // [rsp+98h] [rbp-68h] BYREF
  int v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  _QWORD *v21; // [rsp+B0h] [rbp-50h]
  __int64 *v22; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v23; // [rsp+C0h] [rbp-40h] BYREF
  char v24; // [rsp+C8h] [rbp-38h]
  __int128 v25; // [rsp+D0h] [rbp-30h]
  __int128 v26; // [rsp+E0h] [rbp-20h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+F0h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+228h] [rbp+128h]

  v19 = a4;
  v20 = a3;
  v21 = a6;
  v25 = *a2;
  v26 = v25;
  EtwEventActivityIdControl(4LL, &v26);
  *a6 = 0LL;
  if ( a4 )
  {
    sub_140026C6C(
      (_BYTE *)(a1 + 140),
      39LL,
      "{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
      *a5,
      *((unsigned __int16 *)a5 + 2),
      *((unsigned __int16 *)a5 + 3),
      *((unsigned __int8 *)a5 + 8),
      *((unsigned __int8 *)a5 + 9),
      *((unsigned __int8 *)a5 + 10),
      *((unsigned __int8 *)a5 + 11),
      *((unsigned __int8 *)a5 + 12),
      *((unsigned __int8 *)a5 + 13),
      *((unsigned __int8 *)a5 + 14),
      *((unsigned __int8 *)a5 + 15));
    v11 = sub_140006470(v10);
    sub_140006980(&PerformanceCount, (LARGE_INTEGER)v11, "SrvSystemEffect_Create", a1 + 140);
    v16 = 0LL;
    v22 = &v16;
    v23 = 0LL;
    v24 = 1;
    v9 = sub_140055CB4(a5, a3, &v23);
    sub_140033E34((__int64)&v22);
    if ( v9 >= 0 )
    {
      v17 = 0LL;
      v9 = sub_140073A74((_DWORD)a5, v12, v20, v19, 0LL, v16, (__int64)&v17);
      if ( v9 >= 0 )
      {
        v15 = 0LL;
        v13 = sub_1400B6010(v17);
        v9 = v13;
        if ( v13 >= 0 )
        {
          v18 = 0LL;
          v9 = -2147467262;
          sub_14000C2A8(
            (int)retaddr,
            112,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
            -2147467262);
          sub_140003238(&v18);
        }
        else
        {
          sub_14000C2A8((int)retaddr, 109, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v13);
        }
        sub_140003238(&v15);
      }
      else
      {
        sub_140048384(
          (int)retaddr,
          106,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
          (unsigned int)v9,
          "APO CLSID {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
          *a5,
          *((unsigned __int16 *)a5 + 2),
          *((unsigned __int16 *)a5 + 3),
          *((unsigned __int8 *)a5 + 8),
          *((unsigned __int8 *)a5 + 9),
          *((unsigned __int8 *)a5 + 10),
          *((unsigned __int8 *)a5 + 11),
          *((unsigned __int8 *)a5 + 12),
          *((unsigned __int8 *)a5 + 13),
          *((unsigned __int8 *)a5 + 14),
          *((unsigned __int8 *)a5 + 15));
      }
      sub_140003238(&v17);
    }
    else
    {
      sub_14000C2A8((int)retaddr, 99, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v9);
    }
    sub_140008C08((void **)&v16, 0LL);
    sub_1400066EC(&PerformanceCount);
  }
  else
  {
    v9 = -2147024809;
    sub_14000C2A8((int)retaddr, 93, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", -2147024809);
  }
  EtwEventActivityIdControl(4LL, &v26);
  return (unsigned int)v9;
}
