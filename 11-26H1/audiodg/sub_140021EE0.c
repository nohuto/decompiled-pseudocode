/*
 * XREFs of sub_140021EE0 @ 0x140021EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_140022600 @ 0x140022600 (sub_140022600.c)
 *     sub_140023930 @ 0x140023930 (sub_140023930.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140052748 @ 0x140052748 (sub_140052748.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140021EE0(__int64 a1, struct _RTL_CRITICAL_SECTION *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdi
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __m128i v12; // xmm6
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // r9d
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // [rsp+48h] [rbp-29h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+50h] [rbp-21h] BYREF
  struct _RTL_CRITICAL_SECTION *v23[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v24; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v25[16]; // [rsp+78h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh]

  v22 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
  v23[0] = v4;
  v21 = 0LL;
  v5 = sub_1400B6010(a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    sub_14000C2A8((int)retaddr, 471, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v5);
  }
  else
  {
    v7 = sub_1400B6010(v21);
    if ( sub_1400B6010(a1 - 8) != v7 )
    {
      sub_14000C2A8((int)retaddr, 474, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", -2147024809);
      goto LABEL_28;
    }
    if ( *(_BYTE *)(a1 + 256)
      && (*(_DWORD *)(a1 + 104) != 2 && *(_DWORD *)(a1 + 104) != 3 || !(unsigned __int8)sub_1400B6010(v21)) )
    {
      sub_14000C2A8((int)retaddr, 479, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", -2147024809);
      sub_140003238(&v21);
      sub_140018FF0(v23);
      return 2147942487LL;
    }
    v8 = (_QWORD *)sub_1400B6010(v21);
    v9 = (_QWORD *)sub_1400B6010(a1 - 8);
    v10 = *v9 - *v8;
    if ( *v9 == *v8 )
      v10 = v9[1] - v8[1];
    if ( v10 )
    {
      v19 = (_QWORD *)sub_1400B6010(a1 - 8);
      v20 = *v19 - 0x4FD1B4939E90EA20LL;
      if ( *v19 == 0x4FD1B4939E90EA20LL )
        v20 = v19[1] + 0x30A9569EEC81575FLL;
      if ( v20 )
      {
        sub_14000C2A8(
          (int)retaddr,
          486,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
          -2147024809);
LABEL_28:
        if ( v4 )
          LeaveCriticalSection(v4);
        return 2147942487LL;
      }
    }
    v11 = sub_1400B6010(a1 - 8);
    v6 = v11;
    if ( v11 < 0 )
    {
      sub_14000C2A8((int)retaddr, 489, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v11);
    }
    else
    {
      v12 = *(__m128i *)sub_140052748(v25, &v21, a1 - 8);
      v13 = sub_1400B6010(v21);
      v6 = v13;
      if ( v13 < 0 )
      {
        sub_14000C2A8((int)retaddr, 498, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v13);
        if ( *(_QWORD *)v12.m128i_i64[0] )
          sub_1400B6010(_mm_srli_si128(v12, 8).m128i_u64[0]);
        if ( v21 )
          sub_1400B6010(v21);
      }
      else
      {
        sub_140019444((__int64 *)(a1 + 96));
        v14 = sub_140022600(&v22, a1 + 96);
        v6 = v14;
        if ( v14 >= 0 )
        {
          sub_140007CC0();
          v16 = sub_140006470(v15);
          if ( *(_DWORD *)v16 > 4u
            && (*(_DWORD *)(v16 + 16) & 0x200LL) != 0
            && (*(_QWORD *)(v16 + 24) & 0x200LL) == *(_QWORD *)(v16 + 24) )
          {
            v22 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 264);
            v23[0] = a2;
            v24 = a1 - 8;
            sub_140023930(v16, (unsigned int)&unk_1400D2621, v16, v17, (__int64)&v24, (__int64)v23, (__int64)&v22);
          }
          if ( v21 )
            sub_1400B6010(v21);
          if ( v4 )
            LeaveCriticalSection(v4);
          return 0LL;
        }
        sub_14000C2A8((int)retaddr, 502, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v14);
        if ( v21 )
          sub_1400B6010(v21);
      }
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v6;
}
