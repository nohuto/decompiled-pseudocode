/*
 * XREFs of ?DxgkDDisplayEnumCoreTranslate@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1403C2704
 * Callers:
 *     DxgkDDisplayEnumInternalLegacy @ 0x1403C1FD0 (DxgkDDisplayEnumInternalLegacy.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER2@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_ADAPTER2@@I@Z @ 0x140192C58 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER2@@$00@@QEAAPEAU_D3DKMT_D.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET2@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_TARGET2@@I@Z @ 0x1401CD8B4 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET2@@$00@@QEAAPEAU_D3DKMT_DD.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@@Z @ 0x1401CDE68 (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@@Z.c)
 */

__int64 __fastcall DxgkDDisplayEnumCoreTranslate(struct _D3DKMT_DDISPLAY_ENUM *a1)
{
  unsigned int v2; // r8d
  unsigned int v3; // edx
  unsigned int v4; // eax
  char *v5; // rcx
  char *v6; // rax
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // r9d
  unsigned int v11; // edx
  unsigned int v12; // edi
  __int64 v13; // rcx
  _OWORD *v14; // r8
  char *v15; // rax
  __int128 v16; // xmm1
  unsigned int v17; // r9d
  _OWORD *v18; // r8
  __int64 v19; // rax
  char *v20; // rcx
  __int128 v21; // xmm1
  int v22; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v23; // [rsp+24h] [rbp-DCh]
  unsigned int v24; // [rsp+28h] [rbp-D8h]
  int v25; // [rsp+2Ch] [rbp-D4h]
  char *v26; // [rsp+30h] [rbp-D0h]
  unsigned int v27; // [rsp+38h] [rbp-C8h]
  unsigned int v28; // [rsp+3Ch] [rbp-C4h]
  __int64 v29; // [rsp+40h] [rbp-C0h]
  char *v30; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v32[572]; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+294h] [rbp+194h]
  PVOID v34; // [rsp+2A0h] [rbp+1A0h] BYREF
  char v35; // [rsp+2A8h] [rbp+1A8h] BYREF
  int v36; // [rsp+6F0h] [rbp+5F0h]

  v2 = *((_DWORD *)a1 + 1);
  v3 = *((_DWORD *)a1 + 5);
  v23 = *(_DWORD *)a1;
  v4 = *((_DWORD *)a1 + 4);
  v5 = 0LL;
  v29 = 1096LL;
  v22 = 1;
  v24 = v2;
  v25 = 572;
  v27 = v4;
  v28 = v3;
  P = 0LL;
  v33 = 0;
  if ( v2 )
  {
    PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_ADAPTER2,1>::AllocateElements((__int64 *)&P, v2);
    v5 = (char *)P;
    if ( !P )
      return 3221225495LL;
    v3 = v28;
  }
  v6 = 0LL;
  v34 = 0LL;
  v36 = 0;
  if ( v3 )
  {
    PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_TARGET2,1>::AllocateElements((__int64 *)&v34, v3);
    v6 = (char *)v34;
    v5 = (char *)P;
    if ( !v34 )
    {
      v34 = 0LL;
      v36 = 0;
      if ( P != v32 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      return 3221225495LL;
    }
  }
  v26 = v5;
  v30 = v6;
  v8 = DxgkDDisplayEnumCore((struct _D3DKMT_DDISPLAY_ENUM2 *)&v22);
  v9 = v23;
  v10 = 0;
  v11 = v27;
  v12 = v8;
  *(_DWORD *)a1 = v23;
  *((_DWORD *)a1 + 4) = v11;
  if ( v9 )
  {
    do
    {
      if ( v10 >= *((_DWORD *)a1 + 1) )
        break;
      v13 = 4LL;
      v14 = (_OWORD *)(*((_QWORD *)a1 + 1) + 568LL * v10);
      v15 = &v26[572 * v10 + 4];
      do
      {
        *v14 = *(_OWORD *)v15;
        v14[1] = *((_OWORD *)v15 + 1);
        v14[2] = *((_OWORD *)v15 + 2);
        v14[3] = *((_OWORD *)v15 + 3);
        v14[4] = *((_OWORD *)v15 + 4);
        v14[5] = *((_OWORD *)v15 + 5);
        v14[6] = *((_OWORD *)v15 + 6);
        v14 += 8;
        v16 = *((_OWORD *)v15 + 7);
        v15 += 128;
        *(v14 - 1) = v16;
        --v13;
      }
      while ( v13 );
      ++v10;
      *v14 = *(_OWORD *)v15;
      v14[1] = *((_OWORD *)v15 + 1);
      v14[2] = *((_OWORD *)v15 + 2);
      *((_QWORD *)v14 + 6) = *((_QWORD *)v15 + 6);
    }
    while ( v10 < v23 );
    v11 = v27;
  }
  v17 = 0;
  if ( v11 )
  {
    do
    {
      if ( v17 >= *((_DWORD *)a1 + 5) )
        break;
      v18 = (_OWORD *)(*((_QWORD *)a1 + 3) + 1088LL * v17);
      v19 = 8LL;
      v20 = &v30[1096 * v17 + 4];
      do
      {
        *v18 = *(_OWORD *)v20;
        v18[1] = *((_OWORD *)v20 + 1);
        v18[2] = *((_OWORD *)v20 + 2);
        v18[3] = *((_OWORD *)v20 + 3);
        v18[4] = *((_OWORD *)v20 + 4);
        v18[5] = *((_OWORD *)v20 + 5);
        v18[6] = *((_OWORD *)v20 + 6);
        v18 += 8;
        v21 = *((_OWORD *)v20 + 7);
        v20 += 128;
        *(v18 - 1) = v21;
        --v19;
      }
      while ( v19 );
      ++v17;
      *v18 = *(_OWORD *)v20;
      v18[1] = *((_OWORD *)v20 + 1);
      v18[2] = *((_OWORD *)v20 + 2);
      v18[3] = *((_OWORD *)v20 + 3);
    }
    while ( v17 < v27 );
  }
  if ( v34 != &v35 && v34 )
    ExFreePoolWithTag(v34, 0);
  v34 = 0LL;
  v36 = 0;
  if ( P != v32 && P )
    ExFreePoolWithTag(P, 0);
  return v12;
}
