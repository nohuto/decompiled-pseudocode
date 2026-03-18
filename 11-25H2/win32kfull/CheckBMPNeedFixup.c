/*
 * XREFs of CheckBMPNeedFixup @ 0x14013ADF0
 * Callers:
 *     SetupAAHeader @ 0x14013BB0C (SetupAAHeader.c)
 * Callees:
 *     IntersectRECTL @ 0x14013AD60 (IntersectRECTL.c)
 *     ComputeByteOffset @ 0x14013D870 (ComputeByteOffset.c)
 *     _local_unwind_0 @ 0x140342370 (_local_unwind_0.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall CheckBMPNeedFixup(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // r14
  PVOID v7; // r13
  __int64 v8; // rdi
  int v9; // r15d
  int v10; // ebx
  int v11; // eax
  int v12; // r10d
  int v13; // edx
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  char *v16; // rax
  PVOID v17; // rcx
  unsigned int *v18; // rbx
  unsigned int *v19; // rsi
  char *v20; // rdi
  unsigned __int64 v21; // r8
  unsigned int v22; // eax
  unsigned int *v23; // rcx
  bool v24; // cc
  int v25; // r12d
  unsigned int v26; // ebx
  unsigned int v27; // ebx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned int v30; // ecx
  int v31; // eax
  __int64 v33; // [rsp+0h] [rbp-148h] BYREF
  int v34; // [rsp+20h] [rbp-128h]
  unsigned int v35; // [rsp+24h] [rbp-124h]
  int v36; // [rsp+28h] [rbp-120h]
  PVOID pv; // [rsp+30h] [rbp-118h]
  _DWORD *v38; // [rsp+38h] [rbp-110h]
  int v39; // [rsp+40h] [rbp-108h]
  int v40; // [rsp+44h] [rbp-104h]
  int v41; // [rsp+48h] [rbp-100h]
  __int64 *v42; // [rsp+50h] [rbp-F8h]
  __int128 v43; // [rsp+58h] [rbp-F0h] BYREF
  int v44; // [rsp+68h] [rbp-E0h]
  unsigned __int64 v45; // [rsp+70h] [rbp-D8h]
  unsigned int *v46; // [rsp+78h] [rbp-D0h]
  unsigned int *v47; // [rsp+80h] [rbp-C8h]
  __int64 v48; // [rsp+88h] [rbp-C0h]
  unsigned __int64 v49; // [rsp+90h] [rbp-B8h]
  __m128i v50; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v51; // [rsp+B0h] [rbp-98h]
  __int128 v52; // [rsp+C0h] [rbp-88h]
  __int128 v53; // [rsp+D0h] [rbp-78h]
  __int128 v54; // [rsp+E0h] [rbp-68h]
  __int64 v55; // [rsp+F0h] [rbp-58h]

  v42 = &v33;
  v4 = (unsigned __int64)a4;
  v38 = a4;
  v7 = 0LL;
  pv = 0LL;
  memset_0(&v50, 0, 0x58uLL);
  v43 = 0LL;
  v8 = *(unsigned __int8 *)(a3 + 10);
  v9 = *(_DWORD *)v4;
  v36 = v9;
  if ( (v9 & 0x40) != 0 )
  {
    if ( (_DWORD)v8 == 6 )
    {
LABEL_3:
      *(_QWORD *)&v43 = 0LL;
      *((_QWORD *)&v43 + 1) = *(_QWORD *)(a3 + 12);
      if ( !IntersectRECTL((int *)&v43, (int *)(v4 + 64)) )
      {
        local_unwind_0(v42, &loc_14013B31E);
        goto LABEL_55;
      }
      v50 = *(__m128i *)(a2 + 8);
      v51 = *(_OWORD *)(a2 + 24);
      v52 = *(_OWORD *)(a2 + 40);
      v53 = *(_OWORD *)(a2 + 56);
      v54 = *(_OWORD *)(a2 + 72);
      v55 = *(_QWORD *)(a2 + 88);
      v50.m128i_i8[0] = _mm_cvtsi128_si32(v50) & 0xF3;
      HIDWORD(v53) = *(_DWORD *)(a3 + 20);
      v10 = HIDWORD(v53);
      v4 = (unsigned int)(HIDWORD(v43) - DWORD1(v43));
      DWORD1(v53) = HIDWORD(v43) - DWORD1(v43);
      v11 = ComputeByteOffset((unsigned int)v8, (unsigned int)v43, &v50.m128i_i8[1]);
      *((_QWORD *)&v52 + 1) = *(_QWORD *)(a3 + 24) + v10 * v12 + (__int64)v11;
      v13 = DWORD2(v43) - v43;
      v44 = DWORD2(v43) - v43;
      LODWORD(v53) = DWORD2(v43) - v43;
      v8 = 3LL * (DWORD2(v43) - (int)v43);
      DWORD2(v53) = 3 * (DWORD2(v43) - v43);
      v14 = (unsigned int)(DWORD2(v43) - v43 + 2);
      v15 = 0xFFFFFFFFLL;
      if ( (unsigned int)v14 < DWORD2(v43) - (int)v43 )
        goto LABEL_5;
      goto LABEL_49;
    }
    if ( (_DWORD)v8 == 255 )
    {
LABEL_48:
      v9 |= 0x240u;
      *(_DWORD *)v4 = v9;
      v14 = local_unwind_0(v42, &loc_14013B30B);
LABEL_49:
      v34 = v14;
      v30 = 3 * v14;
      v48 = 3 * v14;
      if ( 3 * v14 <= v15 )
      {
        v34 = 3 * v14;
        v26 = v15;
        if ( v30 + 8 >= v30 )
          v26 = v30 + 8;
        v34 = v26;
        if ( v30 + 8 >= v30 )
        {
          v27 = v26 & 0xFFFFFFF8;
          v34 = v27;
          v25 = v13 * v4;
          v39 = v13 * v4;
          if ( v13 * (int)v4 <= 2304 )
          {
            v9 |= 0x200u;
            v36 = v9;
            goto LABEL_35;
          }
          if ( v25 <= 0x4000 )
          {
            LODWORD(v7) = v25 >> 3;
          }
          else
          {
            DWORD1(v53) = ((int)v4 + 5) / 6;
            HIDWORD(v53) *= 6;
            LODWORD(v7) = 20;
          }
          v41 = (int)v7;
          v28 = (unsigned int)((_DWORD)v7 + 1);
          if ( (unsigned int)v28 >= (unsigned int)v7 )
            goto LABEL_40;
          while ( 1 )
          {
            v9 &= ~0x40u;
            *v38 = v9;
            v28 = local_unwind_0(v42, &loc_14013B31A);
LABEL_40:
            v29 = 4 * v28;
            v49 = v29;
            if ( v29 <= v15 && (unsigned int)v29 + v27 >= v27 )
            {
              v16 = (char *)EngAllocMem(1u, (unsigned int)v29 + v27, 0x38355448u);
              v17 = v16;
              pv = v16;
              if ( v16 )
              {
                v18 = (unsigned int *)&v16[v27];
                v19 = v18;
                v47 = v18;
                v20 = &v16[v8];
                LODWORD(v4) = 0;
                v39 = 0;
                v34 = v25;
                v35 = 0;
LABEL_8:
                v45 = 0LL;
                v40 = 0;
                v21 = ((__int64 (__fastcall *)(__m128i *, PVOID))v51)(&v50, v17);
                v45 = v21;
                while ( 1 )
                {
                  LOWORD(v35) = *(_WORD *)(v21 + 1);
                  BYTE2(v35) = *(_BYTE *)v21;
                  v22 = v35;
                  if ( BYTE1(v35) == BYTE2(v35) )
                  {
                    v22 = v35 & 0xFCFCFCFC;
                    v35 &= 0xFCFCFCFC;
                  }
                  *v18 = v22;
                  v23 = v19;
                  v46 = v19;
                  while ( *v23 != v22 )
                    v46 = --v23;
                  if ( v23 == v18 )
                  {
                    LODWORD(v4) = v4 + 1;
                    v39 = v4;
                    if ( (int)v4 > (int)v7 )
                    {
LABEL_16:
                      if ( (_DWORD)v7 == 20 || v40 )
                      {
LABEL_17:
                        if ( (int)v4 > (int)v7 )
                          goto LABEL_19;
                        v17 = pv;
                        if ( !DWORD1(v53) )
                          goto LABEL_19;
                        goto LABEL_8;
                      }
                      v25 -= v44;
                      v34 = v25;
                      if ( v25 > 2304 )
                      {
                        LODWORD(v7) = v25 >> 4;
                        v41 = v25 >> 4;
                        goto LABEL_17;
                      }
LABEL_55:
                      v9 |= 0x200u;
                      v36 = v9;
LABEL_19:
                      if ( (int)v4 < 20 )
                      {
                        v9 |= 0x200u;
                        v36 = v9;
                      }
                      if ( (_DWORD)v7 == 20 )
                      {
                        v24 = (int)v4 <= 20;
                        v4 = (unsigned __int64)v38;
                        if ( !v24 )
                        {
                          v9 &= ~0x40u;
                          v36 = v9;
                        }
                        v7 = pv;
                        goto LABEL_59;
                      }
                      if ( (int)v4 > 20 || (int)v4 <= (int)v7 )
                      {
                        v9 &= ~0x40u;
                        v36 = v9;
                      }
                      v7 = pv;
LABEL_35:
                      v4 = (unsigned __int64)v38;
                      goto LABEL_59;
                    }
                    v47 = ++v19;
                    *v19 = v22;
                    v40 = 1;
                  }
                  v21 += 3LL;
                  v45 = v21;
                  if ( v21 >= (unsigned __int64)v20 )
                    goto LABEL_16;
                }
              }
            }
          }
        }
LABEL_58:
        local_unwind_0(v42, &loc_14013B312);
        goto LABEL_59;
      }
LABEL_5:
      v34 = v15;
      goto LABEL_58;
    }
    v31 = v8 - 1;
  }
  else
  {
    v31 = local_unwind_0(v42, &loc_14013B316);
  }
  switch ( v31 )
  {
    case 0:
    case 1:
      goto LABEL_48;
    case 2:
    case 3:
    case 4:
    case 251:
    case 252:
    case 253:
      goto LABEL_3;
    default:
      break;
  }
LABEL_59:
  if ( v7 )
    EngFreeMem(v7);
  *(_DWORD *)v4 = v9;
  return v9 & 0x40;
}
