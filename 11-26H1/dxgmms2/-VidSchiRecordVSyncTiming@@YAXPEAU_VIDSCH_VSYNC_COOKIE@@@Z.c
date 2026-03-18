/*
 * XREFs of ?VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14001BAA0
 * Callers:
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14001C404 (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x140049E60 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x14001B930 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x14001BA24 (McTemplateK0pp_EtwWriteTransfer.c)
 *     ?Compute_b0_b1@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x14001C29C (-Compute_b0_b1@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     ?InitWithPoint@?$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z @ 0x14001D5B8 (-InitWithPoint@-$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z.c)
 *     ?AddToSums@?$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z @ 0x140037F34 (-AddToSums@-$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z.c)
 *     ?RebaseSums@?$LinearFitT@$0BAA@@@QEAA_NXZ @ 0x14003841C (-RebaseSums@-$LinearFitT@$0BAA@@@QEAA_NXZ.c)
 */

void __fastcall VidSchiRecordVSyncTiming(
        struct _VIDSCH_VSYNC_COOKIE *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  int v7; // r15d
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r14
  __int64 v12; // r13
  double v13; // xmm0_8
  unsigned __int64 v14; // rcx
  bool v15; // cf
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r10
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rbx
  unsigned int v22; // ebp
  int v23; // eax
  _QWORD *v24; // r12
  bool v25; // r13
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // rdx
  signed __int64 v30; // r14
  signed __int64 v31; // r15
  __int128 v32; // rax
  __int64 v33; // r9
  __int64 v34; // r11
  __int64 v35; // rcx
  __int64 v36; // r10
  bool v37; // sf
  __int128 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  bool v41; // sf
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // r11
  unsigned __int64 v48; // r10
  unsigned __int64 v49; // r9
  unsigned __int128 v50; // rax
  unsigned __int64 v51; // rax

  if ( (*((_BYTE *)a1 + 124) & 1) != 0 )
    return;
  v5 = *((_QWORD *)a1 + 6);
  v6 = *((unsigned int *)a1 + 27);
  v7 = -1073741675;
  v8 = *(_QWORD *)(v5 + 8 * v6 + 3448);
  v9 = *((_QWORD *)a1 + 11) - *(_QWORD *)(v8 + 44352);
  if ( *(_BYTE *)(v5 + 7074) )
  {
    v10 = *(unsigned int *)(*(_QWORD *)(v5 + 16) + 4464LL);
    if ( v9 > v10 )
    {
      if ( *(_DWORD *)(v8 + 3192) != -1 )
      {
        if ( *(_DWORD *)(v8 + 3192) && *(_DWORD *)(v8 + 3192) != *(_DWORD *)(v8 + 83096) )
        {
          v47 = *(_QWORD *)(v5 + 2904);
          v48 = *(unsigned int *)(v8 + 3192);
          v49 = v48 * v47;
          if ( is_mul_ok(v48, v47) )
          {
            v10 = 0LL;
          }
          else
          {
            v49 = -1LL;
            v10 = 3221225621LL;
          }
          if ( (v10 & 0x80000000) == 0LL )
          {
LABEL_77:
            v11 = v49 / 0x989680;
            goto LABEL_8;
          }
          a3 = 0xD6BF94D5E57A42BDuLL;
          v10 = 10000000 * (v48 / 0x989680);
          v50 = v47 * (v48 % 0x989680) * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
LABEL_89:
          v11 = v47 * (v48 / 0x989680) + (*((_QWORD *)&v50 + 1) >> 23);
          goto LABEL_8;
        }
        if ( *(_DWORD *)(v8 + 83096) )
        {
          v47 = *(_QWORD *)(v5 + 2904);
          v48 = *(unsigned int *)(v8 + 83096);
          v49 = v48 * v47;
          if ( is_mul_ok(v48, v47) )
          {
            v10 = 0LL;
          }
          else
          {
            v49 = -1LL;
            v10 = 3221225621LL;
          }
          if ( (v10 & 0x80000000) == 0LL )
            goto LABEL_77;
          a3 = 0xD6BF94D5E57A42BDuLL;
          v10 = v47 * (v48 % 0x989680);
          v50 = v10 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
          goto LABEL_89;
        }
      }
      v11 = *(_QWORD *)(v8 + 83112);
LABEL_8:
      v12 = *(_QWORD *)(v8 + 44408);
      if ( (byte_14008A204 & 0x20) != 0 )
        McTemplateK0pp_EtwWriteTransfer(v10, &EventResetSmoother, a3, v11, v11);
      if ( (v11 & 0x8000000000000000uLL) != 0LL )
        v13 = (double)(int)(v11 & 1 | (v11 >> 1)) + (double)(int)(v11 & 1 | (v11 >> 1));
      else
        v13 = (double)(int)v11;
      *(double *)(v12 + 32) = v13;
      LinearFitT<256>::Reset(v12);
    }
  }
  if ( *(_QWORD *)(v8 + 44424) )
  {
    a3 = *((_QWORD *)a1 + 7) - *(_QWORD *)(v8 + 44368);
    if ( v9 )
    {
      if ( *(_QWORD *)(v8 + 44424) <= 3uLL )
      {
        v42 = a3 + *(_QWORD *)(v8 + 44440);
        v43 = v9 + *(_QWORD *)(v8 + 44424);
        *(_QWORD *)(v8 + 44440) = v42;
        *(_QWORD *)(v8 + 44424) = v43;
        if ( v43 > 3 )
        {
          v44 = v42 / (v43 - 1);
          *(_QWORD *)(v8 + 44448) = v44 / 0xA;
          _m_prefetchw((const void *)(v8 + 44432));
          while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 44432), v44, *(_QWORD *)(v8 + 44432)) != v44 )
            ;
          a4 = *(_QWORD *)(v8 + 44440);
          v45 = *(_QWORD *)(v5 + 2904);
          v46 = 1000 * a4;
          if ( is_mul_ok(a4, 0x3E8uLL) )
            v7 = 0;
          else
            v46 = -1LL;
          if ( v7 < 0 )
          {
            a2 = a4 % v45;
            a3 = 1000 * (a4 / v45) + 1000 * (a4 % v45) / v45;
            *(_QWORD *)(v8 + 44472) += a3;
          }
          else
          {
            a2 = v46 % v45;
            *(_QWORD *)(v8 + 44472) += v46 / v45;
            a3 = v46 / v45;
          }
        }
      }
      else
      {
        v14 = 2LL * *(_QWORD *)(v8 + 44432);
        *(_QWORD *)(v8 + 44464) = a3 / v9;
        v15 = a3 / v9 < v14;
        v16 = *(_QWORD *)(v5 + 2904);
        a4 = a3 / v9;
        if ( v15 )
        {
          v17 = 1000 * a3;
          if ( is_mul_ok(a3, 0x3E8uLL) )
            v7 = 0;
          else
            v17 = -1LL;
          if ( v7 < 0 )
          {
            a2 = a3 % v16;
            v18 = 1000 * (a3 / v16) + 1000 * (a3 % v16) / v16;
          }
          else
          {
            a2 = v17 % v16;
            v18 = v17 / v16;
          }
          *(_QWORD *)(v8 + 44472) += v18;
        }
        else
        {
          v51 = 1000 * a3;
          if ( is_mul_ok(a3, 0x3E8uLL) )
            v7 = 0;
          else
            v51 = -1LL;
          if ( v7 < 0 )
          {
            a2 = a3 % v16;
            *(_QWORD *)(v8 + 44480) += 1000 * (a3 / v16) + 1000 * (a3 % v16) / v16;
          }
          else
          {
            a2 = v51 % v16;
            *(_QWORD *)(v8 + 44480) += v51 / v16;
          }
        }
        if ( a4 > *(_QWORD *)(v8 + 44432) + *(_QWORD *)(v8 + 44448)
          || a4 < *(_QWORD *)(v8 + 44432) - *(_QWORD *)(v8 + 44448) )
        {
          ++*(_QWORD *)(v8 + 44456);
          *(_QWORD *)(v8 + 44424) = 0LL;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(v8 + 44440) = 0LL;
    *(_QWORD *)(v8 + 44424) = 1LL;
  }
  if ( !*(_BYTE *)(v5 + 67) && *(_QWORD *)(v8 + 44424) <= 3uLL )
  {
    if ( *(_BYTE *)(v5 + 2500) )
      _InterlockedExchange((volatile __int32 *)(v5 + 4 * v6 + 2560), 1);
    else
      _InterlockedExchange((volatile __int32 *)(v5 + 2560), 1);
  }
  v19 = *((_QWORD *)a1 + 11);
  *(_QWORD *)(v8 + 44352) = v19;
  v20 = *((_QWORD *)a1 + 7);
  *(_QWORD *)(v8 + 44368) = v20;
  *(_QWORD *)(v8 + 44360) = *((_QWORD *)a1 + 12);
  *(_QWORD *)(v8 + 44376) = *((_QWORD *)a1 + 8);
  *(_QWORD *)(v8 + 44384) = *((_QWORD *)a1 + 9);
  *(_QWORD *)(v8 + 44392) = *((_QWORD *)a1 + 10);
  if ( *(_BYTE *)(v5 + 7074) )
  {
    v21 = *(_QWORD *)(v8 + 44408);
    v22 = _mm_getcsr();
    v23 = *(_DWORD *)(v21 + 8);
    _mm_setcsr(v22 | 1);
    v24 = (_QWORD *)(16LL * (unsigned __int8)v23 + v21 + 104);
    if ( !v23 )
    {
      *v24 = v19;
      v24[1] = v20;
LABEL_57:
      LinearFitT<256>::InitWithPoint(v21, v24, a3, a4);
LABEL_51:
      LinearFitT<256>::Compute_b0_b1(v21, *((_QWORD *)&v38 + 1), a3, a4);
LABEL_52:
      _mm_setcsr(v22);
      return;
    }
    v25 = 0;
    v26 = 16LL * (unsigned __int8)(v23 - 1);
    v27 = *(_QWORD *)(v26 + v21 + 112) - v20;
    if ( v27 < 0 )
      v27 = v20 - *(_QWORD *)(v26 + v21 + 112);
    if ( v19 <= *(_QWORD *)(v26 + v21 + 104) + *(_QWORD *)(v21 + 88) && v27 <= *(_QWORD *)(v21 + 96) )
      goto LABEL_52;
    if ( *(_DWORD *)(v21 + 8) > 0x100u )
    {
      if ( (*(_DWORD *)(v21 + 8) & 0x1FF) == 0 )
        v25 = (unsigned __int8)LinearFitT<256>::RebaseSums(v21, a2, a3) == 0;
      v28 = *v24 - *(_QWORD *)(v21 + 40);
      v29 = v24[1] - *(_QWORD *)(v21 + 48);
      *(_QWORD *)(v21 + 56) -= v28;
      *(_QWORD *)(v21 + 64) -= v29;
      *(_QWORD *)(v21 + 72) -= v28 * v29;
      *(_QWORD *)(v21 + 80) -= v28 * v28;
    }
    *v24 = v19;
    a3 = 534LL;
    v24[1] = v20;
    v30 = v19 - *(_QWORD *)(v21 + 40);
    v31 = v20 - *(_QWORD *)(v21 + 48);
    v32 = v30 * (__int128)v30;
    v33 = v32;
    if ( (__int64)v32 < 0 )
    {
      if ( *((_QWORD *)&v32 + 1) == -1LL )
        goto LABEL_38;
    }
    else if ( is_mul_ok(v30, v30) )
    {
LABEL_38:
      v34 = -1LL;
      goto LABEL_39;
    }
    v34 = -1LL;
    v33 = -1LL;
LABEL_39:
    v35 = *(_QWORD *)(v21 + 80);
    v36 = v33 + v35;
    v37 = v35 < 0;
    if ( v35 > 0 )
    {
      if ( v33 > 0 )
      {
        a4 = 0LL;
        goto LABEL_42;
      }
      v37 = v35 < 0;
    }
    if ( v37 && v33 < 0 )
      a4 = 0LL;
    else
      a4 = 0LL;
LABEL_42:
    v38 = v30 * (__int128)v31;
    if ( (__int64)v38 < 0 )
    {
      if ( *((_QWORD *)&v38 + 1) == -1LL )
        goto LABEL_44;
    }
    else if ( is_mul_ok(v30, v31) )
    {
LABEL_44:
      v34 = v30 * v31;
    }
    v39 = *(_QWORD *)(v21 + 72);
    v40 = v34 + v39;
    v41 = v39 < 0;
    if ( v39 > 0 )
    {
      if ( v34 > 0 )
      {
        if ( v40 <= 0 )
          goto LABEL_48;
        goto LABEL_47;
      }
      v41 = v39 < 0;
    }
    if ( v41 && v34 < 0 && v40 >= 0 )
    {
LABEL_48:
      *(_QWORD *)(v21 + 56) += v30;
      *(_QWORD *)(v21 + 64) += v31;
      ++*(_DWORD *)(v21 + 8);
      *(_QWORD *)(v21 + 72) = v40;
      *(_QWORD *)(v21 + 80) = v36;
      if ( !v25 && *v24 > *(_QWORD *)(v26 + v21 + 104) && (*(__int64 *)(v21 + 96) <= 0 || v27 <= *(_QWORD *)(v21 + 96)) )
        goto LABEL_51;
      goto LABEL_57;
    }
LABEL_47:
    a3 = 0LL;
    goto LABEL_48;
  }
}
