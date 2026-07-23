/*
 * XREFs of MiDetermineThreadFaultCluster @ 0x1402B7E68
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1402B71E0 (MiResolvePrivateZeroFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPageChainForFault @ 0x140284190 (MiGetPageChainForFault.c)
 *     MiFreePageChain @ 0x140292004 (MiFreePageChain.c)
 *     MiConfirmFaultClusterDescriptor @ 0x1402CEDB0 (MiConfirmFaultClusterDescriptor.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 *     MiComputeZeroClusterMaximum @ 0x1403DCF50 (MiComputeZeroClusterMaximum.c)
 *     MiAppendPageChain @ 0x14044F110 (MiAppendPageChain.c)
 *     MiCheckFaultClusterEligibility @ 0x140458F70 (MiCheckFaultClusterEligibility.c)
 *     MiCheckFaultClusterDisable @ 0x140464780 (MiCheckFaultClusterDisable.c)
 *     MiSetFaultClusterContextBlockEntryState @ 0x140467AA4 (MiSetFaultClusterContextBlockEntryState.c)
 *     MiSortFaultClusterDescriptors @ 0x14048E790 (MiSortFaultClusterDescriptors.c)
 *     MiSplitPageChain @ 0x1404BDA6C (MiSplitPageChain.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiDetermineThreadFaultCluster(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v15; // ebx
  __int64 result; // rax
  unsigned __int64 SystemArgument1; // rdi
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  unsigned __int64 v20; // rsi
  __int64 v21; // r9
  unsigned __int64 v22; // rsi
  unsigned __int64 *v23; // r8
  _DWORD *v24; // r14
  unsigned __int64 *v25; // r12
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  bool v34; // zf
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  bool v37; // zf
  unsigned __int64 v38; // rcx
  unsigned __int64 *v39; // rdx
  __int64 v40; // r10
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // r8
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r12
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // rdx
  unsigned __int64 *v53; // rax
  unsigned __int64 v54; // [rsp+68h] [rbp-A0h]
  __int128 v55; // [rsp+70h] [rbp-98h] BYREF
  __int64 v56; // [rsp+80h] [rbp-88h]
  __int128 v57; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v58; // [rsp+98h] [rbp-70h]
  __int64 v59; // [rsp+A0h] [rbp-68h]
  __int16 v60; // [rsp+A8h] [rbp-60h] BYREF
  __int128 *v61; // [rsp+B0h] [rbp-58h]
  __int64 v62; // [rsp+B8h] [rbp-50h]
  __int64 v63; // [rsp+C0h] [rbp-48h]
  __int64 v64; // [rsp+C8h] [rbp-40h]
  __int64 v65; // [rsp+178h] [rbp+70h] BYREF
  __int64 v66; // [rsp+180h] [rbp+78h]
  int v67; // [rsp+188h] [rbp+80h]
  __int64 v68; // [rsp+190h] [rbp+88h]

  v68 = a4;
  v67 = a3;
  v66 = a2;
  memset_0(&v60, 0, 0x78uLL);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 56);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v11 = v9 & 0xFFFFFFFFFFFF0000uLL;
  v57 = 0LL;
  v12 = *(_QWORD *)(v7 + 56);
  v13 = a2;
  CurrentThread = KeGetCurrentThread();
  v15 = 0;
  v59 = v12;
  v54 = ((v13 << 12) + v10 - v11 + 0xFFFF) >> 16;
  *a5 = 0LL;
  result = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  if ( CurrentThread->ApcStateIndex == 1 )
    return result;
  SystemArgument1 = (unsigned __int64)CurrentThread[1].SchedulerApc.SystemArgument1;
  LODWORD(v65) = 0;
LABEL_4:
  v18 = *(_QWORD *)(SystemArgument1 + 40);
  do
  {
    if ( (v18 & 1) != 0 )
    {
      KeYieldProcessorEx(&v65);
      goto LABEL_4;
    }
    v19 = v18;
    v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(SystemArgument1 + 40), v18 | 1, v18);
  }
  while ( v19 != v18 );
  if ( (BYTE4(PerfGlobalGroupMask) & 0x20) != 0
    || v11 >> 12 < (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) )
  {
    goto LABEL_8;
  }
  *(_QWORD *)&v57 = v11;
  v58 = v11 & 0x1FFFFF;
  *((_QWORD *)&v57 + 1) = (v11 & 0x1FFFFF) != 0 ? ((v11 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL) - v11 : 0x200000LL;
  v21 = *(_QWORD *)(a1 + 56);
  v61 = &v57;
  v60 = 2;
  v62 = 1LL;
  v63 = 0LL;
  v64 = 0LL;
  v22 = (unsigned __int64)MiComputeZeroClusterMaximum(&v60, v11, v12, v21) >> 4;
  if ( !v22
    || (unsigned int)MiCheckFaultClusterDisable(SystemArgument1)
    || (v65 = MiCheckFaultClusterEligibility(v11, 1LL, *(unsigned int *)(a1 + 36))) == 0 )
  {
LABEL_8:
    v20 = 0LL;
    goto LABEL_86;
  }
  v23 = (unsigned __int64 *)(SystemArgument1 + 32);
  v24 = 0LL;
  v25 = (unsigned __int64 *)SystemArgument1;
  if ( SystemArgument1 >= SystemArgument1 + 32 )
    goto LABEL_39;
  while ( 1 )
  {
    v26 = *v25;
    if ( *v25 )
      break;
LABEL_28:
    if ( ++v25 >= v23 )
      goto LABEL_32;
  }
  v27 = v26 & 0xFFFFFFFFFFFF0000uLL;
  v28 = (v26 & 0xFFFFFFFFFFFF0000uLL) + (((v26 >> 6) & 0x3F) << 16);
  if ( v11 >= v27 )
  {
    if ( v11 == v28 )
    {
      v24 = v25;
    }
    else if ( v11 < v28 )
    {
      MiConfirmFaultClusterDescriptor(*(_QWORD *)(a1 + 8), SystemArgument1, v25, 0LL);
      v29 = (2LL * (*(_QWORD *)(SystemArgument1 + 40) >> 1) - 2) ^ (*(_QWORD *)(SystemArgument1 + 40) ^ (2LL * (*(_QWORD *)(SystemArgument1 + 40) >> 1) - 2)) & 0xFFFFFFFFFFFFFFF1uLL;
      if ( ((((*v25 >> 6) + (*v25 >> 16)) << 16) & 0x1FFFFF) == 0 )
        v29 = (16 * ((v29 >> 4) - 1)) ^ ((16 * ((v29 >> 4) - 1)) ^ v29) & 0xFFFFFFFFFFFFFF8FuLL;
      *(_QWORD *)(SystemArgument1 + 40) = v29;
      v23 = (unsigned __int64 *)(SystemArgument1 + 32);
      *v25 = 0LL;
      if ( (v29 & 0xE) == 0 && !*v23 )
      {
        MiSetFaultClusterContextBlockEntryState(SystemArgument1, 0LL);
        v23 = (unsigned __int64 *)(SystemArgument1 + 32);
      }
      v24 = 0LL;
    }
    goto LABEL_28;
  }
  v30 = (v27 - v11) >> 16;
  if ( v30 < v22 )
    v22 = v30;
LABEL_32:
  if ( v24 )
  {
    if ( !v58 )
    {
      v65 = *v24 & 0x3F;
      v31 = 2LL * (*(_QWORD *)(SystemArgument1 + 40) >> 1) - 2;
      v32 = 16 * (((v31 ^ (*(_QWORD *)(SystemArgument1 + 40) ^ v31) & 0xFFFFFFFFFFFFFFF1uLL) >> 4) - 1);
      v33 = v32 ^ (v32 ^ v31 ^ (*(_QWORD *)(SystemArgument1 + 40) ^ v31) & 0xFFFFFFFFFFFFFFF1uLL) & 0xFFFFFFFFFFFFFF8FuLL;
      *(_QWORD *)(SystemArgument1 + 40) = v33;
      v34 = (v33 & 0xE) == 0;
      goto LABEL_58;
    }
    if ( (unsigned int)MiConfirmFaultClusterDescriptor(*(_QWORD *)(a1 + 8), SystemArgument1, v24, 0LL) )
    {
      v35 = *(_QWORD *)v24 & 0x3FLL;
      *(_QWORD *)v24 &= 0xFFFFFFFFFFFFCFFFuLL;
      goto LABEL_63;
    }
    v36 = (2LL * (*(_QWORD *)(SystemArgument1 + 40) >> 1) - 2) ^ (*(_QWORD *)(SystemArgument1 + 40) ^ (2LL * (*(_QWORD *)(SystemArgument1 + 40) >> 1) - 2)) & 0xFFFFFFFFFFFFFFF1uLL;
    *(_QWORD *)(SystemArgument1 + 40) = v36;
    *(_QWORD *)v24 = 0LL;
    if ( (v36 & 0xE) == 0 )
    {
      v37 = *(_QWORD *)(SystemArgument1 + 32) == 0LL;
LABEL_60:
      if ( v37 )
        MiSetFaultClusterContextBlockEntryState(SystemArgument1, 0LL);
    }
    goto LABEL_62;
  }
LABEL_39:
  v38 = *(_QWORD *)SystemArgument1;
  v39 = (unsigned __int64 *)SystemArgument1;
  v24 = (_DWORD *)SystemArgument1;
  v40 = (*(_QWORD *)SystemArgument1 >> 12) & 3LL;
  if ( SystemArgument1 < (unsigned __int64)v23 )
  {
    do
    {
      v41 = *v39;
      if ( *v39 )
      {
        if ( *(_QWORD *)v24 )
        {
          if ( ((v41 >> 12) & 3) > (unsigned int)v40 )
          {
            v24 = v39;
            LODWORD(v40) = (v41 >> 12) & 3;
          }
          v23 = (unsigned __int64 *)(SystemArgument1 + 32);
        }
        if ( (*v39 & 0x3000) != 0x3000 )
          *v39 = (v41 + 4096) ^ (v41 ^ (v41 + 4096)) & 0xFFFFFFFFFFFFCFFFuLL;
      }
      else
      {
        v24 = v39;
      }
      ++v39;
    }
    while ( v39 < v23 );
    v38 = *(_QWORD *)v24;
  }
  if ( v38 )
  {
    if ( (((unsigned __int8)v38 ^ (unsigned __int8)(v38 >> 6)) & 0x3F) != 0 )
    {
      if ( ((v11 ^ v38) & 0xFFFFFFFFFFE00000uLL) != 0 )
      {
        *v23 = v38;
      }
      else
      {
        MiConfirmFaultClusterDescriptor(*(_QWORD *)(a1 + 8), SystemArgument1, v24, 0LL);
        v23 = (unsigned __int64 *)(SystemArgument1 + 32);
      }
    }
    v42 = (2LL * (*(_QWORD *)(SystemArgument1 + 40) >> 1) - 2) ^ (*(_QWORD *)(SystemArgument1 + 40) ^ (2LL * (*(_QWORD *)(SystemArgument1 + 40) >> 1) - 2)) & 0xFFFFFFFFFFFFFFF1uLL;
    if ( ((((*(_QWORD *)v24 >> 6) + (*(_QWORD *)v24 >> 16)) << 16) & 0x1FFFFFLL) == 0 )
      v42 = (16 * ((v42 >> 4) - 1)) ^ ((16 * ((v42 >> 4) - 1)) ^ v42) & 0xFFFFFFFFFFFFFF8FuLL;
    *(_QWORD *)(SystemArgument1 + 40) = v42;
    v34 = (v42 & 0xE) == 0;
LABEL_58:
    *(_QWORD *)v24 = 0LL;
    if ( v34 )
    {
      v37 = *v23 == 0;
      goto LABEL_60;
    }
  }
LABEL_62:
  v35 = v65;
LABEL_63:
  v43 = v54;
  if ( v35 >= v54 )
    v43 = v35;
  if ( v43 <= v22 )
    v22 = v43;
  if ( v22 > 1 )
    v22 = MiCheckFaultClusterEligibility(v11 + 0x10000, v22 - 1, *(unsigned int *)(a1 + 36)) + 1;
  v44 = MiProtectionToCacheAttribute(*(unsigned int *)(a1 + 32));
  MiGetPageChainForFault(
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v59 + 174)),
    *(_QWORD *)(a1 + 16),
    *(_DWORD *)(a1 + 40),
    v44,
    49,
    v67,
    16 * v22,
    0x10uLL,
    0,
    (__int64)&v55);
  v20 = v56 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v56 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    if ( v20 == v56 )
    {
      MiAppendPageChain(v68, &v55);
    }
    else
    {
      MiSplitPageChain(&v55, v56 & 0xFFFFFFFFFFFFFFF0uLL, v68);
      MiFreePageChain((__int64)&v55, v45, v46);
    }
    v47 = *(_QWORD *)(SystemArgument1 + 40);
    v48 = *(_QWORD *)v24;
    v49 = v20 >> 4;
    if ( !*(_QWORD *)v24 )
    {
      v48 = v11;
      v47 = ((v47 & 0xFFFFFFFFFFFFFFFEuLL) + 2) ^ (((v47 & 0xFFFFFFFFFFFFFFFEuLL) + 2) ^ v47) & 0xFFFFFFFFFFFFFFF1uLL;
    }
    v50 = (v48 + (v49 << 6)) ^ (v48 ^ (v48 + (v49 << 6))) & 0xFFFFFFFFFFFFF03FuLL;
    v34 = (v66 & 0xF) == 0;
    v51 = v50;
    *(_QWORD *)v24 = v50;
    if ( v34 && v11 == *(_QWORD *)(a1 + 16) )
    {
      v52 = v20 >> 4;
      if ( v49 >= v54 )
        v52 = v54;
      v51 = (v50 + v52) ^ (v50 ^ (v50 + v52)) & 0xFFFFFFFFFFFFFFC0uLL;
      *(_QWORD *)v24 = v51;
    }
    if ( ((((v51 >> 6) + (v51 >> 16)) << 16) & 0x1FFFFF) == 0 )
      v47 = (v47 + 16) ^ ((v47 + 16) ^ v47) & 0xFFFFFFFFFFFFFF8FuLL;
    *(_QWORD *)(SystemArgument1 + 40) = ((v47 & 0xFFFFFFFFFFFFFF80uLL) + (v49 << 7)) ^ (v47 ^ ((v47 & 0xFFFFFFFFFFFFFF80uLL)
                                                                                             + (v49 << 7))) & 0xFFFFFFFFFF80007FuLL;
    MiSetFaultClusterContextBlockEntryState(SystemArgument1, 1LL);
    if ( ((*v24 >> 6) & 0x3F) == v49 )
      MiSortFaultClusterDescriptors(SystemArgument1);
    *(_DWORD *)a1 |= 0x200u;
    *(_QWORD *)(a1 + 16) = v11;
  }
  else
  {
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL) != 0LL ? 0xC0000017 : 0;
  }
LABEL_86:
  v53 = a5;
  _InterlockedDecrement64((volatile signed __int64 *)(SystemArgument1 + 40));
  *v53 = v20;
  return v15;
}
