/*
 * XREFs of ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x140399C88
 * Callers:
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x140398E8C (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkpGetBilinearLineFromSource(
        unsigned __int8 *a1,
        int a2,
        int a3,
        struct _PIXEL *a4,
        struct _UFIXPOINT_PIXEL *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // esi
  int v10; // r13d
  __int64 v11; // r8
  unsigned __int8 *v12; // r11
  _DWORD *v13; // r8
  __int64 v14; // r10
  unsigned int v15; // eax
  int v16; // r10d
  __int64 v17; // r15
  struct _UFIXPOINT_PIXEL *v18; // rbx
  unsigned __int8 *v19; // r14
  unsigned int v20; // ecx
  int v21; // r8d
  int v22; // edx
  int v23; // r12d
  int v24; // eax
  int v25; // edx
  unsigned int v26; // eax
  bool v27; // cc
  unsigned int v28; // ecx
  unsigned int v29; // r8d
  int v30; // r10d
  int v31; // ebp
  int v32; // r11d
  int v33; // edi
  unsigned int v34; // eax
  int v35; // ecx
  int v36; // ebp
  int v37; // r14d
  int v38; // r15d
  int v39; // r12d
  int v40; // ebx
  int v41; // edx
  unsigned int v42; // ecx
  int v43; // edx
  struct _UFIXPOINT_PIXEL *v44; // r8
  unsigned int v45; // ecx
  int v46; // esi
  int v47; // r13d
  int v48; // edx
  int v49; // eax
  int v50; // ebx
  int v51; // esi
  int v52; // r13d
  bool v53; // zf
  unsigned int v54; // ecx
  int v55; // edx
  int v56; // r10d
  int v57; // eax
  int v58; // r11d
  int v59; // r10d
  __int64 v60; // [rsp+8h] [rbp-50h]
  __int64 v61; // [rsp+10h] [rbp-48h]
  int v62; // [rsp+68h] [rbp+10h]
  int v63; // [rsp+88h] [rbp+30h]
  int v64; // [rsp+90h] [rbp+38h]
  int v65; // [rsp+90h] [rbp+38h]

  v8 = a7;
  v10 = a6;
  v11 = a2;
  v12 = &a1[a7 * a2];
  if ( a6 == a3 )
  {
    if ( a7 < a8 )
    {
      v13 = (_DWORD *)((char *)a5 + 8);
      v14 = (unsigned int)(a8 - a7);
      do
      {
        v15 = *(_DWORD *)v12;
        if ( a4 )
        {
          *(_DWORD *)a4 = v15;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
        }
        else
        {
          v13[1] = HIBYTE(v15) << 16;
          *v13 = BYTE2(v15) << 16;
          *(v13 - 2) = (unsigned __int8)v15 << 16;
          *(v13 - 1) = BYTE1(v15) << 16;
          v13 += 4;
        }
        v12 += a2;
        --v14;
      }
      while ( v14 );
    }
    return;
  }
  v16 = a7 * a6 % a3;
  if ( a6 > a3 )
  {
    v17 = a2;
    v18 = a5;
    if ( a7 < a8 )
    {
      v19 = &v12[-a2];
      do
      {
        if ( v16 && v16 < a3 )
        {
          v20 = *(_DWORD *)v12;
          v21 = *(_DWORD *)v19;
          v22 = (unsigned __int16)((v16 << 16) / (unsigned int)a3);
          v23 = 0x10000 - v22;
          v63 = v22;
          v64 = (0x10000 - v22) * (unsigned __int8)BYTE2(*(_DWORD *)v12) + v22 * (unsigned __int8)BYTE2(*(_DWORD *)v19);
          v24 = v22 * HIBYTE(*(_DWORD *)v19);
          v62 = (0x10000 - v22) * (unsigned __int8)BYTE1(*(_DWORD *)v12) + v22 * (unsigned __int8)BYTE1(*(_DWORD *)v19);
          v25 = (0x10000 - v22) * HIBYTE(*(_DWORD *)v12);
          if ( !a4 )
          {
            *((_DWORD *)v18 + 2) = v64;
            *((_DWORD *)v18 + 3) = v24 + v25;
            *((_DWORD *)v18 + 1) = v62;
            *(_DWORD *)v18 = v63 * (unsigned __int8)v21 + v23 * (unsigned __int8)v20;
LABEL_21:
            v18 = (struct _UFIXPOINT_PIXEL *)((char *)v18 + 16);
            goto LABEL_22;
          }
          *((_BYTE *)a4 + 3) = (unsigned int)(v25 + 0x8000 + v24) >> 16;
          *((_BYTE *)a4 + 2) = (unsigned int)(v64 + 0x8000) >> 16;
          *((_BYTE *)a4 + 1) = (unsigned int)(v62 + 0x8000) >> 16;
          *(_BYTE *)a4 = (v23 * (unsigned __int8)v20 + v63 * (unsigned int)(unsigned __int8)v21 + 0x8000) >> 16;
        }
        else
        {
          v26 = *(_DWORD *)v12;
          if ( !a4 )
          {
            *((_DWORD *)v18 + 3) = HIBYTE(v26) << 16;
            *((_DWORD *)v18 + 2) = BYTE2(v26) << 16;
            *(_DWORD *)v18 = (unsigned __int8)v26 << 16;
            *((_DWORD *)v18 + 1) = BYTE1(v26) << 16;
            goto LABEL_21;
          }
          *(_DWORD *)a4 = v26;
        }
        a4 = (struct _PIXEL *)((char *)a4 + 4);
LABEL_22:
        v27 = v16 < a3;
        v16 -= a3;
        if ( v27 )
          v16 += v10;
        if ( v16 < a3 )
        {
          v12 += v17;
          v19 += v17;
          ++v8;
        }
      }
      while ( v8 < a8 );
    }
    if ( !v16 )
      return;
    v28 = *(_DWORD *)v12;
    v29 = *(_DWORD *)&v12[-v17];
    v30 = (unsigned __int16)((v16 << 16) / a3);
    v31 = 0x10000 - v30;
    v32 = (0x10000 - v30) * (unsigned __int8)BYTE2(*(_DWORD *)v12) + v30 * BYTE2(v29);
    v33 = (0x10000 - v30) * BYTE1(v28) + v30 * BYTE1(v29);
    if ( !a4 )
    {
      *((_DWORD *)v18 + 2) = v32;
      *((_DWORD *)v18 + 1) = v33;
      *((_DWORD *)v18 + 3) = v30 * HIBYTE(v29) + v31 * HIBYTE(v28);
      *(_DWORD *)v18 = v30 * (unsigned __int8)v29 + v31 * (unsigned __int8)v28;
      return;
    }
    *((_BYTE *)a4 + 3) = (unsigned int)(v30 * HIBYTE(v29) + 0x8000 + v31 * HIBYTE(v28)) >> 16;
    *((_BYTE *)a4 + 2) = (unsigned int)(v32 + 0x8000) >> 16;
    v34 = (unsigned int)(v33 + 0x8000) >> 16;
    v35 = v31 * (unsigned __int8)v28 + v30 * (unsigned __int8)v29 + 0x8000;
LABEL_45:
    *((_BYTE *)a4 + 1) = v34;
    *(_BYTE *)a4 = BYTE2(v35);
    return;
  }
  v60 = a2;
  v36 = 0;
  v37 = v16 << 16;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = (unsigned __int16)((a6 << 16) / a3);
  v65 = v41;
  if ( v16 > 0 )
  {
    v42 = *(_DWORD *)&v12[-v11];
    v43 = (unsigned __int16)(v37 / a3);
    v40 = v43 * HIBYTE(v42);
    v39 = v43 * BYTE2(v42);
    v38 = v43 * BYTE1(v42);
    v36 = v43 * (unsigned __int8)v42;
    v41 = (unsigned __int16)((a6 << 16) / a3);
  }
  v44 = a5;
  if ( v8 < a8 )
  {
    v61 = (unsigned int)(a8 - v8);
    do
    {
      v45 = *(_DWORD *)v12;
      v16 += v10;
      v37 += a6 << 16;
      v46 = (unsigned __int8)BYTE2(*(_DWORD *)v12);
      v47 = (unsigned __int8)BYTE1(*(_DWORD *)v12);
      if ( v16 >= a3 )
      {
        v37 -= a3 << 16;
        v16 -= a3;
        v48 = (unsigned __int16)(v37 / a3);
        v49 = v40 + (v65 - v48) * HIBYTE(v45);
        v50 = v65 - v48;
        v51 = v39 + (v65 - v48) * v46;
        v52 = v38 + (v65 - v48) * v47;
        if ( a4 )
        {
          *((_BYTE *)a4 + 3) = (unsigned int)(v49 + 0x8000) >> 16;
          *((_BYTE *)a4 + 2) = (unsigned int)(v51 + 0x8000) >> 16;
          *((_BYTE *)a4 + 1) = (unsigned int)(v52 + 0x8000) >> 16;
          *(_BYTE *)a4 = (v36 + v50 * (unsigned int)(unsigned __int8)v45 + 0x8000) >> 16;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
          v48 = (unsigned __int16)(v37 / a3);
        }
        else
        {
          *((_DWORD *)v44 + 3) = v49;
          *((_DWORD *)v44 + 2) = v51;
          *((_DWORD *)v44 + 1) = v52;
          *(_DWORD *)v44 = v36 + v50 * (unsigned __int8)v45;
          v44 = (struct _UFIXPOINT_PIXEL *)((char *)v44 + 16);
        }
        v40 = v48 * HIBYTE(v45);
        v39 = v48 * BYTE2(v45);
        v38 = v48 * BYTE1(v45);
        v36 = v48 * (unsigned __int8)v45;
        v41 = (unsigned __int16)((a6 << 16) / a3);
      }
      else
      {
        v39 += v41 * v46;
        v40 += v41 * HIBYTE(v45);
        v38 += v41 * v47;
        v36 += v41 * (unsigned __int8)v45;
      }
      v12 += v60;
      v53 = v61-- == 1;
      v10 = a6;
    }
    while ( !v53 );
  }
  if ( v16 )
  {
    v54 = *(_DWORD *)v12;
    v55 = (unsigned __int16)(((a3 - v16) << 16) / a3);
    v56 = (unsigned __int8)BYTE2(*(_DWORD *)v12);
    v57 = v55 * HIBYTE(*(_DWORD *)v12);
    v58 = v38 + v55 * (unsigned __int8)BYTE1(*(_DWORD *)v12);
    v59 = v39 + v55 * v56;
    if ( !a4 )
    {
      *((_DWORD *)v44 + 2) = v59;
      *((_DWORD *)v44 + 3) = v40 + v57;
      *((_DWORD *)v44 + 1) = v58;
      *(_DWORD *)v44 = v36 + v55 * (unsigned __int8)v54;
      return;
    }
    *((_BYTE *)a4 + 3) = (unsigned int)(v40 + v57 + 0x8000) >> 16;
    *((_BYTE *)a4 + 2) = (unsigned int)(v59 + 0x8000) >> 16;
    v34 = (unsigned int)(v58 + 0x8000) >> 16;
    v35 = v36 + v55 * (unsigned __int8)v54 + 0x8000;
    goto LABEL_45;
  }
}
