/*
 * XREFs of ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x14002E2B0
 * Callers:
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x14002E2B0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x14011EA74 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x14002C070 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlaceRect @ 0x14002E1D8 (PhysicalToLogicalInPlaceRect.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x14002E2B0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x14002EC1C (PhysicalToLogicalInPlaceRgn.c)
 *     InternalInvalidate3 @ 0x14002EEB8 (InternalInvalidate3.c)
 *     ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x14002F9B0 (-SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     GetAppCompatFlags @ 0x1401E7A80 (GetAppCompatFlags.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall InternalInvalidate2(struct tagWND *a1, HRGN a2, HRGN a3, struct tagRECT *a4, unsigned int a5)
{
  unsigned int v5; // esi
  HRGN v6; // r12
  __int64 left; // rdx
  HRGN v8; // r15
  struct tagWND *v9; // r14
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int right; // r8d
  int bottom; // r8d
  int v16; // eax
  struct tagWND *v17; // rdi
  __int16 v18; // bx
  __int64 v20; // r9
  __int64 EmptyRgnPublic; // r15
  LONG v22; // ecx
  LONG v23; // eax
  LONG top; // ecx
  LONG v25; // eax
  unsigned int v26; // eax
  __int64 UserSessionState; // rax
  __int64 v28; // rdx
  struct tagWND *v29; // rcx
  struct tagWND *v30; // rdi
  HRGN v31; // r15
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  _BYTE *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  const struct tagWND *v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // eax
  bool v43; // cf
  __int64 v44; // rax
  _BYTE *v45; // rcx
  HRGN v46; // rdx
  int v47; // r13d
  int v48; // ebx
  int v49; // eax
  HRGN v50; // rsi
  int v51; // r12d
  int v52; // ebx
  HRGN v53; // rcx
  float *v54; // rax
  int v55; // r8d
  int v56; // ecx
  int v57; // r10d
  int v58; // r9d
  bool v59; // zf
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  HRGN v64; // rdi
  int v65; // eax
  int v66; // esi
  __int64 v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  int v71; // eax
  __int64 v72; // rax
  __int64 Prop; // rax
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int16 v83; // [rsp+30h] [rbp-51h]
  int v84; // [rsp+30h] [rbp-51h]
  int v85; // [rsp+34h] [rbp-4Dh]
  struct tagRECT v86; // [rsp+38h] [rbp-49h] BYREF
  HRGN v87; // [rsp+48h] [rbp-39h] BYREF
  HRGN v88; // [rsp+50h] [rbp-31h] BYREF
  HRGN v89; // [rsp+58h] [rbp-29h]
  int v90; // [rsp+60h] [rbp-21h]
  HRGN v91; // [rsp+68h] [rbp-19h] BYREF
  HRGN v92; // [rsp+70h] [rbp-11h]
  struct tagRECT v93; // [rsp+78h] [rbp-9h] BYREF

  v5 = a5 | 0x8000;
  v88 = a2;
  v93 = 0LL;
  v6 = a2;
  v89 = a3;
  left = *((_QWORD *)a1 + 5);
  v8 = a3;
  v9 = a1;
  if ( !*(_QWORD *)(left + 168) )
    v5 = a5;
  v85 = v5 | 0x2000;
  v93 = *(struct tagRECT *)(left + 88);
  if ( (v5 & 1) == 0 )
    goto LABEL_29;
  if ( ((*(_BYTE *)(left + 26) >> 3) & ((v5 & 0x10000) == 0)) != 0 && (*((_DWORD *)a1 + 95) & 0x4000) == 0 )
  {
    v10 = *((_QWORD *)a1 + 13);
    if ( v10 )
    {
      v11 = *((_QWORD *)a1 + 3);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 8);
        if ( v12 )
        {
          if ( v10 == *(_QWORD *)(v12 + 24) )
            return 1LL;
        }
      }
    }
    if ( (*(_DWORD *)(left + 232) & 2) == 0 )
      return 1LL;
  }
  *((_DWORD *)v9 + 95) &= ~0x4000u;
  v13 = *(unsigned __int8 *)(left + 27);
  LOBYTE(v13) = ~(*(_BYTE *)(left + 26) >> 3) & ~((unsigned __int8)v13 >> 5);
  if ( (v13 & 1) != 0 )
  {
    v86 = *a4;
    if ( *((_QWORD *)v9 + 13) )
      PhysicalToLogicalInPlaceRect((__int64)v9, &v86.left);
    left = (unsigned int)v93.left;
    right = v93.right;
    if ( v93.left <= v86.left )
      left = (unsigned int)v86.left;
    v93.left = left;
    if ( v93.right >= v86.right )
      right = v86.right;
    v93.right = right;
    if ( (int)left < right )
    {
      left = (unsigned int)v93.top;
      bottom = v93.bottom;
      if ( v93.top <= v86.top )
        left = (unsigned int)v86.top;
      v93.top = left;
      if ( v93.bottom >= v86.bottom )
        bottom = v86.bottom;
      v93.bottom = bottom;
      if ( (int)left < bottom )
      {
        v16 = 0;
        goto LABEL_26;
      }
    }
    v93.bottom = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
    v93.top = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
    v93.right = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
    v93.left = _mm_cvtsi128_si32((__m128i)0LL);
  }
  else if ( v93.left < v93.right && v93.top < v93.bottom )
  {
    v16 = 0;
    goto LABEL_26;
  }
  v16 = 1;
LABEL_26:
  if ( v16 )
    return 1LL;
  if ( (unsigned __int64)v6 <= 1 )
    goto LABEL_28;
  v26 = SmartRectInRegion(v6, &v93);
  if ( v26 == 1 )
  {
    if ( (v5 & 0x8000) != 0 )
    {
      UserSessionState = W32GetUserSessionState(v13, left);
      SetRectRgnIndirect(*(_QWORD *)(UserSessionState + 63360), &v93);
      v29 = 0LL;
      v30 = v9;
      do
      {
        v31 = *(HRGN *)(*((_QWORD *)v30 + 5) + 168LL);
        v87 = v31;
        if ( v31 )
        {
          if ( v29 )
          {
            v71 = PhysicalToLogicalInPlaceRgn(v29, &v87);
            v31 = v87;
            v84 = v71;
          }
          else
          {
            v84 = 0;
          }
          v60 = *(_QWORD *)(W32GetUserSessionState(v29, v28) + 63360);
          v63 = W32GetUserSessionState(v62, v61);
          GreCombineRgn(*(_QWORD *)(v63 + 63360), v60, v31, 1LL);
          if ( v84 )
            GreDeleteObject(v31);
        }
        v29 = v30;
        v30 = (struct tagWND *)*((_QWORD *)v30 + 13);
      }
      while ( v30 );
      v32 = *(_QWORD *)(W32GetUserSessionState(v29, v28) + 63360);
      v35 = W32GetUserSessionState(v34, v33);
      if ( (unsigned int)GreCombineRgn(*(_QWORD *)(v35 + 63360), v32, v6, 1LL) == 1 )
        return 1LL;
      v8 = v89;
    }
    goto LABEL_28;
  }
  if ( !v26 )
    return 1LL;
  v42 = v26 - 2;
  if ( v42 )
  {
    if ( v42 == 1 )
      return 0LL;
  }
  else
  {
    v43 = (GetAppCompatFlags(*((_QWORD *)v9 + 2)) & 0x10000) != 0;
    v44 = 1LL;
    if ( v43 )
      v44 = (__int64)v6;
    v6 = (HRGN)v44;
    v88 = (HRGN)v44;
  }
LABEL_28:
  if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 27LL) & 0x10) == 0
    || (v72 = W32GetUserSessionState(v13, left),
        Prop = GetProp(v9, *(unsigned __int16 *)(v72 + 41398), 1LL),
        (v75 = Prop) == 0) )
  {
LABEL_29:
    if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 31LL) & 2) == 0 )
      InternalInvalidate3(v9);
    v17 = (struct tagWND *)*((_QWORD *)v9 + 14);
    v18 = v5;
    if ( !v17
      || (v20 = *((_QWORD *)v9 + 5),
          left = *(unsigned __int8 *)(v20 + 31),
          (((v5 & 0x40) == 0) & (unsigned __int8)~((unsigned __int8)left >> 5)) == 0)
      || (v5 & 0x80u) == 0 && (left & 2) != 0 )
    {
LABEL_32:
      if ( (*(_BYTE *)(*((_QWORD *)v9 + 5) + 31LL) & 2) != 0 )
        InternalInvalidate3(v9);
      if ( (v18 & 0x2000) == 0 )
        return 1LL;
      v36 = (_BYTE *)*((_QWORD *)v9 + 5);
      if ( (v36[24] & 0x20) != 0 )
        return 1LL;
      if ( (v36[26] & 8) != 0 )
        return 1LL;
      if ( (v36[31] & 4) == 0 )
        return 1LL;
      if ( (v18 & 8) == 0 )
      {
        v37 = *((_QWORD *)v9 + 13);
        if ( !v37
          || (*(_BYTE *)(*(_QWORD *)(v37 + 40) + 31LL) & 2) == 0
          && (GetAppCompatFlags(*((_QWORD *)v9 + 2)) & 0x4000) == 0 )
        {
          return 1LL;
        }
      }
      v38 = W32GetUserSessionState(v36, left);
      SetRectRgnIndirect(*(_QWORD *)(v38 + 63360), &v93);
      if ( v18 < 0 )
      {
        v40 = 0LL;
        do
        {
          v64 = *(HRGN *)(*((_QWORD *)v9 + 5) + 168LL);
          v88 = v64;
          if ( v64 )
          {
            if ( v40 )
            {
              v65 = LogicalToPhysicalInPlaceRgnWorker(v40, &v88, 0);
              v64 = v88;
              v66 = v65;
            }
            else
            {
              v66 = 0;
            }
            v67 = *(_QWORD *)(W32GetUserSessionState(v40, v39) + 63360);
            v70 = W32GetUserSessionState(v69, v68);
            GreCombineRgn(*(_QWORD *)(v70 + 63360), v67, v64, 1LL);
            if ( v66 )
              GreDeleteObject(v64);
          }
          v40 = v9;
          v9 = (struct tagWND *)*((_QWORD *)v9 + 13);
        }
        while ( v9 );
      }
      v41 = W32GetUserSessionState(v40, v39);
      return (unsigned int)GreCombineRgn(v89, v89, *(_QWORD *)(v41 + 63360), 4LL) != 1;
    }
    EmptyRgnPublic = 0LL;
    v86 = 0LL;
    if ( (v5 & 1) != 0 )
      v85 = v5 | 0x2404;
    v22 = *(_DWORD *)(v20 + 104);
    if ( v93.left > v22 )
      v22 = v93.left;
    v86.left = v22;
    v23 = *(_DWORD *)(v20 + 112);
    if ( v93.right < v23 )
      v23 = v93.right;
    v86.right = v23;
    if ( v22 >= v23 )
      goto LABEL_51;
    top = *(_DWORD *)(v20 + 108);
    if ( v93.top > top )
      top = v93.top;
    v86.top = top;
    v25 = *(_DWORD *)(v20 + 116);
    if ( v93.bottom < v25 )
      v25 = v93.bottom;
    v86.bottom = v25;
    if ( top >= v25 )
    {
LABEL_51:
      v18 = v5;
      goto LABEL_32;
    }
    v18 = v5;
    v83 = v5;
    while ( 1 )
    {
      if ( !v17 )
      {
        if ( EmptyRgnPublic )
          GreDeleteObject(EmptyRgnPublic);
        goto LABEL_32;
      }
      v45 = (_BYTE *)*((_QWORD *)v17 + 5);
      if ( (v45[31] & 0x10) == 0 )
        goto LABEL_79;
      if ( (v45[27] & 0x20) != 0 || (v45[26] & 8) != 0 )
      {
        v90 = 1;
        if ( EmptyRgnPublic || (EmptyRgnPublic = CreateEmptyRgnPublic()) != 0 )
        {
          v46 = v89;
          if ( v6 != (HRGN)1 )
            v46 = v6;
          GreCombineRgn(EmptyRgnPublic, v46, 0LL, 5LL);
        }
      }
      else
      {
        v90 = 0;
      }
      v87 = v89;
      v91 = v6;
      v47 = PhysicalToLogicalInPlaceRect((__int64)v17, &v86.left);
      v48 = PhysicalToLogicalInPlaceRgn(v17, &v91);
      v49 = PhysicalToLogicalInPlaceRgn(v17, &v87);
      v50 = v91;
      v51 = v49;
      v92 = v87;
      LODWORD(v91) = InternalInvalidate2(v17, v91, v87, &v86, v85);
      if ( v48 )
        GreDeleteObject(v50);
      if ( v51 )
      {
        if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v17, &v87, 0) )
        {
          GreCombineRgn(v89, v87, 0LL, 5LL);
          GreDeleteObject(v87);
        }
        GreDeleteObject(v92);
      }
      if ( v47
        && (*(_DWORD *)(*((_QWORD *)v17 + 5) + 232LL) & 2) != 0
        && *((_QWORD *)v17 + 27)
        && (unsigned int)IsWindowDesktopComposed(v17) )
      {
        v54 = (float *)*((_QWORD *)v17 + 27);
        v55 = (int)v54[13];
        v56 = (int)v54[12];
        v57 = (int)(float)((float)v86.top * v54[5]);
        left = (unsigned int)(int)(float)((float)v86.bottom * v54[5]);
        v58 = (int)(float)((float)v86.right * *v54);
        v86.left = v56 + (int)(float)((float)v86.left * *v54);
        v86.right = v58 + v56;
        v86.bottom = left + v55;
        v86.top = v55 + v57;
      }
      v52 = v90;
      v6 = v88;
      if ( v90 && EmptyRgnPublic )
      {
        v53 = v89;
        if ( v88 != (HRGN)1 )
          v53 = v88;
        GreCombineRgn(v53, EmptyRgnPublic, 0LL, 5LL);
      }
      if ( (_DWORD)v91 )
      {
        v18 = v83;
        goto LABEL_79;
      }
      v59 = v52 == 0;
      v18 = v83;
      if ( v59 )
      {
        if ( (v83 & 0x12) == 0 )
        {
          if ( EmptyRgnPublic )
            GreDeleteObject(EmptyRgnPublic);
          return 0LL;
        }
        v17 = (struct tagWND *)*((_QWORD *)v17 + 11);
        v18 = v83 & 0xF3D2;
        v85 &= 0xFFFFD3D2;
        v83 &= 0xF3D2u;
      }
      else
      {
LABEL_79:
        v17 = (struct tagWND *)*((_QWORD *)v17 + 11);
      }
    }
  }
  v76 = *(_QWORD *)(Prop + 40);
  if ( v76 || (v76 = CreateEmptyRgnPublic()) != 0 )
  {
    v77 = W32GetUserSessionState(v74, left);
    SetRectRgnIndirect(*(_QWORD *)(v77 + 63360), &v93);
    if ( v76 != 1 )
    {
      v80 = W32GetUserSessionState(v79, v78);
      GreCombineRgn(v76, v76, *(_QWORD *)(v80 + 63360), 2LL);
    }
  }
  else
  {
    v76 = 1LL;
    v82 = W32GetUserSessionState(v74, left);
    SetRectRgnIndirect(*(_QWORD *)(v82 + 63360), &v93);
  }
  *(_QWORD *)(v75 + 40) = v76;
  v81 = W32GetUserSessionState(v79, v78);
  return (unsigned int)GreCombineRgn(v8, v8, *(_QWORD *)(v81 + 63360), 4LL) != 1;
}
