/*
 * XREFs of CmQueryKey @ 0x1408CBC30
 * Callers:
 *     NtQueryKey @ 0x140924BC0 (NtQueryKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     CmQueryLayeredKey @ 0x14048BE20 (CmQueryLayeredKey.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpQueryKeyData @ 0x1408C6E10 (CmpQueryKeyData.c)
 *     CmpQueryKeyDataFromCache @ 0x1408C6F10 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x1408C8DC0 (CmpQueryKeyDataFromNode.c)
 *     CmpConstructName @ 0x1408CB970 (CmpConstructName.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpTransSearchAddTrans @ 0x1408F2710 (CmpTransSearchAddTrans.c)
 *     CmpTransReferenceTransaction @ 0x1408F48C4 (CmpTransReferenceTransaction.c)
 *     CmpIsKcbInsideVirtualizedHive @ 0x1408FA6B0 (CmpIsKcbInsideVirtualizedHive.c)
 *     CmpIsSystemEntity @ 0x1408FA6D0 (CmpIsSystemEntity.c)
 *     SeCaptureSubjectContextEx @ 0x1408FBAB0 (SeCaptureSubjectContextEx.c)
 *     CmpUnlockTwoKcbs @ 0x1409409F0 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x140940A90 (CmpLockTwoKcbsShared.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     CmGetKeyFlags @ 0x140AEE0F8 (CmGetKeyFlags.c)
 *     CmVirtualKCBToRealPath @ 0x140AF7040 (CmVirtualKCBToRealPath.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140B0144C (CmEnumerateValueKeyFromMergedView.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140B42968 (CmpFindSubKeyByNumberFromMergedView.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmQueryKey(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4, unsigned int a5, __int64 a6)
{
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR v15; // r15
  int KeyData; // edi
  __int64 v17; // rcx
  ULONG_PTR v18; // rcx
  __int64 CellFlat; // rax
  __int64 v20; // rcx
  int v21; // eax
  unsigned int KeyFlags; // eax
  unsigned int *v23; // rcx
  int v24; // edx
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPROCESS *CurrentThreadProcess; // rax
  int v27; // edi
  bool v28; // r9
  unsigned int *v29; // rdx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  int v32; // r8d
  unsigned int v33; // r8d
  unsigned int v34; // ecx
  unsigned int v35; // r8d
  unsigned int v36; // r8d
  unsigned int *v37; // r15
  int v38; // r8d
  __int64 v39; // rcx
  __int64 v40; // r15
  __int64 v41; // rdx
  const void **v42; // rax
  unsigned int v43; // ecx
  unsigned int *v44; // r15
  __int64 v45; // rcx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned int LayeredKey; // ebx
  __int64 v54; // rcx
  __int64 v55; // rcx
  unsigned int *v56; // [rsp+58h] [rbp-120h] BYREF
  __int64 v57; // [rsp+60h] [rbp-118h] BYREF
  __int64 v58; // [rsp+68h] [rbp-110h] BYREF
  __int64 v59[2]; // [rsp+70h] [rbp-108h] BYREF
  unsigned int *v60; // [rsp+80h] [rbp-F8h] BYREF
  const void **v61; // [rsp+88h] [rbp-F0h]
  __int64 v62; // [rsp+90h] [rbp-E8h]
  __int64 v63; // [rsp+98h] [rbp-E0h]
  __int128 v64; // [rsp+A0h] [rbp-D8h] BYREF
  PVOID P[2]; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v67; // [rsp+C8h] [rbp-B0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-A8h] BYREF
  __int128 v69; // [rsp+F0h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp-78h] BYREF

  v56 = a4;
  v62 = a1;
  v63 = a1;
  v59[1] = a2;
  v60 = a4;
  v58 = a6;
  v61 = 0LL;
  v10 = 0LL;
  v57 = 0LL;
  *(_OWORD *)P = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v64 = 0LL;
  CmpInitializeDelayDerefContext(&v64);
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v12, v11, v13, v14);
  v15 = *(_QWORD *)(a1 + 8);
  if ( !*(_WORD *)(v15 + 66) )
  {
    if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
      goto LABEL_4;
    CmpLockKcbShared(*(_QWORD *)(a1 + 8));
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      KeyData = -1073740763;
      if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
        KeyData = -1073741444;
      CmpUnlockKcb(v15);
      CmpUnlockRegistry(v55);
      CmpDetachFromRegistryProcess(&ApcState);
      return (unsigned int)KeyData;
    }
    CmpUnlockKcb(v15);
    v59[0] = 0LL;
    v48 = *(_QWORD *)(a1 + 56);
    v57 = v48;
    if ( !v48 && !*(_QWORD *)(a1 + 64) )
    {
      KeyData = -1072103422;
      CmpUnlockRegistry(v47);
      CmpDetachFromRegistryProcess(&ApcState);
      return (unsigned int)KeyData;
    }
    v49 = *(_QWORD *)(a1 + 8) ^ 1LL;
    if ( (*(_QWORD *)(a1 + 8) & 1) == 0 )
      v49 = *(_QWORD *)(a1 + 8);
    v50 = *(_QWORD *)(v49 + 32);
    if ( (v48 & 1) != 0 )
    {
      v59[0] = v48 & 0xFFFFFFFFFFFFFFFEuLL;
      KeyData = CmpTransReferenceTransaction(v48);
      if ( KeyData < 0 )
      {
        v51 = 0LL;
      }
      else
      {
        if ( *(_QWORD *)(v59[0] + 16) )
        {
          v10 = *(_QWORD *)(v59[0] + 16);
          KeyData = 0;
        }
        else
        {
          KeyData = -1072103422;
        }
        v51 = v57;
      }
      if ( v51 )
        ObfDereferenceObject((PVOID)(v51 & 0xFFFFFFFFFFFFFFFEuLL));
    }
    else
    {
      v52 = *(_QWORD *)(v50 + 4160);
      if ( !v52 )
      {
        KeyData = -1072103419;
        CmpUnlockRegistry(v49);
        CmpDetachFromRegistryProcess(&ApcState);
        return (unsigned int)KeyData;
      }
      KeyData = CmpTransSearchAddTrans(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), v52, v50, 0, (__int64)v59);
      v10 = v59[0];
    }
    if ( KeyData >= 0 )
    {
      v57 = v10;
LABEL_4:
      if ( a2 )
      {
        v15 = *(_QWORD *)(a2 + 8);
        CmpLockTwoKcbsShared(v15, *(_QWORD *)(a1 + 8));
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
          v21 = -1073741444;
          if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
            v21 = -1073740763;
          KeyData = v21;
          goto LABEL_115;
        }
        switch ( a3 )
        {
          case 5u:
            *(_DWORD *)v58 = 12;
            if ( a5 < 0xC )
            {
              KeyData = -1073741789;
            }
            else
            {
              KeyFlags = CmGetKeyFlags(v15, v10);
              v23 = v56;
              *v56 = KeyFlags;
              v23[1] = 0;
              v24 = 0;
              if ( *(int *)(v15 + 40) < 0 )
              {
                v24 = 1;
                v23[1] = 1;
              }
              if ( (*(_DWORD *)(v15 + 184) & 0x100000) != 0 )
                v23[1] = v24 | 2;
              v23[2] = (*(_DWORD *)(v15 + 184) >> 4) & 0xF;
              KeyData = 0;
            }
            break;
          case 6u:
            memset(&SubjectContext, 0, sizeof(SubjectContext));
            CurrentThread = KeGetCurrentThread();
            CurrentThreadProcess = PsGetCurrentThreadProcess();
            SeCaptureSubjectContextEx(CurrentThread, CurrentThreadProcess, &SubjectContext);
            v27 = 4;
            *(_DWORD *)v58 = 4;
            if ( a5 >= 4 )
            {
              v28 = CmpVEEnabled
                 && (*(_DWORD *)(v15 + 184) & 0x2000000) == 0
                 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive(v15)
                 && (unsigned __int8)CmpIsSystemEntity((unsigned __int8)KeGetCurrentThread()->PreviousMode) == 0;
              v29 = v56;
              v30 = v28 | *v56 & 0xFFFFFFFE;
              *v56 = v30;
              v31 = v30 & 0xFFFFFFFD;
              *v29 = v31;
              v32 = v31;
              if ( v28 && (*(_DWORD *)(v15 + 184) & 0x20) == 0 )
              {
                v32 = v31 | 2;
                *v29 = v31 | 2;
              }
              if ( !CmpVEEnabled || (*(_DWORD *)(v15 + 184) & 0x1000000) == 0 )
                v27 = 0;
              v33 = v27 | v32 & 0xFFFFFFFB;
              *v29 = v33;
              v34 = v33 & 0xFFFFFFF7 | (*(_DWORD *)(v15 + 184) >> 22) & 8;
              *v29 = v34;
              *v29 = v34 & 0xFFFFFFEF | (*(_DWORD *)(v15 + 184) >> 19) & 0x10;
              KeyData = 0;
            }
            else
            {
              KeyData = -1073741789;
            }
            SeReleaseSubjectContext(&SubjectContext);
            break;
          case 8u:
            *(_DWORD *)v58 = 4;
            if ( a5 >= 4 )
            {
              v35 = *v56;
              if ( (*(_DWORD *)(*(_QWORD *)(v15 + 32) + 4120LL) & 1) != 0 )
                v36 = v35 & 0xFFFFFFFE;
              else
                v36 = v35 | 1;
              *v56 = v36;
              KeyData = 0;
LABEL_16:
              if ( a2 )
              {
                if ( (((a3 - 3) & 0xFFFFFFFC) != 0 || a3 == 4)
                  && (v39 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 168LL), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) < v39) )
                {
                  v37 = v56;
                  *(_QWORD *)v56 = v39;
                }
                else
                {
                  v37 = v56;
                }
                if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
                {
                  LODWORD(v59[0]) = 0;
                  v66 = 0LL;
                  LODWORD(v56) = 0;
                  memset(&SubjectContext, 0, sizeof(SubjectContext));
                  v69 = 0LL;
                  if ( (unsigned int)CmpFindSubKeyByNumberFromMergedView(
                                       *(_QWORD *)(a2 + 8),
                                       *(_QWORD *)(a1 + 8),
                                       -1,
                                       v10,
                                       (__int64)&v64,
                                       (__int64)&v66,
                                       (__int64)&v56,
                                       0LL,
                                       (__int64)v59) == -2147483622 )
                  {
                    if ( a3 == 2 )
                      v37[5] = v59[0];
                    else
                      v37[3] = v59[0];
                  }
                  LOBYTE(v38) = 1;
                  if ( (unsigned int)CmEnumerateValueKeyFromMergedView(a1, a2, v38, -1, 0, 0LL, 0, 0LL, (__int64)v59) == -2147483622 )
                  {
                    if ( a3 == 2 )
                      v37[8] = v59[0];
                    else
                      v37[5] = v59[0];
                  }
                  KeyData = CmpQueryKeyData(*(_QWORD *)(a1 + 8), a3, (int)&SubjectContext, 48, v58, v10);
                  if ( (int)(KeyData + 0x80000000) < 0 || KeyData == -2147483643 )
                  {
                    if ( a3 == 2 )
                    {
                      if ( LODWORD(SubjectContext.ProcessAuditId) > v37[6] )
                        v37[6] = (unsigned int)SubjectContext.ProcessAuditId;
                      if ( DWORD1(v69) > v37[9] )
                        v37[9] = DWORD1(v69);
                      if ( DWORD2(v69) > v37[10] )
                        v37[10] = DWORD2(v69);
                    }
                    else
                    {
                      if ( LODWORD(SubjectContext.PrimaryToken) > v37[4] )
                        v37[4] = (unsigned int)SubjectContext.PrimaryToken;
                      if ( LODWORD(SubjectContext.ProcessAuditId) > v37[6] )
                        v37[6] = (unsigned int)SubjectContext.ProcessAuditId;
                      if ( HIDWORD(SubjectContext.ProcessAuditId) > v37[7] )
                        v37[7] = HIDWORD(SubjectContext.ProcessAuditId);
                    }
                  }
                }
              }
              else if ( CmpVEEnabled )
              {
                v17 = *(_QWORD *)(a1 + 8);
                if ( (*(_DWORD *)(v17 + 184) & 0x1000000) != 0 && ((a3 - 2) & 0xFFFFFFFD) == 0 )
                {
                  LODWORD(v60) = 0;
                  v67 = 0LL;
                  LODWORD(v58) = 0;
                  KeyData = CmpFindSubKeyByNumberFromMergedView(
                              v17,
                              0,
                              -1,
                              v10,
                              (__int64)&v64,
                              (__int64)&v67,
                              (__int64)&v58,
                              0LL,
                              (__int64)&v60);
                  if ( KeyData == -2147483622 )
                  {
                    if ( a3 == 2 )
                      v56[5] = (unsigned int)v60;
                    else
                      v56[3] = (unsigned int)v60;
                    KeyData = 0;
                  }
                }
              }
              goto LABEL_115;
            }
            KeyData = -1073741789;
LABEL_115:
            if ( a2 )
              CmpUnlockTwoKcbs(*(_QWORD *)(a2 + 8), *(_QWORD *)(v63 + 8));
            else
              CmpUnlockKcb(*(_QWORD *)(v63 + 8));
            CmpDrainDelayDerefContext((_QWORD **)&v64);
            CmpUnlockRegistry(v45);
            CmpDetachFromRegistryProcess(&ApcState);
            if ( P[1] )
            {
              ExFreePool(P[1]);
            }
            else if ( v61 )
            {
              CmpFreeTransientPoolWithTag(v61, 0x624E4D43u);
            }
            return (unsigned int)KeyData;
          default:
            v57 = 0xFFFFFFFFLL;
            if ( a3 == 4 )
            {
              KeyData = CmpQueryKeyDataFromCache(v15, 4, (__int64)v56, a5, (_DWORD *)v58, v10);
            }
            else
            {
              v18 = *(_QWORD *)(v15 + 32);
              if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
                CellFlat = HvpGetCellFlat(v18, *(_DWORD *)(v15 + 40), (unsigned int *)&v57);
              else
                CellFlat = HvpGetCellPaged(v18);
              if ( CellFlat )
              {
                KeyData = CmpQueryKeyDataFromNode(
                            *(_QWORD *)(v15 + 32),
                            CellFlat,
                            a3,
                            (__int64)v56,
                            a5,
                            (_DWORD *)v58,
                            v15,
                            v10);
                v20 = *(_QWORD *)(v15 + 32);
                if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v20, &v57);
                else
                  HvpReleaseCellPaged(v20, &v57);
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
      v40 = *(_QWORD *)(a1 + 8);
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
      if ( !*(_QWORD *)(v40 + 80) )
      {
LABEL_90:
        KeyData = -1073741670;
        goto LABEL_115;
      }
      if ( CmpVEEnabled && (*(_DWORD *)(v40 + 184) & 0x1000000) != 0 )
      {
        if ( (int)CmVirtualKCBToRealPath(v40, P) < 0 )
        {
LABEL_104:
          if ( v61 )
          {
            v43 = *(unsigned __int16 *)v61;
            *(_DWORD *)v58 = v43 + 4;
            if ( a5 < 4 )
            {
              KeyData = -1073741789;
            }
            else
            {
              v44 = v56;
              *v56 = v43;
              if ( a5 - 4 < v43 )
              {
                v43 = a5 - 4;
                KeyData = -2147483643;
              }
              memmove(v44 + 1, v61[1], v43);
            }
            goto LABEL_15;
          }
          goto LABEL_90;
        }
        v42 = (const void **)P;
      }
      else
      {
        v42 = (const void **)CmpConstructName(v40, v41);
      }
      v61 = v42;
      goto LABEL_104;
    }
    CmpUnlockRegistry(v51);
    CmpDetachFromRegistryProcess(&ApcState);
    return (unsigned int)KeyData;
  }
  LayeredKey = CmQueryLayeredKey(a1, a3, a4, a5, (unsigned int *)v58);
  CmpUnlockRegistry(v54);
  CmpDetachFromRegistryProcess(&ApcState);
  return LayeredKey;
}
