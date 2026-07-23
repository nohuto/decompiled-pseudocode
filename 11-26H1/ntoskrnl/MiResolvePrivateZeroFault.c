/*
 * XREFs of MiResolvePrivateZeroFault @ 0x1402B71E0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402B6900 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x14041A2F0 (MiZeroFault.c)
 * Callees:
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiDetermineThreadFaultCluster @ 0x1402B7E68 (MiDetermineThreadFaultCluster.c)
 *     MiCompletePrivateZeroFault @ 0x1402B8530 (MiCompletePrivateZeroFault.c)
 *     MiAdvanceFaultList @ 0x140371250 (MiAdvanceFaultList.c)
 *     MiComputeZeroClusterMaximum @ 0x1403DCF50 (MiComputeZeroClusterMaximum.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1403FFC10 (MiGetAvailablePagesBelowPriority.c)
 *     MiCheckDemandZeroClusterEligibility @ 0x1404477D0 (MiCheckDemandZeroClusterEligibility.c)
 *     MiMarkVirtualizationFaultPageInfoFailed @ 0x1404F2794 (MiMarkVirtualizationFaultPageInfoFailed.c)
 *     MiGetClusterPage @ 0x140508040 (MiGetClusterPage.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiResolvePrivateZeroFault(int *a1)
{
  int v1; // edx
  unsigned __int64 v3; // r14
  __int64 v4; // r10
  __int64 v5; // r13
  __int64 v6; // r8
  _KPROCESS *Process; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  struct _KTHREAD *v10; // rcx
  __int64 v11; // r11
  __int64 v12; // rbx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rsi
  int v15; // edx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rax
  __int64 result; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  unsigned int v23; // ecx
  int v24; // esi
  __int64 v25; // r15
  int v26; // ebx
  _QWORD *v27; // r14
  int v28; // esi
  int v29; // ecx
  unsigned int *v30; // r9
  unsigned int v31; // r8d
  struct _KTHREAD *v32; // rcx
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int IdealGlobalNode; // eax
  __int64 v35; // rdx
  unsigned __int8 i; // dl
  int v37; // eax
  __int64 v38; // r8
  __m128i v39; // xmm2
  __int64 v40; // rdx
  __int64 v41; // r10
  __int64 v42; // r9
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  _QWORD *v47; // rax
  unsigned __int64 v48; // r9
  __int64 v49; // rdx
  unsigned __int64 v50; // r8
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  _QWORD *v53; // r15
  unsigned __int64 v54; // r8
  unsigned __int64 v55; // r9
  __int64 v56; // rcx
  unsigned int j; // eax
  __int64 v58; // rcx
  __int64 k; // rcx
  unsigned __int64 v60; // r9
  int v61; // eax
  unsigned __int64 v62; // rax
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v64; // rdx
  int v65; // r8d
  int ClusterPage; // eax
  unsigned int v67; // ecx
  __int64 v68; // rcx
  unsigned __int8 v69; // r10
  __int64 v70; // [rsp+40h] [rbp-C0h]
  __int64 v71; // [rsp+48h] [rbp-B8h]
  __int64 v72; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v73; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v74; // [rsp+68h] [rbp-98h]
  __int64 v75; // [rsp+70h] [rbp-90h]
  __int64 v76; // [rsp+78h] [rbp-88h]
  __m128i v77; // [rsp+80h] [rbp-80h]
  __int64 v78; // [rsp+90h] [rbp-70h]
  __int64 v79; // [rsp+98h] [rbp-68h]
  unsigned __int64 v80; // [rsp+A0h] [rbp-60h]
  __m128i v81; // [rsp+A8h] [rbp-58h]
  __int64 v82; // [rsp+B8h] [rbp-48h]
  _QWORD v83[3]; // [rsp+C0h] [rbp-40h] BYREF
  int v84; // [rsp+D8h] [rbp-28h]
  _DWORD v85[3]; // [rsp+DCh] [rbp-24h] BYREF
  unsigned int *p_PageColor; // [rsp+E8h] [rbp-18h]
  unsigned int v87; // [rsp+F0h] [rbp-10h]
  __int64 v88; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v89; // [rsp+100h] [rbp+0h]
  __int64 *v90; // [rsp+108h] [rbp+8h]
  __int64 v91; // [rsp+110h] [rbp+10h]
  __m128i v92; // [rsp+118h] [rbp+18h]
  __int64 v93; // [rsp+128h] [rbp+28h]
  int v94; // [rsp+180h] [rbp+80h]
  int v95; // [rsp+188h] [rbp+88h]
  _QWORD *v96; // [rsp+190h] [rbp+90h] BYREF
  _QWORD *v97; // [rsp+198h] [rbp+98h] BYREF

  v1 = *a1;
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_QWORD *)a1 + 6);
  v5 = *((_QWORD *)a1 + 1);
  if ( (*a1 & 2) != 0 )
  {
    if ( (v1 & 8) != 0 )
    {
      if ( (a1[8] & 0xFFFFFFF8) == 0x10 )
      {
        MiAdvanceFaultList(*((_QWORD *)a1 + 6));
        return 0LL;
      }
    }
    else if ( (v1 & 4) == 0 || ((v67 = a1[8], v67 >> 3 != 3) || (v67 & 7) == 0) && v67 >> 3 != 1 )
    {
      v42 = *(_QWORD *)(v4 + 8);
      v43 = *(_QWORD *)(v4 + 24);
      v44 = *(_QWORD *)(v42 + 16 * v43 + 8);
      v45 = *(_DWORD *)(v42 + 16 * v43) & 0xFFF;
      if ( ++*(_QWORD *)(v4 + 32) == (unsigned __int64)(v45 + v44 + 4095) >> 12 )
      {
        v46 = *(_QWORD *)(v4 + 16);
        *(_QWORD *)(v4 + 24) = v43 + 1;
        *(_QWORD *)(v4 + 32) = 0LL;
        if ( v43 + 1 < v46 && !*(_QWORD *)(v42 + 16 * (v43 + 1) + 8) )
          *(_QWORD *)(v4 + 24) = v46;
      }
      return 0LL;
    }
  }
  if ( (v1 & 0x20) != 0 && (*(_DWORD *)(v4 + 56) & 8) != 0 )
  {
    MiMarkVirtualizationFaultPageInfoFailed(v4, v3);
    return 3221225495LL;
  }
  v6 = *(_QWORD *)(v5 + 56);
  v76 = v6;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = *((_QWORD *)a1 + 8);
  if ( v8 )
    v9 = *(unsigned __int16 *)(*(_QWORD *)(v8 + 544) + 1198LL);
  else
    v9 = *(unsigned __int16 *)(v6 + 174);
  v78 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v9);
  if ( (v1 & 0x100) != 0 )
  {
    v10 = (struct _KTHREAD *)Process[1].ActiveGroupPadding[0];
    if ( v10 )
    {
      if ( v10 != KeGetCurrentThread() )
      {
        *(_DWORD *)(v5 + 80) |= 2u;
        return 3221226548LL;
      }
    }
  }
  v11 = 1LL;
  v12 = 1LL;
  v96 = 0LL;
  v70 = 1LL;
  v13 = 0LL;
  v14 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v94 = 0;
  v74 = 0LL;
  v15 = 9;
  v73 = 0LL;
  v95 = 9;
  if ( (*(_DWORD *)(v6 + 184) & 0xF) != 0
    || ((CurrentThread = KeGetCurrentThread(), CurrentThread[1].SavedApcStateFill[15] == 0xFF)
     || (BYTE2(CurrentThread[1].Queue) & 1) != 0)
    && BYTE6(CurrentThread->ApcState.Process[3].PerProcessorCycleTimes) == 0xFF )
  {
    if ( (*a1 & 0xC0000) != 0 )
    {
      if ( (*(_DWORD *)(v78 + 4) & 8) != 0 )
        v15 = 2;
      v95 = v15;
    }
  }
  else
  {
    v95 = 8;
  }
  v17 = *((_QWORD *)a1 + 7);
  v71 = v17;
  if ( !v17 )
  {
    if ( (*a1 & 0x101) != 1 || (*(_DWORD *)(v6 + 184) & 0xF) == 0 )
      goto LABEL_28;
    v13 = MiComputeZeroClusterMaximum(v4, v3, v6, 0LL);
    if ( v13 <= 1 )
    {
      LODWORD(v11) = 1;
      goto LABEL_28;
    }
LABEL_66:
    if ( v13 > 1 && !v74 )
      v70 = MiCheckDemandZeroClusterEligibility(v14 + 8, v14 + 8 * (v13 - 1), (unsigned int)a1[9]) + v12;
    LODWORD(v11) = 1;
LABEL_28:
    if ( v74 )
      return MiCompletePrivateZeroFault(a1, &v73);
    v23 = a1[8];
    if ( !v23 )
    {
      v24 = 3;
      goto LABEL_34;
    }
    if ( v23 == 31 )
    {
      v24 = v11;
      goto LABEL_34;
    }
    if ( v23 >> 3 == 3 )
    {
      if ( (v23 & 7) != 0 )
      {
        v24 = 2;
        goto LABEL_34;
      }
    }
    else if ( v23 >> 3 == 1 )
    {
      v24 = 0;
LABEL_34:
      v25 = *((_QWORD *)a1 + 2);
      v26 = a1[10];
      v79 = v25;
      v72 = 0LL;
      memset_0(v85, 0, 0x54uLL);
      v96 = 0LL;
      v27 = 0LL;
      v97 = (_QWORD *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
      v77 = 0LL;
      v82 = 0LL;
      v81 = 0LL;
      v28 = v24 << 18;
      while ( 1 )
      {
        v29 = 0;
        v30 = *(unsigned int **)(v5 + 56);
        if ( (*(_BYTE *)(v5 + 69) & 1) != 0 )
          v29 = 16;
        v83[1] = *(_QWORD *)(v5 + 56);
        v80 = *(_QWORD *)(v5 + 96);
        v31 = v29 | v85[0] & 0xFFFFFFCF;
        v83[0] = v78;
        v83[2] = v25;
        v84 = v26;
        if ( v26 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          IdealGlobalNode = v26 - 1;
        }
        else
        {
          v32 = KeGetCurrentThread();
          if ( v30 && (v30[46] & 0xF) == 0 && v32->ApcStateIndex == 1 )
          {
            IdealGlobalNode = v32->ApcState.Process->IdealGlobalNode;
            CurrentPrcb = KeGetCurrentPrcb();
          }
          else
          {
            CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v32->IdealProcessor];
            IdealGlobalNode = CurrentPrcb->NodeColor;
          }
        }
        v35 = 56320LL * IdealGlobalNode;
        if ( (*(_DWORD *)(qword_140E37E50 + v35 + 14096) & 1) != 0 )
        {
          v75 = v35 + qword_140E37E50 + 14149;
          for ( i = 0; ; ++i )
          {
            v69 = byte_140E2D898;
            if ( i >= (unsigned __int8)byte_140E2D898 )
              break;
            if ( *(_BYTE *)(i + v75) == 1 )
              goto LABEL_44;
          }
          for ( i = 0; i < v69; ++i )
          {
            v69 = byte_140E2D898;
            if ( *(_BYTE *)(i + v75) == 2 )
              goto LABEL_44;
          }
        }
        i = 0;
LABEL_44:
        v37 = (i & 1 | (2 * (IdealGlobalNode & 0x3F | 0x380))) << 8;
        if ( !v30 || (v30[46] & 0xF) != 0 )
          p_PageColor = &CurrentPrcb->PageColor;
        else
          p_PageColor = v30;
        v85[1] = 57;
        v88 = -1LL;
        v87 = v28 | v37 & 0xFFF3FFFF;
        v72 = 0LL;
        v90 = &v72;
        v89 = v80;
        v93 = 0LL;
        v85[0] = v95 | v31 & 0xFFFFFFF0;
        v91 = v70 - v82;
        v92 = 0LL;
        MiGetPageChain(v83);
        if ( v93 )
        {
          if ( v27 )
          {
            v41 = v92.m128i_i64[1];
            v40 = (__int64)v96 + v93;
            v81.m128i_i64[1] = v92.m128i_i64[1];
            v39 = v81;
            *v97 = v92.m128i_i64[0];
            v97 = (_QWORD *)v41;
            v77 = v39;
            v96 = (_QWORD *)v40;
            v82 = v40;
          }
          else
          {
            v39 = v92;
            v82 = v93;
            v40 = v93;
            v27 = (_QWORD *)v92.m128i_i64[0];
            v41 = _mm_srli_si128(v92, 8).m128i_u64[0];
            v96 = (_QWORD *)v93;
            v97 = (_QWORD *)v41;
            v77 = v92;
            v81 = v92;
          }
        }
        else
        {
          v39 = v77;
          v40 = (__int64)v96;
          v41 = (__int64)v97;
        }
        if ( v82 || v95 == 9 )
          break;
        if ( v72 )
        {
          *(_QWORD *)(v5 + 128) = v72;
          *(_QWORD *)(v5 + 144) = v70;
          break;
        }
        if ( v95 == 8 )
          *(_DWORD *)(v5 + 80) |= 0x10u;
        v25 = v79;
        v95 = 9;
      }
      if ( v82 )
      {
        if ( v73.m128i_i64[0] )
        {
          *(_QWORD *)v73.m128i_i64[1] = v27;
          v74 += v40;
          v73.m128i_i64[1] = v41;
        }
        else
        {
          v74 = v82;
          v73 = v39;
        }
      }
      else
      {
        while ( 1 )
        {
          v68 = (__int64)v27;
          if ( !v27 )
            break;
          v27 = (_QWORD *)*v27;
          MiReleaseFreshPage(v68, v40, v38);
        }
      }
      if ( !v74 )
        return 3221225495LL;
      return MiCompletePrivateZeroFault(a1, &v73);
    }
    v24 = 1;
    goto LABEL_34;
  }
  v18 = *(unsigned int *)(v17 + 48);
  if ( (*a1 & 3) == 0 && (*a1 & 0x40) == 0 )
  {
LABEL_14:
    if ( (v18 & 0x80000) != 0 && MiVadPageSizes[(v18 >> 17) & 3] == 16 && v95 == 9 && !v74 )
    {
      v65 = 0;
      v12 = 16LL;
      if ( (*(_BYTE *)(v5 + 69) & 1) != 0 )
        v65 = v11;
      ClusterPage = MiGetClusterPage(v17, v3, v65, 16, a1[8], a1[9], *(_QWORD *)(v5 + 96), (__int64)&v73);
      if ( v74 )
      {
        if ( v74 != 1 )
        {
          v22 = 0x7FFFFFFFFFLL;
          v21 = v3 & 0xFFFFFFFFFFFF0000uLL;
          *((_QWORD *)a1 + 2) = v3 & 0xFFFFFFFFFFFF0000uLL;
          goto LABEL_24;
        }
        LODWORD(v11) = 1;
        v12 = 1LL;
        v70 = 1LL;
        if ( ClusterPage )
          *a1 |= 0x10u;
LABEL_27:
        if ( !v94 )
          goto LABEL_28;
        goto LABEL_66;
      }
    }
    else
    {
      if ( (*a1 & 0x43) != 0 )
        goto LABEL_26;
      v19 = *(unsigned int *)(*((_QWORD *)a1 + 7) + 48LL);
      if ( (v19 & 0x80000) == 0
        || (v19 & 0x180000) == 0x180000
        || *((_QWORD *)a1 + 2) >= 0x7FFFFFFF0000uLL
        || MiVadPageSizes[(v19 >> 17) & 3] != 1 )
      {
        goto LABEL_26;
      }
      result = MiDetermineThreadFaultCluster((_DWORD)a1, v11, v95, (unsigned int)&v73, (__int64)&v96);
      if ( (int)result < 0 )
        return result;
      v13 = (unsigned __int64)v96;
      if ( v96 )
      {
        v21 = *((_QWORD *)a1 + 2);
        v12 = (__int64)v96;
        v22 = 0x7FFFFFFFF8LL;
LABEL_24:
        v70 = v12;
        v14 = (v22 & (v21 >> 9)) - 0x98000000000LL;
        LODWORD(v11) = 1;
        goto LABEL_27;
      }
    }
    LODWORD(v11) = 1;
LABEL_26:
    v12 = v70;
    goto LABEL_27;
  }
  v47 = (_QWORD *)(16LL * *(_QWORD *)(v4 + 24) + *(_QWORD *)(v4 + 8));
  v48 = (*v47 >> 12) + (((*v47 & 0xFFFuLL) + v47[1] + 4095LL) >> 12) - (v3 >> 12);
  v49 = v76;
  v50 = 20000LL;
  v51 = *(unsigned __int16 *)(v76 + 174);
  v52 = (*(unsigned int *)(v71 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v71 + 33) << 32)) - (v3 >> 12) + 1;
  if ( v48 <= v52 )
    v52 = v48;
  v80 = v52;
  v53 = *(_QWORD **)(stru_140E2ED08.ThreadLock + 8 * v51);
  if ( v53[2300] <= 0x4E20uLL || (v53[2300] & 0xFFFFFFFFFFFFFFFEuLL) <= 0x4E20 )
  {
    v54 = 5000LL;
  }
  else
  {
    if ( v53[2300] > 0x4E20uLL )
      v50 = v53[2300];
    v54 = v50 >> 2;
  }
  v55 = v53[2808];
  if ( v55 < v54 )
  {
    LODWORD(v96) = (unsigned __int16)KeNumberNodes;
    v56 = v53[2];
    LODWORD(v97) = dword_140E2D90C;
    v72 = v56 + 13856;
    for ( j = 0; j < (unsigned int)v96; ++j )
    {
      v58 = 0LL;
      for ( v77.m128i_i64[0] = v72; ; v77.m128i_i64[0] += 8LL )
      {
        v75 = v58;
        if ( v58 > 1 )
          break;
        v79 = *(_QWORD *)v77.m128i_i64[0];
        for ( k = 0LL; (unsigned int)k < (unsigned int)v97; k = (unsigned int)(k + 1) )
        {
          v49 = v76;
          v55 += *(unsigned __int16 *)(v79 + 16 * k);
          if ( v55 >= v54 )
            goto LABEL_88;
        }
        v58 = v75 + 1;
      }
      v72 += 56320LL;
    }
    goto LABEL_132;
  }
LABEL_88:
  v60 = v80;
  if ( (*(_DWORD *)(v49 + 184) & 0x10) == 0 )
  {
LABEL_89:
    if ( *(_BYTE *)v4 == 1 )
    {
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(
                                      v53,
                                      ((*(_DWORD *)(v4 + 80) >> 3) & 7u) + 1,
                                      v54,
                                      v60);
      if ( v60 > AvailablePagesBelowPriority )
        v60 = AvailablePagesBelowPriority;
    }
    if ( !v60 )
      v60 = v11;
    v13 = 512 - ((v14 >> 3) & 0x1FF);
    if ( v60 <= v13 )
      v13 = v60;
    goto LABEL_94;
  }
  v54 = *(_QWORD *)(v49 + 136);
  v64 = *(_QWORD *)(v49 + 128);
  if ( v54 < v64 )
  {
    if ( v80 + v54 > v64 )
      v60 = v64 - v54;
    goto LABEL_89;
  }
LABEL_132:
  v13 = 1LL;
LABEL_94:
  v61 = *a1;
  v96 = (_QWORD *)v13;
  v94 = v11;
  if ( ((unsigned __int8)v61 & (unsigned __int8)v11) == 0 && (v61 & 0x40) == 0
    || (v62 = *(unsigned int *)(*((_QWORD *)a1 + 7) + 48LL), (v62 & 0x80000) == 0)
    || (v62 & 0x180000) == 0x180000
    || *((_QWORD *)a1 + 2) >= 0x7FFFFFFF0000uLL
    || MiVadPageSizes[(v62 >> 17) & 3] != v11 )
  {
LABEL_96:
    LODWORD(v17) = v71;
    goto LABEL_14;
  }
  v97 = 0LL;
  result = MiDetermineThreadFaultCluster((_DWORD)a1, v13, v95, (unsigned int)&v73, (__int64)&v97);
  if ( (int)result >= 0 )
  {
    if ( v97 )
    {
      v3 = *((_QWORD *)a1 + 2);
      v13 = (unsigned __int64)v97;
      v96 = v97;
      v70 = (__int64)v97;
      v14 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    LODWORD(v11) = 1;
    goto LABEL_96;
  }
  return result;
}
