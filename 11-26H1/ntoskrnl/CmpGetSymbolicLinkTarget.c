/*
 * XREFs of CmpGetSymbolicLinkTarget @ 0x1408C0924
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x1403E78F0 (RtlUnicodeStringCat.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCopy @ 0x14042FE80 (RtlUnicodeStringCopy.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpGetComponentNameAtIndex @ 0x1408C1290 (CmpGetComponentNameAtIndex.c)
 *     CmpGetKcbAtLayerHeight @ 0x1408C12C0 (CmpGetKcbAtLayerHeight.c)
 *     CmpUnlockKcbStack @ 0x1408C29B0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1408C2C40 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmEqualTrans @ 0x1408C2FA0 (CmEqualTrans.c)
 *     CmpConstructAndCacheName @ 0x1408C7B80 (CmpConstructAndCacheName.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1408C8684 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpUnlockHashEntryByKcb @ 0x1408CC824 (CmpUnlockHashEntryByKcb.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpComputeComponentHashes @ 0x1408D4670 (CmpComputeComponentHashes.c)
 *     CmpCleanupPathInfo @ 0x1408D4B60 (CmpCleanupPathInfo.c)
 *     CmpIsKeyStackDeleted @ 0x1408D52A0 (CmpIsKeyStackDeleted.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D7138 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     CmpFindNameInListWithStatus @ 0x1408DB7C0 (CmpFindNameInListWithStatus.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpGetValueData @ 0x140942400 (CmpGetValueData.c)
 *     CmpLockKcbStackShared @ 0x140946C60 (CmpLockKcbStackShared.c)
 *     CmpValidateComponents @ 0x140A22B60 (CmpValidateComponents.c)
 *     CmpCompareUnicodeString @ 0x140A8961C (CmpCompareUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpGetSymbolicLinkTarget(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ULONG_PTR *a9,
        __int64 *a10)
{
  __int64 v10; // rdi
  ULONG_PTR v11; // r13
  unsigned int v12; // esi
  ULONG_PTR v13; // r15
  char v14; // r8
  __int64 KcbAtLayerHeight; // rax
  __int64 v16; // r14
  char v17; // r8
  unsigned __int64 v18; // rdi
  char v19; // al
  unsigned int v20; // esi
  unsigned int v21; // ebx
  unsigned int v22; // r8d
  __int64 v23; // r10
  unsigned __int16 *v24; // rax
  int v25; // r8d
  unsigned int v26; // r9d
  unsigned int v27; // ebx
  __int64 v28; // r13
  const UNICODE_STRING *v29; // rax
  unsigned __int64 v30; // rcx
  UNICODE_STRING *v31; // rbx
  void *v32; // rcx
  int v33; // ebx
  ULONG_PTR *v34; // rax
  char v35; // di
  __int64 v36; // r12
  __int16 v38; // r14
  __int64 CellFlat; // rax
  __int64 v40; // rax
  __int64 v41; // r8
  __int16 v42; // r9
  __int16 v43; // r10
  __int64 v44; // rbx
  unsigned int v45; // r8d
  unsigned int v46; // ebx
  bool v47; // zf
  __int64 v48; // r9
  UNICODE_STRING v49; // xmm6
  unsigned int v50; // edi
  unsigned int v51; // ebx
  UNICODE_STRING *v52; // rbx
  void *v53; // rcx
  unsigned __int16 v54; // di
  wchar_t *v55; // r14
  __int16 *v56; // r12
  __int16 v57; // di
  __int16 i; // bx
  WCHAR v59; // ax
  __int16 v60; // si
  __int64 v61; // r13
  unsigned __int16 *ComponentNameAtIndex; // rax
  int v63; // r8d
  unsigned int v64; // r9d
  __int64 v65; // r12
  const UNICODE_STRING *v66; // rax
  unsigned __int64 v67; // rcx
  wchar_t v68; // r9
  unsigned __int16 MaximumLength; // r8
  unsigned __int16 Length; // cx
  wchar_t *Buffer; // rdx
  ULONG_PTR *v72; // rsi
  ULONG_PTR v73; // rcx
  int v74; // eax
  ULONG_PTR v75; // rcx
  __int16 v76; // bx
  int v77; // ebx
  __int64 v78; // r14
  __int64 v79; // rdi
  ULONG_PTR v80; // rcx
  int NameInListWithStatus; // ebx
  __int64 v82; // rcx
  __int64 v83; // rax
  char v84; // [rsp+48h] [rbp-C0h]
  __int16 v85; // [rsp+49h] [rbp-BFh] BYREF
  char v86; // [rsp+4Bh] [rbp-BDh] BYREF
  char v87; // [rsp+4Ch] [rbp-BCh]
  __int64 v88; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v89; // [rsp+58h] [rbp-B0h]
  __int16 DestinationString; // [rsp+60h] [rbp-A8h]
  __int16 DestinationString_2; // [rsp+62h] [rbp-A6h]
  UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  int v93; // [rsp+78h] [rbp-90h] BYREF
  __int16 v94; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v95; // [rsp+80h] [rbp-88h]
  __int64 v96; // [rsp+88h] [rbp-80h] BYREF
  __int64 v97; // [rsp+90h] [rbp-78h] BYREF
  ULONG_PTR v98; // [rsp+98h] [rbp-70h]
  PVOID P; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v100; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v101; // [rsp+B0h] [rbp-58h]
  UNICODE_STRING v102; // [rsp+B8h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v104; // [rsp+D0h] [rbp-38h]
  ULONG_PTR v105; // [rsp+D8h] [rbp-30h]
  __int64 v106; // [rsp+E0h] [rbp-28h]
  UNICODE_STRING SourceString; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v108; // [rsp+F8h] [rbp-10h]
  ULONG_PTR *v109; // [rsp+100h] [rbp-8h]
  __int64 *v110; // [rsp+108h] [rbp+0h]
  __int64 v111; // [rsp+110h] [rbp+8h]
  __int64 v112; // [rsp+118h] [rbp+10h]
  __int128 v113; // [rsp+120h] [rbp+18h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+130h] [rbp+28h]
  _BYTE v115[176]; // [rsp+148h] [rbp+40h] BYREF

  v10 = a1;
  v112 = a7;
  v108 = a8;
  v109 = a9;
  v104 = a2;
  v101 = a1;
  v110 = a10;
  DestinationString = a4;
  DestinationString_2 = a3;
  DestinationString_8 = 0LL;
  v96 = 0LL;
  SourceString = 0LL;
  v97 = 0LL;
  v100 = 0LL;
  LOWORD(v93) = 0;
  v94 = 0;
  RtlInitUnicodeString(&DestinationString_8, 0LL);
  v85 = 1;
  v11 = 0LL;
  v98 = 0LL;
  BugCheckParameter2 = 0LL;
  v84 = 0;
  HvpGetCellContextInitialize(&v96);
  v12 = -1;
  v89 = 0LL;
  LODWORD(v88) = -1;
  v13 = 0LL;
  v105 = 0LL;
  HvpGetCellContextInitialize(&v97);
  P = 0LL;
  v86 = 0;
  v95 = 0;
  HvpGetCellContextInitialize(&v100);
  memset_0(v115, 0, 0xA8uLL);
  v113 = 0LL;
  WORD1(v113) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( a5 || (v14 = 1, *(_WORD *)(v10 + 2)) )
    v14 = 0;
  v87 = v14;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v10);
  v111 = KcbAtLayerHeight;
  v16 = KcbAtLayerHeight;
  if ( !v17 || (*(_DWORD *)(KcbAtLayerHeight + 8) & 8) == 0 )
    goto LABEL_36;
  v11 = *(_QWORD *)(KcbAtLayerHeight + 104);
  v98 = v11;
  BugCheckParameter2 = v11;
  v18 = *(_QWORD *)(v11 + 296);
  v19 = v18 & 1;
  if ( (v18 & 1) != 0 )
    v18 &= ~1uLL;
  if ( !v18 || v19 )
  {
    v10 = v101;
LABEL_36:
    if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
    {
      CmpAttachToRegistryProcess((PRKAPC_STATE)(a6 + 168));
      *(_DWORD *)(a6 + 160) |= 1u;
    }
    v38 = *(_WORD *)(v10 + 2);
    v106 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v38 < 0 )
          goto LABEL_40;
        v40 = CmpGetKcbAtLayerHeight(v101);
        v44 = v40;
        if ( !v41 && (*(_DWORD *)(v40 + 40) != -1 || (*(_DWORD *)(*(_QWORD *)(v40 + 32) + 4120LL) & 0x2000) == 0) )
        {
          v41 = v40;
          v106 = v40;
        }
        if ( *(_WORD *)(v40 + 66) != v42 && *(_BYTE *)(v40 + 65) == 1 )
        {
          v12 = -1;
          LODWORD(v88) = -1;
LABEL_40:
          if ( v12 == -1 )
          {
            v36 = v89;
            v33 = -1073741772;
            v35 = v89;
            goto LABEL_21;
          }
          if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v13, v12, (unsigned int *)&v97);
          else
            CellFlat = HvpGetCellPaged(v13);
          v36 = CellFlat;
          if ( (*(_BYTE *)(CellFlat + 16) & 2) != 0 || *(_DWORD *)(CellFlat + 12) != 6 )
            goto LABEL_44;
          if ( !(unsigned __int8)CmpGetValueData(v13, (__int64)&P, (__int64)&v86, (__int64)&v100) )
          {
            v33 = -1073741670;
            v35 = 0;
            goto LABEL_21;
          }
          if ( v95 > 0xFFFF || (v95 & 1) != 0 )
            goto LABEL_44;
          v45 = DestinationString_2;
          SourceString.Buffer = (wchar_t *)P;
          SourceString.Length = v95;
          SourceString.MaximumLength = v95;
          v46 = (unsigned __int16)v95;
          if ( DestinationString_2 < (unsigned int)DestinationString )
          {
            v61 = v104;
            do
            {
              ComponentNameAtIndex = (unsigned __int16 *)CmpGetComponentNameAtIndex(v61, v45);
              v45 = v63 + 1;
              v46 += *ComponentNameAtIndex + 2;
            }
            while ( v45 < v64 );
            v11 = v98;
          }
          if ( v46 > 0xFFFF )
          {
LABEL_44:
            v33 = -1073741772;
            goto LABEL_35;
          }
          DestinationString_8.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
          if ( !DestinationString_8.Buffer )
          {
            v33 = -1073741670;
            v35 = 0;
            goto LABEL_21;
          }
          DestinationString_8.Length = 0;
          DestinationString_8.MaximumLength = v46;
          RtlUnicodeStringCopy(&DestinationString_8, &SourceString);
          if ( v86 )
          {
            ExFreePoolWithTag(P, 0);
          }
          else if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
          {
            HvpReleaseCellFlat(v13, &v100);
          }
          else
          {
            HvpReleaseCellPaged(v13, &v100);
          }
          v47 = (*(_BYTE *)(v13 + 140) & 1) == 0;
          P = 0LL;
          if ( v47 )
            HvpReleaseCellPaged(v13, &v97);
          else
            HvpReleaseCellFlat(v13, &v97);
          v36 = 0LL;
          v89 = 0LL;
          CmpUnlockKcbStack(v101);
          v48 = 92LL;
          v49 = DestinationString_8;
          LOBYTE(v85) = 0;
          if ( v87 )
          {
            v54 = 0;
            v102 = DestinationString_8;
            if ( DestinationString_8.Length )
            {
              Buffer = v102.Buffer;
              MaximumLength = v102.MaximumLength;
              Length = v102.Length;
              do
              {
                if ( *Buffer != 92 )
                  break;
                ++Buffer;
                MaximumLength -= 2;
                v54 += 2;
                Length -= 2;
              }
              while ( Length );
              v102.Length = Length;
              v102.Buffer = Buffer;
              v102.MaximumLength = MaximumLength;
              if ( Length )
              {
                do
                {
                  if ( *Buffer == 92 )
                    break;
                  ++Buffer;
                  MaximumLength -= 2;
                  v54 += 2;
                  Length -= 2;
                }
                while ( Length );
                v102.Length = Length;
                v102.Buffer = Buffer;
                v102.MaximumLength = MaximumLength;
                if ( Length )
                {
                  do
                  {
                    if ( *Buffer != 92 )
                      break;
                    ++Buffer;
                    MaximumLength -= 2;
                    Length -= 2;
                  }
                  while ( Length );
                  v102.Length = Length;
                  v102.Buffer = Buffer;
                  v102.MaximumLength = MaximumLength;
                  if ( Length )
                  {
                    do
                    {
                      if ( Buffer[((unsigned __int64)Length >> 1) - 1] != 92 )
                        break;
                      MaximumLength -= 2;
                      Length -= 2;
                    }
                    while ( Length );
                    v102.Length = Length;
                    v102.MaximumLength = MaximumLength;
                  }
                }
              }
            }
            v55 = DestinationString_8.Buffer;
            v56 = (__int16 *)PspSiloMonitorLock.Spare35[1];
            v57 = v54 >> 1;
            for ( i = LOWORD(PspSiloMonitorLock.Spare35[0]) >> 1; v57 && i; --i )
            {
              v59 = *v55++;
              v60 = *v56++;
              if ( v59 != v60 )
              {
                if ( v59 >= 0x61u )
                {
                  if ( v59 > 0x7Au )
                    v59 = RtlUpcaseUnicodeChar(v59);
                  else
                    v59 -= 32;
                }
                if ( v59 != v60 )
                {
                  v36 = v89;
                  goto LABEL_69;
                }
              }
              --v57;
            }
            if ( v57 == i )
            {
              v36 = 0LL;
              if ( (int)CmpComputeComponentHashes(&v102, &v93, v115, v48) >= 0 )
              {
                v76 = v93;
                if ( (int)CmpValidateComponents((unsigned int)(__int16)v93, v115) >= 0 )
                {
                  if ( (int)CmpPerformCompleteKcbCacheLookup(
                              (ULONG_PTR)PspSiloMonitorLock.Header.WaitListHead.Flink->Blink,
                              0LL,
                              (__int64)&BugCheckParameter2,
                              (__int64)&v85 + 1,
                              (__int64)&v94) < 0 )
                  {
                    v11 = BugCheckParameter2;
                    v98 = BugCheckParameter2;
                  }
                  else if ( v94 == v76 )
                  {
                    v11 = BugCheckParameter2;
                    v98 = BugCheckParameter2;
                    if ( (int)CmpStartKcbStackForTopLayerKcb(&v113, BugCheckParameter2) >= 0 )
                    {
                      CmpLockKcbStackShared(&v113);
                      v77 = CmpConstructAndCacheName(v11, 0LL);
                      CmpUnlockKcbStack(&v113);
                      if ( v77 >= 0 )
                      {
                        if ( HIBYTE(v85) )
                        {
                          CmpUnlockHashEntryByKcb(v11);
                          HIBYTE(v85) = 0;
                        }
                        v78 = v101;
                        CmpLockKcbStackTopExclusiveRestShared(v101);
                        LOBYTE(v85) = 1;
                        if ( !(unsigned __int8)CmpIsKeyStackDeleted(v78, 0LL) )
                        {
                          v79 = v111;
                          v80 = *(_QWORD *)(v111 + 32);
                          if ( (*(_BYTE *)(v80 + 140) & 1) != 0 )
                            HvpGetCellFlat(v80, *(_DWORD *)(v111 + 40), (unsigned int *)&v96);
                          else
                            HvpGetCellPaged(v80);
                          NameInListWithStatus = CmpFindNameInListWithStatus(*(_QWORD *)(v79 + 32), 0LL, (__int64)&v88);
                          v82 = *(_QWORD *)(v79 + 32);
                          if ( (*(_BYTE *)(v82 + 140) & 1) != 0 )
                            HvpReleaseCellFlat(v82, &v96);
                          else
                            HvpReleaseCellPaged(v82, &v96);
                          if ( NameInListWithStatus >= 0 )
                          {
                            v105 = *(_QWORD *)(v79 + 32);
                            v13 = v105;
                            v83 = (*(_BYTE *)(v105 + 140) & 1) != 0
                                ? HvpGetCellFlat(v105, v88, (unsigned int *)&v97)
                                : HvpGetCellPaged(v105);
                            v47 = *(_DWORD *)(v83 + 12) == 6;
                            v36 = v83;
                            v89 = v83;
                            if ( v47 )
                            {
                              if ( (unsigned __int8)CmpGetValueData(v13, (__int64)&P, (__int64)&v86, (__int64)&v100) )
                              {
                                if ( v95 <= 0xFFFF && (v95 & 1) == 0 )
                                {
                                  SourceString.Length = v95;
                                  SourceString.MaximumLength = v95;
                                  SourceString.Buffer = (wchar_t *)P;
                                  if ( !(unsigned int)CmpCompareUnicodeString(&DestinationString_8, &SourceString, 0LL) )
                                  {
                                    CmpCleanUpKcbCachedSymlink(v79);
                                    *(_QWORD *)(v79 + 104) = v11;
                                    CmpReferenceKeyControlBlockUnsafe(v11);
                                    *(_WORD *)(v79 + 8) |= 8u;
                                    CmpUnlockKcbStack(v78);
                                    LOBYTE(v85) = 0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    CmpDereferenceKeyControlBlock(BugCheckParameter2);
                    v11 = 0LL;
                    v98 = 0LL;
                  }
                }
              }
            }
            else
            {
              v36 = 0LL;
            }
          }
LABEL_69:
          v50 = DestinationString;
          v51 = DestinationString_2;
          if ( DestinationString_2 < (unsigned int)DestinationString )
          {
            v65 = v104;
            do
            {
              v66 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v65, v51);
              v67 = (unsigned __int64)DestinationString_8.Length >> 1;
              DestinationString_8.Length += 2;
              DestinationString_8.Buffer[v67] = v68;
              RtlUnicodeStringCat(&DestinationString_8, v66);
              ++v51;
            }
            while ( v51 < v50 );
            v49 = DestinationString_8;
            v13 = v105;
            v11 = v98;
            v36 = v89;
          }
          v52 = (UNICODE_STRING *)v108;
          v53 = *(void **)(v108 + 8);
          if ( v53 )
          {
            ExFreePoolWithTag(v53, 0);
            v52->Buffer = 0LL;
          }
          if ( HIBYTE(v85) )
            CmpUnlockHashEntryByKcb(v11);
          *v109 = v11;
          v11 = 0LL;
          *v52 = v49;
          RtlInitUnicodeString(&DestinationString_8, 0LL);
          v33 = 0;
          *v110 = v106;
LABEL_35:
          v35 = v84;
          goto LABEL_21;
        }
        if ( *(_DWORD *)(v40 + 40) != -1 )
          break;
        v38 += v43;
      }
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v40 + 288), a5, v41) )
      {
        if ( !*(_DWORD *)(v44 + 280) )
        {
          v12 = -1;
          LODWORD(v88) = -1;
          goto LABEL_93;
        }
        v72 = (ULONG_PTR *)(v44 + 32);
        v33 = CmpFindNameInListWithStatus(*(_QWORD *)(v44 + 32), 0LL, (__int64)&v88);
      }
      else
      {
        v72 = (ULONG_PTR *)(v44 + 32);
        v73 = *(_QWORD *)(v44 + 32);
        if ( (*(_BYTE *)(v73 + 140) & 1) != 0 )
          HvpGetCellFlat(v73, *(_DWORD *)(v44 + 40), (unsigned int *)&v96);
        else
          HvpGetCellPaged(v73);
        v74 = CmpFindNameInListWithStatus(*v72, 0LL, (__int64)&v88);
        v75 = *v72;
        v33 = v74;
        if ( (*(_BYTE *)(*v72 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v75, &v96);
        else
          HvpReleaseCellPaged(v75, &v96);
      }
      if ( v33 >= 0 )
      {
        v13 = *v72;
        v12 = v88;
        v105 = v13;
        goto LABEL_40;
      }
      if ( v33 != -1073741772 )
      {
        v36 = 0LL;
        v35 = 0;
        goto LABEL_21;
      }
      v12 = v88;
LABEL_93:
      --v38;
    }
  }
  CmpReferenceKeyControlBlockUnsafe(v11);
  CmpUnlockKcbStack(v101);
  LOBYTE(v85) = 0;
  CmpLockKcbShared(v11);
  v20 = DestinationString;
  v21 = *(unsigned __int16 *)v18;
  v22 = DestinationString_2;
  v84 = 1;
  if ( DestinationString_2 < (unsigned int)DestinationString )
  {
    v23 = v104;
    do
    {
      v24 = (unsigned __int16 *)CmpGetComponentNameAtIndex(v23, v22);
      v22 = v25 + 1;
      v21 += *v24 + 2;
    }
    while ( v22 < v26 );
  }
  if ( v21 > 0xFFFF )
  {
    v33 = -1073741772;
    v36 = 0LL;
    goto LABEL_35;
  }
  DestinationString_8.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
  if ( !DestinationString_8.Buffer )
  {
    v33 = -1073741670;
    v36 = 0LL;
    goto LABEL_35;
  }
  DestinationString_8.Length = 0;
  DestinationString_8.MaximumLength = v21;
  RtlUnicodeStringCopy(&DestinationString_8, (PCUNICODE_STRING)v18);
  v27 = DestinationString_2;
  if ( DestinationString_2 < (unsigned int)DestinationString )
  {
    v28 = v104;
    do
    {
      v29 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v28, v27);
      v30 = (unsigned __int64)DestinationString_8.Length >> 1;
      DestinationString_8.Length += 2;
      DestinationString_8.Buffer[v30] = 92;
      RtlUnicodeStringCat(&DestinationString_8, v29);
      ++v27;
    }
    while ( v27 < v20 );
    v13 = v105;
    v11 = v98;
  }
  v31 = (UNICODE_STRING *)v108;
  v32 = *(void **)(v108 + 8);
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
  *v31 = DestinationString_8;
  RtlInitUnicodeString(&DestinationString_8, 0LL);
  CmpUnlockKcb(v11);
  v33 = 0;
  v34 = v109;
  v35 = 0;
  v36 = 0LL;
  *v110 = v16;
  *v34 = v11;
  v11 = 0LL;
LABEL_21:
  if ( DestinationString_8.Buffer )
    ExFreePoolWithTag(DestinationString_8.Buffer, 0);
  if ( P )
  {
    if ( v86 )
    {
      ExFreePoolWithTag(P, 0);
    }
    else if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
    {
      HvpReleaseCellFlat(v13, &v100);
    }
    else
    {
      HvpReleaseCellPaged(v13, &v100);
    }
  }
  if ( v36 )
  {
    if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v13, &v97);
    else
      HvpReleaseCellPaged(v13, &v97);
  }
  if ( DestinationString_8.Buffer )
    ExFreePoolWithTag(DestinationString_8.Buffer, 0);
  if ( (_BYTE)v85 )
    CmpUnlockKcbStack(v101);
  if ( v11 )
  {
    if ( v35 )
      CmpUnlockKcb(v11);
    CmpDereferenceKeyControlBlock(v11);
  }
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupPathInfo(v115);
  return (unsigned int)v33;
}
