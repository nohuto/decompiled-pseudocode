/*
 * XREFs of CmQueryKey @ 0x1408C5660
 * Callers:
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140477290 (CmpFreeTransientPoolWithTag.c)
 *     CmQueryLayeredKey @ 0x1404922D0 (CmQueryLayeredKey.c)
 *     PsGetCurrentThreadProcess @ 0x1404AA5F0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpQueryKeyData @ 0x1408C0840 (CmpQueryKeyData.c)
 *     CmpQueryKeyDataFromCache @ 0x1408C0940 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x1408C27F0 (CmpQueryKeyDataFromNode.c)
 *     CmpConstructName @ 0x1408C53A0 (CmpConstructName.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     CmpTransSearchAddTrans @ 0x1408EC150 (CmpTransSearchAddTrans.c)
 *     CmpTransReferenceTransaction @ 0x1408EE304 (CmpTransReferenceTransaction.c)
 *     CmpIsKcbInsideVirtualizedHive @ 0x1408F40F0 (CmpIsKcbInsideVirtualizedHive.c)
 *     CmpIsSystemEntity @ 0x1408F4110 (CmpIsSystemEntity.c)
 *     SeCaptureSubjectContextEx @ 0x140920670 (SeCaptureSubjectContextEx.c)
 *     CmpUnlockTwoKcbs @ 0x14097E9E0 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x14097EA80 (CmpLockTwoKcbsShared.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     CmGetKeyFlags @ 0x140AEB1EC (CmGetKeyFlags.c)
 *     CmVirtualKCBToRealPath @ 0x140AF49A0 (CmVirtualKCBToRealPath.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140AFF7BC (CmEnumerateValueKeyFromMergedView.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140B40958 (CmpFindSubKeyByNumberFromMergedView.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C58750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmQueryKey(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4, unsigned int a5, __int64 a6)
{
  __int64 v10; // r13
  __int64 v11; // rcx
  ULONG_PTR v12; // r15
  int KeyData; // edi
  __int64 v14; // rcx
  ULONG_PTR v15; // rcx
  __int64 CellFlat; // rax
  __int64 v17; // rcx
  int v18; // eax
  unsigned int KeyFlags; // eax
  unsigned int *v20; // rcx
  int v21; // edx
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPROCESS *CurrentThreadProcess; // rax
  int v24; // edi
  bool v25; // r9
  unsigned int *v26; // rdx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  int v29; // r8d
  unsigned int v30; // r8d
  unsigned int v31; // ecx
  unsigned int v32; // r8d
  unsigned int v33; // r8d
  unsigned int *v34; // r15
  int v35; // r8d
  __int64 v36; // rcx
  __int64 v37; // r15
  __int64 v38; // rdx
  const void **v39; // rax
  unsigned int v40; // ecx
  unsigned int *v41; // r15
  __int64 v42; // rcx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned int LayeredKey; // ebx
  __int64 v51; // rcx
  __int64 v52; // rcx
  unsigned int *v53; // [rsp+58h] [rbp-120h] BYREF
  __int64 v54; // [rsp+60h] [rbp-118h] BYREF
  __int64 v55; // [rsp+68h] [rbp-110h] BYREF
  __int64 v56[2]; // [rsp+70h] [rbp-108h] BYREF
  unsigned int *v57; // [rsp+80h] [rbp-F8h] BYREF
  const void **v58; // [rsp+88h] [rbp-F0h]
  __int64 v59; // [rsp+90h] [rbp-E8h]
  __int64 v60; // [rsp+98h] [rbp-E0h]
  __int128 v61; // [rsp+A0h] [rbp-D8h] BYREF
  PVOID P[2]; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+C8h] [rbp-B0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-A8h] BYREF
  __int128 v66; // [rsp+F0h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp-78h] BYREF

  v53 = a4;
  v59 = a1;
  v60 = a1;
  v56[1] = a2;
  v57 = a4;
  v55 = a6;
  v58 = 0LL;
  v10 = 0LL;
  v54 = 0LL;
  *(_OWORD *)P = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v61 = 0LL;
  CmpInitializeDelayDerefContext(&v61);
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v11);
  v12 = *(_QWORD *)(a1 + 8);
  if ( !*(_WORD *)(v12 + 66) )
  {
    if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
      goto LABEL_4;
    CmpLockKcbShared(*(_QWORD *)(a1 + 8));
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      KeyData = -1073740763;
      if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
        KeyData = -1073741444;
      CmpUnlockKcb(v12);
      CmpUnlockRegistry(v52);
      CmpDetachFromRegistryProcess(&ApcState);
      return (unsigned int)KeyData;
    }
    CmpUnlockKcb(v12);
    v56[0] = 0LL;
    v45 = *(_QWORD *)(a1 + 56);
    v54 = v45;
    if ( !v45 && !*(_QWORD *)(a1 + 64) )
    {
      KeyData = -1072103422;
      CmpUnlockRegistry(v44);
      CmpDetachFromRegistryProcess(&ApcState);
      return (unsigned int)KeyData;
    }
    v46 = *(_QWORD *)(a1 + 8) ^ 1LL;
    if ( (*(_QWORD *)(a1 + 8) & 1) == 0 )
      v46 = *(_QWORD *)(a1 + 8);
    v47 = *(_QWORD *)(v46 + 32);
    if ( (v45 & 1) != 0 )
    {
      v56[0] = v45 & 0xFFFFFFFFFFFFFFFEuLL;
      KeyData = CmpTransReferenceTransaction(v45);
      if ( KeyData < 0 )
      {
        v48 = 0LL;
      }
      else
      {
        if ( *(_QWORD *)(v56[0] + 16) )
        {
          v10 = *(_QWORD *)(v56[0] + 16);
          KeyData = 0;
        }
        else
        {
          KeyData = -1072103422;
        }
        v48 = v54;
      }
      if ( v48 )
        ObfDereferenceObject((PVOID)(v48 & 0xFFFFFFFFFFFFFFFEuLL));
    }
    else
    {
      v49 = *(_QWORD *)(v47 + 4160);
      if ( !v49 )
      {
        KeyData = -1072103419;
        CmpUnlockRegistry(v46);
        CmpDetachFromRegistryProcess(&ApcState);
        return (unsigned int)KeyData;
      }
      KeyData = CmpTransSearchAddTrans(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), v49, v47, 0, (__int64)v56);
      v10 = v56[0];
    }
    if ( KeyData >= 0 )
    {
      v54 = v10;
LABEL_4:
      if ( a2 )
      {
        v12 = *(_QWORD *)(a2 + 8);
        CmpLockTwoKcbsShared(v12, *(_QWORD *)(a1 + 8));
      }
      else
      {
        CmpLockKcbShared(*(_QWORD *)(a1 + 8));
      }
      if ( a3 != 3 )
      {
        if ( a2 && (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v10)
          || (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v10) )
        {
          v18 = -1073741444;
          if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
            v18 = -1073740763;
          KeyData = v18;
          goto LABEL_115;
        }
        switch ( a3 )
        {
          case 5u:
            *(_DWORD *)v55 = 12;
            if ( a5 < 0xC )
            {
              KeyData = -1073741789;
            }
            else
            {
              KeyFlags = CmGetKeyFlags(v12, v10);
              v20 = v53;
              *v53 = KeyFlags;
              v20[1] = 0;
              v21 = 0;
              if ( *(int *)(v12 + 40) < 0 )
              {
                v21 = 1;
                v20[1] = 1;
              }
              if ( (*(_DWORD *)(v12 + 184) & 0x100000) != 0 )
                v20[1] = v21 | 2;
              v20[2] = (*(_DWORD *)(v12 + 184) >> 4) & 0xF;
              KeyData = 0;
            }
            break;
          case 6u:
            memset(&SubjectContext, 0, sizeof(SubjectContext));
            CurrentThread = KeGetCurrentThread();
            CurrentThreadProcess = PsGetCurrentThreadProcess();
            SeCaptureSubjectContextEx(CurrentThread, CurrentThreadProcess, &SubjectContext);
            v24 = 4;
            *(_DWORD *)v55 = 4;
            if ( a5 >= 4 )
            {
              v25 = CmpVEEnabled
                 && (*(_DWORD *)(v12 + 184) & 0x2000000) == 0
                 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive(v12)
                 && (unsigned __int8)CmpIsSystemEntity((unsigned __int8)KeGetCurrentThread()->PreviousMode) == 0;
              v26 = v53;
              v27 = v25 | *v53 & 0xFFFFFFFE;
              *v53 = v27;
              v28 = v27 & 0xFFFFFFFD;
              *v26 = v28;
              v29 = v28;
              if ( v25 && (*(_DWORD *)(v12 + 184) & 0x20) == 0 )
              {
                v29 = v28 | 2;
                *v26 = v28 | 2;
              }
              if ( !CmpVEEnabled || (*(_DWORD *)(v12 + 184) & 0x1000000) == 0 )
                v24 = 0;
              v30 = v24 | v29 & 0xFFFFFFFB;
              *v26 = v30;
              v31 = v30 & 0xFFFFFFF7 | (*(_DWORD *)(v12 + 184) >> 22) & 8;
              *v26 = v31;
              *v26 = v31 & 0xFFFFFFEF | (*(_DWORD *)(v12 + 184) >> 19) & 0x10;
              KeyData = 0;
            }
            else
            {
              KeyData = -1073741789;
            }
            SeReleaseSubjectContext(&SubjectContext);
            break;
          case 8u:
            *(_DWORD *)v55 = 4;
            if ( a5 >= 4 )
            {
              v32 = *v53;
              if ( (*(_DWORD *)(*(_QWORD *)(v12 + 32) + 4120LL) & 1) != 0 )
                v33 = v32 & 0xFFFFFFFE;
              else
                v33 = v32 | 1;
              *v53 = v33;
              KeyData = 0;
LABEL_16:
              if ( a2 )
              {
                if ( (((a3 - 3) & 0xFFFFFFFC) != 0 || a3 == 4)
                  && (v36 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 168LL), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) < v36) )
                {
                  v34 = v53;
                  *(_QWORD *)v53 = v36;
                }
                else
                {
                  v34 = v53;
                }
                if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
                {
                  LODWORD(v56[0]) = 0;
                  v63 = 0LL;
                  LODWORD(v53) = 0;
                  memset(&SubjectContext, 0, sizeof(SubjectContext));
                  v66 = 0LL;
                  if ( (unsigned int)CmpFindSubKeyByNumberFromMergedView(
                                       *(_QWORD *)(a2 + 8),
                                       *(_QWORD *)(a1 + 8),
                                       -1,
                                       v10,
                                       (__int64)&v61,
                                       (__int64)&v63,
                                       (__int64)&v53,
                                       0LL,
                                       (__int64)v56) == -2147483622 )
                  {
                    if ( a3 == 2 )
                      v34[5] = v56[0];
                    else
                      v34[3] = v56[0];
                  }
                  LOBYTE(v35) = 1;
                  if ( (unsigned int)CmEnumerateValueKeyFromMergedView(a1, a2, v35, -1, 0, 0LL, 0, 0LL, (__int64)v56) == -2147483622 )
                  {
                    if ( a3 == 2 )
                      v34[8] = v56[0];
                    else
                      v34[5] = v56[0];
                  }
                  KeyData = CmpQueryKeyData(*(_QWORD *)(a1 + 8), a3, (int)&SubjectContext, 48, v55, v10);
                  if ( (int)(KeyData + 0x80000000) < 0 || KeyData == -2147483643 )
                  {
                    if ( a3 == 2 )
                    {
                      if ( LODWORD(SubjectContext.ProcessAuditId) > v34[6] )
                        v34[6] = (unsigned int)SubjectContext.ProcessAuditId;
                      if ( DWORD1(v66) > v34[9] )
                        v34[9] = DWORD1(v66);
                      if ( DWORD2(v66) > v34[10] )
                        v34[10] = DWORD2(v66);
                    }
                    else
                    {
                      if ( LODWORD(SubjectContext.PrimaryToken) > v34[4] )
                        v34[4] = (unsigned int)SubjectContext.PrimaryToken;
                      if ( LODWORD(SubjectContext.ProcessAuditId) > v34[6] )
                        v34[6] = (unsigned int)SubjectContext.ProcessAuditId;
                      if ( HIDWORD(SubjectContext.ProcessAuditId) > v34[7] )
                        v34[7] = HIDWORD(SubjectContext.ProcessAuditId);
                    }
                  }
                }
              }
              else if ( CmpVEEnabled )
              {
                v14 = *(_QWORD *)(a1 + 8);
                if ( (*(_DWORD *)(v14 + 184) & 0x1000000) != 0 && ((a3 - 2) & 0xFFFFFFFD) == 0 )
                {
                  LODWORD(v57) = 0;
                  v64 = 0LL;
                  LODWORD(v55) = 0;
                  KeyData = CmpFindSubKeyByNumberFromMergedView(
                              v14,
                              0,
                              -1,
                              v10,
                              (__int64)&v61,
                              (__int64)&v64,
                              (__int64)&v55,
                              0LL,
                              (__int64)&v57);
                  if ( KeyData == -2147483622 )
                  {
                    if ( a3 == 2 )
                      v53[5] = (unsigned int)v57;
                    else
                      v53[3] = (unsigned int)v57;
                    KeyData = 0;
                  }
                }
              }
              goto LABEL_115;
            }
            KeyData = -1073741789;
LABEL_115:
            if ( a2 )
              CmpUnlockTwoKcbs(*(_QWORD *)(a2 + 8), *(_QWORD *)(v60 + 8));
            else
              CmpUnlockKcb(*(_QWORD *)(v60 + 8));
            CmpDrainDelayDerefContext((_QWORD **)&v61);
            CmpUnlockRegistry(v42);
            CmpDetachFromRegistryProcess(&ApcState);
            if ( P[1] )
            {
              ExFreePool(P[1]);
            }
            else if ( v58 )
            {
              CmpFreeTransientPoolWithTag(v58, 0x624E4D43u);
            }
            return (unsigned int)KeyData;
          default:
            v54 = 0xFFFFFFFFLL;
            if ( a3 == 4 )
            {
              KeyData = CmpQueryKeyDataFromCache(v12, 4, (__int64)v53, a5, (_DWORD *)v55, v10);
            }
            else
            {
              v15 = *(_QWORD *)(v12 + 32);
              if ( (*(_BYTE *)(v15 + 140) & 1) != 0 )
                CellFlat = HvpGetCellFlat(v15, *(_DWORD *)(v12 + 40), (unsigned int *)&v54);
              else
                CellFlat = HvpGetCellPaged(v15);
              if ( CellFlat )
              {
                KeyData = CmpQueryKeyDataFromNode(
                            *(_QWORD *)(v12 + 32),
                            CellFlat,
                            a3,
                            (__int64)v53,
                            a5,
                            (_DWORD *)v55,
                            v12,
                            v10);
                v17 = *(_QWORD *)(v12 + 32);
                if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v17, &v54);
                else
                  HvpReleaseCellPaged(v17, &v54);
              }
              else
              {
                KeyData = -1073741670;
              }
            }
            break;
        }
LABEL_15:
        if ( KeyData >= 0 )
          goto LABEL_16;
        goto LABEL_115;
      }
      v37 = *(_QWORD *)(a1 + 8);
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v10) )
      {
        if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
        {
          KeyData = -1073740763;
          goto LABEL_115;
        }
        KeyData = -1073741444;
      }
      else
      {
        KeyData = 0;
      }
      if ( !*(_QWORD *)(v37 + 80) )
      {
LABEL_90:
        KeyData = -1073741670;
        goto LABEL_115;
      }
      if ( CmpVEEnabled && (*(_DWORD *)(v37 + 184) & 0x1000000) != 0 )
      {
        if ( (int)CmVirtualKCBToRealPath(v37, P) < 0 )
        {
LABEL_104:
          if ( v58 )
          {
            v40 = *(unsigned __int16 *)v58;
            *(_DWORD *)v55 = v40 + 4;
            if ( a5 < 4 )
            {
              KeyData = -1073741789;
            }
            else
            {
              v41 = v53;
              *v53 = v40;
              if ( a5 - 4 < v40 )
              {
                v40 = a5 - 4;
                KeyData = -2147483643;
              }
              memmove(v41 + 1, v58[1], v40);
            }
            goto LABEL_15;
          }
          goto LABEL_90;
        }
        v39 = (const void **)P;
      }
      else
      {
        v39 = (const void **)CmpConstructName(v37, v38);
      }
      v58 = v39;
      goto LABEL_104;
    }
    CmpUnlockRegistry(v48);
    CmpDetachFromRegistryProcess(&ApcState);
    return (unsigned int)KeyData;
  }
  LayeredKey = CmQueryLayeredKey(a1, a3, a4, a5, (unsigned int *)v55);
  CmpUnlockRegistry(v51);
  CmpDetachFromRegistryProcess(&ApcState);
  return LayeredKey;
}
