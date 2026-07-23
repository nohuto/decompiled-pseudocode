/*
 * XREFs of MiSystemFault @ 0x1403A6268
 * Callers:
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiSystemVaTypeToVm @ 0x14028521C (MiSystemVaTypeToVm.c)
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiResolveDemandZeroFault @ 0x1402B6900 (MiResolveDemandZeroFault.c)
 *     MiSynchronizeSystemVa @ 0x1402C58B0 (MiSynchronizeSystemVa.c)
 *     MiUnlockSystemVa @ 0x1402C7240 (MiUnlockSystemVa.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x1402D5050 (MiUpdatePfnForPrefetchByPte.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A4B6C (MiCopyOnWriteCheckConditions.c)
 *     MiTransientCombineAddress @ 0x1403A8290 (MiTransientCombineAddress.c)
 *     MiSystemVaTypeHasWsles @ 0x1403A8540 (MiSystemVaTypeHasWsles.c)
 *     MiCheckSystemPageTables @ 0x1403A8568 (MiCheckSystemPageTables.c)
 *     MiNoFaultFound @ 0x1403A85F8 (MiNoFaultFound.c)
 *     KeInvalidAccessAllowed @ 0x1403A8A70 (KeInvalidAccessAllowed.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiHyperSpaceSize @ 0x140478EE8 (MiHyperSpaceSize.c)
 *     MiCheckSystemNxFault @ 0x1404E4804 (MiCheckSystemNxFault.c)
 *     MiGenerateAccessViolation @ 0x1404E6E58 (MiGenerateAccessViolation.c)
 *     MiTransientPageListWriter @ 0x1405056A0 (MiTransientPageListWriter.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiSystemFault(__int64 a1)
{
  int v1; // eax
  ULONG_PTR v3; // r14
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v5; // rbx
  _BYTE *v6; // rcx
  struct _KTHREAD *CurrentThread; // r15
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  char v11; // r12
  int v12; // r15d
  unsigned int SystemRegionType; // r8d
  __int64 v14; // rax
  _BYTE *v15; // rdx
  int v16; // ecx
  int v17; // r8d
  void *volatile *AnyMultiplexedVm; // rax
  __int64 v19; // r8
  __int64 v20; // r12
  int v21; // eax
  __int64 v22; // xmm1_8
  unsigned __int64 *v23; // r13
  ULONG_PTR v24; // rbx
  __int64 v25; // rdx
  __int64 PrototypePteDirect; // r15
  __int64 v28; // rcx
  _BYTE *v29; // rax
  __int64 v30; // rcx
  _BYTE *v31; // rax
  __int64 v32; // rax
  __int64 v33; // xmm1_8
  ULONG_PTR v34; // r9
  char v35; // al
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  _BYTE *v40; // rax
  __int64 v41; // rcx
  int v42; // ebx
  char v43; // [rsp+38h] [rbp-69h]
  _BYTE v44[4]; // [rsp+48h] [rbp-59h] BYREF
  int v45; // [rsp+4Ch] [rbp-55h]
  __int128 v46; // [rsp+60h] [rbp-41h]
  __int64 v47; // [rsp+70h] [rbp-31h]

  v1 = *(_DWORD *)(a1 + 80);
  if ( (v1 & 0x100) != 0 )
    return 3221225477LL;
  v3 = *(_QWORD *)a1;
  if ( (v1 & 0x80u) != 0 )
    KeBugCheckEx(0x50u, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 0xEuLL);
  LeafVa = MiGetLeafVa(*(_QWORD *)a1);
  v5 = LeafVa;
  if ( v3 >= 0xFFFFF68000000000uLL
    && v3 <= 0xFFFFF6FFFFFFFFFFuLL
    && LeafVa >= qword_140E2DFC0
    && LeafVa <= qword_140E2DFD0 )
  {
    *(_QWORD *)(a1 + 8) |= 2uLL;
  }
  v6 = (_BYTE *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (*(_QWORD *)(a1 + 16) & 1) != 0 && (*v6 == 7 || *v6 == 8) )
  {
    if ( v3 < 0xFFFFF68000000000uLL
      || v3 > 0xFFFFF6FFFFFFFFFFuLL
      || LeafVa >= 0x7FFFFFFF0000LL && (LeafVa < qword_140E2DFC0 || LeafVa > qword_140E2DFD0) )
    {
      return 3489660934LL;
    }
    return 192LL;
  }
  if ( LeafVa < 0xFFFF800000000000uLL
    || LeafVa >= qword_140E2DFC8 && LeafVa < qword_140E2DFC8 + MiHyperSpaceSize(v6, 0xFFFFF6FFFFFFFFFFuLL) )
  {
    return 192LL;
  }
  CurrentThread = KeGetCurrentThread();
  v8 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( (v8 & 0x400) != 0 )
    return 3221225477LL;
  v9 = 0;
  if ( (v8 & 0x100) != 0 )
  {
    if ( (unsigned int)MiTransientPageListWriter(CurrentThread, v3) )
      return 3221225477LL;
  }
  if ( (unsigned int)MiTransientCombineAddress(CurrentThread, v3, 0LL) )
    return 3221225477LL;
  v10 = *(_QWORD *)(a1 + 16);
  if ( (v10 & 1) != 0 )
  {
    v35 = *(_BYTE *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v35 != 1 && v35 != 3 && v35 != 6 )
      goto LABEL_12;
  }
  else if ( !(unsigned __int8)KeInvalidAccessAllowed(v10, 0LL) )
  {
LABEL_12:
    v11 = 0;
    goto LABEL_13;
  }
  v11 = 1;
LABEL_13:
  v43 = v11;
  memset_0(v44, 0, 0x80uLL);
  v12 = 1;
  v45 = 1;
  SystemRegionType = MiGetSystemRegionType(v5);
  if ( (*(_DWORD *)(a1 + 80) & 0x40) != 0 )
  {
    if ( SystemRegionType == 5 )
      goto LABEL_18;
    return 3221225477LL;
  }
  v14 = *(_QWORD *)(a1 + 16);
  if ( (v14 & 1) == 0 || *(_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
  {
    if ( !v11 )
      v12 = 3;
    v45 = v12;
  }
LABEL_18:
  if ( (unsigned int)MiSystemVaTypeHasWsles(SystemRegionType) )
  {
    AnyMultiplexedVm = MiSystemVaTypeToVm(v16);
  }
  else
  {
    if ( v17 == 13 )
    {
      v15 = (_BYTE *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (*(_QWORD *)(a1 + 16) & 1) == 0 || *v15 != 1 && *v15 != 4 )
      {
LABEL_34:
        if ( (v12 & 2) != 0 && !(unsigned int)MiGenerateAccessViolation(a1) )
          KeBugCheckEx(0x50u, v3, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 2uLL);
        return 3221225477LL;
      }
      v41 = 5LL;
    }
    else
    {
      if ( v17 != 8 )
        goto LABEL_34;
      v41 = 4LL;
    }
    AnyMultiplexedVm = (void *volatile *)MiGetAnyMultiplexedVm(v41, v15);
  }
  v20 = (__int64)AnyMultiplexedVm;
  if ( !AnyMultiplexedVm )
    goto LABEL_34;
  if ( !(unsigned int)MiSynchronizeSystemVa((__int64)AnyMultiplexedVm, v3, v19, 0, (__int64)v44) )
  {
LABEL_33:
    LOBYTE(v12) = v45;
    goto LABEL_34;
  }
  v21 = MiCheckSystemPageTables(a1);
  if ( v21 == 2 )
  {
    MiUnlockSystemVa((__int64)v44);
    goto LABEL_33;
  }
  if ( v21 == 1 )
  {
    MiUnlockSystemVa((__int64)v44);
    return 0LL;
  }
  v22 = v47;
  *(_OWORD *)(a1 + 56) = v46;
  *(_QWORD *)(a1 + 72) = v22;
  v23 = *(unsigned __int64 **)(a1 + 24);
  v24 = *v23;
  if ( (*v23 & 1) == 0 )
  {
    if ( v3 >= 0xFFFFF68000000000uLL && v3 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( !v43 )
      {
        v34 = *(_QWORD *)(a1 + 16);
        if ( (v34 & 1) == 0 || *(_BYTE *)(v34 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
          KeBugCheckEx(0x50u, v3, *(_QWORD *)(a1 + 8), v34, 9uLL);
        goto LABEL_30;
      }
      goto LABEL_62;
    }
    PrototypePteDirect = 0LL;
    if ( (v24 & 0x400) != 0 )
    {
      if ( (v24 & 0x400000000000000LL) != 0 )
      {
        v32 = *(_QWORD *)(a1 + 16);
        if ( (v32 & 1) == 0 || *(_BYTE *)(v32 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        {
          v9 = MiResolveDemandZeroFault((unsigned __int64 *)a1, (unsigned __int64)v23, 0LL, 0LL, 0LL);
          v33 = *(_QWORD *)(a1 + 72);
          v46 = *(_OWORD *)(a1 + 56);
          v47 = v33;
        }
        goto LABEL_30;
      }
      PrototypePteDirect = MiGetPrototypePteDirect(*v23);
    }
    else
    {
      if ( (v24 & 0x800) == 0 && (v24 & 0x1E0) == 0 )
      {
        if ( (*(_DWORD *)(a1 + 80) & 0x40) == 0 )
        {
          v30 = *(_QWORD *)(a1 + 16);
          v31 = (_BYTE *)(v30 & 0xFFFFFFFFFFFFFFFEuLL);
          if ( (v30 & 1) != 0 )
          {
            if ( *v31 == 1 || *v31 == 3 || *v31 == 6 )
              goto LABEL_62;
          }
          else if ( (unsigned __int8)KeInvalidAccessAllowed(v30, 0LL) )
          {
            goto LABEL_62;
          }
          if ( !(unsigned int)MiGenerateAccessViolation(a1) )
            KeBugCheckEx(0x50u, v3, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 0LL);
        }
LABEL_62:
        v9 = -1073741819;
        goto LABEL_30;
      }
      if ( (*v23 & 0x3E0) == 0x300
        || (*v23 & 0x3E0) == 0x3E0
        && ((v38 = *(_QWORD *)(a1 + 16), (v38 & 1) == 0) || *(_BYTE *)(v38 & 0xFFFFFFFFFFFFFFFEuLL) != 4) )
      {
        if ( (*(_DWORD *)(a1 + 80) & 0x40) != 0 )
          goto LABEL_90;
        v39 = *(_QWORD *)(a1 + 16);
        v40 = (_BYTE *)(v39 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (v39 & 1) != 0 )
        {
          if ( *v40 == 1 || *v40 == 3 || *v40 == 6 )
            goto LABEL_90;
        }
        else if ( (unsigned __int8)KeInvalidAccessAllowed(v39, 0LL) )
        {
          goto LABEL_90;
        }
        if ( !(unsigned int)MiGenerateAccessViolation(a1) )
          KeBugCheckEx(0x50u, v3, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 1uLL);
LABEL_90:
        if ( (v24 & 0x3E0) == 0x300 )
          goto LABEL_62;
        v36 = *(_QWORD *)(a1 + 16);
        if ( (v36 & 1) == 0 || *(_BYTE *)(v36 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
          goto LABEL_62;
      }
    }
    if ( (*(_BYTE *)(a1 + 8) & 2) == 0 || PrototypePteDirect || (((unsigned __int8)v24 >> 5) & 4) != 0 )
    {
      *(_QWORD *)(a1 + 104) = PrototypePteDirect;
      return 3221225494LL;
    }
    if ( (*(_DWORD *)(a1 + 80) & 0x40) != 0 )
      goto LABEL_62;
    v28 = *(_QWORD *)(a1 + 16);
    v29 = (_BYTE *)(v28 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v28 & 1) != 0 )
    {
      if ( *v29 == 1 || *v29 == 3 || *v29 == 6 )
        goto LABEL_62;
LABEL_143:
      if ( !(unsigned int)MiGenerateAccessViolation(a1) )
        KeBugCheckEx(0xBEu, v3, v24, *(_QWORD *)(a1 + 16), 0xEuLL);
      goto LABEL_62;
    }
    if ( !(unsigned __int8)KeInvalidAccessAllowed(v28, 0LL) )
      goto LABEL_143;
    goto LABEL_62;
  }
  if ( (v24 & 0x80u) != 0LL && v3 >= 0xFFFFF68000000000uLL && v3 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( (v45 & 2) != 0 )
      KeBugCheckEx(0x50u, v3, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 8uLL);
    goto LABEL_62;
  }
  v25 = *(_QWORD *)(a1 + 16);
  if ( (v25 & 1) != 0 )
  {
    v37 = v25 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v37 == 1 )
    {
      MiUpdatePfnForPrefetchByPte(*(_QWORD *)(a1 + 24), *(_DWORD *)(v37 + 80) & 7, 0LL);
      goto LABEL_30;
    }
  }
  if ( (*(_BYTE *)(a1 + 8) & 2) == 0 )
  {
    MiCheckSystemNxFault(a1, *v23, 2LL);
    goto LABEL_29;
  }
  if ( (v24 & 0x800) != 0 )
  {
LABEL_29:
    MiNoFaultFound(a1, (_DWORD)v23, v3, *(_QWORD *)(a1 + 16), 1, v24);
LABEL_30:
    MiUnlockSystemVa((__int64)v44);
    return v9;
  }
  if ( (v24 & 0x200) == 0 && (*(_DWORD *)(a1 + 80) & 0x40) == 0 )
  {
    if ( !(unsigned int)MiGenerateAccessViolation(a1) )
      KeBugCheckEx(0xBEu, v3, v24, *(_QWORD *)(a1 + 16), 0xBuLL);
    goto LABEL_62;
  }
  v42 = MiCopyOnWrite(v3, (unsigned __int64)v23, -1LL, 0, 0LL);
  MiUnlockSystemVa((__int64)v44);
  if ( v42 < 0 )
    MiCopyOnWriteCheckConditions(v20, v42, 0LL);
  return 0LL;
}
