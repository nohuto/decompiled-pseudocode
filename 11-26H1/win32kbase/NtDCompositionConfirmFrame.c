/*
 * XREFs of NtDCompositionConfirmFrame @ 0x140042310
 * Callers:
 *     <none>
 * Callees:
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x140042EF0 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?DiscardFrame@CConnection@DirectComposition@@AEAAJ_K@Z @ 0x14004395C (-DiscardFrame@CConnection@DirectComposition@@AEAAJ_K@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1400A8E98 (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?RetireFrame@CConnection@DirectComposition@@AEAAJ_KAEBUtagCOMPOSITION_STATS_2@@@Z @ 0x1401190F4 (-RetireFrame@CConnection@DirectComposition@@AEAAJ_KAEBUtagCOMPOSITION_STATS_2@@@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1401862B0 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1401B55DC (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtDCompositionConfirmFrame(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  _BYTE *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // ebx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r14d
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // r15
  __int64 j; // rdx
  bool v23; // zf
  int v24; // ecx
  unsigned int v25; // r13d
  __int64 v26; // rbx
  char v27; // al
  char v28; // cl
  unsigned int v29; // r14d
  unsigned int v30; // r8d
  char v31; // r13
  unsigned int v32; // r10d
  char v33; // r11
  unsigned int i; // r9d
  char *v35; // r8
  int v36; // eax
  int v37; // ecx
  __int64 v38; // r15
  __int64 v39; // r12
  __int64 v40; // r9
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rbx
  void *v46; // rcx
  unsigned int v47; // eax
  unsigned int v48; // ecx
  __int64 v49; // rcx
  char *v50; // rax
  void *v51; // rax
  unsigned int v52; // esi
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // ecx
  unsigned int k; // edx
  __int64 v57; // rcx
  __int64 v58; // rax
  char v59; // cl
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rcx
  struct _ERESOURCE *v63; // rbx
  __int64 *v64; // rbx
  __int64 v65; // rsi
  struct _ERESOURCE *v66; // rbx
  unsigned __int64 v67; // rbx
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rdx
  _QWORD *v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rsi
  __int64 v73; // rcx
  __int64 v74; // r9
  __int64 *v75; // r12
  unsigned int v76; // edx
  __int64 v77; // rsi
  struct _ERESOURCE *v78; // r15
  char v79; // [rsp+20h] [rbp-2D8h]
  int v80; // [rsp+24h] [rbp-2D4h]
  unsigned int v81; // [rsp+28h] [rbp-2D0h]
  __int64 v82; // [rsp+30h] [rbp-2C8h] BYREF
  __int64 v83; // [rsp+38h] [rbp-2C0h]
  _BYTE *v84; // [rsp+40h] [rbp-2B8h]
  __int64 v85; // [rsp+48h] [rbp-2B0h] BYREF
  __m256i v86; // [rsp+50h] [rbp-2A8h] BYREF
  __int128 v87; // [rsp+70h] [rbp-288h]
  void *Src; // [rsp+80h] [rbp-278h]
  __m256i v89; // [rsp+88h] [rbp-270h] BYREF
  __int128 v90; // [rsp+A8h] [rbp-250h]
  void *v91; // [rsp+B8h] [rbp-240h]
  __int32 v92; // [rsp+C0h] [rbp-238h] BYREF
  int v93; // [rsp+C4h] [rbp-234h]
  int v94; // [rsp+C8h] [rbp-230h]
  int v95; // [rsp+CCh] [rbp-22Ch]
  __int128 v96; // [rsp+D0h] [rbp-228h]
  _BYTE v97[480]; // [rsp+E0h] [rbp-218h] BYREF

  memset(&v86, 0, sizeof(v86));
  v87 = 0LL;
  Src = 0LL;
  v6 = 0LL;
  v84 = 0LL;
  v7 = 0LL;
  v8 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3, a4) + 70544);
  if ( PsGetCurrentProcess() != v8 )
    return 3221225506LL;
  if ( !a2 )
  {
    v9 = -1073741811;
    goto LABEL_4;
  }
  memset(&v89, 0, sizeof(v89));
  v90 = 0LL;
  v91 = 0LL;
  RtlCopyFromUser(&v89, a2, 0x38uLL);
  v86 = v89;
  v87 = v90;
  Src = v91;
  if ( !v89.m256i_i64[0] )
  {
    v9 = -1073741811;
    goto LABEL_17;
  }
  if ( DWORD2(v90) > 0x100 )
  {
    v11 = 256LL;
    DWORD2(v87) = 256;
  }
  else
  {
    if ( DWORD2(v90) <= 4 )
    {
      v6 = v97;
      v84 = v97;
      goto LABEL_11;
    }
    v11 = DWORD2(v87);
  }
  v6 = Win32AllocPoolImpl(0x100uLL, 120 * v11, 0x61644344u);
  v84 = v6;
  if ( !v6 )
  {
    v9 = -1073741801;
    goto LABEL_17;
  }
LABEL_11:
  RtlCopyFromUser(v6, Src, 120LL * DWORD2(v87));
  Src = v6;
  v9 = 0;
LABEL_17:
  if ( v9 < 0 )
    goto LABEL_4;
  KeEnterCriticalRegion();
  v12 = 0LL;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v13);
  if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
    v12 = CurrentProcessWin32Process[32];
  if ( v12 )
  {
    v15 = *(struct _ERESOURCE **)(v12 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v15, 1u);
    v16 = *(_QWORD *)(v12 + 24);
    if ( v16 && a1 == *(_QWORD *)(v12 + 16) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      v7 = *(_QWORD *)(v12 + 24);
      v9 = 0;
    }
    else
    {
      v9 = -1073741790;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v12 + 32));
    KeLeaveCriticalRegion();
  }
  else
  {
    v9 = -1073741823;
  }
  if ( v9 < 0 )
    goto LABEL_119;
  if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline() )
    (*(void (__fastcall **)(_QWORD, __m256i *))(**(_QWORD **)(v7 + 296) + 216LL))(*(_QWORD *)(v7 + 296), &v86);
  v17 = 0LL;
  v85 = 0LL;
  v18 = -1073741275;
  v19 = -1073741275;
  v80 = -1073741275;
  v20 = *(_QWORD *)(v7 + 192);
  if ( v20 )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)v20 + 32LL))(
            *(_QWORD *)(v7 + 192),
            v86.m256i_i64[0],
            &v85);
    v80 = v19;
    v17 = v85;
  }
  if ( v19 >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 8LL))(v85);
  }
  v21 = 0LL;
  v83 = 0LL;
  ExAcquirePushLockExclusiveEx(v7 + 376, 0LL);
  *(_BYTE *)(v7 + 384) = 1;
  *(_QWORD *)(v7 + 408) = v86.m256i_i64[0];
  j = v86.m256i_i64[0] / 0x12CuLL;
  v23 = v86.m256i_i64[0] % 0x12CuLL == 0;
  v24 = v86.m256i_i64[0] % 0x12CuLL;
  *(_DWORD *)(v7 + 392) = v24;
  v25 = 299;
  if ( !v23 )
    v25 = v24 - 1;
  v81 = v25;
  if ( v25 == v24 )
    goto LABEL_77;
  while ( 2 )
  {
    v26 = v7 + 528LL * v25;
    v27 = *(_BYTE *)(v26 + 424);
    if ( v27 )
      goto LABEL_75;
    v28 = 0;
    v29 = 0;
    v30 = *(_DWORD *)(v26 + 428);
    if ( !v30 )
      goto LABEL_63;
    v31 = 0;
    do
    {
      j = *(_QWORD *)(v26 + 464) + 120LL * v29;
      if ( *(_QWORD *)(j + 40) )
      {
        v32 = *(_DWORD *)(j + 56);
        if ( v32 )
        {
          if ( !*(_DWORD *)(j + 88) )
          {
            v33 = 0;
            for ( i = 0; i < DWORD2(v87); ++i )
            {
              v35 = (char *)Src + 120 * i;
              if ( *(_DWORD *)j == *(_DWORD *)v35
                && *(_DWORD *)(j + 4) == *((_DWORD *)v35 + 1)
                && *(_DWORD *)(j + 8) == *((_DWORD *)v35 + 2)
                && *(_DWORD *)(j + 12) == *((_DWORD *)v35 + 3)
                && *(_DWORD *)(j + 16) == *((_DWORD *)v35 + 4)
                && *(_DWORD *)(j + 20) == *((_DWORD *)v35 + 5) )
              {
                v36 = *((_DWORD *)v35 + 6);
                v37 = *(_DWORD *)(j + 24);
                if ( v37 == v36 || !v37 || !v36 )
                {
                  v33 = 1;
                  if ( v32 <= *((_DWORD *)v35 + 22) )
                  {
                    *(_OWORD *)(j + 88) = *(_OWORD *)(v35 + 88);
                    *(_OWORD *)(j + 104) = *(_OWORD *)(v35 + 104);
                    v31 = 1;
                  }
                  break;
                }
              }
            }
            if ( !v29 && !*(_BYTE *)(v26 + 425) )
            {
              if ( v31 )
              {
                v38 = *(_QWORD *)(v26 + 464);
                v39 = *(_QWORD *)(v26 + 432);
                v40 = 0LL;
                v82 = 0LL;
                v41 = -1073741275;
                v42 = *(_QWORD *)(v7 + 192);
                if ( v42 )
                {
                  v41 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v42 + 32LL))(v42, v39, &v82);
                  v40 = v82;
                }
                if ( v41 >= 0 )
                {
                  v89.m256i_i32[0] = *(_DWORD *)(v38 + 88);
                  v89.m256i_i32[1] = *(_DWORD *)(v38 + 96);
                  v89.m256i_i64[1] = v89.m256i_u32[1];
                  *(_OWORD *)&v89.m256i_u64[2] = 0LL;
                  v89.m256i_i64[2] = *(_QWORD *)(v38 + 112);
                  v92 = v89.m256i_i32[0];
                  v93 = *(_DWORD *)(v38 + 92);
                  v94 = v93;
                  v95 = 0;
                  v96 = 0LL;
                  *(_QWORD *)&v96 = *(_QWORD *)(v38 + 104);
                  (*(void (__fastcall **)(__int64, __m256i *, __int32 *))(*(_QWORD *)v40 + 24LL))(v40, &v89, &v92);
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 8LL))(v82);
                  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v7 + 192) + 24LL))(*(_QWORD *)(v7 + 192), v39);
                }
                goto LABEL_60;
              }
              if ( !v33 )
              {
                DirectComposition::CConnection::DiscardFrame(
                  (DirectComposition::CConnection *)v7,
                  *(_QWORD *)(v26 + 432));
LABEL_60:
                *(_BYTE *)(v26 + 425) = 1;
              }
            }
          }
        }
      }
      ++v29;
      v30 = *(_DWORD *)(v26 + 428);
    }
    while ( v29 < v30 );
    v79 = v31;
    v25 = v81;
    v27 = *(_BYTE *)(v26 + 424);
    v28 = v79;
    v21 = v83;
LABEL_63:
    if ( v28 )
    {
      for ( j = 0LL; (unsigned int)j < v30; j = (unsigned int)(j + 1) )
      {
        v43 = 120LL * (unsigned int)j;
        v44 = *(_QWORD *)(v26 + 464);
        if ( *(_QWORD *)(v43 + v44 + 40) && *(_DWORD *)(v43 + v44 + 56) && !*(_DWORD *)(v43 + v44 + 88) )
        {
          v27 = 0;
          goto LABEL_72;
        }
      }
      v27 = 1;
LABEL_72:
      *(_BYTE *)(v26 + 424) = v27;
    }
    if ( !v27 )
    {
      v21 = *(_QWORD *)(v26 + 432);
      v83 = v21;
    }
LABEL_75:
    if ( *(_QWORD *)(v26 + 432) > *(_QWORD *)(v7 + 416) )
    {
      if ( v25 )
        --v25;
      else
        v25 = 299;
      v81 = v25;
      if ( v25 != *(_DWORD *)(v7 + 392) )
        continue;
    }
    break;
  }
  v18 = -1073741275;
LABEL_77:
  v45 = v7 + 528LL * *(unsigned int *)(v7 + 392) + 424;
  if ( !*(_BYTE *)(v45 + 1) )
  {
    j = *(_QWORD *)(v45 + 8);
    if ( j )
      DirectComposition::CConnection::DiscardFrame((DirectComposition::CConnection *)v7, j);
  }
  *(_BYTE *)(v45 + 1) = 0;
  v46 = *(void **)(v45 + 40);
  if ( v46 && v46 != (void *)(v45 + 48) )
  {
    GreDeleteFastMutex(v46);
    *(_QWORD *)(v45 + 40) = 0LL;
  }
  *(__m256i *)(v45 + 8) = v86;
  v47 = DWORD2(v87);
  *(_DWORD *)(v45 + 4) = DWORD2(v87);
  v48 = DWORD2(v87);
  if ( v47 > 4 )
  {
    v51 = Src;
  }
  else
  {
    j = 0LL;
    if ( v47 )
    {
      do
      {
        v49 = 120LL * (unsigned int)j;
        v50 = (char *)Src;
        *(_OWORD *)(v49 + v45 + 48) = *(_OWORD *)((char *)Src + v49);
        *(_OWORD *)(v49 + v45 + 64) = *(_OWORD *)&v50[v49 + 16];
        *(_OWORD *)(v49 + v45 + 80) = *(_OWORD *)&v50[v49 + 32];
        *(_OWORD *)(v49 + v45 + 96) = *(_OWORD *)&v50[v49 + 48];
        *(_OWORD *)(v49 + v45 + 112) = *(_OWORD *)&v50[v49 + 64];
        *(_OWORD *)(v49 + v45 + 128) = *(_OWORD *)&v50[v49 + 80];
        *(_OWORD *)(v49 + v45 + 144) = *(_OWORD *)&v50[v49 + 96];
        *(_QWORD *)(v49 + v45 + 160) = *(_QWORD *)&v50[v49 + 112];
        j = (unsigned int)(j + 1);
        v48 = *(_DWORD *)(v45 + 4);
      }
      while ( (unsigned int)j < v48 );
    }
    v51 = (void *)(v45 + 48);
  }
  *(_QWORD *)(v45 + 40) = v51;
  v52 = 0;
  if ( !v48 )
    goto LABEL_120;
  do
  {
    v53 = 120LL * v52;
    v54 = *(_QWORD *)(v45 + 40);
    if ( *(_QWORD *)(v53 + v54 + 40)
      && (j = *(unsigned int *)(v53 + v54 + 56), (_DWORD)j)
      && (unsigned int)j <= *(_DWORD *)(v53 + v54 + 88) )
    {
      if ( !v52 )
      {
        DirectComposition::CConnection::RetireFrame(
          (DirectComposition::CConnection *)v7,
          *(_QWORD *)(v45 + 8),
          (const struct tagCOMPOSITION_STATS_2 *)(v54 + 88));
        *(_BYTE *)(v45 + 1) = 1;
      }
    }
    else
    {
      *(_DWORD *)(v53 + v54 + 88) = 0;
      *(_DWORD *)(*(_QWORD *)(v45 + 40) + v53 + 92) = 0;
      *(_DWORD *)(*(_QWORD *)(v45 + 40) + v53 + 96) = 0;
      *(_QWORD *)(*(_QWORD *)(v45 + 40) + v53 + 104) = 0LL;
    }
    ++v52;
    v55 = *(_DWORD *)(v45 + 4);
  }
  while ( v52 < v55 );
  if ( !v55 || !*(_QWORD *)(*(_QWORD *)(v45 + 40) + 40LL) )
  {
LABEL_120:
    v72 = *(_QWORD *)(v45 + 8);
    v73 = 0LL;
    v82 = 0LL;
    v74 = *(_QWORD *)(v7 + 192);
    if ( v74 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)v74 + 32LL))(
              *(_QWORD *)(v7 + 192),
              v72,
              &v82);
      v73 = v82;
    }
    if ( v18 >= 0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v73 + 32LL))(v73, j);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 8LL))(v82);
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v7 + 192) + 24LL))(*(_QWORD *)(v7 + 192), v72);
    }
    *(_BYTE *)(v45 + 1) = 1;
  }
  for ( k = 0; k < *(_DWORD *)(v45 + 4); ++k )
  {
    v57 = 120LL * k;
    v58 = *(_QWORD *)(v45 + 40);
    if ( *(_QWORD *)(v57 + v58 + 40) && *(_DWORD *)(v57 + v58 + 56) && !*(_DWORD *)(v57 + v58 + 88) )
    {
      v59 = 0;
      goto LABEL_99;
    }
  }
  v59 = 1;
LABEL_99:
  *(_BYTE *)v45 = v59;
  if ( v21 )
  {
    v60 = v21 - 1;
  }
  else
  {
    v60 = *(_QWORD *)(v7 + 408);
    if ( !v59 )
      --v60;
  }
  *(_QWORD *)(v7 + 416) = v60;
  v61 = *(_QWORD *)(v7 + 192);
  if ( v61 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 40LL))(v61);
  v62 = v7 + 376;
  if ( *(_BYTE *)(v7 + 384) )
    ExReleasePushLockExclusiveEx(v62);
  else
    ExReleasePushLockSharedEx(v62, 0LL);
  v63 = *(struct _ERESOURCE **)(v7 + 16);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v63, 1u);
  v64 = *(__int64 **)(v7 + 120);
  *(_QWORD *)(v7 + 120) = 0LL;
  *(_QWORD *)(v7 + 128) = 0LL;
  if ( v64 )
  {
    do
    {
      v75 = (__int64 *)*v64;
      *((_BYTE *)v64 + 32) &= ~2u;
      v76 = *((_DWORD *)v64 + 29);
      if ( v76 )
      {
        DirectComposition::CConnection::ReleaseShellResourceAccess(
          *(DirectComposition::CConnection **)(v64[1] + 40),
          v76);
        *((_DWORD *)v64 + 29) = 0;
      }
      if ( (v64[4] & 4) == 0 )
      {
        v77 = v64[1];
        if ( *((_DWORD *)v64 + 5) == 7 )
        {
          v78 = *(struct _ERESOURCE **)(v77 + 392);
          if ( v78 )
          {
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(v78, 1u);
            v23 = (*(_DWORD *)(v77 + 248))-- == 1;
            if ( v23 )
              KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v77 + 384) + 8LL), 1, 0);
            ExReleaseResourceLite(*(PERESOURCE *)(v77 + 392));
            KeLeaveCriticalRegion();
          }
        }
      }
      DirectComposition::CApplicationChannel::ReturnProcessedBatch(
        (DirectComposition::CApplicationChannel *)v64[1],
        (struct DirectComposition::CBatch *)v64);
      v64 = v75;
    }
    while ( v75 );
  }
  v65 = v86.m256i_i64[0];
  v66 = *(struct _ERESOURCE **)(v7 + 80);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v66, 1u);
  v67 = 0LL;
  while ( 1 )
  {
    v68 = v67;
    v69 = *(_QWORD *)(v7 + 48);
    if ( v67 < v69 )
    {
      v70 = (_QWORD *)(*(_QWORD *)(v7 + 24) + v67 * *(_QWORD *)(v7 + 56));
      do
      {
        if ( *v70 )
          break;
        ++v68;
        v70 = (_QWORD *)((char *)v70 + *(_QWORD *)(v7 + 56));
      }
      while ( v68 < v69 );
    }
    if ( v68 >= v69 )
      break;
    _mm_lfence();
    v67 = v68 + 1;
    v71 = *(_QWORD *)(*(_QWORD *)(v7 + 56) * v68 + *(_QWORD *)(v7 + 24));
    if ( !v71 )
      break;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v71 + 16LL))(v71, v65);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v7 + 80));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(v7 + 16));
  KeLeaveCriticalRegion();
  v6 = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
  {
    DirectComposition::CConnection::~CConnection((DirectComposition::CConnection *)v7);
    GreDeleteFastMutex((PVOID)v7);
  }
  v9 = v80;
LABEL_119:
  KeLeaveCriticalRegion();
LABEL_4:
  if ( v6 )
  {
    if ( v6 != v97 )
      GreDeleteFastMutex(v6);
  }
  return (unsigned int)v9;
}
