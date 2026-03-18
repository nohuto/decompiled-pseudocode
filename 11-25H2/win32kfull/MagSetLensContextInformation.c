/*
 * XREFs of MagSetLensContextInformation @ 0x1401B93FC
 * Callers:
 *     NtUserMagSetContextInformation @ 0x14024AE10 (NtUserMagSetContextInformation.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1401BA1A0 (MagpFindThreadContext.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z @ 0x1401BA1C0 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1401BA1E4 (DwmAsyncMagnSetWindowFilterList.c)
 *     MagpRevokeInputTransfrom @ 0x1402032B0 (MagpRevokeInputTransfrom.c)
 *     ChangeComposableCursor @ 0x140214560 (ChangeComposableCursor.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x140222E8C (DwmAsyncMagnSetDesktopTransform.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x140269628 (DwmAsyncMagnSetWindowSharedTextures.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x140270A14 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     DwmAsyncMagnCreate @ 0x140324564 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnDestroy @ 0x14032463C (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1403246EC (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopSamplingMode @ 0x1403247DC (DwmAsyncMagnSetDesktopSamplingMode.c)
 *     DwmAsyncMagnSetSamplingMode @ 0x140324978 (DwmAsyncMagnSetSamplingMode.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x140324A3C (DwmAsyncMagnSetWindowColorTransform.c)
 *     memcmp @ 0x1403424E0 (memcmp.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall MagSetLensContextInformation(__int64 a1, __int64 a2, struct tagWND *a3, __int64 a4, _DWORD *Buf1)
{
  unsigned int v6; // edi
  __int64 v7; // r12
  __int64 v8; // rsi
  struct _MAG_THREAD_CONTEXT *ThreadContext; // rax
  struct tagWND *v10; // r8
  int v11; // r9d
  struct _MAG_THREAD_CONTEXT *v12; // r13
  int v13; // r9d
  unsigned int v14; // esi
  char *v15; // rdx
  struct _MAG_LENS_CONTEXT *LensContext; // rbx
  __int64 v17; // r8
  _QWORD *v18; // rcx
  void *v19; // rax
  void *v20; // rcx
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // ecx
  int v25; // r9d
  int v26; // r9d
  struct _MAG_LENS_CONTEXT *v27; // rax
  struct _MAG_LENS_CONTEXT *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // ecx
  _DWORD *v32; // rdi
  INT v33; // eax
  __int128 v34; // xmm0
  __int64 v35; // rdx
  __int64 v36; // r14
  void *v37; // rax
  int v38; // eax
  __m128i v39; // xmm0
  int v40; // r9d
  struct _MAG_LENS_CONTEXT *v41; // rbx
  __int64 v42; // r8
  __int64 v43; // rdx
  int v44; // ecx
  void *v45; // rax
  void *v46; // rcx
  int v47; // r9d
  struct _MAG_LENS_CONTEXT *v49; // rax
  __int64 v50; // rdx
  struct _MAG_LENS_CONTEXT *v51; // r12
  double v52; // xmm0_8
  bool v53; // zf
  __int64 v54; // rdx
  __int64 v55; // rax
  struct _MAG_LENS_CONTEXT *v56; // rcx
  int v57; // edi
  void *v58; // rax
  int v59; // edi
  void *v60; // rax
  int v61; // edi
  void *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int128 v72; // xmm1
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 UserSessionState; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  struct _MAG_LENS_CONTEXT *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  _QWORD *v82; // rax
  int v83; // eax
  void *v84; // rax
  void *v85; // rcx
  void *v86; // rcx
  __int64 v87; // rax
  void *v88; // rax
  __int64 v89; // rax
  void *v90; // rax
  int v91; // eax
  char *v92; // r13
  __int64 *v93; // rax
  struct _MAG_LENS_CONTEXT *v94; // rax
  __int64 v95; // rdx
  struct _MAG_LENS_CONTEXT *v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // rax
  struct _MAG_LENS_CONTEXT *v99; // rcx
  void *v100; // rax
  void *v101; // rax
  void *v102; // rax
  _DWORD *v103; // r12
  void *v104; // rax
  int v105; // eax
  int v106; // r9d
  struct _MAG_LENS_CONTEXT *v107; // rax
  __int64 v108; // rdx
  struct _MAG_LENS_CONTEXT *v109; // rsi
  _QWORD *v110; // rcx
  void *v111; // rax
  int v112; // eax
  void *v113; // rax
  int v114; // ebx
  struct _MAG_LENS_CONTEXT *v115; // rax
  struct _MAG_LENS_CONTEXT *v116; // rsi
  __int64 v117; // rcx
  __int64 v118; // rcx
  void *v119; // rcx
  int v120; // edx
  unsigned int v121; // eax
  int v122; // edx
  __int64 v123; // [rsp+30h] [rbp-20h] BYREF
  __int64 v124; // [rsp+38h] [rbp-18h]
  __int64 v125; // [rsp+40h] [rbp-10h]

  v6 = -1073741811;
  v7 = 0LL;
  v8 = 0LL;
  ThreadContext = (struct _MAG_THREAD_CONTEXT *)MagpFindThreadContext();
  v12 = ThreadContext;
  if ( ThreadContext )
  {
    if ( v11 > 5 )
    {
      v13 = v11 - 6;
      if ( !v13 )
      {
        v14 = *Buf1 + Buf1[1];
        if ( v14 > 0x19 )
          return v6;
        if ( (unsigned __int64)v10 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
          return v6;
        LensContext = MagpFindLensContext(ThreadContext, v10);
        if ( !LensContext )
          return v6;
        if ( !v14 || (v7 = Win32AllocPoolZInit(8LL * v14, 1735226197LL)) != 0 )
        {
          v123 = *(_QWORD *)Buf1;
          v124 = v7;
          if ( v14 )
          {
            v17 = v14;
            v15 = (char *)Buf1 - v7;
            v18 = (_QWORD *)v7;
            do
            {
              *v18 = *(_QWORD *)((char *)v18 + (_QWORD)v15 + 8);
              ++v18;
              --v17;
            }
            while ( v17 );
          }
          if ( (*((_DWORD *)LensContext + 4) & 0x20) != 0
            || (v19 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 496LL) + 8LL), v15),
                v6 = DwmAsyncMagnSetWindowFilterList(v19),
                (v6 & 0x80000000) == 0) )
          {
            v20 = (void *)*((_QWORD *)LensContext + 29);
            if ( v20 )
            {
              Win32FreePool(v20);
              *((_QWORD *)LensContext + 29) = 0LL;
            }
            v21 = *((_DWORD *)LensContext + 4);
            *((_DWORD *)LensContext + 56) = *Buf1;
            *((_DWORD *)LensContext + 57) = Buf1[1];
            v22 = v21 & 0xFFFFFFF7;
            *((_QWORD *)LensContext + 29) = v7;
            v23 = v21 | 8;
            if ( !v14 )
              v23 = v22;
            *((_DWORD *)LensContext + 4) = v23;
            return 0;
          }
          if ( !v7 )
            return v6;
          v46 = (void *)v7;
LABEL_159:
          Win32FreePool(v46);
          return v6;
        }
        return (unsigned int)-1073741801;
      }
      v40 = v13 - 1;
      if ( !v40 )
      {
        if ( *Buf1 > 6u )
          return v6;
        if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
          return v6;
        v41 = MagpFindLensContext(ThreadContext, a3);
        if ( !v41 )
          return v6;
        if ( !(_DWORD)v42 || (v8 = Win32AllocPoolZInit(24 * v42, 1735226197LL)) != 0 )
        {
          v43 = 0LL;
          v44 = *Buf1;
          HIDWORD(v123) = Buf1[1];
          v124 = *((_QWORD *)Buf1 + 1);
          LODWORD(v123) = v44;
          v125 = v8;
          if ( v44 )
          {
            do
            {
              v118 = 3 * v43;
              v43 = (unsigned int)(v43 + 1);
              *(_OWORD *)(v8 + 8 * v118) = *(_OWORD *)&Buf1[2 * v118 + 4];
              *(_QWORD *)(v8 + 8 * v118 + 16) = *(_QWORD *)&Buf1[2 * v118 + 8];
            }
            while ( (unsigned int)v43 < *Buf1 );
          }
          if ( (*((_DWORD *)v41 + 4) & 0x20) != 0
            || (v45 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 496LL) + 8LL), v43),
                v6 = DwmAsyncMagnSetWindowSharedTextures(v45),
                (v6 & 0x80000000) == 0) )
          {
            v119 = (void *)*((_QWORD *)v41 + 32);
            if ( v119 )
            {
              Win32FreePool(v119);
              *((_QWORD *)v41 + 32) = 0LL;
            }
            v120 = *((_DWORD *)v41 + 4);
            *((_DWORD *)v41 + 60) = *Buf1;
            *((_DWORD *)v41 + 61) = Buf1[1];
            *((_DWORD *)v41 + 62) = Buf1[2];
            *((_DWORD *)v41 + 63) = Buf1[3];
            v121 = v120 & 0xFFFFFFEF;
            *((_QWORD *)v41 + 32) = v8;
            v122 = v120 | 0x10;
            if ( !*Buf1 )
              v122 = v121;
            *((_DWORD *)v41 + 4) = v122;
            return 0;
          }
          if ( !v8 )
            return v6;
          v46 = (void *)v8;
          goto LABEL_159;
        }
        return (unsigned int)-1073741801;
      }
      v106 = v40 - 2;
      if ( !v106 )
      {
        v114 = *Buf1;
        if ( (*Buf1 & 0xFFFFFFFE) != 0 )
          return v6;
        if ( (unsigned __int64)v10 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
          return v6;
        v115 = MagpFindLensContext(ThreadContext, a3);
        v116 = v115;
        if ( !v115 )
          return v6;
        v117 = v114 & 1;
        if ( ((*((_DWORD *)v115 + 4) >> 6) & 1) != (_DWORD)v117 )
        {
          ChangeComposableCursor(v117);
          *((_DWORD *)v116 + 4) ^= ((unsigned __int8)*((_DWORD *)v116 + 4) ^ (unsigned __int8)((_BYTE)v114 << 6)) & 0x40;
        }
        return 0;
      }
      if ( v106 != 1 )
        return v6;
      if ( !a3 )
        return v6;
      v107 = MagpFindLensContext(ThreadContext, a3);
      v109 = v107;
      if ( !v107 )
        return v6;
      if ( a3 == (struct tagWND *)-1LL )
      {
        v110 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 496LL) + 8LL);
        v111 = (void *)ReferenceDwmApiPort(v110, *v110);
        v112 = DwmAsyncMagnSetDesktopSamplingMode(v111);
      }
      else
      {
        if ( (*((_DWORD *)v107 + 4) & 0x20) != 0 )
        {
LABEL_142:
          *((_DWORD *)v109 + 66) = *Buf1;
          return 0;
        }
        v113 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 496LL) + 8LL), v108);
        v112 = DwmAsyncMagnSetSamplingMode(v113);
      }
      v6 = v112;
      if ( v112 < 0 )
        return v6;
      goto LABEL_142;
    }
    if ( v11 != 5 )
    {
      if ( v11 )
      {
        v25 = v11 - 1;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            v47 = v26 - 1;
            if ( v47 )
            {
              if ( v47 == 1 )
              {
                if ( Buf1[8] == 3 )
                  return (unsigned int)MagpRevokeInputTransfrom();
                else
                  return (unsigned int)MagpUpdateInputTransfrom((struct _MAGN_INPUT_TRANSFORM *)Buf1);
              }
              return v6;
            }
            if ( !a3 )
              return v6;
            v49 = MagpFindLensContext(ThreadContext, a3);
            v51 = v49;
            if ( !v49 )
              return v6;
            v52 = *(double *)Buf1;
            if ( a3 == (struct tagWND *)-1LL )
            {
              if ( v52 != *((double *)Buf1 + 1) )
                return v6;
              v53 = memcmp(Buf1, &xmmword_140353F10, 0x20uLL) != 0;
              v55 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 496LL);
              v56 = *(struct _MAG_LENS_CONTEXT **)(v55 + 232);
              if ( v53 )
              {
                if ( v56 )
                {
                  if ( v51 != v56 )
                    return v6;
                  v61 = (int)*((double *)Buf1 + 3);
                  v62 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v55 + 8), v54);
                  v6 = DwmAsyncMagnSetDesktopTransform(v62, v61);
                }
                else
                {
                  v59 = (int)*((double *)Buf1 + 3);
                  v60 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v55 + 8), v54);
                  v6 = DwmAsyncMagnSetDesktopTransform(v60, v59);
                  if ( (v6 & 0x80000000) != 0 )
                    return v6;
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 496LL) + 232LL) = v51;
                }
              }
              else if ( v56 )
              {
                if ( v51 != v56 )
                  return v6;
                v57 = (int)*((double *)Buf1 + 3);
                v58 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v55 + 8), v54);
                v6 = DwmAsyncMagnSetDesktopTransform(v58, v57);
                if ( (v6 & 0x80000000) != 0 )
                  return v6;
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 496LL) + 232LL) = 0LL;
              }
              else
              {
                v6 = 0;
              }
              if ( (v6 & 0x80000000) != 0 )
                return v6;
            }
            else
            {
              *((double *)v49 + 5) = v52;
              *((_QWORD *)v49 + 6) = *((_QWORD *)Buf1 + 1);
              *((_QWORD *)v49 + 7) = *((_QWORD *)Buf1 + 2);
              *((_QWORD *)v49 + 8) = *((_QWORD *)Buf1 + 3);
              v63 = *(_QWORD *)(*((_QWORD *)v49 + 3) + 40LL);
              if ( (*(_DWORD *)(v63 + 288) & 0xF) == 0 )
              {
                v65 = *(_QWORD *)(W32GetUserSessionState(v63, v50) + 19872);
                if ( *(_WORD *)(v65 + 6998) > 0x60u )
                {
                  v66 = *(_QWORD *)(W32GetUserSessionState(v65, v64) + 19872);
                  *((double *)v51 + 7) = (double)*(unsigned __int16 *)(v66 + 6998) * *((double *)v51 + 7) / 96.0;
                  v68 = *(_QWORD *)(W32GetUserSessionState(v66, v67) + 19872);
                  *((double *)v51 + 8) = (double)*(unsigned __int16 *)(v68 + 6998) * *((double *)v51 + 8) / 96.0;
                  v70 = *(_QWORD *)(W32GetUserSessionState(v68, v69) + 19872);
                  *((double *)v51 + 5) = *(double *)Buf1 * 96.0 / (double)*(unsigned __int16 *)(v70 + 6998);
                  *((double *)v51 + 6) = *((double *)Buf1 + 1)
                                       * 96.0
                                       / (double)*(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(v70, v71)
                                                                                 + 19872)
                                                                     + 6998LL);
                }
              }
            }
            *(_OWORD *)((char *)v51 + 88) = *(_OWORD *)Buf1;
            v72 = *((_OWORD *)Buf1 + 1);
            *((_DWORD *)v51 + 4) |= 2u;
            *(_OWORD *)((char *)v51 + 104) = v72;
            return 0;
          }
          if ( (unsigned __int64)v10 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
            return v6;
          v27 = MagpFindLensContext(ThreadContext, a3);
          v28 = v27;
          if ( !v27 )
            return v6;
          v29 = *(_QWORD *)(*((_QWORD *)v27 + 3) + 40LL);
          v30 = *(unsigned int *)(v29 + 288);
          if ( (v30 & 0xF) != 0
            || (v74 = *(_QWORD *)(W32GetUserSessionState(v30, v29) + 19872), *(_WORD *)(v74 + 6998) <= 0x60u) )
          {
            v31 = *Buf1;
            v32 = (_DWORD *)((char *)v28 + 16);
            if ( (*((_DWORD *)v28 + 4) & 2) == 0 )
            {
              *((_DWORD *)v28 + 8) = -v31;
              v33 = Buf1[1];
LABEL_30:
              *((_DWORD *)v28 + 9) = -v33;
              v34 = *(_OWORD *)Buf1;
              *v32 |= 1u;
              *(_OWORD *)((char *)v28 + 72) = v34;
              return 0;
            }
            v39 = _mm_cvtsi32_si128(v31);
          }
          else
          {
            v32 = (_DWORD *)((char *)v28 + 16);
            if ( (*((_DWORD *)v28 + 4) & 2) == 0 )
            {
              UserSessionState = W32GetUserSessionState(v74, v73);
              *((_DWORD *)v28 + 8) = -EngMulDiv(
                                        *Buf1,
                                        *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19872) + 6998LL),
                                        96);
              v78 = W32GetUserSessionState(v77, v76);
              v33 = EngMulDiv(Buf1[1], *(unsigned __int16 *)(*(_QWORD *)(v78 + 19872) + 6998LL), 96);
              goto LABEL_30;
            }
            v39 = _mm_cvtsi32_si128(*Buf1);
          }
          *((_DWORD *)v28 + 8) = -(int)(_mm_cvtepi32_pd(v39).m128d_f64[0] * *((double *)v28 + 11));
          v33 = (int)((double)(int)Buf1[1] * *((double *)v28 + 12));
          goto LABEL_30;
        }
        MagpRevokeInputTransfrom();
        if ( !a3 )
          return v6;
        v79 = MagpFindLensContext(v12, a3);
        v36 = (__int64)v79;
        if ( !v79 )
          return v6;
        v81 = *(_QWORD *)v79;
        if ( *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)v79 + 8LL) == v79 )
        {
          v82 = (_QWORD *)*((_QWORD *)v79 + 1);
          if ( *v82 == v36 )
          {
            *v82 = v81;
            *(_QWORD *)(v81 + 8) = v82;
            if ( a3 != (struct tagWND *)-1LL )
            {
              v83 = *(_DWORD *)(v36 + 16);
              if ( (v83 & 0x40) != 0 )
              {
                ChangeComposableCursor(0LL);
                *(_DWORD *)(v36 + 16) &= ~0x40u;
                v83 = *(_DWORD *)(v36 + 16);
              }
              if ( (v83 & 0x20) != 0 )
              {
                v6 = 0;
              }
              else
              {
                v84 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 496LL) + 8LL), v80);
                v6 = DwmAsyncMagnDestroy(v84);
              }
              HMAssignmentUnlock(v36 + 24);
              v85 = *(void **)(v36 + 232);
              if ( v85 )
                Win32FreePool(v85);
              v86 = *(void **)(v36 + 256);
              if ( v86 )
                Win32FreePool(v86);
              if ( (v6 & 0x80000000) != 0 )
                goto LABEL_98;
LABEL_108:
              v6 = 0;
              goto LABEL_98;
            }
            v87 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 496LL);
            if ( *(_QWORD *)(v87 + 240) == v36 )
            {
              v88 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v87 + 8), v80);
              v6 = DwmAsyncMagnSetDesktopColorTransform(v88);
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 496LL) + 240LL) = 0LL;
            }
            else
            {
              v6 = 0;
            }
            v89 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 496LL);
            if ( *(_QWORD *)(v89 + 232) == v36 )
            {
              v90 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v89 + 8), v80);
              v91 = DwmAsyncMagnSetDesktopTransform(v90, 0);
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 496LL) + 232LL) = 0LL;
            }
            else
            {
              v91 = 0;
            }
            if ( (v6 & 0x80000000) != 0 )
              goto LABEL_98;
            if ( v91 >= 0 )
              goto LABEL_108;
            v6 = v91;
LABEL_98:
            v46 = (void *)v36;
            goto LABEL_159;
          }
        }
      }
      else
      {
        if ( !a3 || MagpFindLensContext(ThreadContext, a3) )
          return v6;
        v36 = Win32AllocPoolZInit(272LL, 1735226197LL);
        if ( !v36 )
          return (unsigned int)-1073741801;
        if ( a3 != (struct tagWND *)-1LL )
        {
          v37 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 496LL) + 8LL), v35);
          v38 = DwmAsyncMagnCreate(v37);
          v6 = v38;
          if ( v38 != -1073741823 && v38 < 0 )
            goto LABEL_98;
        }
        memset_0((void *)(v36 + 16), 0, 0x100uLL);
        *(_QWORD *)(v36 + 40) = 0x3FF0000000000000LL;
        *(_QWORD *)(v36 + 48) = 0x3FF0000000000000LL;
        if ( a3 == (struct tagWND *)-1LL )
        {
          *(_QWORD *)(v36 + 24) = -1LL;
        }
        else
        {
          v123 = v36 + 24;
          v124 = (__int64)a3;
          HMAssignmentLock(&v123, 0LL);
        }
        *(_DWORD *)(v36 + 264) = 0;
        v92 = (char *)v12 + 40;
        v93 = (__int64 *)*((_QWORD *)v92 + 1);
        if ( (char *)*v93 == v92 )
        {
          *(_QWORD *)v36 = v92;
          *(_QWORD *)(v36 + 8) = v93;
          *v93 = v36;
          *((_QWORD *)v92 + 1) = v36;
          return 0;
        }
      }
      __fastfail(3u);
    }
    if ( !a3 )
      return v6;
    v94 = MagpFindLensContext(ThreadContext, a3);
    v96 = v94;
    if ( !v94 )
      return v6;
    if ( a3 == (struct tagWND *)-1LL )
    {
      v53 = memcmp(Buf1, &xmmword_140359FE0, 0x64uLL) != 0;
      v98 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 496LL);
      v99 = *(struct _MAG_LENS_CONTEXT **)(v98 + 240);
      if ( v53 )
      {
        if ( v99 )
        {
          if ( v99 != v96 )
            return v6;
          v102 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v98 + 8), v97);
          v6 = DwmAsyncMagnSetDesktopColorTransform(v102);
        }
        else
        {
          v101 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v98 + 8), v97);
          v6 = DwmAsyncMagnSetDesktopColorTransform(v101);
          if ( (v6 & 0x80000000) != 0 )
            return v6;
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 496LL) + 240LL) = v96;
        }
      }
      else if ( v99 )
      {
        if ( v99 != v96 )
          return v6;
        v100 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v98 + 8), v97);
        v6 = DwmAsyncMagnSetDesktopColorTransform(v100);
        if ( (v6 & 0x80000000) != 0 )
          return v6;
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 496LL) + 240LL) = 0LL;
      }
      else
      {
        v6 = 0;
      }
      v103 = (_DWORD *)((char *)v96 + 16);
    }
    else
    {
      v103 = (_DWORD *)((char *)v94 + 16);
      if ( (*((_DWORD *)v94 + 4) & 0x20) != 0 )
      {
LABEL_132:
        *(_OWORD *)((char *)v96 + 120) = *(_OWORD *)Buf1;
        *(_OWORD *)((char *)v96 + 136) = *((_OWORD *)Buf1 + 1);
        *(_OWORD *)((char *)v96 + 152) = *((_OWORD *)Buf1 + 2);
        *(_OWORD *)((char *)v96 + 168) = *((_OWORD *)Buf1 + 3);
        *(_OWORD *)((char *)v96 + 184) = *((_OWORD *)Buf1 + 4);
        *(_OWORD *)((char *)v96 + 200) = *((_OWORD *)Buf1 + 5);
        v105 = Buf1[24];
        *v103 |= 4u;
        *((_DWORD *)v96 + 54) = v105;
        return 0;
      }
      v104 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 496LL) + 8LL), v95);
      v6 = DwmAsyncMagnSetWindowColorTransform(v104);
    }
    if ( (v6 & 0x80000000) != 0 )
      return v6;
    goto LABEL_132;
  }
  return 3221225635LL;
}
