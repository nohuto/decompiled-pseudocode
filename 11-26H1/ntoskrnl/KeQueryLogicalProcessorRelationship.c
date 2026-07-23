/*
 * XREFs of KeQueryLogicalProcessorRelationship @ 0x1404D3BB0
 * Callers:
 *     HalpMcStaging @ 0x1405960D0 (HalpMcStaging.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryNodeGroupAffinity @ 0x14020183C (KeQueryNodeGroupAffinity.c)
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x14021AC70 (KeGetProcessorIndexFromNumber.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     ?RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140253CAC (-RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x14025B99C (KiTryPopulateLogicalProcessorInformation.c)
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     KeGetTopologySiblingAffinityForProcessor @ 0x14025DE90 (KeGetTopologySiblingAffinityForProcessor.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     KeAndGroupAffinityEx @ 0x140462640 (KeAndGroupAffinityEx.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140470380 (KeQueryNodeActiveAffinityEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall KeQueryLogicalProcessorRelationship(
        PPROCESSOR_NUMBER ProcessorNumber,
        LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
        PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information,
        PULONG Length)
{
  LOGICAL_PROCESSOR_RELATIONSHIP v4; // edi
  __int64 v5; // rbx
  _PROCESSOR_NUMBER *v6; // r13
  struct _KAFFINITY_EX *v8; // rdx
  NTSTATUS v9; // r12d
  unsigned int v10; // esi
  size_t v11; // r15
  unsigned int v12; // eax
  int v13; // ecx
  struct _KAFFINITY_EX *v14; // rax
  int v15; // ecx
  struct _KAFFINITY_EX *v16; // r14
  __int64 v17; // rdx
  struct _KAFFINITY_EX **v18; // rcx
  ULONG ProcessorIndexFromNumber; // ecx
  ULONG v20; // eax
  ULONG v21; // edx
  __int64 v22; // r13
  __int64 v23; // r15
  __int64 v24; // r14
  unsigned int v26; // edi
  struct _KAFFINITY_EX *v27; // r8
  int v28; // eax
  struct _KAFFINITY_EX *v29; // rdx
  unsigned __int16 Group; // r10
  unsigned __int16 v31; // dx
  unsigned __int16 v32; // cx
  unsigned int v33; // r8d
  unsigned __int64 v34; // rcx
  unsigned __int16 v35; // dx
  unsigned __int16 Count; // ax
  unsigned __int16 v37; // r11
  unsigned __int64 v38; // r15
  size_t v39; // r8
  unsigned __int16 i; // cx
  unsigned __int64 v41; // rdx
  __int64 v42; // r13
  _DWORD *Pool2; // rax
  __int16 v44; // r12
  _DWORD *v45; // r14
  size_t v46; // rsi
  __int64 v47; // r15
  int v48; // eax
  __int64 v49; // r15
  unsigned int v50; // edi
  unsigned int v51; // r15d
  unsigned int v52; // edi
  int v53; // eax
  struct _KAFFINITY_EX *v54; // rcx
  bool v55; // zf
  int v56; // eax
  int v57; // eax
  unsigned __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  unsigned __int16 v62; // r14
  unsigned __int64 NodeGroupAffinity; // rax
  unsigned __int16 v64; // dx
  unsigned __int16 v65; // cx
  __int64 v66; // r9
  unsigned int v67; // edx
  unsigned __int64 v68; // rcx
  unsigned __int16 v69; // r11
  unsigned __int16 v70; // ax
  unsigned __int16 v71; // r8
  unsigned __int64 v72; // r10
  __int64 v73; // rcx
  __int64 v74; // rax
  int v75; // edx
  unsigned int v76; // eax
  unsigned int v77; // r15d
  __int64 v78; // rbx
  __int64 v79; // rdi
  unsigned int v80; // [rsp+58h] [rbp-89h] BYREF
  ULONG v81; // [rsp+5Ch] [rbp-85h]
  NTSTATUS v82; // [rsp+60h] [rbp-81h]
  int v83; // [rsp+64h] [rbp-7Dh]
  ULONG v84; // [rsp+68h] [rbp-79h]
  __int64 v85; // [rsp+70h] [rbp-71h]
  __int128 v86; // [rsp+78h] [rbp-69h] BYREF
  size_t Size; // [rsp+88h] [rbp-59h]
  struct _KAFFINITY_EX *v88; // [rsp+90h] [rbp-51h]
  PVOID P; // [rsp+98h] [rbp-49h]
  struct _KAFFINITY_EX *v90; // [rsp+A8h] [rbp-39h] BYREF
  struct _KAFFINITY_EX *v91[5]; // [rsp+B0h] [rbp-31h] BYREF
  struct _KAFFINITY_EX *v92; // [rsp+D8h] [rbp-9h]
  size_t v93; // [rsp+E0h] [rbp-1h]
  struct _KAFFINITY_EX *v94; // [rsp+E8h] [rbp+7h]
  struct _KAFFINITY_EX *v95; // [rsp+F0h] [rbp+Fh]
  __int64 v98; // [rsp+158h] [rbp+77h] BYREF
  PULONG v99; // [rsp+160h] [rbp+7Fh]

  v99 = Length;
  v98 = (__int64)Information;
  v4 = RelationshipType;
  v5 = (__int64)Information;
  v6 = ProcessorNumber;
  memset_0(&v90, 0, 0x50uLL);
  v83 = *Length;
  v8 = 0LL;
  v9 = 0;
  LOWORD(v80) = KiMaximumGroups;
  v10 = 0;
  Size = 8LL * (unsigned __int16)KiMaximumGroups;
  v81 = 0;
  P = 0LL;
  v11 = Size + 8;
  v12 = 0;
  if ( ((v4 == RelationAll || (unsigned int)v4 <= 8 && (v13 = 492, _bittest(&v13, v4)) && (v12 = 1, v4 == RelationCache))
     && (v12 = 6, v4 == RelationAll)
     || v4 == RelationProcessorCore)
    && (++v12, v4 == RelationAll)
    || v4 == RelationProcessorPackage )
  {
    ++v12;
  }
  if ( v4 == RelationProcessorDie )
  {
    ++v12;
  }
  else if ( v4 == RelationAll || v4 == RelationProcessorModule )
  {
    ++v12;
  }
  if ( v12 )
  {
    v42 = v12;
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    P = Pool2;
    if ( !Pool2 )
      return -1073741670;
    v44 = v80;
    v45 = Pool2 + 1;
    v46 = Size;
    do
    {
      *((_WORD *)v45 - 2) = 1;
      *((_WORD *)v45 - 1) = v44;
      *v45 = 0;
      memset_0(v45 + 1, 0, v46);
      v45 = (_DWORD *)((char *)v45 + v11);
      --v42;
    }
    while ( v42 );
    v10 = v81;
    v5 = v98;
    v9 = v81;
    v4 = RelationshipType;
    v6 = ProcessorNumber;
    v8 = (struct _KAFFINITY_EX *)P;
  }
  v14 = v8;
  if ( v4 != RelationAll )
  {
    if ( (unsigned int)v4 > RelationProcessorModule || (v15 = 236, !_bittest(&v15, v4)) )
    {
LABEL_81:
      v16 = v90;
      goto LABEL_82;
    }
  }
  v90 = v8;
  v16 = v8;
  v14 = (struct _KAFFINITY_EX *)((char *)v8 + v11);
  if ( v4 == RelationAll || v4 == RelationCache )
  {
    v17 = 5LL;
    v18 = v91;
    do
    {
      *v18 = v14;
      v14 = (struct _KAFFINITY_EX *)((char *)v14 + v11);
      ++v18;
      --v17;
    }
    while ( v17 );
    if ( v4 == RelationAll )
    {
      v16 = v90;
      goto LABEL_18;
    }
    goto LABEL_81;
  }
LABEL_82:
  if ( v4 )
  {
    v88 = v92;
    goto LABEL_19;
  }
LABEL_18:
  v88 = v14;
  v92 = v14;
  v14 = (struct _KAFFINITY_EX *)((char *)v14 + v11);
  if ( v4 == RelationAll )
  {
LABEL_94:
    Size = (size_t)v14;
    v93 = (size_t)v14;
    v14 = (struct _KAFFINITY_EX *)((char *)v14 + v11);
    goto LABEL_21;
  }
LABEL_19:
  if ( v4 == RelationProcessorPackage )
    goto LABEL_94;
  Size = v93;
LABEL_21:
  if ( v4 == RelationProcessorDie )
  {
    v94 = v14;
  }
  else if ( v4 == RelationAll || v4 == RelationProcessorModule )
  {
    v95 = v14;
  }
  if ( v6 )
  {
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(v6);
    v82 = ProcessorIndexFromNumber;
    if ( ProcessorIndexFromNumber >= (unsigned int)KeNumberProcessors_0 )
    {
      v9 = -1073741811;
      goto LABEL_46;
    }
    v20 = ProcessorIndexFromNumber;
  }
  else
  {
    ProcessorIndexFromNumber = 0;
    v20 = KeNumberProcessors_0 - 1;
    v82 = 0;
  }
  v84 = v20;
  v81 = ProcessorIndexFromNumber;
  v21 = ProcessorIndexFromNumber;
  v86 = 0LL;
  if ( ProcessorIndexFromNumber > v20 )
    goto LABEL_39;
  LOWORD(v22) = WORD4(v86);
  do
  {
    v23 = KiProcessorBlock[ProcessorIndexFromNumber];
    v85 = v23;
    if ( v4 == RelationProcessorPackage || v4 == RelationAll )
    {
      KeGetTopologySiblingAffinityForProcessor(v23, 4, &v16->Count);
      LODWORD(v98) = 0;
      v80 = 0;
      v53 = KiTryPopulateLogicalProcessorInformation(
              v16,
              (struct _KAFFINITY_EX *)Size,
              ProcessorNumber != 0LL,
              3,
              v5,
              v83,
              v10,
              (unsigned int *)&v98,
              &v80);
      v10 += v98;
      if ( v53 >= 0 )
      {
        if ( v80 )
          v5 += v80;
      }
      else
      {
        v9 = v53;
      }
    }
    if ( v4 == RelationProcessorCore || v4 == RelationAll )
    {
      v22 = *(unsigned __int8 *)(v23 + 208);
      v47 = *(_QWORD *)(v23 + 36512);
      *(_QWORD *)&v86 = v47;
      WORD4(v86) = v22;
      v48 = KeAndGroupAffinityEx(v88, (__int64)&v86, 0LL);
      if ( !ProcessorNumber && v48 )
      {
        v23 = v85;
        goto LABEL_32;
      }
      v54 = v88;
      if ( v88->Count <= (unsigned __int16)v22 )
      {
        if ( v88->Size <= (unsigned __int16)v22 )
          goto LABEL_122;
        v88->Count = v22 + 1;
      }
      v54->Bitmap[v22] |= v47;
LABEL_122:
      v55 = *(_QWORD *)(v85 + 200) == v47;
      v23 = v85;
      v10 += 48;
      if ( v10 > v83 )
      {
        v9 = -1073741820;
      }
      else
      {
        *(_BYTE *)(v5 + 8) = !v55;
        *(_DWORD *)v5 = 0;
        *(_DWORD *)(v5 + 4) = 48;
        v55 = *(_BYTE *)(v23 + 35352) == 0;
        *(_WORD *)(v5 + 30) = 1;
        *(_BYTE *)(v5 + 9) = !v55;
        *(_OWORD *)(v5 + 10) = 0LL;
        *(_DWORD *)(v5 + 26) = 0;
        *(_OWORD *)(v5 + 32) = 0LL;
        *(_WORD *)(v5 + 40) = *(unsigned __int8 *)(v23 + 208);
        *(_QWORD *)(v5 + 32) = *(_QWORD *)(v23 + 36512);
        v5 += 48LL;
      }
    }
LABEL_32:
    if ( v4 == RelationProcessorDie )
    {
      KeGetTopologySiblingAffinityForProcessor(v23, 3, &v16->Count);
      LODWORD(v98) = 0;
      v80 = 0;
      v56 = KiTryPopulateLogicalProcessorInformation(
              v16,
              v94,
              ProcessorNumber != 0LL,
              5,
              v5,
              v83,
              v10,
              (unsigned int *)&v98,
              &v80);
      v10 += v98;
      if ( v56 >= 0 )
      {
        if ( v80 )
          v5 += v80;
      }
      else
      {
        v9 = v56;
      }
    }
    else
    {
      if ( v4 == RelationProcessorModule || v4 == RelationAll )
      {
        KeGetTopologySiblingAffinityForProcessor(v23, 2, &v16->Count);
        LODWORD(v98) = 0;
        v80 = 0;
        v57 = KiTryPopulateLogicalProcessorInformation(
                v16,
                v95,
                ProcessorNumber != 0LL,
                7,
                v5,
                v83,
                v10,
                (unsigned int *)&v98,
                &v80);
        v10 += v98;
        if ( v57 >= 0 )
        {
          if ( v80 )
            v5 += v80;
        }
        else
        {
          v9 = v57;
        }
      }
      if ( (v4 == RelationCache || v4 == RelationAll) && *(_DWORD *)(v23 + 35796) )
      {
        v26 = 0;
        while ( 1 )
        {
          v27 = (struct _KAFFINITY_EX *)(264LL * v26 + v23 + 44800);
          if ( !KiSplitLargeCaches )
          {
            RtlpCopyAffinityEx(v16, v16->Size, v27);
            goto LABEL_53;
          }
          v22 = *(unsigned __int8 *)(v23 + 208);
          if ( (unsigned __int16)v22 >= v27->Count )
            v38 = 0LL;
          else
            v38 = v27->Bitmap[v22];
          v39 = 8LL * v16->Count;
          *(_QWORD *)&v86 = v38;
          memset_0(&v16->8, 0, v39);
          v16->Count = 1;
          if ( (_WORD)v22 )
          {
            if ( v16->Size <= (unsigned __int16)v22 )
              goto LABEL_70;
            v16->Count = v22 + 1;
          }
          v16->Bitmap[v22] |= v38;
LABEL_70:
          v23 = v85;
LABEL_53:
          v28 = RtlpAndAffinityExNoResult(v16, v91[v26]);
          if ( ProcessorNumber || !v28 )
          {
            RtlOrAffinityEx(v16, v29, (__int64)v29);
            if ( ProcessorNumber )
            {
              Group = ProcessorNumber->Group;
            }
            else
            {
              for ( i = 0; i < v16->Count; ++i )
              {
                v41 = v16->Bitmap[i];
                if ( v41 )
                {
                  LOWORD(v22) = i;
                  v86 = v41;
                  break;
                }
              }
              Group = v22;
            }
            v31 = 0;
            v32 = 0;
            if ( v16->Count )
            {
              do
              {
                if ( v16->Bitmap[v32] )
                  ++v31;
                ++v32;
              }
              while ( v32 < v16->Count );
              v23 = v85;
            }
            v33 = (16 * v31 + 47) & 0xFFFFFFF8;
            v10 += v33;
            if ( v10 > v83 )
            {
              v9 = -1073741820;
            }
            else
            {
              *(_DWORD *)v5 = 2;
              *(_DWORD *)(v5 + 4) = v33;
              LOWORD(v22) = Group;
              *(_BYTE *)(v5 + 8) = *(_BYTE *)(v23 + 12 * (v26 + 2978LL));
              *(_BYTE *)(v5 + 9) = *(_BYTE *)(v23 + 12LL * v26 + 35737);
              *(_WORD *)(v5 + 10) = *(_WORD *)(v23 + 12LL * v26 + 35738);
              *(_DWORD *)(v5 + 12) = *(_DWORD *)(v23 + 12LL * v26 + 35740);
              *(_DWORD *)(v5 + 16) = *(_DWORD *)(v23 + 12LL * v26 + 35744);
              *(_WORD *)(v5 + 38) = v31;
              *(_OWORD *)(v5 + 20) = 0LL;
              *(_WORD *)(v5 + 36) = 0;
              if ( Group >= v16->Count )
                v34 = 0LL;
              else
                v34 = v16->Bitmap[Group];
              *(_OWORD *)(v5 + 40) = 0LL;
              *(_QWORD *)(v5 + 40) = v34;
              *(_QWORD *)&v86 = v34;
              *(_WORD *)(v5 + 48) = Group;
              v35 = 0;
              Count = v16->Count;
              v37 = 1;
              if ( v16->Count )
              {
                do
                {
                  if ( v35 != Group )
                  {
                    LOWORD(v22) = v35;
                    if ( v35 >= Count )
                    {
                      *(_QWORD *)&v86 = 0LL;
                    }
                    else
                    {
                      v58 = v16->Bitmap[v35];
                      *(_QWORD *)&v86 = v58;
                      if ( v58 )
                      {
                        v59 = v37++;
                        v60 = 2LL * (unsigned int)v59;
                        *(_QWORD *)(v5 + 8 * v60 + 48) = 0LL;
                        *(_QWORD *)(v5 + 8 * v60 + 40) = v58;
                        *(_WORD *)(v5 + 16 * (v59 + 3)) = v35;
                      }
                    }
                  }
                  Count = v16->Count;
                  ++v35;
                }
                while ( v35 < v16->Count );
                v23 = v85;
              }
              v5 += v33;
            }
          }
          if ( ++v26 >= *(_DWORD *)(v23 + 35796) )
          {
            v4 = RelationshipType;
            break;
          }
        }
      }
    }
    ProcessorIndexFromNumber = v82 + 1;
    v82 = ProcessorIndexFromNumber;
  }
  while ( ProcessorIndexFromNumber <= v84 );
  v6 = ProcessorNumber;
  v21 = v81;
LABEL_39:
  if ( v4 == RelationNumaNode )
  {
    v49 = v81;
    v50 = 0;
    do
    {
      v61 = KeNodeBlock[v50];
      if ( v6 )
        v62 = v6->Group;
      else
        v62 = *(unsigned __int8 *)(v61 + 12);
      NodeGroupAffinity = KeQueryNodeGroupAffinity(v61, v62);
      if ( NodeGroupAffinity
        && (!v6
         || ((unsigned int)(NodeGroupAffinity >> *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV
                                                 + v49)) & ((unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV
                                                                          + v49) >> 6 == v62)) != 0) )
      {
        v10 += 48;
        if ( v10 > v83 )
        {
          v9 = -1073741820;
        }
        else
        {
          *(_DWORD *)(v5 + 4) = 48;
          *(_DWORD *)(v5 + 8) = v50;
          *(_DWORD *)v5 = 1;
          *(_DWORD *)(v5 + 28) = 0x10000;
          *(_OWORD *)(v5 + 12) = 0LL;
          *(_OWORD *)(v5 + 32) = 0LL;
          *(_WORD *)(v5 + 40) = v62;
          *(_QWORD *)(v5 + 32) = NodeGroupAffinity;
          v5 += 48LL;
        }
      }
      ++v50;
    }
    while ( v50 < (unsigned __int16)KeNumberNodes );
    goto LABEL_44;
  }
  v82 = v9;
  if ( v4 == RelationNumaNodeEx || (v82 = v9, v4 == RelationAll) )
  {
    v51 = 0;
    if ( KeNumberNodes )
    {
      v52 = v83;
      do
      {
        if ( !v6 || *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[v21] + 192) + 138LL) == v51 )
        {
          KeQueryNodeActiveAffinityEx(v51, &v16->Count, 0LL);
          v64 = 0;
          v65 = 0;
          v66 = *(unsigned __int8 *)(KeNodeBlock[v51] + 12);
          if ( v16->Count )
          {
            do
            {
              if ( v16->Bitmap[v64] )
                ++v65;
              ++v64;
            }
            while ( v64 < v16->Count );
            v6 = ProcessorNumber;
            if ( v65 )
            {
              v67 = (16 * v65 + 39) & 0xFFFFFFF8;
              v10 += v67;
              if ( v10 > v52 )
              {
                v9 = -1073741820;
              }
              else
              {
                *(_DWORD *)(v5 + 4) = v67;
                *(_DWORD *)(v5 + 8) = v51;
                *(_DWORD *)v5 = 1;
                *(_WORD *)(v5 + 30) = v65;
                *(_OWORD *)(v5 + 12) = 0LL;
                *(_WORD *)(v5 + 28) = 0;
                if ( (unsigned __int16)v66 >= v16->Count )
                  v68 = 0LL;
                else
                  v68 = v16->Bitmap[v66];
                *(_OWORD *)(v5 + 32) = 0LL;
                *(_QWORD *)(v5 + 32) = v68;
                v69 = 1;
                *(_WORD *)(v5 + 40) = v66;
                v70 = v16->Count;
                v71 = 0;
                if ( v16->Count )
                {
                  do
                  {
                    if ( v71 != (_WORD)v66 && v71 < v70 )
                    {
                      v72 = v16->Bitmap[v71];
                      if ( v72 )
                      {
                        v73 = v69++;
                        v74 = 2 * (v73 + 2);
                        *(_QWORD *)(v5 + 8 * v74 + 8) = 0LL;
                        *(_WORD *)(v5 + 16 * v73 + 40) = v71;
                        *(_QWORD *)(v5 + 8 * v74) = v72;
                      }
                    }
                    v70 = v16->Count;
                    ++v71;
                  }
                  while ( v71 < v16->Count );
                  v6 = ProcessorNumber;
                }
                v5 += v67;
              }
            }
          }
          v21 = v81;
        }
        ++v51;
      }
      while ( v51 < (unsigned __int16)KeNumberNodes );
      v4 = RelationshipType;
      v82 = v9;
    }
  }
  v24 = v5;
  if ( v4 != RelationGroup )
  {
    if ( v4 != RelationAll || (v82 = v9, v6) )
    {
LABEL_44:
      if ( !v9 && !v10 )
        v9 = -1073741823;
      goto LABEL_45;
    }
  }
  v75 = (unsigned __int16)KiActiveGroups;
  v76 = (48 * (unsigned __int16)KiActiveGroups + 39) & 0xFFFFFFF8;
  v10 += v76;
  v81 = v10;
  if ( v10 <= v83 )
  {
    *(_DWORD *)(v5 + 4) = v76;
    *(_DWORD *)v5 = 4;
    v77 = 0;
    *(_WORD *)(v5 + 8) = KiMaximumGroups;
    *(_WORD *)(v5 + 10) = v75;
    *(_OWORD *)(v5 + 12) = 0LL;
    *(_DWORD *)(v5 + 28) = 0;
    if ( v75 )
    {
      do
      {
        v78 = v77;
        v79 = 6LL * v77;
        *(_BYTE *)(v24 + 48LL * v77 + 32) = KeQueryMaximumProcessorCountEx(v77);
        *(_BYTE *)(v24 + 48LL * v77 + 33) = KeQueryActiveProcessorCountEx(v77);
        ++v77;
        *($C9C4F79064DE35237E3F199A7D1BD3E1 *)(v24 + 8 * v79 + 72) = *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&stru_140FC11F0.116 + 8 * v78 + 4);
        *(_OWORD *)(v24 + 8 * v79 + 34) = 0LL;
        *(_OWORD *)(v24 + 8 * v79 + 50) = 0LL;
        *(_DWORD *)(v24 + 8 * v79 + 66) = 0;
        *(_WORD *)(v24 + 8 * v79 + 70) = 0;
      }
      while ( v77 < (unsigned __int16)KiActiveGroups );
      v10 = v81;
      v9 = v82;
    }
    goto LABEL_44;
  }
  v9 = -1073741820;
LABEL_45:
  *v99 = v10;
LABEL_46:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v9;
}
