/*
 * XREFs of MmCopyToCachedPage @ 0x1402B23B0
 * Callers:
 *     CcWrapperMmCopyToCachedPage @ 0x1402B2310 (CcWrapperMmCopyToCachedPage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiMakePageAvoidRead @ 0x140282330 (MiMakePageAvoidRead.c)
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiMapFrame @ 0x1402A00A0 (MiMapFrame.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A90E0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiGetSystemCacheReverseMap @ 0x1402C6730 (MiGetSystemCacheReverseMap.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiUnlinkStandbyPfn @ 0x140456458 (MiUnlinkStandbyPfn.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x140485680 (MiMakeModifiedSystemCachePteValid.c)
 *     MiDirtyPte @ 0x1404AA8E4 (MiDirtyPte.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     MiMapSystemCachePage @ 0x1404F958C (MiMapSystemCachePage.c)
 *     MiMakeTransitionHeatBatch @ 0x140503EE0 (MiMakeTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x14050BF40 (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x14050CEC0 (MiFreeTransitionPageHeatList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyMemoryNonTemporal @ 0x140735A10 (RtlCopyMemoryNonTemporal.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyFromUserNonTemporal @ 0x140781D1C (RtlCopyFromUserNonTemporal.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     MiMapCacheExceptionFilter @ 0x140870DDC (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MmCopyToCachedPage(ULONG_PTR a1, void *a2, unsigned int a3, size_t a4, unsigned int a5)
{
  __int64 v5; // r14
  __int64 SystemCacheReverseMap; // rax
  ULONG_PTR v8; // r9
  ULONG_PTR v9; // r11
  __int64 *v10; // r8
  __int64 v11; // r10
  ULONG_PTR v12; // rdi
  unsigned int v13; // esi
  int v14; // r15d
  unsigned __int64 *v15; // r13
  bool v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 *PrototypePteDirect; // r15
  size_t v20; // rbx
  __int64 v21; // r12
  unsigned __int64 v22; // rax
  int PageAvoidRead; // eax
  ULONG_PTR v25; // rax
  __int64 v26; // r9
  unsigned __int64 v27; // rbx
  __int64 v28; // rdx
  int v29; // ecx
  int v30; // r12d
  ULONG_PTR v31; // rcx
  void *v32; // rcx
  int v33; // eax
  int locked; // eax
  int v35; // ecx
  unsigned __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rbx
  unsigned __int8 CurrentIrql; // di
  int v41; // eax
  unsigned int v42; // [rsp+44h] [rbp-94h] BYREF
  int v43; // [rsp+48h] [rbp-90h]
  unsigned __int64 v44; // [rsp+50h] [rbp-88h] BYREF
  __int64 v45; // [rsp+58h] [rbp-80h]
  int v46; // [rsp+60h] [rbp-78h]
  __int64 v47; // [rsp+68h] [rbp-70h]
  PSLIST_ENTRY ListEntry; // [rsp+70h] [rbp-68h]
  __int64 v49; // [rsp+78h] [rbp-60h]
  unsigned __int64 *v50; // [rsp+80h] [rbp-58h]
  __int64 v51; // [rsp+88h] [rbp-50h]
  __int64 v52; // [rsp+90h] [rbp-48h]
  __int64 v53; // [rsp+98h] [rbp-40h]
  unsigned int v56; // [rsp+F0h] [rbp+18h] BYREF
  size_t Size; // [rsp+F8h] [rbp+20h]

  Size = a4;
  v56 = a3;
  v5 = a3;
  v42 = 0;
  v45 = 0LL;
  ListEntry = 0LL;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(a1);
  v10 = (__int64 *)(*(_QWORD *)(SystemCacheReverseMap + 24) & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (*(_QWORD *)(SystemCacheReverseMap + 24) & 1) == 0 )
    v10 = *(__int64 **)(SystemCacheReverseMap + 24);
  v52 = *v10;
  v11 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v52 + 60) & 0x3FF)) + 22592LL;
  v51 = v11;
  v53 = (unsigned int)v5;
  if ( v5 + v8 > 0x1000 || v5 + v8 < v8 )
    KeBugCheckEx(0x1Au, 0x786uLL, v9, v8, (unsigned int)v5);
  v12 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = a5;
  v14 = a5 & 4;
  v46 = v14;
  if ( (a5 & 4) != 0 && ((v5 & 0x3F) != 0 || (v8 & 0x3F) != 0) )
    return 3221226612LL;
  if ( (a5 & 8) != 0 )
  {
    v15 = (unsigned __int64 *)MiReservePtes(&stru_140E366D8.WaitBlockList, 1LL);
    v50 = v15;
    if ( !v15 )
      return 3221225626LL;
    v11 = v51;
  }
  else
  {
    v15 = 0LL;
    v50 = 0LL;
  }
  v16 = (unsigned __int64)a2 < 0x7FFFFFFF0000LL;
  if ( (*(_QWORD *)v12 & 1) != 0 )
  {
    if ( !v15 )
    {
      MiDirtyPte(v11, v12);
      v20 = Size;
LABEL_39:
      v30 = 0;
      v49 = 0LL;
      BYTE1(v49) = v16;
      v31 = v45;
      if ( v45 )
      {
        LOBYTE(v49) = 0;
      }
      else
      {
        LOBYTE(v49) = 1;
        v31 = a1;
      }
      v32 = (void *)(v53 + v31);
      if ( v14 )
      {
        if ( v16 )
          RtlCopyFromUserNonTemporal(v32, a2, v20);
        else
          RtlCopyMemoryNonTemporal(v32, a2, v20);
      }
      else if ( v16 )
      {
        RtlCopyFromUser(v32, a2, v20);
      }
      else
      {
        RtlCopyVolatileMemory(v32, a2, v20);
      }
      goto LABEL_48;
    }
    v45 = MiMapSystemCachePage(v15, v12, v13);
    if ( v45 )
      goto LABEL_59;
  }
  if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
    RtlReadUCharFromUser(a2);
  MiGetContainingPageTable(v12);
  v17 = *(_QWORD *)v12;
  if ( (*(_QWORD *)v12 & 1) != 0 && (!v15 || (v45 = MiMapSystemCachePage(v15, v12, v13)) != 0) )
  {
LABEL_59:
    v20 = Size;
    goto LABEL_39;
  }
  PrototypePteDirect = (unsigned __int64 *)MiGetPrototypePteDirect(v17);
  do
  {
LABEL_13:
    while ( 2 )
    {
      v20 = Size;
      while ( 1 )
      {
        v21 = 0LL;
        LOBYTE(v18) = 17;
        v22 = *PrototypePteDirect;
        v44 = v22;
        if ( (v22 & 1) == 0 && (v22 & 0x400) != 0 )
          goto LABEL_16;
        v21 = MiLockProtoPoolPageForce((ULONG_PTR)PrototypePteDirect);
        v25 = MiLockLeafPage(PrototypePteDirect, 2);
        v26 = v25;
        v47 = v25;
        v27 = *PrototypePteDirect;
        v44 = *PrototypePteDirect;
        if ( v25 )
          break;
        v18 = 17LL;
        v20 = Size;
LABEL_16:
        if ( v21 )
          MiUnlockProtoPoolPage(v21, v18);
        if ( (*(_DWORD *)(v52 + 56) & 0x30000000) != 0 )
        {
          v30 = MmAccessFault(0LL, a1);
          v42 = v30;
          if ( v30 < 0 )
            goto LABEL_48;
        }
        else
        {
          PageAvoidRead = MiMakePageAvoidRead((ULONG_PTR)PrototypePteDirect, a2, v56, v20, v13, &v44, &v42);
          if ( !PageAvoidRead )
            return v42;
          v41 = PageAvoidRead - 1;
          if ( v41 )
          {
            if ( v41 != 1 )
            {
              v27 = v44;
              goto LABEL_37;
            }
            goto LABEL_38;
          }
        }
      }
      v43 = 0;
      v42 = 0;
      if ( (v27 & 1) != 0 )
      {
        *(_QWORD *)(v25 + 24) = ((*(_QWORD *)(v25 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ (*(_QWORD *)(v25 + 24) ^ ((*(_QWORD *)(v25 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0xC000000000000000uLL;
        v29 = 0;
        LODWORD(v44) = 0;
      }
      else
      {
        if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v25 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
        {
          v26 = MiHandleSpecialPurposeMemoryCachedFault(0LL, (__int64)(v12 << 25) >> 16, PrototypePteDirect, v25);
          v47 = v26;
          if ( !v26 )
          {
            MiUnlockProtoPoolPage(v21, 17LL);
            continue;
          }
          v27 = *PrototypePteDirect;
        }
        v28 = *(_QWORD *)(v26 + 16) >> 16;
        if ( (*(_QWORD *)(v26 + 16) & 0x400LL) != 0 )
          LOBYTE(v28) = *(_QWORD *)(v26 + 16) >> 2;
        if ( (v28 & 1) != 0 )
        {
          ListEntry = (PSLIST_ENTRY)MiMakeTransitionHeatBatch(v26, 0LL, 0LL);
          if ( ListEntry == (PSLIST_ENTRY)-1LL )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiUnlockProtoPoolPage(v21, 17LL);
            MiReplenishTransitionPageHeatList();
            ListEntry = 0LL;
            continue;
          }
        }
        v29 = MiUnlinkStandbyPfn(PrototypePteDirect, v13);
        LODWORD(v44) = v29;
        v26 = v47;
        if ( v29 )
        {
          v33 = v43;
          if ( v29 == 3 )
            v33 = -1073740023;
          v43 = v33;
          v42 = v33;
        }
        else
        {
          v27 = *PrototypePteDirect;
        }
      }
      break;
    }
    if ( v15 && !v29 )
    {
      locked = MiAddLockedPageCharge(v26, 0LL);
      v35 = v43;
      if ( !locked )
        v35 = -1073741670;
      v43 = v35;
      v42 = v35;
      v26 = v47;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockProtoPoolPage(v21, 17LL);
    if ( ListEntry )
    {
      MiIssuePageHeatList(ListEntry);
      MiFreeTransitionPageHeatList(ListEntry);
      ListEntry = 0LL;
    }
    v30 = v43;
    if ( v43 < 0 )
      break;
    if ( (_DWORD)v44 == 1 )
      goto LABEL_13;
    if ( (_DWORD)v44 != 2 )
    {
      if ( v15 )
        v45 = MiMapFrame((unsigned __int64)v15, (v27 >> 12) & 0xFFFFFFFFFFLL);
LABEL_37:
      MiMakeModifiedSystemCachePteValid(v51, v12, v27, v13);
      v20 = Size;
LABEL_38:
      v14 = v46;
      goto LABEL_39;
    }
    v30 = MmAccessFault(0LL, a1);
    v42 = v30;
  }
  while ( v30 >= 0 );
LABEL_48:
  if ( v15 )
  {
    v36 = *v15;
    MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, v15, 1u);
    if ( (v36 & 1) != 0 )
    {
      v39 = 48 * ((v36 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v37) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v37);
      }
      v56 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v56);
        while ( *(__int64 *)(v39 + 24) < 0 );
      }
      MiRemoveLockedPageChargeAndDecRef(v39, v37, v38);
      _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
    }
  }
  return (unsigned int)v30;
}
