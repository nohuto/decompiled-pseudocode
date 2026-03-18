/*
 * XREFs of ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x14003F6C0
 * Callers:
 *     _ScrollDC @ 0x14003EB40 (_ScrollDC.c)
 *     xxxScrollWindowEx @ 0x14003EEB4 (xxxScrollWindowEx.c)
 * Callees:
 *     GreDPtoLP @ 0x14003E6C0 (GreDPtoLP.c)
 *     SubtractRect @ 0x14003ECCC (SubtractRect.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x14003EDBC (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     GetDCOrgOnScreen @ 0x140040AF8 (GetDCOrgOnScreen.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     GreGetLayout @ 0x1401264BC (GreGetLayout.c)
 *     GreLPtoDP @ 0x140127948 (GreLPtoDP.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 */

__int64 __fastcall InternalScrollDC(
        struct tagWND *a1,
        HDC a2,
        unsigned int a3,
        unsigned int a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        HRGN a7,
        HRGN a8,
        struct tagRECT *a9,
        int a10)
{
  struct tagPOINT *v10; // r13
  __int64 v11; // r14
  HRGN v12; // rdi
  __int64 UserSessionState; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 y; // r8
  unsigned int ClipBox; // r15d
  struct tagPOINT *v19; // rcx
  __m128i v20; // xmm1
  unsigned int v21; // esi
  unsigned int v22; // r14d
  int v23; // eax
  int v24; // r10d
  int v25; // r9d
  int v26; // esi
  int v27; // r11d
  int v28; // r14d
  int v29; // r13d
  int v30; // ebx
  int v31; // eax
  __m128i v32; // xmm3
  int v33; // eax
  __m128i v34; // xmm6
  int v35; // edx
  int v36; // ebx
  LONG v37; // eax
  int v38; // esi
  int v39; // r14d
  int v40; // ecx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  int v44; // eax
  HRGN v45; // r13
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // r8
  int v52; // ebx
  __int64 v53; // rax
  __int64 v54; // rbx
  BOOL v56; // ecx
  BOOL v57; // eax
  struct tagPOINT *v58; // r13
  __int64 v59; // rbx
  __int64 v60; // r8
  __int64 v61; // r8
  __int64 v62; // r8
  LONG x; // ecx
  __int32 v64; // ecx
  LONG v65; // ecx
  __int64 v66; // rax
  __int64 v67; // [rsp+60h] [rbp-A0h]
  __int64 v68; // [rsp+68h] [rbp-98h]
  __int64 v69; // [rsp+70h] [rbp-90h]
  HRGN EmptyRgn; // [rsp+78h] [rbp-88h]
  int v71; // [rsp+80h] [rbp-80h]
  int v72; // [rsp+80h] [rbp-80h]
  int v74; // [rsp+8Ch] [rbp-74h]
  int v75; // [rsp+8Ch] [rbp-74h]
  int v76; // [rsp+90h] [rbp-70h]
  int v77; // [rsp+90h] [rbp-70h]
  __int64 v79; // [rsp+A8h] [rbp-58h]
  HRGN v80; // [rsp+B0h] [rbp-50h] BYREF
  int v81; // [rsp+B8h] [rbp-48h] BYREF
  struct tagPOINT *v82; // [rsp+C0h] [rbp-40h]
  __int64 v83; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v84; // [rsp+D0h] [rbp-30h]
  unsigned int v85; // [rsp+D4h] [rbp-2Ch]
  __int64 v86; // [rsp+D8h] [rbp-28h]
  struct tagPOINT v87; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v88; // [rsp+E8h] [rbp-18h]
  unsigned int v89; // [rsp+ECh] [rbp-14h]
  __m128i Buf2; // [rsp+F0h] [rbp-10h] BYREF
  __m128i Buf1; // [rsp+100h] [rbp+0h] BYREF
  struct tagPOINT v92[2]; // [rsp+110h] [rbp+10h] BYREF
  struct tagPOINT v93[2]; // [rsp+120h] [rbp+20h] BYREF
  struct tagPOINT v94[2]; // [rsp+130h] [rbp+30h] BYREF
  __m128i v95; // [rsp+140h] [rbp+40h] BYREF
  struct tagPOINT v96[2]; // [rsp+150h] [rbp+50h] BYREF

  v10 = (struct tagPOINT *)a9;
  v11 = 0LL;
  v12 = a8;
  v80 = a7;
  v82 = (struct tagPOINT *)a9;
  *(_OWORD *)&v92[0].x = 0LL;
  v81 = 0;
  Buf1 = 0LL;
  EmptyRgn = 0LL;
  *(_OWORD *)&v96[0].x = 0LL;
  v68 = 0LL;
  *(_OWORD *)&v94[0].x = 0LL;
  v67 = 0LL;
  v95 = 0LL;
  v69 = 0LL;
  *(_OWORD *)&v93[0].x = 0LL;
  v86 = 0LL;
  v79 = 0LL;
  v74 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !(unsigned int)GreLockVisRgnSharedOrExclusive(
                        *(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 40LL),
                        a2,
                        &v81) )
    return 0LL;
  ClipBox = GreGetClipBox(a2, v92, 1LL);
  if ( !ClipBox )
  {
    v45 = 0LL;
LABEL_156:
    v54 = 0LL;
LABEL_157:
    v46 = 0LL;
    goto LABEL_78;
  }
  v19 = v92;
  if ( a5 )
    v19 = (struct tagPOINT *)a5;
  v20 = *(__m128i *)&v19->x;
  Buf1 = *(__m128i *)&v19->x;
  if ( a6 )
    *(struct tagRECT *)&v96[0].x = *a6;
  v21 = a3;
  v85 = a3;
  v84 = a4;
  if ( a10 )
  {
    GreLPtoDP(a2, v92);
    GreLPtoDP(a2, (struct tagPOINT *)&Buf1);
    if ( (GreGetLayout(a2) & 1) != 0 )
    {
      x = v92[0].x;
      LODWORD(v11) = 1;
      v92[0].x = v92[1].x;
      v92[1].x = x;
      v64 = Buf1.m128i_i32[0];
      Buf1.m128i_i32[0] = Buf1.m128i_i32[2];
      Buf1.m128i_i32[2] = v64;
    }
    if ( a6 )
    {
      GreLPtoDP(a2, v96);
      if ( (_DWORD)v11 )
      {
        v65 = v96[0].x;
        v96[0].x = v96[1].x;
        v96[1].x = v65;
      }
    }
    v89 = a4;
    v87 = 0LL;
    v88 = a3;
    GreLPtoDP(a2, &v87);
    v21 = v88 - v87.x;
    v22 = v89 - v87.y;
    v20 = Buf1;
    a4 = v89 - v87.y;
    a3 = v88 - v87.x;
  }
  else
  {
    v22 = a4;
  }
  v16 = ClipBox - 1;
  if ( ClipBox == 1 )
  {
LABEL_147:
    v54 = 0LL;
    goto LABEL_148;
  }
  if ( ClipBox == 3 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v16, v15, y);
    v45 = EmptyRgn;
    if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn, v62) )
    {
LABEL_220:
      v11 = 0LL;
      goto LABEL_156;
    }
    v20 = Buf1;
    v23 = 1;
    v74 = 1;
  }
  else
  {
    v23 = 0;
  }
  v76 = _mm_cvtsi128_si32(v20);
  v24 = v21 + v76;
  v16 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v20, 8));
  v94[0].x = v21 + v76;
  v71 = v16;
  v25 = v21 + v16;
  v26 = _mm_cvtsi128_si32(_mm_srli_si128(v20, 4));
  v94[1].x = v25;
  v27 = v22 + v26;
  v28 = _mm_cvtsi128_si32(_mm_srli_si128(v20, 12));
  v94[0].y = v27;
  v29 = v28 + a4;
  v94[1].y = v28 + a4;
  if ( !a6 )
  {
    v30 = v76;
LABEL_14:
    if ( ClipBox != 2 )
      goto LABEL_64;
    y = (unsigned int)v92[1].y;
    v16 = (unsigned int)v92[1].x;
    v15 = (unsigned int)v92[0].y;
    v31 = v92[0].x;
LABEL_16:
    if ( (unsigned __int64)v80 <= 1 )
    {
      Buf2 = v20;
      if ( v24 <= v31 )
        v24 = v31;
      v94[0].x = v24;
      if ( v25 >= (int)v16 )
        v25 = v16;
      v94[1].x = v25;
      if ( v24 >= v25 )
        goto LABEL_27;
      if ( v27 <= (int)v15 )
        v27 = v15;
      v94[0].y = v27;
      if ( v29 >= (int)y )
        v29 = y;
      v94[1].y = v29;
      if ( v27 < v29 )
      {
        v32 = *(__m128i *)&v94[0].x;
      }
      else
      {
LABEL_27:
        v32 = 0LL;
        v29 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
        v27 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
        *(_OWORD *)&v94[0].x = 0LL;
        v25 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
        v24 = _mm_cvtsi128_si32((__m128i)0LL);
      }
      if ( v30 <= v31 )
        v30 = v31;
      v33 = v71;
      v77 = v30;
      Buf1.m128i_i32[0] = v30;
      if ( v71 >= (int)v16 )
        v33 = v16;
      v72 = v33;
      Buf1.m128i_i32[2] = v33;
      if ( v30 >= v33 )
        goto LABEL_38;
      if ( v26 <= (int)v15 )
        v26 = v15;
      v75 = v26;
      if ( v28 >= (int)y )
        v28 = y;
      Buf1.m128i_i32[1] = v26;
      LODWORD(v83) = v28;
      Buf1.m128i_i32[3] = v28;
      if ( v26 < v28 )
      {
        v34 = Buf1;
        v35 = 1;
      }
      else
      {
LABEL_38:
        v34 = 0LL;
        v28 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
        v35 = 0;
        v26 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
        v33 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
        v30 = _mm_cvtsi128_si32((__m128i)0LL);
        v75 = v26;
        Buf1 = 0LL;
        LODWORD(v83) = v28;
        v72 = v33;
        v77 = v30;
      }
      if ( v80 == (HRGN)1 )
      {
        v39 = v93[1].y;
        v38 = v93[0].y;
        v36 = v93[0].x;
      }
      else
      {
        v36 = a3 + v30;
        v37 = a3 + v33;
        v16 = (unsigned int)v36;
        v38 = a4 + v26;
        v39 = a4 + v28;
        v93[0].x = v36;
        v93[1].x = v37;
        if ( v36 <= v24 )
        {
          v36 = v24;
          v16 = (unsigned int)v24;
          v93[0].x = v24;
        }
        if ( v37 >= v25 )
        {
          v93[1].x = v25;
          v37 = v25;
        }
        if ( (int)v16 >= v37 )
          goto LABEL_50;
        if ( v38 <= v27 )
          v38 = v27;
        v93[0].y = v38;
        if ( v39 >= v29 )
          v39 = v29;
        v93[1].y = v39;
        if ( v38 >= v39 )
        {
LABEL_50:
          v39 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
          *(_OWORD *)&v93[0].x = 0LL;
          v38 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
          v93[1].x = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
          v36 = _mm_cvtsi128_si32((__m128i)0LL);
        }
      }
      if ( !v35 )
      {
        v95 = v32;
        goto LABEL_102;
      }
      v40 = v24;
      v41 = v25;
      if ( v77 > v24 )
        v40 = v77;
      v95.m128i_i32[0] = v40;
      if ( v72 < v25 )
        v41 = v72;
      v95.m128i_i32[2] = v41;
      if ( v40 >= v41 )
        goto LABEL_62;
      v42 = (unsigned int)v75;
      v16 = (unsigned int)v27;
      v43 = (unsigned int)v83;
      v44 = v29;
      if ( v75 > v27 )
        v16 = (unsigned int)v75;
      v95.m128i_i32[1] = v16;
      if ( (int)v83 < v29 )
        v44 = v83;
      v95.m128i_i32[3] = v44;
      if ( (int)v16 < v44 )
      {
        if ( !a3 || !a4 )
        {
          v56 = v77 >= v72 || v75 >= (int)v83;
          v57 = v24 >= v25 || v27 >= v29;
          if ( v56 )
          {
            if ( v57 )
              v95 = 0LL;
            else
              v95 = v32;
          }
          else if ( v57 )
          {
            v95 = v34;
          }
          else
          {
            if ( v77 < v24 )
              v24 = v77;
            v95.m128i_i32[0] = v24;
            if ( v75 < v27 )
              v27 = v75;
            v95.m128i_i32[1] = v27;
            if ( v72 > v25 )
              v25 = v72;
            v95.m128i_i32[2] = v25;
            if ( (int)v83 > v29 )
              v29 = v83;
            v95.m128i_i32[3] = v29;
          }
          SubtractRect((__int64)&v95, (__int64)&v95, (__int64)v93);
          v32 = v95;
          goto LABEL_102;
        }
      }
      else
      {
LABEL_62:
        v95 = 0LL;
        if ( !memcmp(&Buf1, &Buf2, 0x10uLL) )
        {
          v32 = v34;
          v95 = v34;
LABEL_102:
          v58 = v82;
          if ( v82 )
            *(__m128i *)&v82->x = v32;
          if ( !a8 )
            goto LABEL_107;
          if ( (unsigned int)SetRectRgnIndirect(a8, &v95) )
          {
            v39 = v93[1].y;
            v38 = v93[0].y;
            v36 = v93[0].x;
LABEL_107:
            ClipBox = 2;
            if ( v95.m128i_i32[0] >= v95.m128i_i32[2] || v95.m128i_i32[1] >= v95.m128i_i32[3] )
              ClipBox = 1;
            goto LABEL_109;
          }
          goto LABEL_216;
        }
      }
      v58 = v82;
      if ( a8 )
        goto LABEL_167;
      if ( !v82 )
      {
LABEL_109:
        if ( v36 < v93[1].x && v38 < v39 )
        {
          if ( a10 )
          {
            GreDPtoLP(a2, v93);
            v39 = v93[1].y;
            v38 = v93[0].y;
            v36 = v93[0].x;
          }
          GreBitBltInternal(
            a2,
            (unsigned int)v36,
            (unsigned int)v38,
            (unsigned int)(v93[1].x - v36),
            v39 - v38,
            a2,
            v36 - v85,
            v38 - v84,
            13369376,
            0,
            0);
        }
        v11 = v67;
        goto LABEL_111;
      }
      v67 = CreateEmptyRgn(v16, v42, v43);
      v12 = (HRGN)v67;
      if ( v67 )
      {
LABEL_167:
        v54 = v68;
        if ( !v68 )
        {
          v54 = CreateEmptyRgn(v16, v42, v43);
          v68 = v54;
        }
        SetRectRgnIndirect(v54, &Buf1);
        SetRectRgnIndirect(v12, v94);
        if ( !(unsigned int)GreCombineRgn(v12, v12, v54, 2LL)
          || (SetRectRgnIndirect(v54, v93), (ClipBox = GreCombineRgn(v12, v12, v54, 4LL)) == 0)
          || v58 && !(unsigned int)GreGetRgnBox(v12, v58) )
        {
          v11 = v67;
          v45 = EmptyRgn;
          v46 = 0LL;
          goto LABEL_78;
        }
      }
      v39 = v93[1].y;
      v38 = v93[0].y;
      v36 = v93[0].x;
      goto LABEL_109;
    }
LABEL_64:
    if ( v74 )
    {
      v45 = EmptyRgn;
    }
    else
    {
      EmptyRgn = (HRGN)CreateEmptyRgn(v16, v15, y);
      v45 = EmptyRgn;
      if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn, v61) )
      {
        v11 = 0LL;
        v46 = 0LL;
        goto LABEL_77;
      }
    }
    v69 = CreateEmptyRgn(v16, v15, y);
    v46 = v69;
    SetRectRgnIndirect(v69, &Buf1);
    if ( !(unsigned int)GreCombineRgn(v46, v46, v45, 1LL)
      || (v86 = CreateEmptyRgn(v16, v47, v48),
          v49 = v86,
          SetRectRgnIndirect(v86, v94),
          !(unsigned int)GreCombineRgn(v49, v49, v45, 1LL)) )
    {
      v11 = 0LL;
      goto LABEL_77;
    }
    v52 = 1;
    if ( v80 != (HRGN)1 )
    {
      v79 = CreateEmptyRgn(v16, v50, v51);
      if ( !(unsigned int)GreCombineRgn(v79, v69, 0LL, 5LL) )
      {
        v11 = 0LL;
        v46 = v69;
        goto LABEL_77;
      }
      GreOffsetRgn(v79, a3, a4);
      v52 = GreCombineRgn(v79, v79, v86, 1LL);
      if ( (unsigned __int64)v80 <= 1 )
      {
        v11 = 0LL;
LABEL_181:
        if ( !v52 )
          goto LABEL_75;
LABEL_182:
        v58 = v82;
        if ( !a8 )
        {
          if ( !v82 )
            goto LABEL_187;
          v66 = v67;
          if ( !v67 )
          {
            v66 = CreateEmptyRgn(v16, v50, v51);
            v67 = v66;
          }
          v11 = v67;
          v12 = (HRGN)v66;
          if ( !v66 )
            goto LABEL_187;
        }
        ClipBox = GreCombineRgn(v12, v86, v69, 2LL);
        if ( ClipBox )
        {
          if ( v52 != 1 )
            ClipBox = GreCombineRgn(v12, v12, v79, 4LL);
          if ( !v58 || (unsigned int)GreGetRgnBox(v12, v58) )
          {
LABEL_187:
            if ( v52 != 1 )
            {
              v80 = 0LL;
              GreGetDCOrg(a2, &v80);
              v59 = v79;
              GreOffsetRgn(v79, (unsigned int)v80, HIDWORD(v80));
              GreSelectVisRgnShared(a2, v79, 4LL);
              if ( a10 )
                GreDPtoLP(a2, v94);
              GreBitBltInternal(
                a2,
                (unsigned int)v94[0].x,
                (unsigned int)v94[0].y,
                (unsigned int)(v94[1].x - v94[0].x),
                v94[1].y - v94[0].y,
                a2,
                v94[0].x - v85,
                v94[0].y - v84,
                13369376,
                0,
                0);
              GreSelectVisRgnShared(a2, v79, 4LL);
              goto LABEL_112;
            }
LABEL_111:
            v59 = v79;
LABEL_112:
            if ( a10 && v58 )
              GreDPtoLP(a2, v58);
            if ( v81 )
              GreUnlockVisRgnShared(v16);
            else
              GreUnlockVisRgn(v16);
            GreDeleteObject(EmptyRgn);
            GreDeleteObject(v68);
            GreDeleteObject(v11);
            GreDeleteObject(v69);
            GreDeleteObject(v86);
            GreDeleteObject(v59);
            return ClipBox;
          }
        }
        goto LABEL_75;
      }
      v53 = CreateEmptyRgn(v16, v50, v51);
      v67 = v53;
      if ( !v52 )
      {
        v11 = v53;
        goto LABEL_75;
      }
      if ( v52 != 1 )
      {
        v83 = 0LL;
        GetDCOrgOnScreen(a2, &v83);
        GreCombineRgn(v67, v80, 0LL, 5LL);
        GreOffsetRgn(v67, (unsigned int)-(int)v83, (unsigned int)-HIDWORD(v83));
        v52 = GreCombineRgn(v79, v79, v67, 4LL);
        if ( !v52 )
        {
          v11 = v67;
LABEL_75:
          v46 = v69;
LABEL_76:
          v45 = EmptyRgn;
LABEL_77:
          v54 = v68;
LABEL_78:
          if ( v81 )
            GreUnlockVisRgnShared(v16);
          else
            GreUnlockVisRgn(v16);
          GreDeleteObject(v45);
          GreDeleteObject(v54);
          GreDeleteObject(v11);
          GreDeleteObject(v46);
          GreDeleteObject(v86);
          GreDeleteObject(v79);
          return 0LL;
        }
        if ( v52 != 1 )
        {
          GreOffsetRgn(v67, a3, a4);
          v11 = v67;
          v52 = GreCombineRgn(v79, v79, v67, 4LL);
          goto LABEL_181;
        }
      }
    }
    v11 = v67;
    goto LABEL_182;
  }
  if ( (unsigned __int64)v80 <= 1 && ClipBox == 2 )
  {
    v31 = v92[0].x;
    v16 = (unsigned int)v92[1].x;
    if ( v92[0].x <= v96[0].x )
      v31 = v96[0].x;
    v92[0].x = v31;
    if ( v92[1].x >= v96[1].x )
      v16 = (unsigned int)v96[1].x;
    v92[1].x = v16;
    if ( v31 < (int)v16 )
    {
      v15 = (unsigned int)v92[0].y;
      y = (unsigned int)v92[1].y;
      if ( v92[0].y <= v96[0].y )
        v15 = (unsigned int)v96[0].y;
      v92[0].y = v15;
      if ( v92[1].y >= v96[1].y )
        y = (unsigned int)v96[1].y;
      v92[1].y = y;
      if ( (int)v15 < (int)y )
      {
        v30 = v76;
        goto LABEL_16;
      }
    }
    v10 = v82;
    *(_OWORD *)&v92[0].x = 0LL;
    goto LABEL_147;
  }
  if ( v23 )
  {
    v45 = EmptyRgn;
    goto LABEL_121;
  }
  EmptyRgn = (HRGN)CreateEmptyRgn(v16, v15, y);
  v45 = EmptyRgn;
  if ( !(unsigned int)GetTrueClipRgn(a2, EmptyRgn, v60) )
    goto LABEL_220;
  v74 = 1;
