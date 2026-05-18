/*
 * XREFs of sub_1800CFBEC @ 0x1800CFBEC
 * Callers:
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_18005BED0 @ 0x18005BED0 (sub_18005BED0.c)
 *     sub_1800977D4 @ 0x1800977D4 (sub_1800977D4.c)
 *     sub_1800B9708 @ 0x1800B9708 (sub_1800B9708.c)
 *     sub_1800B9758 @ 0x1800B9758 (sub_1800B9758.c)
 *     sub_1800CADDC @ 0x1800CADDC (sub_1800CADDC.c)
 *     sub_1800CF6A0 @ 0x1800CF6A0 (sub_1800CF6A0.c)
 *     sub_1800CF6F0 @ 0x1800CF6F0 (sub_1800CF6F0.c)
 *     sub_1800CF740 @ 0x1800CF740 (sub_1800CF740.c)
 *     sub_1800CF814 @ 0x1800CF814 (sub_1800CF814.c)
 *     sub_1800CF8E4 @ 0x1800CF8E4 (sub_1800CF8E4.c)
 *     sub_1800CFA1C @ 0x1800CFA1C (sub_1800CFA1C.c)
 *     sub_1800D040C @ 0x1800D040C (sub_1800D040C.c)
 *     sub_1800D05B8 @ 0x1800D05B8 (sub_1800D05B8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800CFBEC(
        ID3D11DeviceContext *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int a5,
        char a6,
        int a7,
        D3D_FEATURE_LEVEL a8,
        D3D_FEATURE_LEVEL a9,
        char a10)
{
  int v13; // ecx
  int DXGIFactory1; // esi
  char v15; // si
  char *v16; // rbx
  D3D_FEATURE_LEVEL *v17; // rdx
  D3D_FEATURE_LEVEL v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  ID3D11DeviceContext *v22; // rbx
  unsigned int i; // r13d
  ID3D11DeviceContext v25; // rdi
  unsigned int (__fastcall *v26)(struct ID3D11DeviceContextVtbl *, _QWORD, __int64 *); // rbx
  __int64 v27; // r8
  _OWORD *v28; // rcx
  _OWORD *v29; // rax
  __int64 v30; // rdx
  int v31; // r8d
  float v32; // xmm0_4
  _QWORD *v33; // rbx
  D3D_FEATURE_LEVEL *v34; // rdx
  __int64 **v35; // rcx
  __int64 j; // rax
  __int64 *k; // rcx
  __int64 v38; // rbx
  __int64 (__fastcall *v39)(__int64, ID3D11DeviceContext **); // rdi
  int v40; // [rsp+30h] [rbp-D0h]
  ID3D11Device *v41; // [rsp+50h] [rbp-B0h] BYREF
  ID3D11DeviceContext *v42; // [rsp+58h] [rbp-A8h] BYREF
  ID3D11DeviceContext *v43; // [rsp+60h] [rbp-A0h] BYREF
  D3D_FEATURE_LEVEL v44[2]; // [rsp+68h] [rbp-98h] BYREF
  D3D_FEATURE_LEVEL v45; // [rsp+70h] [rbp-90h] BYREF
  D3D_FEATURE_LEVEL *v46[2]; // [rsp+78h] [rbp-88h] BYREF
  D3D_FEATURE_LEVEL *v47; // [rsp+88h] [rbp-78h]
  __int128 v48; // [rsp+90h] [rbp-70h] BYREF
  char v49[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v50[320]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v51[40]; // [rsp+1F0h] [rbp+F0h] BYREF
  _OWORD v52[2]; // [rsp+330h] [rbp+230h] BYREF
  int v53; // [rsp+350h] [rbp+250h]
  char v54; // [rsp+354h] [rbp+254h] BYREF
  int v55; // [rsp+3D8h] [rbp+2D8h]

  v42 = a1;
  v48 = 0LL;
  *(_QWORD *)&v48 = sub_18005BED0();
  memset(v51, 0, 0x138uLL);
  sub_18000F938(a2);
  sub_18000F938(a3);
  sub_18000F938(a4);
  *(_OWORD *)v46 = 0LL;
  v47 = 0LL;
  v45 = a10 & 1;
  if ( (_BYTE)v45 || (a10 & 2) != 0 )
  {
    v13 = a8;
    if ( a8 < D3D_FEATURE_LEVEL_10_0 )
    {
LABEL_4:
      DXGIFactory1 = -2147024809;
LABEL_27:
      sub_18000F938(a2);
      sub_18000F938(a3);
      sub_18000F938(a4);
      goto LABEL_28;
    }
  }
  else
  {
    v13 = a8;
  }
  if ( (a6 & 4) != 0 )
  {
    v15 = 1;
    if ( v13 < 45312 )
      goto LABEL_4;
  }
  else
  {
    v15 = 0;
  }
  v52[0] = _mm_load_si128((const __m128i *)&xmmword_180191570);
  v52[1] = _mm_load_si128((const __m128i *)&xmmword_180191560);
  v53 = 37120;
  v16 = (char *)v52;
  v17 = v46[1];
  do
  {
    v18 = *(_DWORD *)v16;
    LODWORD(v43) = v18;
    if ( v18 >= v13 && v18 <= a9 )
    {
      if ( v17 == v47 )
      {
        sub_1800977D4((void **)v46, (__int64)v17, (int *)&v43);
        v17 = v46[1];
        v13 = a8;
      }
      else
      {
        *v17 = v18;
        v17 = ++v46[1];
      }
    }
    v16 += 4;
  }
  while ( v16 != &v54 );
  v19 = (2 * (a6 & 1) + 32) | 0x40;
  if ( (a6 & 2) == 0 )
    v19 = 2 * (a6 & 1) + 32;
  v20 = v19 | 0x100;
  if ( !v15 )
    v20 = v19;
  LODWORD(v41) = a6 & 8;
  v21 = v20 | 0x800;
  if ( (a6 & 0x10) == 0 )
    v21 = v20;
  LODWORD(v43) = v21;
  v55 = a6 & 0x20;
  v22 = v42 + 1;
  v42 = v22;
  sub_18000F938((__int64 *)v22);
  DXGIFactory1 = CreateDXGIFactory1(&stru_18018F518, (void **)&v22->lpVtbl);
  if ( DXGIFactory1 < 0 )
    goto LABEL_27;
  if ( a5 )
  {
    if ( a5 != 1 )
    {
LABEL_26:
      DXGIFactory1 = -2147467259;
      goto LABEL_27;
    }
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      v25.lpVtbl = v22->lpVtbl;
      v26 = (unsigned int (__fastcall *)(struct ID3D11DeviceContextVtbl *, _QWORD, __int64 *))*((_QWORD *)v22->lpVtbl->QueryInterface
                                                                                              + 12);
      sub_18000F938(a2);
      if ( v26(v25.lpVtbl, i, a2) == -2005270526 )
        break;
      DXGIFactory1 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)*a2 + 80LL))(*a2, v51);
      if ( DXGIFactory1 < 0 )
        goto LABEL_27;
      v27 = v51[38] & 2;
      if ( !v55 || (v51[38] & 2) == 0 )
      {
        v28 = v50;
        v29 = v51;
        v30 = 2LL;
        do
        {
          *v28 = *v29;
          v28[1] = v29[1];
          v28[2] = v29[2];
          v28[3] = v29[3];
          v28[4] = v29[4];
          v28[5] = v29[5];
          v28[6] = v29[6];
          v28 += 8;
          *(v28 - 1) = v29[7];
          v29 += 8;
          --v30;
        }
        while ( v30 );
        *v28 = *v29;
        v28[1] = v29[1];
        v28[2] = v29[2];
        *((_QWORD *)v28 + 6) = *((_QWORD *)v29 + 6);
        if ( !(unsigned __int8)sub_1800D05B8(v50, 0LL, v27, 128LL) )
        {
          if ( v51[34] < 0LL )
            v32 = (float)(int)(v51[34] & 1 | (v51[34] >> 1)) + (float)(int)(v51[34] & 1 | (v51[34] >> 1));
          else
            v32 = (float)SLODWORD(v51[34]);
          v44[0] = SLODWORD(v32);
          if ( (_DWORD)v41 )
            *(float *)v44 = v32 * -1.0;
          if ( v31 )
            v44[0] = -8388609;
          sub_1800CF8E4(&v48, (__int64)v49, (__int64)v44, (__int64)a2);
        }
      }
      v22 = v42;
    }
    sub_18000F938(a2);
    v33 = *(_QWORD **)v48;
    while ( v33 != (_QWORD *)v48 )
    {
      sub_1800CADDC(a2, v33 + 5);
      DXGIFactory1 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)*a2 + 80LL))(*a2, v51);
      if ( DXGIFactory1 < 0 )
        goto LABEL_27;
      sub_18000F938(a3);
      sub_18000F938(a4);
      v41 = 0LL;
      v44[0] = 0;
      v42 = 0LL;
      sub_18000F938((__int64 *)&v42);
      sub_18000F938((__int64 *)&v41);
      DXGIFactory1 = sub_1800D040C(
                       (IDXGIAdapter *)*a2,
                       D3D_DRIVER_TYPE_UNKNOWN,
                       v46[0],
                       v46[1] - v46[0],
                       v40,
                       &v41,
                       v44,
                       &v42);
      if ( DXGIFactory1 < 0 )
      {
        sub_18000F938(a2);
        sub_18000F938(a3);
        sub_18000F938(a4);
      }
      else if ( v44[0] >= a8 )
      {
        if ( !(_BYTE)v45
          || v44[0] >= D3D_FEATURE_LEVEL_11_0
          || (LODWORD(v43) = 0,
              ((int (__fastcall *)(ID3D11Device *, __int64, ID3D11DeviceContext **))v41->lpVtbl->CheckFeatureSupport)(
                v41,
                4LL,
                &v43) >= 0)
          && (_DWORD)v43 )
        {
          DXGIFactory1 = sub_1800B9708((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v41, a3);
          if ( DXGIFactory1 < 0
            || (DXGIFactory1 = sub_1800CF6A0((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v42, a4),
                DXGIFactory1 < 0) )
          {
            sub_18000F938((__int64 *)&v42);
            goto LABEL_80;
          }
          sub_18000F938((__int64 *)&v42);
          sub_18000F938((__int64 *)&v41);
          break;
        }
      }
      sub_18000F938((__int64 *)&v42);
      sub_18000F938((__int64 *)&v41);
      v35 = (__int64 **)v33[2];
      if ( *((_BYTE *)v35 + 25) )
      {
        for ( j = v33[1]; !*(_BYTE *)(j + 25) && v33 == *(_QWORD **)(j + 16); j = *(_QWORD *)(j + 8) )
          v33 = (_QWORD *)j;
        v33 = (_QWORD *)j;
      }
      else
      {
        v33 = (_QWORD *)v33[2];
        for ( k = *v35; !*((_BYTE *)k + 25); k = (__int64 *)*k )
          v33 = k;
      }
    }
    if ( v55 || *a2 && *a3 && *a4 )
      goto LABEL_94;
    v34 = v46[0];
    if ( v46[0] == v46[1] )
      v34 = v46[1];
    else
      v46[1] = v46[0];
    v45 = D3D_FEATURE_LEVEL_10_0;
    if ( v34 == v47 )
    {
      sub_1800977D4((void **)v46, (__int64)v34, (int *)&v45);
    }
    else
    {
      *v34 = D3D_FEATURE_LEVEL_10_0;
      ++v46[1];
    }
    sub_18000F938(a2);
    sub_18000F938(a3);
    sub_18000F938(a4);
  }
  v41 = 0LL;
  v45 = 0;
  v43 = 0LL;
  sub_18000F938((__int64 *)&v43);
  sub_18000F938((__int64 *)&v41);
  DXGIFactory1 = sub_1800D040C(0LL, D3D_DRIVER_TYPE_WARP, v46[0], v46[1] - v46[0], v40, &v41, &v45, &v43);
  if ( DXGIFactory1 < 0 )
    goto LABEL_84;
  *(_QWORD *)v44 = 0LL;
  DXGIFactory1 = sub_1800CF6F0((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v41, (__int64 *)v44);
  if ( DXGIFactory1 < 0 )
  {
LABEL_86:
    sub_18000F938((__int64 *)v44);
LABEL_84:
    sub_18000F938((__int64 *)&v43);
LABEL_80:
    sub_18000F938((__int64 *)&v41);
    goto LABEL_27;
  }
  v42 = 0LL;
  v38 = *(_QWORD *)v44;
  v39 = *(__int64 (__fastcall **)(__int64, ID3D11DeviceContext **))(**(_QWORD **)v44 + 56LL);
  sub_18000F938((__int64 *)&v42);
  DXGIFactory1 = v39(v38, &v42);
  if ( DXGIFactory1 < 0
    || (DXGIFactory1 = sub_1800B9758((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v42, a2), DXGIFactory1 < 0)
    || (DXGIFactory1 = sub_1800B9708((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v41, a3), DXGIFactory1 < 0)
    || (DXGIFactory1 = sub_1800CF6A0((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v43, a4), DXGIFactory1 < 0)
    || (DXGIFactory1 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)*a2 + 80LL))(*a2, v51), DXGIFactory1 < 0) )
  {
    sub_18000F938((__int64 *)&v42);
    goto LABEL_86;
  }
  sub_18000F938((__int64 *)&v42);
  sub_18000F938((__int64 *)v44);
  sub_18000F938((__int64 *)&v43);
  sub_18000F938((__int64 *)&v41);
LABEL_94:
  if ( !*a2 || !*a3 || !*a4 )
    goto LABEL_26;
  sub_1800CF814(*a2);
  sub_1800CF740(*a3);
  if ( DXGIFactory1 < 0 )
    goto LABEL_27;
LABEL_28:
  if ( v46[0] )
  {
    sub_18000E26C(v46[0], ((char *)v47 - (char *)v46[0]) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_OWORD *)v46 = 0LL;
    v47 = 0LL;
  }
  sub_1800CFA1C((void **)&v48, (__int64)&v48);
  return (unsigned int)DXGIFactory1;
}
