/*
 * XREFs of sub_14006F770 @ 0x14006F770
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140016F18 @ 0x140016F18 (sub_140016F18.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140035328 @ 0x140035328 (sub_140035328.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14006F770(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v9; // ebx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // r9d
  HRESULT v14; // eax
  int v15; // edx
  __int64 v16; // r8
  int v17; // edx
  int v18; // r9d
  int v19; // eax
  __int128 v20; // xmm0
  __int64 v22; // [rsp+40h] [rbp-29h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+48h] [rbp-21h] BYREF
  HANDLE v24; // [rsp+50h] [rbp-19h] BYREF
  __int64 v25; // [rsp+58h] [rbp-11h] BYREF
  __int128 v26; // [rsp+60h] [rbp-9h]
  __int128 v27; // [rsp+70h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+4Fh]

  v26 = *(_OWORD *)(a1 + 104);
  v27 = v26;
  EtwEventActivityIdControl(4LL, &v27);
  if ( !a2 )
  {
    v9 = -2147467261;
    v10 = 278;
LABEL_43:
    v13 = v9;
    goto LABEL_44;
  }
  if ( a3 )
  {
    v10 = 279;
LABEL_42:
    v9 = -2147024809;
    goto LABEL_43;
  }
  if ( *(_QWORD *)(a2 + 64) || *(_QWORD *)(a2 + 72) )
  {
    v10 = 283;
    goto LABEL_42;
  }
  *(_DWORD *)(a6 + 944) = 0;
  v11 = sub_140035328(*(_DWORD *)a2);
  v9 = v11;
  if ( v11 < 0 )
  {
    v13 = v11;
    v10 = 288;
LABEL_44:
    sub_14000C2A8(
      (int)retaddr,
      v10,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
      v13);
    goto LABEL_45;
  }
  if ( (unsigned int)(v12 - 2) <= 1 || *(_DWORD *)(a2 + 328) )
  {
    v10 = 294;
    goto LABEL_42;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v23 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  v22 = 0LL;
  v14 = sub_1400B6010(*(_QWORD *)(a1 + 88));
  v9 = v14;
  if ( v14 < 0 )
  {
    v15 = 299;
LABEL_13:
    sub_14000C2A8(
      (int)retaddr,
      v15,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
      v14);
LABEL_14:
    sub_140003238(&v22);
    sub_140018FF0(&v23);
    goto LABEL_45;
  }
  v14 = CoImpersonateClient();
  v9 = v14;
  if ( v14 < 0 )
  {
    v15 = 301;
    goto LABEL_13;
  }
  v24 = OpenProcess(0x40u, 0, *(_DWORD *)(a2 + 12));
  CoRevertToSelf();
  v16 = *(_QWORD *)(a2 + 32);
  if ( (*(_DWORD *)(a1 + 80) & 0x40000) != 0 )
  {
    if ( !v16 )
    {
      v17 = 318;
LABEL_20:
      v9 = -2005139379;
LABEL_21:
      v18 = v9;
LABEL_22:
      sub_14000C2A8(
        (int)retaddr,
        v17,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
        v18);
      sub_140016F18(&v24);
      goto LABEL_14;
    }
    if ( v16 < *(_QWORD *)(a1 + 224) || v16 > 50000000 )
    {
      v9 = -2005139386;
      v17 = 321;
      goto LABEL_21;
    }
    if ( v16 != *(_QWORD *)(a2 + 24) )
    {
      v9 = -2005139371;
      v17 = 324;
      goto LABEL_21;
    }
  }
  else
  {
    if ( v16 && (v16 < *(_QWORD *)(a1 + 224) || v16 > 50000000) )
    {
      v9 = -2005139386;
      v17 = 339;
      goto LABEL_21;
    }
    if ( *(_QWORD *)(a2 + 24) > 0x2FAF080uLL )
    {
      v17 = 346;
      goto LABEL_20;
    }
  }
  v24 = 0LL;
  v19 = sub_1400B6010(v22);
  v9 = v19;
  if ( v19 < 0 )
  {
    v18 = v19;
    v17 = 355;
    goto LABEL_22;
  }
  *(_DWORD *)(a6 + 944) = 2;
  v25 = 0LL;
  sub_1400B6010(v22);
  if ( *(_DWORD *)a2 )
    v20 = xmmword_1400CA5D0;
  else
    v20 = xmmword_1400CA5F0;
  *(_OWORD *)a6 = v20;
  *(_DWORD *)(a6 + 936) = 1;
  sub_140003238(&v25);
  sub_140016F18(&v24);
  sub_140003238(&v22);
  sub_140018FF0(&v23);
  v9 = 0;
LABEL_45:
  EtwEventActivityIdControl(4LL, &v27);
  return v9;
}
