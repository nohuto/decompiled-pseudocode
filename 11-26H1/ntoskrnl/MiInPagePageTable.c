/*
 * XREFs of MiInPagePageTable @ 0x1403A69D0
 * Callers:
 *     MiResolvePageTablePage @ 0x1402CEAB0 (MiResolvePageTablePage.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiLeapPrefetch @ 0x1403164F4 (MiLeapPrefetch.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     MiAdvanceFaultList @ 0x140371250 (MiAdvanceFaultList.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     MiReleaseFaultState @ 0x14038FB40 (MiReleaseFaultState.c)
 *     MiDispatchFault @ 0x1403A5BC0 (MiDispatchFault.c)
 *     MiCheckVirtualAddress @ 0x1403A7340 (MiCheckVirtualAddress.c)
 *     MiNodeFromFaultPacket @ 0x1403A7670 (MiNodeFromFaultPacket.c)
 *     MiGetClosestImplicitNode @ 0x1403A76AC (MiGetClosestImplicitNode.c)
 *     MiIsVadLarge @ 0x1403A8C30 (MiIsVadLarge.c)
 *     MiLargePageFault @ 0x1403A95C0 (MiLargePageFault.c)
 *     MiIsStoreProcess @ 0x1403FD910 (MiIsStoreProcess.c)
 *     MiInsertLargeVadMapping @ 0x140509CA4 (MiInsertLargeVadMapping.c)
 *     MiGetLargeVadMappingIndex @ 0x14052BE50 (MiGetLargeVadMappingIndex.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiInPagePageTable(_QWORD *a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // r15
  unsigned __int64 v5; // r15
  ULONG_PTR *v6; // rax
  ULONG_PTR v7; // r14
  __int64 v8; // rbx
  unsigned __int64 v9; // r10
  unsigned int v10; // ebx
  ULONG_PTR v11; // r9
  __int64 v12; // rbx
  __int64 result; // rax
  __int64 v14; // r13
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  unsigned int v23; // eax
  int ClosestImplicitNode; // eax
  __int64 v25; // r10
  int v26; // edx
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __int64 v29; // xmm0_8
  __int64 v30; // rax
  unsigned int v31; // ecx
  _KPROCESS *v32; // rax
  __int64 v33; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v35; // rax
  struct _KTHREAD *v36; // rcx
  unsigned __int64 DemandZeroPte; // rax
  __int64 v38; // rcx
  BOOL v39; // ebx
  char v40; // cl
  __int64 v41; // rax
  char v42; // al
  int v43; // ecx
  __int64 v44; // rdi
  unsigned int v45; // ebx
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r8
  char v54; // al
  __int64 v55; // r9
  unsigned __int64 *v56; // r11
  __int64 i; // r10
  __int64 PteShadow; // rax
  ULONG_PTR v59; // r9
  ULONG_PTR v60; // r10
  int v61; // [rsp+30h] [rbp-D0h]
  unsigned int LargeVadMappingIndex; // [rsp+30h] [rbp-D0h]
  unsigned int v63; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v64; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v65; // [rsp+40h] [rbp-C0h] BYREF
  int v66; // [rsp+48h] [rbp-B8h]
  _KPROCESS *Process; // [rsp+50h] [rbp-B0h]
  __int64 v68; // [rsp+58h] [rbp-A8h]
  struct _LIST_ENTRY **p_Blink; // [rsp+60h] [rbp-A0h]
  __int64 v70; // [rsp+68h] [rbp-98h]
  ULONG_PTR *v71; // [rsp+70h] [rbp-90h]
  _QWORD *v72; // [rsp+78h] [rbp-88h]
  __int128 v73; // [rsp+80h] [rbp-80h] BYREF
  char v74; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v75[15]; // [rsp+A1h] [rbp-5Fh] BYREF
  __int64 v76; // [rsp+B0h] [rbp-50h]
  int v77; // [rsp+C8h] [rbp-38h]
  __int128 v78; // [rsp+120h] [rbp+20h] BYREF
  __int128 v79; // [rsp+130h] [rbp+30h]
  __int128 v80; // [rsp+140h] [rbp+40h]
  __m256i v81; // [rsp+150h] [rbp+50h]
  __int128 v82; // [rsp+170h] [rbp+70h]
  __int128 v83; // [rsp+180h] [rbp+80h]
  __int128 v84; // [rsp+190h] [rbp+90h]
  __int128 v85; // [rsp+1A0h] [rbp+A0h]
  __int64 v86; // [rsp+1B0h] [rbp+B0h]

  v2 = a2;
  v66 = a2;
  v64 = 0LL;
  v63 = 0;
  v65 = 0LL;
  memset_0(&v78, 0, 0x98uLL);
  memset_0(&v74, 0, 0x78uLL);
  v61 = 0;
  v73 = 0LL;
  v4 = a1[2];
  Process = KeGetCurrentThread()->ApcState.Process;
  p_Blink = &Process[2].ReadyListHead.Blink;
  if ( (v4 & 1) == 0 || (v5 = v4 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)v5 != 1) )
    v5 = 0LL;
  v70 = v2;
  v6 = &a1[v2 + 3];
  v71 = v6;
  while ( 1 )
  {
LABEL_4:
    v7 = *v6;
    v8 = *(_QWORD *)*v6;
    if ( *v6 >= 0xFFFFF6FB7DBED000uLL
      && v7 <= 0xFFFFF6FB7DBED7F8uLL
      && (v8 & 1) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      v32 = MiPteHasShadow();
      if ( v32 )
      {
        KernelWaitTime = v32[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v35 = *(_QWORD *)(KernelWaitTime + 8 * ((v7 >> 3) & 0x1FF));
          if ( (v35 & 0x20) != 0 )
            v33 |= 0x20uLL;
          v8 = v33 | 0x42;
          if ( (v35 & 0x42) == 0 )
            v8 = v33;
        }
      }
    }
    v68 = MiCheckVirtualAddress(*a1, &v63, &v64);
    if ( v8 )
    {
      v14 = v64;
      if ( v64 )
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v64 + 64));
LABEL_19:
      v15 = *((_OWORD *)a1 + 1);
      v78 = *(_OWORD *)a1;
      v16 = *((_OWORD *)a1 + 2);
      v79 = v15;
      v17 = *((_OWORD *)a1 + 3);
      v80 = v16;
      v18 = *((_OWORD *)a1 + 4);
      *(_OWORD *)v81.m256i_i8 = v17;
      v19 = *((_OWORD *)a1 + 5);
      *(_OWORD *)&v81.m256i_u64[2] = v18;
      v20 = *((_OWORD *)a1 + 6);
      v82 = v19;
      v21 = *((_OWORD *)a1 + 7);
      LODWORD(v82) = 0;
      v83 = v20;
      v22 = *((_OWORD *)a1 + 8);
      v84 = v21;
      *(_QWORD *)&v21 = a1[18];
      v85 = v22;
      v86 = v21;
      v23 = MiNodeFromFaultPacket(a1);
      ClosestImplicitNode = MiGetClosestImplicitNode(v23);
      if ( (a1[2] & 1) == 0 )
        goto LABEL_20;
      v40 = *(_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v40 == 1 || v40 == 2 )
      {
        if ( v40 == 2 )
        {
          v77 = ClosestImplicitNode;
          *(_QWORD *)&v73 = (__int64)(v7 << 25) >> 16;
          *((_QWORD *)&v73 + 1) = 4096LL;
          *(_QWORD *)&v79 = v75;
          v74 = 2;
          *(_QWORD *)&v75[7] = &v73;
          v76 = 1LL;
          goto LABEL_20;
        }
      }
      else if ( v40 != 3 && v40 != 5 )
      {
        goto LABEL_20;
      }
      *(_QWORD *)&v79 = 0LL;
LABEL_20:
      *(_QWORD *)&v78 = (__int64)(v7 << 25) >> 16;
      *((_QWORD *)&v78 + 1) = 2LL;
      *((_QWORD *)&v82 + 1) = v14;
      *((_QWORD *)&v79 + 1) = (v25 & ((unsigned __int64)v78 >> 9)) - 0x98000000000LL;
      *(_QWORD *)&v80 = (v25 & (*((_QWORD *)&v79 + 1) >> 9)) - 0x98000000000LL;
      *((_QWORD *)&v80 + 1) = (v25 & ((unsigned __int64)v80 >> 9)) - 0x98000000000LL;
      v81.m256i_i64[0] = (v25 & (*((_QWORD *)&v80 + 1) >> 9)) - 0x98000000000LL;
      v26 = MiDispatchFault(&v78, 0LL, &v65);
      if ( v26 == -1073532109 )
      {
        if ( (v82 & 0x100) != 0 )
          *(_DWORD *)(v65 + 188) |= 0x80000u;
        v26 = MiIssueHardFault((__int64)&v78, v65);
      }
      v27 = *(__m128i *)(a1 + 7);
      v28 = *(__m128i *)&v81.m256i_u64[1];
      v29 = v81.m256i_i64[3];
      *(_OWORD *)(a1 + 7) = *(_OWORD *)&v81.m256i_u64[1];
      a1[9] = v29;
      a1[15] = *((_QWORD *)&v84 + 1);
      a1[16] = v85;
      v30 = v86;
      *((_BYTE *)a1 + 69) = _mm_cvtsi128_si32(_mm_srli_si128(v28, 13)) & 3 | _mm_srli_si128(v27, 8).m128i_i8[5] & 0xFC;
      a1[18] = v30;
      a1[17] = *((_QWORD *)&v85 + 1);
      v31 = a1[10] & 0xFFFFFFE0 ^ ((unsigned __int8)v82 | (unsigned __int8)*((_DWORD *)a1 + 20)) & 0x1F;
      *((_DWORD *)a1 + 20) = v31;
      if ( v26 < 0 )
        return (unsigned int)v26;
      *((_DWORD *)a1 + 20) = v31 & 0xFFFFFFEF;
      return 0LL;
    }
    v9 = *a1;
    if ( *a1 >= 0xFFFF800000000000uLL )
    {
      if ( v5 )
        return 3221226548LL;
      if ( v9 >= 0xFFFFF68000000000uLL && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v41 = a1[2];
        if ( v41 )
        {
          if ( (v41 & 1) == 0 || (v42 = *(_BYTE *)(v41 & 0xFFFFFFFFFFFFFFFEuLL), v42 != 7) && v42 != 8 )
            KeBugCheckEx(0x50u, *a1, a1[1], v7, 6uLL);
        }
      }
    }
    v10 = v63;
    if ( v63 == 24 )
    {
      v11 = a1[1];
      v12 = v64;
      if ( v9 >= 0x10000 && v9 <= 0x7FFFFFFEFFFFLL )
      {
        if ( v64 )
        {
LABEL_13:
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v12 + 64));
LABEL_14:
          if ( *a1 < 0x7FFFFFFF0000uLL && v12 && v5 )
          {
            LeafVa = MiGetLeafVa(v7 + 8);
            if ( LeafVa >= v47 )
            {
              MiLeapPrefetch((_QWORD *)v5, LeafVa);
            }
            else
            {
              ++*(_QWORD *)(v5 + 24);
              *(_QWORD *)(v5 + 32) = 0LL;
            }
            *(_BYTE *)(v5 + 1) = 1;
          }
          return 3221225477LL;
        }
        if ( (v11 & 2) != 0 )
        {
          if ( (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
            KeBugCheckEx(0x1Au, 0x4477uLL, *a1, v11, 0LL);
          if ( (unsigned int)MiIsStoreProcess(Process) )
            KeBugCheckEx(0x1Au, 0x4478uLL, v60, v59, 0LL);
        }
      }
      if ( !v12 )
        goto LABEL_14;
      goto LABEL_13;
    }
    v14 = v64;
    if ( v64 )
    {
      if ( (*(_DWORD *)(v64 + 48) & 0x80000) != 0 )
      {
        if ( v5 )
        {
          v72 = (_QWORD *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
          v43 = *((_DWORD *)v72 + 20);
          if ( (v43 & 0x40000) == 0 )
          {
            if ( v63 >> 3 == 3 )
            {
              if ( (v63 & 7) == 0 )
                goto LABEL_70;
            }
            else if ( v63 >> 3 != 1 )
            {
LABEL_70:
              ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v64 + 64));
              MiAdvanceFaultList(v72);
              return 3221226548LL;
            }
            if ( (v43 & 0x4000) == 0 )
              goto LABEL_70;
          }
        }
      }
    }
    v36 = (struct _KTHREAD *)Process[1].ActiveGroupPadding[0];
    if ( v36 )
    {
      if ( v5 && *(_QWORD *)(v5 + 56) != v5 + 56 )
      {
        if ( !v64 )
          return 3221226548LL;
        goto LABEL_81;
      }
      if ( v36 != KeGetCurrentThread() )
        break;
    }
    if ( !v64 )
      goto LABEL_41;
    if ( v5 && (unsigned int)MiIsVadLarge(v64) )
    {
      v44 = *(unsigned int *)(v14 + 28);
      v45 = *(unsigned __int8 *)(v14 + 33);
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v14 + 64));
      MiLeapPrefetch((_QWORD *)v5, (((v44 | ((unsigned __int64)v45 << 32)) << 12) | 0xFFF) + 4096);
      result = 3221226548LL;
      *(_BYTE *)(v5 + 1) = 1;
      return result;
    }
    if ( !v14 || (*(_BYTE *)(v14 + 48) & 0x1C) != 0x14 || MiVadPureReserve(v14) )
    {
LABEL_41:
      if ( !v61 )
      {
LABEL_42:
        DemandZeroPte = MiMakeDemandZeroPte(4);
        v38 = 0xFFFFF6FB7DBED000uLL;
        v39 = 0;
        if ( v7 >= 0xFFFFF6FB7DBED000uLL )
        {
          v38 = 0xFFFFF6FB7DBEDFFFuLL;
          if ( v7 <= 0xFFFFF6FB7DBEDFFFuLL )
            v39 = 1;
        }
        *(_QWORD *)v7 = DemandZeroPte;
        if ( v14 )
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v14 + 64));
        if ( !v39 )
          MiIncreaseUsedPtes(v38, ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u, 2);
        goto LABEL_19;
      }
      if ( !v14 )
        return 3221226548LL;
LABEL_81:
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v14 + 64));
      return 3221226548LL;
    }
    LargeVadMappingIndex = MiGetLargeVadMappingIndex(v14, *a1);
    if ( v66 != LargeVadMappingIndex )
      goto LABEL_42;
    *(_QWORD *)v7 = MiMakeDemandZeroPte(4);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v14 + 64));
    if ( (unsigned int)MiInsertLargeVadMapping(*a1, v68, LargeVadMappingIndex, v7, v10, *((_BYTE *)a1 + 69) & 1) )
    {
      if ( v7 < 0xFFFFF6FB7DBED000uLL || (v48 = 0xFFFFF6FB7DBEDFFFuLL, v7 > 0xFFFFF6FB7DBEDFFFuLL) )
        MiIncreaseUsedPtes(v48, ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u, 2);
      result = MiLargePageFault(a1, v7, v49);
      if ( (int)result < 0 )
        return result;
      return 3221226548LL;
    }
    *(_QWORD *)v7 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    MiReleaseFaultState((__int64)(a1 + 7), 0x11u, 0LL, v50);
    v51 = (__int64)p_Blink;
    *((_BYTE *)a1 + 69) |= 1u;
    v61 = 1;
    v54 = MiLockWorkingSetExclusive(v51, v52, v53);
    v55 = v70;
    v56 = a1 + 6;
    *((_BYTE *)a1 + 68) = v54;
    for ( i = 3LL; ; --i )
    {
      v6 = &a1[v55 + 3];
      if ( i < v55 )
        break;
      PteShadow = *(_QWORD *)*v56;
      if ( *v56 >= 0xFFFFF6FB7DBED000uLL && *v56 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(*v56, *(_QWORD *)*v56);
      if ( i == v55 )
      {
        if ( PteShadow )
          return 3221226548LL;
        v6 = v71;
        goto LABEL_4;
      }
      if ( (PteShadow & 1) == 0 )
        return 3221226548LL;
      --v56;
    }
  }
  if ( v64 )
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v64 + 64));
  *((_DWORD *)a1 + 20) |= 2u;
  return 3221226548LL;
}
