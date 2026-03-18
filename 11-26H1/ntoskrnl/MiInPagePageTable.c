/*
 * XREFs of MiInPagePageTable @ 0x1403A4C70
 * Callers:
 *     MiResolvePageTablePage @ 0x1402ECA70 (MiResolvePageTablePage.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027E5A0 (MiLockWorkingSetExclusive.c)
 *     MiMakeDemandZeroPte @ 0x14028B2D0 (MiMakeDemandZeroPte.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiLeapPrefetch @ 0x1403144C4 (MiLeapPrefetch.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiVadPureReserve @ 0x1403173B0 (MiVadPureReserve.c)
 *     MiGetLeafVa @ 0x140326060 (MiGetLeafVa.c)
 *     MiIncreaseUsedPtes @ 0x140365F20 (MiIncreaseUsedPtes.c)
 *     MiAdvanceFaultList @ 0x14036F4A0 (MiAdvanceFaultList.c)
 *     MiIssueHardFault @ 0x14038D350 (MiIssueHardFault.c)
 *     MiReleaseFaultState @ 0x14038DD90 (MiReleaseFaultState.c)
 *     MiDispatchFault @ 0x1403A3E60 (MiDispatchFault.c)
 *     MiCheckVirtualAddress @ 0x1403A55E0 (MiCheckVirtualAddress.c)
 *     MiNodeFromFaultPacket @ 0x1403A5910 (MiNodeFromFaultPacket.c)
 *     MiGetClosestImplicitNode @ 0x1403A594C (MiGetClosestImplicitNode.c)
 *     MiIsVadLarge @ 0x1403A6ED0 (MiIsVadLarge.c)
 *     MiLargePageFault @ 0x1403A7860 (MiLargePageFault.c)
 *     MiIsStoreProcess @ 0x140404810 (MiIsStoreProcess.c)
 *     MiInsertLargeVadMapping @ 0x140510234 (MiInsertLargeVadMapping.c)
 *     MiGetLargeVadMappingIndex @ 0x1405299BC (MiGetLargeVadMappingIndex.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r8
  char v53; // al
  __int64 v54; // r9
  unsigned __int64 *v55; // r11
  __int64 i; // r10
  __int64 PteShadow; // rax
  ULONG_PTR v58; // r9
  ULONG_PTR v59; // r10
  int v60; // [rsp+30h] [rbp-D0h]
  unsigned int LargeVadMappingIndex; // [rsp+30h] [rbp-D0h]
  unsigned int v62; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v63; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+40h] [rbp-C0h] BYREF
  int v65; // [rsp+48h] [rbp-B8h]
  _KPROCESS *Process; // [rsp+50h] [rbp-B0h]
  __int64 v67; // [rsp+58h] [rbp-A8h]
  struct _LIST_ENTRY **p_Blink; // [rsp+60h] [rbp-A0h]
  __int64 v69; // [rsp+68h] [rbp-98h]
  ULONG_PTR *v70; // [rsp+70h] [rbp-90h]
  _QWORD *v71; // [rsp+78h] [rbp-88h]
  __int128 v72; // [rsp+80h] [rbp-80h] BYREF
  char v73; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v74[15]; // [rsp+A1h] [rbp-5Fh] BYREF
  __int64 v75; // [rsp+B0h] [rbp-50h]
  int v76; // [rsp+C8h] [rbp-38h]
  __int128 v77; // [rsp+120h] [rbp+20h] BYREF
  __int128 v78; // [rsp+130h] [rbp+30h]
  __int128 v79; // [rsp+140h] [rbp+40h]
  __m256i v80; // [rsp+150h] [rbp+50h]
  __int128 v81; // [rsp+170h] [rbp+70h]
  __int128 v82; // [rsp+180h] [rbp+80h]
  __int128 v83; // [rsp+190h] [rbp+90h]
  __int128 v84; // [rsp+1A0h] [rbp+A0h]
  __int64 v85; // [rsp+1B0h] [rbp+B0h]

  v2 = a2;
  v65 = a2;
  v63 = 0LL;
  v62 = 0;
  v64 = 0LL;
  memset_0(&v77, 0, 0x98uLL);
  memset_0(&v73, 0, 0x78uLL);
  v60 = 0;
  v72 = 0LL;
  v4 = a1[2];
  Process = KeGetCurrentThread()->ApcState.Process;
  p_Blink = &Process[2].ReadyListHead.Blink;
  if ( (v4 & 1) == 0 || (v5 = v4 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)v5 != 1) )
    v5 = 0LL;
  v69 = v2;
  v6 = &a1[v2 + 3];
  v70 = v6;
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
    v67 = MiCheckVirtualAddress(*a1, &v62, &v63);
    if ( v8 )
    {
      v14 = v63;
      if ( v63 )
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v63 + 64));
LABEL_19:
      v15 = *((_OWORD *)a1 + 1);
      v77 = *(_OWORD *)a1;
      v16 = *((_OWORD *)a1 + 2);
      v78 = v15;
      v17 = *((_OWORD *)a1 + 3);
      v79 = v16;
      v18 = *((_OWORD *)a1 + 4);
      *(_OWORD *)v80.m256i_i8 = v17;
      v19 = *((_OWORD *)a1 + 5);
      *(_OWORD *)&v80.m256i_u64[2] = v18;
      v20 = *((_OWORD *)a1 + 6);
      v81 = v19;
      v21 = *((_OWORD *)a1 + 7);
      LODWORD(v81) = 0;
      v82 = v20;
      v22 = *((_OWORD *)a1 + 8);
      v83 = v21;
      *(_QWORD *)&v21 = a1[18];
      v84 = v22;
      v85 = v21;
      v23 = MiNodeFromFaultPacket(a1);
      ClosestImplicitNode = MiGetClosestImplicitNode(v23);
      if ( (a1[2] & 1) == 0 )
        goto LABEL_20;
      v40 = *(_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v40 == 1 || v40 == 2 )
      {
        if ( v40 == 2 )
        {
          v76 = ClosestImplicitNode;
          *(_QWORD *)&v72 = (__int64)(v7 << 25) >> 16;
          *((_QWORD *)&v72 + 1) = 4096LL;
          *(_QWORD *)&v78 = v74;
          v73 = 2;
          *(_QWORD *)&v74[7] = &v72;
          v75 = 1LL;
          goto LABEL_20;
        }
      }
      else if ( v40 != 3 && v40 != 5 )
      {
        goto LABEL_20;
      }
      *(_QWORD *)&v78 = 0LL;
LABEL_20:
      *(_QWORD *)&v77 = (__int64)(v7 << 25) >> 16;
      *((_QWORD *)&v77 + 1) = 2LL;
      *((_QWORD *)&v81 + 1) = v14;
      *((_QWORD *)&v78 + 1) = (v25 & ((unsigned __int64)v77 >> 9)) - 0x98000000000LL;
      *(_QWORD *)&v79 = (v25 & (*((_QWORD *)&v78 + 1) >> 9)) - 0x98000000000LL;
      *((_QWORD *)&v79 + 1) = (v25 & ((unsigned __int64)v79 >> 9)) - 0x98000000000LL;
      v80.m256i_i64[0] = (v25 & (*((_QWORD *)&v79 + 1) >> 9)) - 0x98000000000LL;
      v26 = MiDispatchFault(&v77, 0LL, &v64);
      if ( v26 == -1073532109 )
      {
        if ( (v81 & 0x100) != 0 )
          *(_DWORD *)(v64 + 188) |= 0x80000u;
        v26 = MiIssueHardFault((__int64)&v77, v64);
      }
      v27 = *(__m128i *)(a1 + 7);
      v28 = *(__m128i *)&v80.m256i_u64[1];
      v29 = v80.m256i_i64[3];
      *(_OWORD *)(a1 + 7) = *(_OWORD *)&v80.m256i_u64[1];
      a1[9] = v29;
      a1[15] = *((_QWORD *)&v83 + 1);
      a1[16] = v84;
      v30 = v85;
      *((_BYTE *)a1 + 69) = _mm_cvtsi128_si32(_mm_srli_si128(v28, 13)) & 3 | _mm_srli_si128(v27, 8).m128i_i8[5] & 0xFC;
      a1[18] = v30;
      a1[17] = *((_QWORD *)&v84 + 1);
      v31 = a1[10] & 0xFFFFFFE0 ^ ((unsigned __int8)v81 | (unsigned __int8)*((_DWORD *)a1 + 20)) & 0x1F;
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
    v10 = v62;
    if ( v62 == 24 )
    {
      v11 = a1[1];
      v12 = v63;
      if ( v9 >= 0x10000 && v9 <= 0x7FFFFFFEFFFFLL )
      {
        if ( v63 )
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
            KeBugCheckEx(0x1Au, 0x4478uLL, v59, v58, 0LL);
        }
      }
      if ( !v12 )
        goto LABEL_14;
      goto LABEL_13;
    }
    v14 = v63;
    if ( v63 )
    {
      if ( (*(_DWORD *)(v63 + 48) & 0x80000) != 0 )
      {
        if ( v5 )
        {
          v71 = (_QWORD *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
          v43 = *((_DWORD *)v71 + 20);
          if ( (v43 & 0x40000) == 0 )
          {
            if ( v62 >> 3 == 3 )
            {
              if ( (v62 & 7) == 0 )
                goto LABEL_70;
            }
            else if ( v62 >> 3 != 1 )
            {
LABEL_70:
              ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v63 + 64));
              MiAdvanceFaultList(v71);
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
        if ( !v63 )
          return 3221226548LL;
        goto LABEL_81;
      }
      if ( v36 != KeGetCurrentThread() )
        break;
    }
    if ( !v63 )
      goto LABEL_41;
    if ( v5 && (unsigned int)MiIsVadLarge(v63) )
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
      if ( !v60 )
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
    if ( v65 != LargeVadMappingIndex )
      goto LABEL_42;
    *(_QWORD *)v7 = MiMakeDemandZeroPte(4);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v14 + 64));
    if ( (unsigned int)MiInsertLargeVadMapping(*a1, v67, LargeVadMappingIndex, v7, v10, *((_BYTE *)a1 + 69) & 1) )
    {
      if ( v7 < 0xFFFFF6FB7DBED000uLL || (v48 = 0xFFFFF6FB7DBEDFFFuLL, v7 > 0xFFFFF6FB7DBEDFFFuLL) )
        MiIncreaseUsedPtes(v48, ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u, 2);
      result = MiLargePageFault(a1, v7, v49);
      if ( (int)result < 0 )
        return result;
      return 3221226548LL;
    }
    *(_QWORD *)v7 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    MiReleaseFaultState((__int64)(a1 + 7), 0x11u, 0LL);
    v50 = (__int64)p_Blink;
    *((_BYTE *)a1 + 69) |= 1u;
    v60 = 1;
    v53 = MiLockWorkingSetExclusive(v50, v51, v52);
    v54 = v69;
    v55 = a1 + 6;
    *((_BYTE *)a1 + 68) = v53;
    for ( i = 3LL; ; --i )
    {
      v6 = &a1[v54 + 3];
      if ( i < v54 )
        break;
      PteShadow = *(_QWORD *)*v55;
      if ( *v55 >= 0xFFFFF6FB7DBED000uLL && *v55 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(*v55, *(_QWORD *)*v55);
      if ( i == v54 )
      {
        if ( PteShadow )
          return 3221226548LL;
        v6 = v70;
        goto LABEL_4;
      }
      if ( (PteShadow & 1) == 0 )
        return 3221226548LL;
      --v55;
    }
  }
  if ( v63 )
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v63 + 64));
  *((_DWORD *)a1 + 20) |= 2u;
  return 3221226548LL;
}
