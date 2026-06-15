/*
 * XREFs of sub_1400373B0 @ 0x1400373B0
 * Callers:
 *     sub_14006E110 @ 0x14006E110 (sub_14006E110.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140037724 @ 0x140037724 (sub_140037724.c)
 *     sub_1400463BC @ 0x1400463BC (sub_1400463BC.c)
 *     sub_140048290 @ 0x140048290 (sub_140048290.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_1400373B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // rax
  LPCRITICAL_SECTION v10; // rcx
  __int64 v11; // rbx
  int v12; // edi
  int v14; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-71h] BYREF
  __int64 v16; // [rsp+38h] [rbp-69h] BYREF
  int v17; // [rsp+40h] [rbp-61h]
  int v18; // [rsp+44h] [rbp-5Dh]
  __int64 v19; // [rsp+48h] [rbp-59h] BYREF
  __int64 v20; // [rsp+50h] [rbp-51h] BYREF
  __int128 v21; // [rsp+60h] [rbp-41h]
  __int128 v22; // [rsp+70h] [rbp-31h]
  __int64 v23; // [rsp+80h] [rbp-21h]
  __int128 v24; // [rsp+90h] [rbp-11h]
  __int128 v25; // [rsp+A0h] [rbp-1h]
  __int64 v26; // [rsp+B0h] [rbp+Fh]
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+57h]

  v4 = sub_1400B6010(a1);
  lpCriticalSection = 0LL;
  v5 = sub_140037724(&lpCriticalSection);
  v6 = v5;
  if ( v5 < 0 )
  {
    sub_14000C2A8((int)retaddr, 774, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v5);
    return (unsigned int)v6;
  }
  v19 = 0LL;
  v24 = (unsigned __int64)&v19;
  LOBYTE(v25) = 1;
  v6 = sub_1400463BC(lpCriticalSection);
  if ( (_BYTE)v25 )
  {
    v7 = *(_QWORD *)v24;
    *(_QWORD *)v24 = *((_QWORD *)&v24 + 1);
    if ( v7 )
      sub_1400B6010(v7);
  }
  if ( v6 < 0 )
  {
    sub_14000C2A8((int)retaddr, 777, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v6);
LABEL_32:
    sub_140003238(&v19);
    return (unsigned int)v6;
  }
  v16 = 0LL;
  v24 = (unsigned __int64)&v16;
  LOBYTE(v25) = 1;
  v6 = sub_1400B6010(v19);
  if ( (_BYTE)v25 )
  {
    v8 = *(_QWORD *)v24;
    *(_QWORD *)v24 = *((_QWORD *)&v24 + 1);
    if ( v8 )
      sub_1400B6010(v8);
  }
  if ( v6 < 0 )
  {
    sub_14000C2A8((int)retaddr, 780, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v6);
    sub_140003238(&v16);
    goto LABEL_32;
  }
  v9 = (__int64 *)sub_140048290(v4);
  if ( v9 )
  {
    v10 = 0LL;
    lpCriticalSection = 0LL;
    v11 = *v9;
    v20 = v11;
    if ( v11 )
    {
      sub_1400B6010(v11);
      v10 = lpCriticalSection;
    }
    lpCriticalSection = 0LL;
    if ( v10 )
      sub_1400B6010(v10);
    v12 = sub_1400B6010(v11);
    if ( v12 >= 0 )
    {
      v18 = 0;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v17 = 0;
      sub_1400B6010(v16);
      *((_QWORD *)&v25 + 1) = a3;
      while ( v18 )
      {
        v21 = v24;
        v22 = v25;
        v23 = v26;
        v12 = sub_1400B6010(lpCriticalSection);
        if ( v12 < 0 )
        {
          v14 = 802;
          goto LABEL_31;
        }
        sub_1400B6010(v16);
        sub_1400B6010(v16);
      }
      if ( lpCriticalSection )
        sub_1400B6010(lpCriticalSection);
      if ( v11 )
        sub_1400B6010(v11);
      goto LABEL_24;
    }
    v14 = 790;
LABEL_31:
    sub_14000C2A8((int)retaddr, v14, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v12);
    sub_140003238((__int64 *)&lpCriticalSection);
    sub_140003238(&v20);
    sub_140003238(&v16);
    v6 = v12;
    goto LABEL_32;
  }
LABEL_24:
  if ( v16 )
    sub_1400B6010(v16);
  if ( v19 )
    sub_1400B6010(v19);
  return 0LL;
}
