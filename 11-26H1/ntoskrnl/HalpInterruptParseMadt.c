/*
 * XREFs of HalpInterruptParseMadt @ 0x140592EB8
 * Callers:
 *     HalpInterruptParseAcpiTables @ 0x140592E18 (HalpInterruptParseAcpiTables.c)
 * Callees:
 *     HalpMap @ 0x140345A2C (HalpMap.c)
 *     HalpInterruptGsiToLine @ 0x14043349C (HalpInterruptGsiToLine.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 *     HalpInterruptBlockSmtSiblings @ 0x1405926AC (HalpInterruptBlockSmtSiblings.c)
 *     HalpInterruptSortProcessorTable @ 0x140593978 (HalpInterruptSortProcessorTable.c)
 */

__int64 __fastcall HalpInterruptParseMadt(__int64 a1, int a2)
{
  __int64 v2; // r10
  _BYTE *v3; // rdi
  unsigned __int64 v4; // r10
  unsigned int v5; // r13d
  unsigned int v6; // r12d
  int v7; // r8d
  _BYTE *v9; // r15
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  char *v12; // rax
  _BYTE *v13; // r9
  char v14; // dl
  bool v15; // zf
  unsigned int v17; // r10d
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  _BYTE *v20; // rax
  _BYTE *v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r10
  __int64 v25; // r8
  __int64 v26; // rdi
  unsigned int *v27; // rax
  unsigned int v28; // r11d
  _DWORD *v29; // rdx
  __int64 v30; // r9
  unsigned int v31; // ecx
  unsigned __int8 *v32; // rsi
  _BYTE *v33; // r14
  __int64 v34; // rcx
  char *v35; // rbp
  _BYTE *v36; // rdi
  _BYTE *v37; // r13
  char v38; // al
  char v39; // dl
  _DWORD *v40; // rcx
  int v41; // eax
  ULONG_PTR v42; // rbp
  unsigned __int64 v43; // rsi
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  _QWORD *v46; // r8
  int v47; // eax
  __int64 v48; // rax
  __int64 MemoryInternal; // rcx
  char v50; // al
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // eax
  unsigned int v54; // edx
  __int16 v55; // ax
  int v56; // eax
  __int16 v57; // ax
  BOOL v58; // eax
  __int64 *v59; // rax
  unsigned int i; // r8d
  unsigned int v61; // r11d
  __int64 v62; // r8
  unsigned int v63; // esi
  int v64; // ebp
  __int64 v65; // r9
  _OWORD *v66; // rcx
  _OWORD *v67; // rax
  __int128 v68; // xmm2
  __int128 v69; // xmm3
  __int128 v70; // xmm4
  __int128 v71; // xmm5
  unsigned int v72; // edi
  _DWORD *v73; // rdx
  unsigned int v74; // eax
  ULONG_PTR v75; // rdx
  __int64 v76; // r10
  ULONG_PTR v77; // rax
  unsigned __int64 v78; // rcx
  __int128 v79; // xmm2
  __int128 v80; // xmm3
  __int128 v81; // xmm4
  __int128 v82; // xmm5
  ULONG_PTR v83; // r14
  __int64 v84; // r8
  __int64 v85; // r9
  _DWORD *v86; // rdx
  unsigned int v87; // eax
  ULONG_PTR v88; // rdx
  ULONG_PTR v89; // rax
  unsigned __int64 v90; // rcx
  __int128 v91; // xmm2
  __int128 v92; // xmm3
  __int128 v93; // xmm4
  __int128 v94; // xmm5
  __int64 v95; // r8
  __int64 v96; // r9
  unsigned int v97; // [rsp+88h] [rbp+10h]
  unsigned __int64 v98; // [rsp+90h] [rbp+18h]
  __int64 v99; // [rsp+98h] [rbp+20h] BYREF

  v2 = *(unsigned int *)(a1 + 4);
  v3 = (_BYTE *)(a1 + 44);
  v99 = 0LL;
  v4 = a1 + v2;
  v5 = 0;
  v98 = v4;
  v6 = 0;
  v97 = 0;
  v7 = 0;
  v9 = (_BYTE *)(a1 + 44);
  if ( a2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v32 = v9 + 2;
            if ( (unsigned __int64)(v9 + 2) > v4
              || (v33 = v9 + 1, v34 = (unsigned __int8)v9[1], (unsigned __int8)v34 < 2u)
              || (unsigned __int64)&v9[v34] > v4 )
            {
              if ( (unsigned int)HalpInterruptProcessorCount > 1 )
              {
                for ( i = 0; i < (unsigned int)HalpInterruptProcessorCount; ++i )
                {
                  if ( *(_DWORD *)(((unsigned __int64)i << 6) + HalpInterruptProcessorState + 8) == *(_DWORD *)HalpInterruptLocalIds )
                  {
                    v61 = i;
                    goto LABEL_114;
                  }
                }
                v61 = 0;
LABEL_114:
                v62 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
                v63 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
                v64 = v63 & *(_DWORD *)HalpInterruptLocalIds;
                v65 = (unsigned int)v62 & *(_DWORD *)HalpInterruptLocalIds;
                if ( v61 )
                {
                  v66 = (_OWORD *)HalpInterruptProcessorState;
                  v67 = (_OWORD *)(HalpInterruptProcessorState + ((unsigned __int64)v61 << 6));
                  v68 = *(_OWORD *)HalpInterruptProcessorState;
                  v69 = *(_OWORD *)(HalpInterruptProcessorState + 16);
                  v70 = *(_OWORD *)(HalpInterruptProcessorState + 32);
                  v71 = *(_OWORD *)(HalpInterruptProcessorState + 48);
                  *(_OWORD *)HalpInterruptProcessorState = *v67;
                  v66[1] = v67[1];
                  v66[2] = v67[2];
                  v66[3] = v67[3];
                  *v67 = v68;
                  v67[1] = v69;
                  v67[2] = v70;
                  v67[3] = v71;
                }
                v72 = 1;
                if ( (unsigned int)HalpInterruptProcessorCount > 1 )
                {
                  v73 = (_DWORD *)(HalpInterruptProcessorState + 72);
                  do
                  {
                    if ( ((unsigned int)v62 & *v73) != (_DWORD)v65 )
                      break;
                    ++v72;
                    v73 += 16;
                  }
                  while ( v72 < (unsigned int)HalpInterruptProcessorCount );
                }
                v74 = v72 + 1;
                if ( v72 + 1 < (unsigned int)HalpInterruptProcessorCount )
                {
                  v75 = HalpInterruptProcessorState + ((unsigned __int64)v74 << 6);
                  v76 = (unsigned int)HalpInterruptProcessorCount - v74;
                  do
                  {
                    if ( ((unsigned int)v62 & *(_DWORD *)(v75 + 8)) == (_DWORD)v65 )
                    {
                      v77 = HalpInterruptProcessorState;
                      v78 = (unsigned __int64)v72++ << 6;
                      v79 = *(_OWORD *)(v78 + HalpInterruptProcessorState);
                      v80 = *(_OWORD *)(v78 + HalpInterruptProcessorState + 16);
                      v81 = *(_OWORD *)(v78 + HalpInterruptProcessorState + 32);
                      v82 = *(_OWORD *)(v78 + HalpInterruptProcessorState + 48);
                      *(_OWORD *)(v78 + HalpInterruptProcessorState) = *(_OWORD *)v75;
                      *(_OWORD *)(v78 + v77 + 16) = *(_OWORD *)(v75 + 16);
                      *(_OWORD *)(v78 + v77 + 32) = *(_OWORD *)(v75 + 32);
                      *(_OWORD *)(v78 + v77 + 48) = *(_OWORD *)(v75 + 48);
                      *(_OWORD *)v75 = v79;
                      *(_OWORD *)(v75 + 16) = v80;
                      *(_OWORD *)(v75 + 32) = v81;
                      *(_OWORD *)(v75 + 48) = v82;
                    }
                    v75 += 64LL;
                    --v76;
                  }
                  while ( v76 );
                }
                if ( v72 > 1 )
                  HalpInterruptHyperThreading = 1;
                v83 = HalpInterruptProcessorState;
                HalpInterruptSortProcessorTable(HalpInterruptProcessorState + 64, v72 - 1, v62, v65);
                v85 = v72;
                if ( v72 < (unsigned int)HalpInterruptProcessorCount )
                {
                  v86 = (_DWORD *)(v83 + ((unsigned __int64)v72 << 6) + 8);
                  do
                  {
                    if ( (v63 & *v86) != v64 )
                      break;
                    ++v72;
                    v86 += 16;
                  }
                  while ( v72 < (unsigned int)HalpInterruptProcessorCount );
                }
                v87 = v72 + 1;
                if ( v72 + 1 < (unsigned int)HalpInterruptProcessorCount )
                {
                  v88 = HalpInterruptProcessorState + ((unsigned __int64)v87 << 6);
                  v84 = (unsigned int)HalpInterruptProcessorCount - v87;
                  do
                  {
                    if ( (v63 & *(_DWORD *)(v88 + 8)) == v64 )
                    {
                      v89 = HalpInterruptProcessorState;
                      v90 = (unsigned __int64)v72++ << 6;
                      v91 = *(_OWORD *)(v90 + HalpInterruptProcessorState);
                      v92 = *(_OWORD *)(v90 + HalpInterruptProcessorState + 16);
                      v93 = *(_OWORD *)(v90 + HalpInterruptProcessorState + 32);
                      v94 = *(_OWORD *)(v90 + HalpInterruptProcessorState + 48);
                      *(_OWORD *)(v90 + HalpInterruptProcessorState) = *(_OWORD *)v88;
                      *(_OWORD *)(v90 + v89 + 16) = *(_OWORD *)(v88 + 16);
                      *(_OWORD *)(v90 + v89 + 32) = *(_OWORD *)(v88 + 32);
                      *(_OWORD *)(v90 + v89 + 48) = *(_OWORD *)(v88 + 48);
                      *(_OWORD *)v88 = v91;
                      *(_OWORD *)(v88 + 16) = v92;
                      *(_OWORD *)(v88 + 32) = v93;
                      *(_OWORD *)(v88 + 48) = v94;
                    }
                    v88 += 64LL;
                    --v84;
                  }
                  while ( v84 );
                }
                HalpInterruptSortProcessorTable(
                  HalpInterruptProcessorState + (v85 << 6),
                  v72 - (unsigned int)v85,
                  v84,
                  v85);
                HalpInterruptSortProcessorTable(
                  HalpInterruptProcessorState + ((unsigned __int64)v72 << 6),
                  (unsigned int)HalpInterruptProcessorCount - v72,
                  v95,
                  v96);
                if ( HalpInterruptHyperThreading && HalpInterruptBlockHyperthreading )
                  HalpInterruptBlockSmtSiblings();
              }
              return v5;
            }
            v35 = v9;
            v36 = v9;
            v37 = v9;
            v38 = v9[1];
            v9 += v34;
            v39 = *v35;
            if ( *v35 || (_BYTE)v34 != 8 )
              break;
            v5 = v97;
            v40 = (_DWORD *)(HalpInterruptProcessorState + ((unsigned __int64)v6 << 6));
            if ( (v35[4] & 1) != 0 )
            {
              *v40 = (unsigned __int8)v35[3];
              v40[1] = *v32;
              v41 = (unsigned __int8)v35[3];
              goto LABEL_53;
            }
          }
          if ( v39 != 9 )
            break;
          v38 = v34;
          if ( (_BYTE)v34 != 16 )
            break;
          v5 = v97;
          v40 = (_DWORD *)(HalpInterruptProcessorState + ((unsigned __int64)v6 << 6));
          if ( (v36[8] & 1) != 0 )
          {
            *v40 = *((_DWORD *)v36 + 1);
            v40[1] = *((_DWORD *)v36 + 3);
            v41 = *((_DWORD *)v36 + 1);
LABEL_53:
            v40[2] = v41;
            ++v6;
          }
        }
        if ( v39 != 11 )
          break;
        v38 = v34;
        if ( (unsigned __int8)v34 < 0x28u || (unsigned int)HalpInterruptGicVersion >= 3 && (unsigned __int8)v34 < 0x4Cu )
          break;
        v42 = HalpInterruptProcessorState;
        v43 = (unsigned __int64)v6 << 6;
        if ( (v36[12] & 1) == 0 )
          goto LABEL_41;
        v44 = *((_QWORD *)v36 + 3);
        if ( *((_DWORD *)v36 + 4) == 1 && v44 )
        {
          *(_QWORD *)(v43 + HalpInterruptProcessorState + 24) = v44;
          v45 = HalpMap(v44, 1LL, 0, 0, 4u, 0LL);
          *(_QWORD *)(v43 + v42 + 32) = v45;
          v97 = v45 == 0 ? 0xC000009A : 0;
          if ( !v45 )
            return 3221225626LL;
          if ( (unsigned int)HalpInterruptGicVersion < 3 )
          {
            v46 = v37 + 68;
            *(_DWORD *)(v43 + v42) = *((_DWORD *)v36 + 1);
            v47 = *((_DWORD *)v36 + 1);
          }
          else
          {
            v46 = v36 + 68;
            *(_DWORD *)(v43 + v42) = (*(_QWORD *)(v36 + 68) >> 8) ^ (*((_DWORD *)v36 + 17) ^ (*(_QWORD *)(v36 + 68) >> 8)) & 0xFFFFFF;
            v47 = 0;
          }
          *(_DWORD *)(v43 + v42 + 8) = v47;
          *(_DWORD *)(v43 + v42 + 4) = *((_DWORD *)v36 + 2);
          *(_DWORD *)(v43 + v42 + 40) = *((_DWORD *)v36 + 5);
          if ( *v33 < 0x4Cu )
          {
            *(_QWORD *)(v43 + v42 + 48) = 0LL;
            *(_BYTE *)(v43 + v42 + 45) = 0;
          }
          else
          {
            *(_QWORD *)(v43 + v42 + 48) = *v46;
            *(_BYTE *)(v43 + v42 + 45) = 1;
            if ( *v33 >= 0x4Du )
              *(_BYTE *)(v43 + v42 + 44) = v36[76];
          }
          if ( (v36[12] & 2) != 0 )
            *(_BYTE *)(v43 + v42 + 14) = 1;
          v5 = v97;
          ++v6;
          goto LABEL_104;
        }
        v5 = -1073741811;
        v97 = -1073741811;
      }
      if ( v39 == 3 )
      {
        v38 = v34;
        if ( (_BYTE)v34 == 8 )
          break;
      }
      if ( v39 == 4 && (v38 = v34, (_BYTE)v34 == 6) || v39 == 10 && (v38 = v34, (_BYTE)v34 == 12) )
      {
        MemoryInternal = HalpMmAllocateMemoryInternal(24, 1u);
        if ( !MemoryInternal )
          return 3221225626LL;
        *(_OWORD *)MemoryInternal = 0LL;
        *(_QWORD *)(MemoryInternal + 16) = 0LL;
        *(_BYTE *)(MemoryInternal + 8) = 1;
        if ( *v36 == 4 )
        {
          *(_DWORD *)(MemoryInternal + 12) = (unsigned __int8)v36[2];
          if ( v35[2] == -1 )
            *(_DWORD *)(MemoryInternal + 12) = -1;
          *(_DWORD *)(MemoryInternal + 16) = *(unsigned __int16 *)(v36 + 3);
          v50 = v36[5];
        }
        else
        {
          *(_DWORD *)(MemoryInternal + 12) = *((_DWORD *)v36 + 1);
          *(_DWORD *)(MemoryInternal + 16) = *((unsigned __int16 *)v35 + 1);
          v50 = v36[8];
        }
        v4 = v98;
        *(_DWORD *)(MemoryInternal + 20) = -(v50 != 0) - 4;
        *(_QWORD *)MemoryInternal = HalpInterruptNmiSources;
        HalpInterruptNmiSources = MemoryInternal;
LABEL_41:
        v5 = v97;
      }
      else
      {
        v5 = v97;
        if ( v39 == 2 && v38 == 10 )
        {
          if ( (int)HalpInterruptGsiToLine(*((unsigned int *)v36 + 1), &v99) >= 0 )
          {
            v51 = HalpMmAllocateMemoryInternal(40, 1u);
            v52 = v51;
            if ( !v51 )
              return 3221225626LL;
            *(_OWORD *)v51 = 0LL;
            *(_OWORD *)(v51 + 16) = 0LL;
            *(_QWORD *)(v51 + 32) = 0LL;
            v53 = (unsigned __int8)v36[3];
            v54 = v53;
            if ( v53 >= 8 )
              v54 = v53 - 8;
            *(_DWORD *)(v52 + 16) = 45057 - (v53 < 8);
            *(_DWORD *)(v52 + 20) = v54;
            *(_QWORD *)(v52 + 24) = v99;
            v55 = *((_WORD *)v36 + 4) & 3;
            if ( !v55 || (v15 = v55 == 1, v56 = 2, v15) )
              v56 = 1;
            *(_DWORD *)(v52 + 36) = v56;
            v57 = *((_WORD *)v36 + 4) & 0xC;
            v58 = !v57 || v57 == 4;
            *(_DWORD *)(v52 + 32) = v58;
            v59 = (__int64 *)qword_140F89A98;
            if ( *(__int64 **)qword_140F89A98 != &HalpInterruptOverrides )
              __fastfail(3u);
            *(_QWORD *)v52 = &HalpInterruptOverrides;
            *(_QWORD *)(v52 + 8) = v59;
            *v59 = v52;
            qword_140F89A98 = v52;
          }
          v5 = 0;
          v97 = 0;
LABEL_104:
          v4 = v98;
        }
      }
    }
    v48 = HalpMmAllocateMemoryInternal(24, 1u);
    if ( !v48 )
      return 3221225626LL;
    v5 = v97;
    *(_BYTE *)(v48 + 8) = 0;
    *(_DWORD *)(v48 + 16) = *(unsigned __int16 *)v32;
    *(_DWORD *)(v48 + 20) = *((_DWORD *)v36 + 1);
    *(_QWORD *)v48 = HalpInterruptNmiSources;
    HalpInterruptNmiSources = v48;
    goto LABEL_104;
  }
  v10 = a1 + 46;
  if ( a1 + 46 <= v4 )
  {
    do
    {
      v11 = (unsigned __int8)v9[1];
      if ( (unsigned __int8)v11 < 2u || (unsigned __int64)&v9[v11] > v4 )
        break;
      v12 = v9;
      v13 = v9;
      v9 += v11;
      v14 = *v12;
      if ( *v12 )
      {
        if ( v14 == 9 )
        {
          if ( (_BYTE)v11 == 16 )
          {
            v15 = (v13[8] & 1) == 0;
            goto LABEL_17;
          }
        }
        else
        {
          if ( v14 == 1 )
          {
            if ( (_BYTE)v11 == 12 )
              ++HalpInterruptIoApicCount;
            continue;
          }
          if ( v14 == 11 && (unsigned __int8)v11 >= 0x28u )
          {
            v15 = (v13[12] & 1) == 0;
            goto LABEL_17;
          }
        }
      }
      else if ( (_BYTE)v11 == 8 )
      {
        v15 = (v13[4] & 1) == 0;
LABEL_17:
        if ( !v15 )
          LODWORD(HalpInterruptProcessorCount) = HalpInterruptProcessorCount + 1;
        if ( ++v7 > (unsigned int)HalpInterruptMaxProcessors )
          HalpInterruptMaxProcessors = v7;
      }
    }
    while ( (unsigned __int64)(v9 + 2) <= v4 );
  }
  HalpInterruptIoApic = HalpMmAllocateMemoryInternal(16 * HalpInterruptIoApicCount, 1u);
  if ( HalpInterruptIoApic )
  {
    v17 = 0;
    v18 = a1 + *(unsigned int *)(a1 + 4);
    if ( v10 <= v18 )
    {
      do
      {
        v19 = (unsigned __int8)v3[1];
        if ( (unsigned __int8)v19 < 2u || (unsigned __int64)&v3[v19] > v18 )
          break;
        v20 = v3;
        v21 = v3;
        v3 += v19;
        if ( *v20 == 1 && (_BYTE)v19 == 12 )
        {
          v22 = HalpInterruptIoApic;
          v23 = 2LL * v17++;
          *(_DWORD *)(HalpInterruptIoApic + 8 * v23) = (unsigned __int8)v21[2];
          *(_DWORD *)(v22 + 8 * v23 + 4) = *((_DWORD *)v21 + 1);
          *(_DWORD *)(v22 + 8 * v23 + 8) = *((_DWORD *)v21 + 2);
        }
      }
      while ( (unsigned __int64)(v3 + 2) <= v18 );
    }
    if ( HalpInterruptIoApicCount )
    {
      v24 = (unsigned int)HalpInterruptIoApicCount;
      v25 = (unsigned int)HalpInterruptIoApicCount;
      v26 = HalpInterruptIoApic + 8;
      v27 = (unsigned int *)(HalpInterruptIoApic + 12);
      do
      {
        v28 = *(v27 - 1);
        v29 = (_DWORD *)v26;
        *v27 = -1;
        v30 = v24;
        do
        {
          if ( *v29 > v28 )
          {
            v31 = *v29 - v28;
            if ( v31 < *v27 )
              *v27 = v31;
          }
          v29 += 4;
          --v30;
        }
        while ( v30 );
        v27 += 4;
        --v25;
      }
      while ( v25 );
    }
    return v5;
  }
  HalpInterruptSetProblemEx(0LL, 30, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 0x6E3u);
  return 3221225495LL;
}