LABEL_121:
  v68 = CreateEmptyRgn(v16, v15, y);
  v54 = v68;
  SetRectRgnIndirect(v68, v96);
  ClipBox = GreCombineRgn(v45, v68, v45, 1LL);
  if ( !ClipBox )
  {
LABEL_215:
    v11 = 0LL;
    goto LABEL_157;
  }
  v15 = ClipBox - 1;
  if ( ClipBox != 1 )
  {
    if ( ClipBox != 2 )
    {
      v28 = Buf1.m128i_i32[3];
      v26 = Buf1.m128i_i32[1];
      v30 = Buf1.m128i_i32[0];
      v20 = Buf1;
      v29 = v94[1].y;
      v25 = v94[1].x;
      v27 = v94[0].y;
      v24 = v94[0].x;
      v71 = Buf1.m128i_i32[2];
      goto LABEL_14;
    }
    if ( (unsigned int)GreGetRgnBox(v45, v92) )
    {
      y = (unsigned int)v92[1].y;
      v16 = (unsigned int)v92[1].x;
      v15 = (unsigned int)v92[0].y;
      v31 = v92[0].x;
      v28 = Buf1.m128i_i32[3];
      v26 = Buf1.m128i_i32[1];
      v30 = Buf1.m128i_i32[0];
      v20 = Buf1;
      v29 = v94[1].y;
      v27 = v94[0].y;
      v24 = v94[0].x;
      v71 = Buf1.m128i_i32[2];
      v25 = v94[1].x;
      goto LABEL_16;
    }
    goto LABEL_215;
  }
  v10 = v82;
LABEL_148:
  if ( a8 && !(unsigned int)SetEmptyRgn(a8) )
  {
LABEL_216:
    v11 = 0LL;
    v46 = 0LL;
    goto LABEL_76;
  }
  if ( v10 )
    *(_OWORD *)&v10->x = 0LL;
  if ( v81 )
    GreUnlockVisRgnShared(v16);
  else
    GreUnlockVisRgn(v16);
  GreDeleteObject(EmptyRgn);
  GreDeleteObject(v54);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  GreDeleteObject(0LL);
  return 1LL;
}
