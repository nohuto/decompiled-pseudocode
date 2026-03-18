/*
 * XREFs of ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400ABFD0
 * Callers:
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1400AA854 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 * Callees:
 *     ??$IsBaseRustExportsEnabled@$00@@YA_NXZ @ 0x1400AB1D8 (--$IsBaseRustExportsEnabled@$00@@YA_NXZ.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x1400AB1FC (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400AC7D8 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400E3898 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall RGNOBJ::bSubtractComplex(RGNOBJ *this, struct _RECTL *a2, struct _RECTL *a3, int a4)
{
  __int64 v4; // rbp
  RGNOBJ *v7; // r14
  _BYTE *v8; // rdi
  int v9; // r9d
  __int64 v10; // rcx
  LONG *p_top; // r8
  __int64 i; // rdx
  __int64 v13; // r11
  __int64 v14; // rax
  struct SCAN *v15; // rbx
  unsigned int *v16; // rsi
  int v17; // edx
  __int64 v18; // rax
  LONG top; // r8d
  __int64 v20; // r15
  int v21; // r13d
  unsigned int sizeScan; // eax
  __int64 v23; // rbp
  int v24; // r12d
  int v25; // eax
  const void *v26; // rdx
  __int64 v27; // r13
  __int64 v28; // rbp
  __int64 v29; // r8
  LONG v30; // r12d
  __int64 v31; // rdx
  LONG v32; // r8d
  __int64 v33; // rcx
  int v34; // r14d
  int *v35; // rax
  __int64 v36; // r10
  int v37; // r9d
  int v38; // r11d
  int v39; // edi
  _DWORD *v40; // rbp
  int v41; // ebx
  _DWORD *v42; // r8
  int v43; // r13d
  int v44; // r15d
  _DWORD *v45; // r12
  __int64 v46; // rax
  int v47; // ecx
  LONG bottom; // ebp
  int v49; // eax
  unsigned int v50; // eax
  __int64 v51; // rbx
  unsigned int v52; // eax
  int v53; // ecx
  int v54; // ecx
  int v55; // r14d
  __int64 v56; // rbx
  unsigned int v57; // eax
  struct SCAN *v58; // rax
  int v59; // ebx
  signed __int64 v61; // rsi
  const struct BaseRustGlobals *BaseRustGlobals; // rax
  int v63; // r10d
  LONG v64; // eax
  __int64 v65; // rcx
  __int64 v66; // r9
  unsigned __int64 v67; // rcx
  _BYTE *v68; // rcx
  int v69; // [rsp+20h] [rbp-408h]
  unsigned int v70; // [rsp+24h] [rbp-404h]
  __int64 v71; // [rsp+28h] [rbp-400h]
  LONG v72; // [rsp+30h] [rbp-3F8h]
  int v73; // [rsp+34h] [rbp-3F4h]
  int v74; // [rsp+38h] [rbp-3F0h]
  __int128 v75; // [rsp+40h] [rbp-3E8h]
  __int128 v76; // [rsp+40h] [rbp-3E8h]
  __int64 v77; // [rsp+50h] [rbp-3D8h]
  LONG v78; // [rsp+64h] [rbp-3C4h]
  __int64 v80; // [rsp+70h] [rbp-3B8h]
  _DWORD *v81; // [rsp+78h] [rbp-3B0h]
  struct SCAN *pScan; // [rsp+80h] [rbp-3A8h]
  __int64 v83; // [rsp+88h] [rbp-3A0h]
  _BYTE *v85; // [rsp+98h] [rbp-390h]
  __int64 v86; // [rsp+A0h] [rbp-388h]
  _DWORD v88[4]; // [rsp+B0h] [rbp-378h] BYREF
  _BYTE v89[800]; // [rsp+C0h] [rbp-368h] BYREF

  v4 = a4;
  v7 = this;
  memset_0(v89, 0, sizeof(v89));
  if ( (int)v4 < 100 )
  {
    v8 = v89;
    v85 = v89;
LABEL_3:
    v9 = 0;
    if ( (int)v4 > 0 )
    {
      v10 = 0LL;
      p_top = &a3->top;
      do
      {
        for ( i = v10; i; *(_QWORD *)&v8[8 * i--] = v13 )
        {
          v13 = *(_QWORD *)&v8[8 * i - 8];
          if ( *p_top >= *(_DWORD *)(v13 + 4) )
            break;
        }
        ++v10;
        v14 = v9++;
        p_top += 4;
        *(_QWORD *)&v8[8 * i] = &a3[v14];
      }
      while ( v10 < v4 );
    }
    v88[1] = a2->bottom;
    v88[0] = 0;
    v88[2] = 0;
    v88[3] = 0x7FFFFFFF;
    *(_QWORD *)&v8[8 * v4] = v88;
    pScan = REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
    v15 = pScan;
    *((_QWORD *)pScan + 1) = 0x7FFFFFFFLL;
    v16 = (unsigned int *)((char *)pScan + 16);
    *(_DWORD *)pScan = 0;
    *((_DWORD *)pScan + 1) = 0x80000000;
    REGION_CORE::set_sizeScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL), 0x10u);
    v17 = 0;
    v69 = 0;
    *(_DWORD *)(*(_QWORD *)v7 + 48LL) = 1;
    v18 = *(_QWORD *)v7;
    *(_QWORD *)(v18 + 52) = 0x7FFFFFFFLL;
    *(_DWORD *)(v18 + 60) = 0x80000000;
    *(_DWORD *)(v18 + 64) = 0;
    top = a2->top;
    v72 = top;
    if ( *(_DWORD *)(*(_QWORD *)v8 + 12LL) <= top )
    {
      v68 = v8;
      do
      {
        v68 += 8;
        ++v17;
      }
      while ( *(_DWORD *)(*(_QWORD *)v68 + 12LL) <= top );
      v69 = v17;
    }
    v20 = v17;
    v83 = v17;
    v77 = v17;
    while ( 1 )
    {
      v21 = v4 - v17;
      sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
      v23 = *(_QWORD *)v7;
      v24 = sizeScan + 40 + 8 * v21;
      if ( IsBaseRustExportsEnabled<1>() )
      {
        BaseRustGlobals = GetBaseRustGlobals();
        v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)BaseRustGlobals + 184LL))(v23 + 24);
      }
      else
      {
        v25 = *(_DWORD *)(v23 + 32);
      }
      if ( v24 > v25 )
      {
        v61 = (char *)v16 - (char *)REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
        if ( !RGNOBJ::bExpand(v7, v24 + 4 * v21 * (v21 + 4)) )
        {
          if ( v8 != v89 )
            Win32FreePool(v8);
          return 0LL;
        }
        v16 = (unsigned int *)((char *)REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL)) + v61);
        v15 = (struct SCAN *)&v16[-*(v16 - 1) - 4];
        pScan = v15;
      }
      v26 = v16 + 3;
      v27 = v77;
      v28 = 2LL;
      v70 = 2;
      v71 = 2LL;
      v16[3] = a2->left;
      v16[4] = a2->right;
      v29 = *(_QWORD *)&v8[8 * v20];
      v30 = *(_DWORD *)(v29 + 4);
      if ( v30 <= v72 )
      {
        v31 = *(_QWORD *)&v8[8 * v77];
        v32 = *(_DWORD *)(v29 + 12);
        if ( *(_DWORD *)(v31 + 4) <= v72 )
        {
          v63 = v69;
          do
          {
            v64 = *(_DWORD *)(v31 + 12);
            v65 = v27;
            if ( v64 >= v32 )
              v64 = v32;
            v32 = v64;
            if ( v27 > v20 )
            {
              do
              {
                v66 = *(_QWORD *)&v8[8 * v65 - 8];
                if ( *(_DWORD *)(v31 + 12) >= *(_DWORD *)(v66 + 12) )
                  break;
                *(_QWORD *)&v8[8 * v65--] = v66;
              }
              while ( v65 > v20 );
            }
            if ( *(_DWORD *)(*(_QWORD *)&v8[8 * v65] + 12LL) <= v72 )
            {
              ++v63;
              ++v20;
            }
            else
            {
              *(_QWORD *)&v8[8 * v65] = v31;
            }
            ++v27;
            v31 = *(_QWORD *)&v8[8 * v27];
          }
          while ( *(_DWORD *)(v31 + 4) <= v72 );
          v69 = v63;
          v77 = v27;
          v83 = v20;
        }
        v33 = v20;
        v86 = v20;
        v30 = *(_DWORD *)(*(_QWORD *)&v8[8 * v27] + 4LL);
        if ( v30 >= v32 )
          v30 = v32;
        v78 = v30;
        if ( v20 < v27 )
        {
          v34 = 2;
          while ( 1 )
          {
            v35 = *(int **)&v8[8 * v33];
            v36 = 0LL;
            v80 = 0LL;
            v37 = *v35;
            v38 = v35[2];
            v73 = *v35;
            v74 = v38;
            if ( v28 <= 0 )
              goto LABEL_32;
            v39 = 3;
            v40 = v16 + 4;
            v41 = 1;
            v42 = v16 + 3;
            v43 = 0;
            v44 = 2;
            v45 = v16 + 5;
            v81 = v16 + 3;
            v46 = v71;
            do
            {
              if ( v37 >= *v40 )
                goto LABEL_30;
              if ( v38 <= *v42 )
                break;
              v47 = v37 <= *v42;
              if ( v38 >= *v40 )
                v47 += 2;
              if ( v47 )
              {
                v53 = v47 - 1;
                if ( !v53 )
                {
                  *v42 = v38;
                  goto LABEL_29;
                }
                v54 = v53 - 1;
                if ( v54 )
                {
                  if ( v54 == 1 )
                  {
                    memmove(&v16[v43 + 3], &v16[v44 + 3], 4LL * (v34 - v43 - 2));
                    v34 -= 2;
                    v36 = v80 - 2;
                    v71 -= 2LL;
                    v42 = v81 - 2;
                    v37 = v73;
                    v43 -= 2;
                    v38 = v74;
                    v44 -= 2;
                    v41 -= 2;
                    v39 -= 2;
                    v40 -= 2;
                    v45 -= 2;
                  }
                  goto LABEL_29;
                }
              }
              else
              {
                memmove(&v16[v39 + 3], &v16[v41 + 3], 4LL * (v34 - v43 - 1));
                v38 = v74;
                v34 += 2;
                v71 += 2LL;
                v37 = v73;
                v42 = v81;
                v36 = v80;
                *v45 = v74;
              }
              *v40 = v37;
LABEL_29:
              v46 = v71;
LABEL_30:
              v36 += 2LL;
              v42 += 2;
              v43 += 2;
              v80 = v36;
              v44 += 2;
              v81 = v42;
              v41 += 2;
              v39 += 2;
              v40 += 2;
              v45 += 2;
            }
            while ( v36 < v46 );
            v8 = v85;
            v27 = v77;
            v33 = v86;
            v28 = v71;
            v70 = v34;
LABEL_32:
            v86 = ++v33;
            if ( v33 >= v27 )
            {
              v15 = pScan;
              v7 = this;
              v20 = v83;
              v30 = v78;
              break;
            }
          }
        }
        v26 = v16 + 3;
      }
      bottom = a2->bottom;
      if ( v30 <= bottom )
        bottom = v30;
      if ( *(_DWORD *)v15 == v70 && !memcmp((char *)v15 + 12, v26, 4LL * v70) )
      {
        *((_DWORD *)v15 + 2) = bottom;
      }
      else
      {
        if ( v70 )
        {
          v49 = _mm_cvtsi128_si32(*(__m128i *)(*(_QWORD *)v7 + 52LL));
          v75 = *(_OWORD *)(*(_QWORD *)v7 + 52LL);
          if ( (int)v16[3] < v49 )
            v49 = v16[3];
          LODWORD(v75) = v49;
          v50 = *(_QWORD *)(*(_QWORD *)v7 + 60LL);
          if ( (int)v16[v71 + 2] > SDWORD2(v75) )
            v50 = v16[v71 + 2];
          DWORD2(v75) = v50;
          *(_OWORD *)(*(_QWORD *)v7 + 52LL) = v75;
        }
        ++*(_DWORD *)(*(_QWORD *)v7 + 48LL);
        *v16 = v70;
        v51 = *(_QWORD *)v7;
        v52 = REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
        REGION_CORE::set_sizeScan((REGION_CORE *)(v51 + 24), v52 + 4 * (v70 + 4));
        v15 = (struct SCAN *)v16;
        v16[1] = v72;
        v16[2] = bottom;
        pScan = (struct SCAN *)v16;
        v16[v71 + 3] = v70;
        v16 += *v16 + 4;
      }
      v72 = bottom;
      if ( v20 < v27 )
      {
        v55 = v69;
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)&v8[8 * v20] + 12LL) > bottom )
            break;
          ++v55;
          ++v20;
        }
        while ( v20 < v27 );
        v69 = v55;
        v7 = this;
        v83 = v20;
      }
      if ( bottom >= a2->bottom )
      {
        if ( *(_DWORD *)(*(_QWORD *)v7 + 48LL) == 1 )
        {
          *(_OWORD *)(*(_QWORD *)v7 + 52LL) = 0LL;
          *((_DWORD *)v15 + 2) = 0x7FFFFFFF;
        }
        else
        {
          if ( *(_DWORD *)v15 )
          {
            v16[1] = *((_DWORD *)v15 + 2);
            ++*(_DWORD *)(*(_QWORD *)v7 + 48LL);
            *v16 = 0;
            v16[3] = 0;
            v56 = *(_QWORD *)v7;
            v57 = REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
            REGION_CORE::set_sizeScan((REGION_CORE *)(v56 + 24), v57 + 16);
          }
          else
          {
            v16 = (unsigned int *)v15;
          }
          v58 = REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL));
          v59 = *(_DWORD *)((char *)v58 + (unsigned int)(4 * *(_DWORD *)v58 + 16) + 4);
          *((_DWORD *)REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL)) + 2) = v59;
          v76 = *(_OWORD *)(*(_QWORD *)v7 + 52LL);
          DWORD1(v76) = *((_DWORD *)REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL)) + 2);
          HIDWORD(v76) = v16[1];
          *(_OWORD *)(*(_QWORD *)v7 + 52LL) = v76;
          v16[2] = 0x7FFFFFFF;
        }
        if ( v8 != v89 )
          Win32FreePool(v8);
        return 1LL;
      }
      v17 = v69;
      LODWORD(v4) = a4;
    }
  }
  v67 = 8LL * (unsigned int)(v4 + 1);
  if ( v67 <= 0xFFFFFFFF )
  {
    v85 = (_BYTE *)PALLOCNOZ(v67, 1852273223LL);
    v8 = v85;
    if ( v85 )
      goto LABEL_3;
  }
  return 0LL;
}
