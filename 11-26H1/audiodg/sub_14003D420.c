/*
 * XREFs of sub_14003D420 @ 0x14003D420
 * Callers:
 *     <none>
 * Callees:
 *     sub_140002020 @ 0x140002020 (sub_140002020.c)
 *     sub_140002080 @ 0x140002080 (sub_140002080.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140054D20 @ 0x140054D20 (sub_140054D20.c)
 *     sub_140054D3C @ 0x140054D3C (sub_140054D3C.c)
 *     sub_140054D48 @ 0x140054D48 (sub_140054D48.c)
 *     sub_140054D5C @ 0x140054D5C (sub_140054D5C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003D420(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r9d
  int v12; // edx
  _DWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  _BOOL8 v16; // rcx
  __int64 v17; // r8
  _DWORD *v18; // r10
  __int64 i; // r11
  _OWORD *v20; // rax
  unsigned int v21; // r11d
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned int v26; // r11d
  __int64 v27; // r9
  __int64 v28; // r10
  __int64 v29; // r8
  int v30; // r11d
  __int64 v31; // r9
  _DWORD *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // ecx
  int v37; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v38[16]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  int v40; // [rsp+50h] [rbp-B0h]
  _DWORD *v41; // [rsp+58h] [rbp-A8h] BYREF
  int v42; // [rsp+60h] [rbp-A0h]
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp-90h] BYREF
  _UNKNOWN *retaddr; // [rsp+1A8h] [rbp+A8h]

  v6 = sub_140006470(a1);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v6, "SrvSystemEffect_GetControllableEffectsList", a1 + 140);
  *a2 = 0LL;
  *a3 = 0;
  v7 = *(_QWORD *)(a1 + 112);
  if ( v7 )
  {
    sub_140054D20(v38);
    sub_140054D5C(v38);
    v9 = sub_1400B6010(v7);
    v8 = v9;
    if ( v9 < 0 )
    {
      v11 = v9;
      v12 = 366;
LABEL_5:
      sub_14000C2A8((int)retaddr, v12, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v11);
      sub_140054D3C(v38);
      goto LABEL_16;
    }
    if ( *a3 )
    {
      v18 = CoTaskMemAlloc(24LL * (unsigned int)*a3);
      if ( !v18 )
      {
        v8 = -2147024882;
        v12 = 380;
        v11 = -2147024882;
        goto LABEL_5;
      }
      for ( i = 0LL; (unsigned int)i < *a3; v18[2 * v31 + 5] = v16 )
      {
        v20 = (_OWORD *)sub_140054D48(v38, (unsigned int)i, v17, 3 * i);
        *(_OWORD *)(v23 + 8 * v22) = *v20;
        v25 = sub_140054D48(v38, v21, v24, v22);
        *(_DWORD *)(v28 + 8 * v27 + 16) = *(_DWORD *)(v25 + 16);
        v16 = *(_DWORD *)(sub_140054D48(v38, v26, v29, v27) + 20) == 1;
        i = (unsigned int)(v30 + 1);
      }
      *a2 = (__int64)v18;
      v32 = (_DWORD *)sub_140006470(v16);
      if ( *v32 > 4u )
      {
        v39 = *a2;
        v35 = *a3;
        v41 = a3;
        v42 = 4;
        v40 = 24 * v35;
        sub_140002080((int)v32, (int)&unk_1400D193A, v33, v34, (__int64 *)&v41, &v39);
      }
    }
    else
    {
      v13 = (_DWORD *)sub_140006470(v10);
      if ( *v13 > 4u )
      {
        v37 = *a3;
        sub_140002020((int)v13, (int)&unk_1400D199A, v14, v15, (__int64)&v37);
      }
    }
    sub_140054D3C(v38);
    v8 = 0;
    goto LABEL_16;
  }
  v8 = -2147467263;
  sub_14000C2A8((int)retaddr, 363, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", -2147467263);
LABEL_16:
  sub_1400066EC(&PerformanceCount);
  return v8;
}
