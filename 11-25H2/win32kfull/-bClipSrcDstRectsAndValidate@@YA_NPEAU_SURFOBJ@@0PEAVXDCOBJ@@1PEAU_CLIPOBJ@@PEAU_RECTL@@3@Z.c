/*
 * XREFs of ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVXDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x140161008
 * Callers:
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x14009DE84 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 * Callees:
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1401DD684 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

bool __fastcall bClipSrcDstRectsAndValidate(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct XDCOBJ *a3,
        struct XDCOBJ *a4,
        struct _CLIPOBJ *a5,
        struct _RECTL *a6,
        struct _RECTL *a7)
{
  struct _RECTL *v7; // r13
  int v8; // esi
  int v9; // r14d
  LONG right; // eax
  LONG left; // r15d
  LONG top; // r12d
  __int32 bottom; // r11d
  LONG v14; // eax
  __int32 v15; // ebx
  __int32 v16; // eax
  __int32 v17; // edi
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rax
  int v21; // ecx
  int v22; // r15d
  int v23; // r12d
  __int32 v24; // eax
  __int32 v25; // r8d
  int v26; // edx
  int v27; // ecx
  __int32 v28; // edx
  __int32 v29; // r8d
  __int32 v30; // eax
  __int32 v31; // ecx
  struct _RECTL v32; // xmm3
  __int32 v33; // eax
  __int32 v34; // ecx
  __m128i v35; // xmm4
  int v36; // eax
  int v37; // eax
  bool result; // al
  HDEV hdev; // rax
  HDEV v40; // rax
  __int32 v41; // xmm3_4
  __m128i v42; // [rsp+20h] [rbp-58h] BYREF
  __m128i v43; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v44; // [rsp+40h] [rbp-38h] BYREF
  __int32 v45; // [rsp+48h] [rbp-30h]
  int v46; // [rsp+4Ch] [rbp-2Ch]
  unsigned __int64 v47; // [rsp+50h] [rbp-28h] BYREF
  __int32 v48; // [rsp+58h] [rbp-20h]
  __int32 v49; // [rsp+5Ch] [rbp-1Ch]
  struct _RECTL v50; // [rsp+60h] [rbp-18h] BYREF
  LONG v51; // [rsp+C0h] [rbp+48h]
  __int32 v52; // [rsp+C8h] [rbp+50h]
  struct XDCOBJ *v53; // [rsp+D0h] [rbp+58h] BYREF
  struct XDCOBJ *v54; // [rsp+D8h] [rbp+60h] BYREF

  v54 = a4;
  v53 = a3;
  v7 = a6;
  v8 = 0;
  v9 = 0;
  v44 = 0LL;
  right = a7->right;
  left = a7->left;
  top = a7->top;
  v51 = a6->left;
  v43.m128i_i32[0] = a6->left;
  LODWORD(a6) = a6->top;
  v43.m128i_i32[1] = (int)a6;
  v52 = v7->right;
  v43.m128i_i32[2] = v52;
  bottom = v7->bottom;
  v50.right = right;
  v14 = a7->bottom;
  LODWORD(a5) = bottom;
  v43.m128i_i32[3] = bottom;
  *(_QWORD *)&v50.left = __PAIR64__(top, left);
  v50.bottom = v14;
  if ( SLODWORD(a1[1].hsurf) < 0 )
  {
    hdev = a1->hdev;
    if ( hdev )
    {
      if ( _bittest((const signed __int32 *)hdev + 10, 0x11u) )
      {
        v8 = *((_DWORD *)hdev + 644);
        v9 = *((_DWORD *)hdev + 645);
        v44 = __PAIR64__(v9, v8);
      }
    }
  }
  v15 = 0;
  v16 = v8 + a1->sizlBitmap.cx;
  v47 = 0LL;
  v45 = v16;
  v17 = 0;
  v46 = v9 + a1->sizlBitmap.cy;
  if ( SLODWORD(a2[1].hsurf) < 0 )
  {
    v40 = a2->hdev;
    if ( v40 )
    {
      if ( _bittest((const signed __int32 *)v40 + 10, 0x11u) )
      {
        v15 = *((_DWORD *)v40 + 644);
        v17 = *((_DWORD *)v40 + 645);
        v47 = __PAIR64__(v17, v15);
      }
    }
  }
  v48 = v15 + a2->sizlBitmap.cx;
  v49 = v17 + a2->sizlBitmap.cy;
  if ( a3 )
  {
    v18 = *(_QWORD *)a3;
    v19 = *(_DWORD *)(*(_QWORD *)a3 + 520LL);
    if ( (v19 & 1) != 0 && (v19 & 2) == 0 )
    {
      a6 = *(struct _RECTL **)(v18 + 524);
      *((float *)&a6 + 1) = 1.0 / *(float *)(v18 + 528);
      *(float *)&a6 = 1.0 / *(float *)&a6;
      ERECTL::vScale((ERECTL *)&v44, (const struct POINTFL *)&a6);
      ERECTL::vScale((ERECTL *)&v43, (const struct POINTFL *)&a6);
      v9 = HIDWORD(v44);
      v8 = v44;
      a4 = v54;
      LODWORD(a5) = v43.m128i_i32[3];
      v52 = v43.m128i_i32[2];
      LODWORD(a6) = v43.m128i_i32[1];
      v51 = v43.m128i_i32[0];
    }
  }
  if ( a4 )
  {
    v20 = *(_QWORD *)a4;
    v21 = *(_DWORD *)(*(_QWORD *)a4 + 520LL);
    if ( (v21 & 1) != 0 && (v21 & 2) == 0 )
    {
      v42.m128i_i64[0] = *(_QWORD *)(v20 + 524);
      *(float *)&v41 = 1.0 / *(float *)(v20 + 528);
      *(float *)v42.m128i_i32 = 1.0 / *(float *)v42.m128i_i32;
      v42.m128i_i32[1] = v41;
      ERECTL::vScale((ERECTL *)&v47, (const struct POINTFL *)&v42);
      ERECTL::vScale((ERECTL *)&v50, (const struct POINTFL *)&v42);
      v17 = HIDWORD(v47);
      v15 = v47;
      top = v50.top;
      left = v50.left;
    }
  }
  v22 = left - v51;
  v23 = top - (_DWORD)a6;
  v42 = v43;
  v24 = v43.m128i_i32[1];
  v25 = v43.m128i_i32[2];
  v26 = _mm_cvtsi128_si32(v43);
  if ( v8 > v51 )
    v26 = v8;
  if ( v9 > (int)a6 )
    v24 = v9;
  if ( v45 < v52 )
    v25 = v45;
  v27 = v42.m128i_i32[3];
  if ( v46 < (int)a5 )
    v27 = v46;
  if ( v25 < v26 )
  {
    v26 = v25;
  }
  else if ( v27 < v24 )
  {
    v24 = v27;
  }
  v28 = v22 + v26;
  v29 = v22 + v25;
  v30 = v23 + v24;
  v31 = v23 + v27;
  if ( v15 > v28 )
    v28 = v15;
  v42.m128i_i32[0] = v28;
  if ( v17 > v30 )
    v30 = v17;
  v42.m128i_i32[1] = v30;
  if ( v48 < v29 )
    v29 = v48;
  v42.m128i_i32[2] = v29;
  if ( v49 < v31 )
    v31 = v49;
  v42.m128i_i32[3] = v31;
  if ( v29 < v28 )
  {
    v28 = v29;
    v42.m128i_i32[0] = v29;
  }
  else
  {
    if ( v31 < v30 )
      v30 = v31;
    v42.m128i_i32[1] = v30;
  }
  v32 = (struct _RECTL)v42;
  v42.m128i_i32[0] = v28 - v22;
  v33 = v30 - v23;
  v42.m128i_i32[2] = v29 - v22;
  v34 = v31 - v23;
  v42.m128i_i32[1] = v33;
  v42.m128i_i32[3] = v34;
  v35 = v42;
  v43 = v42;
  v50 = v32;
  if ( v28 - v22 >= v29 - v22 || v33 >= v34 )
    return 0;
  if ( v53 )
  {
    v36 = *(_DWORD *)(*(_QWORD *)v53 + 520LL);
    if ( (v36 & 1) != 0 && (v36 & 2) == 0 )
    {
      v53 = *(struct XDCOBJ **)(*(_QWORD *)v53 + 524LL);
      ERECTL::vScale((ERECTL *)&v43, (const struct POINTFL *)&v53);
      v35 = v43;
    }
  }
  if ( v54 )
  {
    v37 = *(_DWORD *)(*(_QWORD *)v54 + 520LL);
    if ( (v37 & 1) != 0 && (v37 & 2) == 0 )
    {
      v54 = *(struct XDCOBJ **)(*(_QWORD *)v54 + 524LL);
      ERECTL::vScale((ERECTL *)&v50, (const struct POINTFL *)&v54);
      v32 = v50;
    }
  }
  result = 1;
  *a7 = v32;
  *v7 = (struct _RECTL)v35;
  return result;
}
