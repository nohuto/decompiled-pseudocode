/*
 * XREFs of CmpDoBuildVirtualStack @ 0x140859914
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140859F40 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpCopySaclToVirtualKey @ 0x14085AD20 (CmpCopySaclToVirtualKey.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpUnlockKcbStack @ 0x1408BC3E0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408BC470 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x1408C6254 (CmpUnlockHashEntryByKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D0B78 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpHashUnicodeComponent @ 0x1408D1470 (CmpHashUnicodeComponent.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     CmpWalkOneLevel @ 0x1408D5620 (CmpWalkOneLevel.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1408DF154 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1408DF204 (CmpUnlockTwoSecurityCaches.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     SeDeleteAccessState @ 0x1408F16E0 (SeDeleteAccessState.c)
 *     CmpInitializeParseContext @ 0x14097C5D0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14097C850 (CmpCleanupParseContext.c)
 *     CmpStartKcbStack @ 0x140981BC0 (CmpStartKcbStack.c)
 *     CmpCleanupKcbStack @ 0x140982520 (CmpCleanupKcbStack.c)
 *     CmpAssignSecurityToKcb @ 0x140A5B410 (CmpAssignSecurityToKcb.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140AC859C (SeCreateAccessStateFromSubjectContext.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpDoBuildVirtualStack(__int64 a1, int a2, ULONG_PTR a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v7; // r13
  int *v8; // rdi
  ULONG_PTR v9; // rsi
  __int64 v10; // rdx
  int AccessStateFromSubjectContext; // ebx
  __int64 i; // r12
  __int64 v13; // rax
  int *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rdx
  ULONG_PTR v22; // rdx
  unsigned int v23; // r14d
  ULONG_PTR v24; // rcx
  ULONG_PTR v25; // rcx
  __int64 CellFlat; // rax
  __int64 v27; // r14
  ULONG_PTR v28; // rdi
  int v29; // ebx
  __int64 CellPaged; // rax
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  ULONG_PTR v35; // [rsp+38h] [rbp-C8h]
  char v36; // [rsp+60h] [rbp-A0h]
  _BYTE v37[15]; // [rsp+61h] [rbp-9Fh] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h] BYREF
  int v40[2]; // [rsp+80h] [rbp-80h] BYREF
  int v41[2]; // [rsp+88h] [rbp-78h]
  __int64 v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  int v44[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v45; // [rsp+B0h] [rbp-50h]
  int v46[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v47; // [rsp+D0h] [rbp-30h]
  ULONG_PTR BugCheckParameter3; // [rsp+E0h] [rbp-20h]
  _DWORD v49[6]; // [rsp+F0h] [rbp-10h] BYREF
  int v50; // [rsp+108h] [rbp+8h]
  int v51; // [rsp+190h] [rbp+90h]
  struct _KAPC_STATE ApcState; // [rsp+198h] [rbp+98h] BYREF
  _BYTE v53[160]; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v54[224]; // [rsp+360h] [rbp+260h] BYREF

  v5 = a1;
  BugCheckParameter3 = a3;
  *(_DWORD *)&v37[3] = a2;
  v42 = a1;
  memset_0(v49, 0, 0x1D0uLL);
  v7 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  memset_0(v53, 0, sizeof(v53));
  memset_0(v54, 0, sizeof(v54));
  v37[0] = 0;
  v8 = 0LL;
  *(_QWORD *)v40 = 0LL;
  *(_QWORD *)&v37[7] = 0LL;
  v9 = 0LL;
  v36 = 0;
  v43 = 0LL;
  HvpGetCellContextInitialize(&v38);
  HvpGetCellContextInitialize(&v39);
  CmpInitializeParseContext(v49);
  *(_OWORD *)v44 = 0LL;
  HIWORD(v44[0]) = -1;
  *(_OWORD *)v46 = 0LL;
  HIWORD(v46[0]) = -1;
  v45 = 0LL;
  v47 = 0LL;
  CmpAttachToRegistryProcess(&ApcState);
  v51 |= 1u;
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a5,
                                    (unsigned int)v53,
                                    (unsigned int)v54,
                                    4,
                                    (__int64)CmKeyObjectType + 76);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    v36 = 1;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)&v37[3]; i = (unsigned int)(i + 1) )
    {
      v50 = 0;
      v8 = v44;
      v13 = v5 + 48 * i;
      v14 = v46;
      *(_OWORD *)v46 = 0LL;
      HIWORD(v46[0]) = -1;
      *(_OWORD *)v44 = 0LL;
      HIWORD(v44[0]) = -1;
      *(_QWORD *)&v37[7] = v13;
      v15 = *(_QWORD *)(v13 + 16);
      v47 = 0LL;
      *(_QWORD *)v41 = v15;
      v45 = 0LL;
      AccessStateFromSubjectContext = CmpStartKcbStack(v46, *(unsigned __int16 *)(v15 + 66));
      if ( AccessStateFromSubjectContext < 0 )
        goto LABEL_41;
      AccessStateFromSubjectContext = CmpStartKcbStackForTopLayerKcb(v44, *(_QWORD *)v41);
      if ( AccessStateFromSubjectContext < 0 )
        goto LABEL_41;
      v16 = *(_QWORD *)&v37[7];
      v17 = CmpHashUnicodeComponent(*(_QWORD *)&v37[7]);
      LODWORD(v35) = v17 + 37 * *(_DWORD *)(*(_QWORD *)v41 + 16LL);
      v18 = CmpWalkOneLevel(v41[0], (int)v44, (int)v40, (int)v46, (__int64)v37, v16, v17, v35, 0LL, 1, (__int64)v49);
      v9 = *(_QWORD *)v40;
      AccessStateFromSubjectContext = v18;
      if ( v18 < 0 )
        goto LABEL_41;
      if ( *(_DWORD *)(*(_QWORD *)v40 + 40LL) == -1 )
      {
        v19 = *(_DWORD *)&v37[7];
        if ( *(_DWORD *)(*(_QWORD *)&v37[7] + 40LL) == 1 || *(int *)(*(_QWORD *)v41 + 40LL) < 0 )
          v50 = 1;
        v49[0] = 1;
        CmpLockKcbStackTopExclusiveRestShared(v44);
        CmpLockKcbStackTopExclusiveRestShared(v46);
        AccessStateFromSubjectContext = CmpCreateChild(
                                          (unsigned int)v44,
                                          (unsigned int)v46,
                                          (unsigned int)v53,
                                          v19,
                                          (__int64)v49,
                                          512,
                                          3,
                                          0,
                                          0LL);
        if ( AccessStateFromSubjectContext < 0 )
        {
          CmpUnlockKcbStack(v46);
          CmpUnlockKcbStack(v44);
LABEL_41:
          if ( v9 )
            CmpDereferenceKeyControlBlock(v9);
          if ( v14 )
            CmpCleanupKcbStack(v14);
          if ( v8 )
            CmpCleanupKcbStack(v8);
          goto LABEL_47;
        }
        CmpUnlockKcbStack(v46);
        CmpUnlockKcbStack(v44);
      }
      CmpUnlockHashEntryByKcb(v9);
      v20 = *(_QWORD *)&v37[7];
      v5 = v42;
      *(_QWORD *)(*(_QWORD *)&v37[7] + 24LL) = v9;
      *(_DWORD *)(v20 + 36) = *(_DWORD *)(v9 + 40);
      if ( (unsigned int)i < *(_DWORD *)&v37[3] - 1 )
      {
        v21 = 6LL * (unsigned int)(i + 1);
        *(_QWORD *)(v5 + 8 * v21 + 16) = v9;
        *(_DWORD *)(v5 + 8 * v21 + 32) = *(_DWORD *)(v9 + 40);
      }
      v9 = 0LL;
      *(_QWORD *)v40 = 0LL;
      CmpCleanupKcbStack(v46);
      CmpCleanupKcbStack(v44);
    }
    _mm_lfence();
    v22 = *(unsigned int *)(a4 + 40);
    v23 = *(_DWORD *)(v5 + 48LL * (unsigned int)(*(_DWORD *)&v37[3] - 1) + 36);
    v24 = *(_QWORD *)(a4 + 32);
    *(_QWORD *)&v37[7] = *(_QWORD *)(v42 + 48LL * (unsigned int)(*(_DWORD *)&v37[3] - 1) + 24);
    *(_DWORD *)&v37[3] = v23;
    v8 = 0LL;
    AccessStateFromSubjectContext = HvpMarkCellDirty(v24, v22);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      AccessStateFromSubjectContext = HvpMarkCellDirty(BugCheckParameter3, v23);
      if ( AccessStateFromSubjectContext >= 0 )
      {
        v25 = *(_QWORD *)(a4 + 32);
        if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v25, *(unsigned int *)(a4 + 40), &v38);
        else
          CellFlat = HvpGetCellPaged(v25);
        v43 = CellFlat;
        v27 = CellFlat;
        if ( !CellFlat )
        {
          AccessStateFromSubjectContext = -1073741670;
          goto LABEL_48;
        }
        v28 = BugCheckParameter3;
        v29 = *(_DWORD *)&v37[3];
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)&v37[3], &v39);
        else
          CellPaged = HvpGetCellPaged(BugCheckParameter3);
        v7 = CellPaged;
        if ( !CellPaged )
        {
          AccessStateFromSubjectContext = -1073741670;
          v8 = 0LL;
LABEL_29:
          v14 = 0LL;
          goto LABEL_33;
        }
        CmpLockTwoSecurityCachesExclusiveShared(v28, *(_QWORD *)(a4 + 32));
        AccessStateFromSubjectContext = CmpCopySaclToVirtualKey(*(_QWORD *)(a4 + 32), v29);
        CmpUnlockTwoSecurityCaches(v28, *(_QWORD *)(a4 + 32));
        v8 = 0LL;
        if ( AccessStateFromSubjectContext >= 0 )
        {
          v31 = *(_QWORD *)&v37[7];
          CmpAssignSecurityToKcb(*(ULONG_PTR *)&v37[7], *(unsigned int *)(v7 + 44), 0);
          *(_WORD *)(v31 + 186) |= 0x100u;
          *(_WORD *)(v7 + 2) |= 0x100u;
          *(_WORD *)(a4 + 186) |= 0x80u;
          *(_WORD *)(v27 + 2) |= 0x80u;
          AccessStateFromSubjectContext = 0;
          goto LABEL_29;
        }
      }
    }
  }
  v14 = 0LL;
  if ( v43 )
  {
LABEL_33:
    v32 = *(_QWORD *)(a4 + 32);
    if ( (*(_BYTE *)(v32 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v32, &v38);
    else
      HvpReleaseCellPaged(v32, &v38);
  }
  if ( v7 )
  {
    v33 = *(_QWORD *)(*(_QWORD *)&v37[7] + 32LL);
    if ( (*(_BYTE *)(v33 + 140) & 1) == 0 )
    {
      HvpReleaseCellPaged(v33, &v39);
      goto LABEL_41;
    }
    HvpReleaseCellFlat(v33, &v39);
  }
LABEL_47:
  if ( v36 )
LABEL_48:
    SeDeleteAccessState(v53);
  if ( (v51 & 1) != 0 )
  {
    CmpDetachFromRegistryProcess(&ApcState);
    v51 &= ~1u;
  }
  LOBYTE(v10) = 1;
  CmpCleanupParseContext(v49, v10);
  return (unsigned int)AccessStateFromSubjectContext;
}
