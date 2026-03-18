/*
 * XREFs of PspBuildCreateProcessContext @ 0x140A00BC4
 * Callers:
 *     PsCreateMinimalProcess @ 0x1407FC198 (PsCreateMinimalProcess.c)
 *     NtCreateThreadEx @ 0x140A008A0 (NtCreateThreadEx.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 * Callees:
 *     KeIsEmptyGroupMask @ 0x14040B460 (KeIsEmptyGroupMask.c)
 *     KeGetProcessorIndexFromNumber @ 0x140428990 (KeGetProcessorIndexFromNumber.c)
 *     KeVerifyGroupAffinity @ 0x140483914 (KeVerifyGroupAffinity.c)
 *     IsTrustletCreateAttributeWellFormed @ 0x1405302B4 (IsTrustletCreateAttributeWellFormed.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     qsort @ 0x140536F00 (qsort.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1408F9EF0 (ObReferenceObjectByHandleWithTag.c)
 *     PspValidateMitigationOptions @ 0x140966818 (PspValidateMitigationOptions.c)
 *     PspDeleteCreateProcessContext @ 0x140A00524 (PspDeleteCreateProcessContext.c)
 *     PspProcessReturnAttributeForProcessCreation @ 0x140A016AC (PspProcessReturnAttributeForProcessCreation.c)
 *     PspCopyAttributeBuffer @ 0x140B02B6C (PspCopyAttributeBuffer.c)
 *     PspCopyAttributeBufferAligned @ 0x140B02C88 (PspCopyAttributeBufferAligned.c)
 *     PspProbeAttributeBuffer @ 0x140B20298 (PspProbeAttributeBuffer.c)
 *     RtlValidProcessProtection @ 0x140B25650 (RtlValidProcessProtection.c)
 *     PspValidateMitigationAuditOptions @ 0x140B40814 (PspValidateMitigationAuditOptions.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PspBuildCreateProcessContext(char *Src, char a2, int a3, __int64 a4)
{
  char v5; // r15
  char *v6; // r12
  __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  char *v12; // rdx
  size_t v13; // r8
  __int64 v14; // r9
  unsigned __int64 i; // r12
  unsigned __int64 *v16; // rdi
  unsigned __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // ebx
  bool v25; // sf
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  void *v42; // rcx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // r8
  __m128i v51; // xmm1
  char v52; // al
  int v53; // eax
  unsigned __int64 v54; // rax
  ULONG ProcessorIndexFromNumber; // eax
  bool v56; // zf
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // r15
  unsigned __int64 j; // rdi
  PVOID *v63; // rcx
  char valid; // al
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rdx
  __int64 v67; // rax
  unsigned __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // r9
  __int64 v71; // rdx
  int v72; // eax
  __int64 v73; // rax
  _DWORD *v74; // rcx
  bool v75; // cf
  unsigned __int64 v76; // r8
  __int64 v77; // rax
  __int64 v78; // r12
  __int64 v79; // r10
  PVOID v80; // r11
  unsigned __int16 v81; // cx
  __int64 v82; // rdi
  __int64 v83; // r15
  unsigned int v84; // eax
  __int64 Pool2; // rax
  ULONG Tag; // [rsp+20h] [rbp-338h]
  unsigned __int64 v87; // [rsp+40h] [rbp-318h]
  unsigned __int64 v89; // [rsp+50h] [rbp-308h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber[4]; // [rsp+58h] [rbp-300h] BYREF
  __int64 v91; // [rsp+68h] [rbp-2F0h]
  int v92; // [rsp+70h] [rbp-2E8h]
  PVOID Object[5]; // [rsp+78h] [rbp-2E0h] BYREF
  unsigned __int64 v94; // [rsp+A0h] [rbp-2B8h]
  __int64 v95; // [rsp+A8h] [rbp-2B0h]
  unsigned __int64 v96; // [rsp+B0h] [rbp-2A8h]
  char *v97; // [rsp+B8h] [rbp-2A0h]
  __m128i v98; // [rsp+C0h] [rbp-298h] BYREF
  __int64 v99; // [rsp+D0h] [rbp-288h]
  _OWORD v100[2]; // [rsp+E0h] [rbp-278h] BYREF
  __int64 v101; // [rsp+100h] [rbp-258h]
  _OWORD v102[32]; // [rsp+110h] [rbp-248h] BYREF

  v92 = a3;
  v5 = a2;
  v6 = Src;
  v97 = Src;
  Object[3] = (PVOID)a4;
  memset(v100, 0, sizeof(v100));
  v101 = 0LL;
  if ( a2 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyFromUser(v100, Src, 0x28uLL);
  }
  else
  {
    RtlCopyVolatileMemory(v100, Src, 0x28uLL);
  }
  v7 = *(_QWORD *)&v100[0];
  if ( *(_QWORD *)&v100[0] >= 0x28uLL )
  {
    if ( v5 )
      ProbeForRead(v6 + 40, *(_QWORD *)&v100[0] - 40LL, 4u);
    v8 = v7 - 8;
    if ( (v8 & 0x1F) == 0 )
    {
      v9 = v8 >> 5;
      v96 = v9;
      v10 = 0LL;
      while ( 1 )
      {
        v94 = v10;
        if ( v10 >= v9 )
        {
          if ( (*(_DWORD *)(a4 + 8) & 0x800LL) != 0 )
          {
            qsort(*(void **)(a4 + 296), *(unsigned int *)(a4 + 292), 8uLL, PspSortHandleList);
            *(_BYTE *)(a4 + 16) = *(_BYTE *)(a4 + 16) & 0xFE | (v92 != 0);
          }
          return 0;
        }
        v11 = v9 - v10;
        if ( v11 > 0x10 )
          v11 = 16LL;
        v87 = v11;
        v12 = &v6[32 * v10 + 8];
        if ( v5 && 32 * v11 && ((unsigned __int8)v12 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = 32 * v11;
        if ( v5 )
          RtlCopyFromUser(v102, v12, v13);
        else
          RtlCopyVolatileMemory(v102, v12, v13);
        *(_OWORD *)&ProcNumber[0].Group = 0LL;
        v91 = 0LL;
        for ( i = 0LL; ; ++i )
        {
          v89 = i;
          if ( i >= v11 )
          {
            v24 = 0;
            goto LABEL_38;
          }
          v16 = (unsigned __int64 *)&v102[2 * i];
          v17 = *v16;
          v18 = v92;
          if ( v92 && (v17 & 0x10000) == 0
            || (v17 & 0x20000) != 0 && v16[3]
            || (v19 = *(_QWORD *)(a4 + 8), (v19 & (1LL << v17)) != 0) )
          {
LABEL_68:
            v24 = -1073741811;
            goto LABEL_69;
          }
          *(_QWORD *)(a4 + 8) = v19 | (1LL << v17);
          if ( v17 <= 0x20016 )
            break;
          if ( v17 <= 0x3001E )
          {
            if ( v17 == 196638 )
            {
              if ( !v18 )
                goto LABEL_68;
              if ( v16[1] == 8 )
                v24 = PspCopyAttributeBufferAligned((void *)(a4 + 480), v5);
              else
                v24 = -1073741811;
              if ( v24 < 0 )
                goto LABEL_69;
              if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & *(_QWORD *)(a4 + 480)) != 0LL )
                goto LABEL_68;
              *(_QWORD *)(a4 + 480) &= 0x40000uLL;
            }
            else
            {
              v45 = v17 - 131095;
              if ( !v45 )
              {
                if ( v16[1] != 524 )
                  goto LABEL_142;
                LOBYTE(v14) = v5;
                v24 = PspProbeAttributeBuffer(v16[2], 524LL, 1LL, v14);
                if ( v24 < 0 )
                  goto LABEL_66;
                Pool2 = ExAllocatePool2(0x41uLL);
                *(_QWORD *)(a4 + 400) = Pool2;
                if ( !Pool2 )
                  goto LABEL_162;
                LOBYTE(v14) = v5;
                v24 = PspCopyAttributeBuffer(Pool2, v16[2], v16[1], v14);
                if ( v24 < 0 )
                  goto LABEL_66;
                *(_DWORD *)(a4 + 396) = *((_DWORD *)v16 + 2);
                v75 = (**(_BYTE **)(a4 + 400) & 0x40) != 0;
LABEL_197:
                v24 = v75 ? 0xC000000D : 0;
                goto LABEL_66;
              }
              v46 = v45 - 1;
              if ( !v46 )
              {
                if ( v16[1] != 40 )
                  goto LABEL_142;
                LOBYTE(v14) = v5;
                v24 = PspProbeAttributeBuffer(v16[2], 40LL, 4LL, v14);
                if ( v24 < 0 )
                  goto LABEL_66;
                v77 = ExAllocatePool2(0x41uLL);
                *(_QWORD *)(a4 + 408) = v77;
                if ( !v77 )
                  goto LABEL_162;
                *(_QWORD *)(v77 + 8) = 0LL;
                *(_QWORD *)(*(_QWORD *)(a4 + 408) + 24LL) = 0LL;
                LOBYTE(v14) = v5;
                v24 = PspCopyAttributeBuffer(*(_QWORD *)(a4 + 408), v16[2], v16[1], v14);
                if ( v24 < 0 )
                  goto LABEL_66;
                v78 = *(_QWORD *)(a4 + 408);
                v79 = *(_QWORD *)(v78 + 8);
                v95 = v79;
                v80 = *(PVOID *)(v78 + 24);
                Object[0] = v80;
                *(_QWORD *)(v78 + 8) = 0LL;
                *(_QWORD *)(*(_QWORD *)(a4 + 408) + 24LL) = 0LL;
                v81 = *(_WORD *)(v78 + 2);
                if ( v81 )
                {
                  if ( *(_WORD *)v78 <= v81 && ((*(_WORD *)v78 | v81) & 1) == 0 && v81 != 0xFFFF && v79 )
                  {
                    LOBYTE(v14) = v5;
                    v24 = PspProbeAttributeBuffer(v79, *(unsigned __int16 *)(v78 + 2), 1LL, v14);
                    if ( v24 >= 0 )
                    {
                      v80 = Object[0];
                      goto LABEL_216;
                    }
LABEL_144:
                    i = v89;
                    goto LABEL_66;
                  }
LABEL_221:
                  v24 = -1073741811;
                  goto LABEL_144;
                }
LABEL_216:
                v82 = *(unsigned int *)(*(_QWORD *)(a4 + 408) + 16LL);
                if ( (_DWORD)v82 )
                {
                  if ( !v80 || (unsigned int)v82 > 0xFFFF )
                    goto LABEL_221;
                  LOBYTE(v14) = v5;
                  v24 = PspProbeAttributeBuffer(v80, 8 * v82, 4LL, v14);
                  if ( v24 < 0 )
                    goto LABEL_144;
                }
                v83 = 0LL;
                if ( *(_WORD *)(v78 + 2) || (_DWORD)v82 )
                  v83 = ExAllocatePool2(0x41uLL);
                v84 = *(unsigned __int16 *)(v78 + 2);
                if ( (_WORD)v84 )
                {
                  *(_QWORD *)(v78 + 8) = v83;
                  LOBYTE(v14) = a2;
                  v24 = PspCopyAttributeBuffer(v83, v95, v84, v14);
                  if ( v24 < 0 )
                    goto LABEL_144;
                  v83 += *(unsigned __int16 *)(v78 + 2);
                }
                if ( !(_DWORD)v82
                  || (*(_QWORD *)(*(_QWORD *)(a4 + 408) + 24LL) = v83,
                      LOBYTE(v14) = a2,
                      v24 = PspCopyAttributeBuffer(*(_QWORD *)(*(_QWORD *)(a4 + 408) + 24LL), Object[0], 8 * v82, v14),
                      v24 >= 0) )
                {
                  v24 = 0;
                }
                goto LABEL_144;
              }
              v47 = v46 - 1;
              if ( !v47 )
              {
                if ( v16[1] != 4 )
                  goto LABEL_142;
                v42 = (void *)(a4 + 392);
                goto LABEL_79;
              }
              v48 = v47 - 2;
              if ( !v48 )
              {
                *(_OWORD *)&ProcNumber[0].Group = 0LL;
                v91 = 0LL;
                v76 = v16[1];
                if ( v76 > 0x18 )
                  goto LABEL_68;
                LOBYTE(v14) = v5;
                v24 = PspCopyAttributeBuffer(ProcNumber, v16[2], v76, v14);
                if ( v24 < 0 )
                  goto LABEL_69;
                v98 = *(__m128i *)&ProcNumber[0].Group;
                v99 = v91;
                v24 = PspValidateMitigationAuditOptions(&v98);
                if ( v24 < 0 )
                  goto LABEL_69;
                v51 = *(__m128i *)&ProcNumber[0].Group;
                *(_OWORD *)(a4 + 448) = *(_OWORD *)&ProcNumber[0].Group;
                *(_QWORD *)(a4 + 464) = v91;
                goto LABEL_102;
              }
              v49 = v48 - 2;
              if ( v49 )
              {
                v54 = v49 - 65519;
                if ( v54 )
                {
                  if ( v54 != 2 || !v18 || v16[1] != 4 )
                    goto LABEL_68;
                  v24 = PspCopyAttributeBufferAligned(ProcNumber, v5);
                  if ( v24 < 0 )
                    goto LABEL_69;
                  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
                  *(_DWORD *)(a4 + 20) = ProcessorIndexFromNumber;
                  v56 = ProcessorIndexFromNumber == -1;
                }
                else
                {
                  if ( !v18 )
                    goto LABEL_68;
                  if ( v16[1] == 16 )
                  {
                    v24 = PspCopyAttributeBufferAligned((void *)(a4 + 320), a2);
                    i = v89;
                  }
                  else
                  {
                    v24 = -1073741811;
                  }
                  if ( v24 < 0 )
                    goto LABEL_69;
                  valid = KeVerifyGroupAffinity(a4 + 320, 1);
LABEL_141:
                  v56 = valid == 0;
                }
                if ( v56 )
                  goto LABEL_68;
                goto LABEL_36;
              }
              if ( v16[1] == 4 )
                v24 = PspCopyAttributeBufferAligned(ProcNumber, v5);
              else
                v24 = -1073741811;
              if ( v24 < 0 )
                goto LABEL_69;
              if ( (*(_DWORD *)ProcNumber & 0xFFFFFFFE) != 0 )
                goto LABEL_68;
              *(struct _PROCESSOR_NUMBER *)(a4 + 440) = ProcNumber[0];
            }
          }
          else
          {
            v28 = v17 - 393216;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                v30 = v29 - 1;
                if ( !v30 )
                {
                  if ( v16[1] != 8 )
                    goto LABEL_68;
                  *(_QWORD *)(a4 + 152) = v16[2];
                  goto LABEL_36;
                }
                v31 = v30 - 15;
                if ( !v31 )
                {
                  if ( v16[1] != 1 )
                    goto LABEL_68;
                  *(_BYTE *)(a4 + 1) = *((_BYTE *)v16 + 16);
                  valid = RtlValidProcessProtection();
                  goto LABEL_141;
                }
                v32 = v31 - 9;
                if ( v32 )
                {
                  v65 = v32 - 2;
                  if ( v65 )
                  {
                    if ( v65 != 3 || v16[1] != 4 || (v16[2] & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
                      goto LABEL_68;
                    *(_DWORD *)(a4 + 488) = *((_DWORD *)v16 + 4);
                  }
                  else
                  {
                    if ( v16[1] != 2 )
                      goto LABEL_68;
                    *(_WORD *)(a4 + 168) = *((_WORD *)v16 + 8);
                  }
                }
                else
                {
                  if ( v16[1] != 1 )
                    goto LABEL_68;
                  *(_BYTE *)(a4 + 17) = *(_BYTE *)(a4 + 17) & 0x7F | (v16[2] != 0 ? 0x80 : 0);
                }
              }
              else
              {
                if ( v16[1] != 8 )
                  goto LABEL_68;
                *(_QWORD *)(a4 + 144) = v16[2];
              }
            }
            else
            {
              if ( v16[1] != 8 )
                goto LABEL_68;
              *(_QWORD *)(a4 + 128) = v16[2];
            }
          }
LABEL_36:
          v5 = a2;
          v11 = v87;
        }
        if ( v17 == 131094 )
        {
          if ( v16[1] != 8 )
            goto LABEL_142;
          LOBYTE(v14) = v5;
          v24 = PspProbeAttributeBuffer(v16[2], 8LL, 4LL, v14);
          if ( v24 < 0 )
            goto LABEL_66;
          v73 = ExAllocatePool2(0x41uLL);
          *(_QWORD *)(a4 + 432) = v73;
          if ( !v73 )
            goto LABEL_162;
          LOBYTE(v14) = v5;
          v24 = PspCopyAttributeBuffer(v73, v16[2], v16[1], v14);
          if ( v24 < 0 )
            goto LABEL_66;
          v74 = *(_DWORD **)(a4 + 432);
          if ( (*v74 & 3) == 0 )
            goto LABEL_142;
          v75 = (unsigned int)(v74[1] - 1) > 5;
          goto LABEL_197;
        }
        if ( v17 <= 0x2000A )
        {
          if ( v17 == 131082 )
          {
            v52 = 0;
            v89 = 0LL;
            if ( v16[1] == 8 )
            {
              v24 = PspCopyAttributeBufferAligned(&v89, v5);
              v52 = v89;
            }
            else
            {
              v24 = -1073741811;
            }
            if ( v24 < 0 )
              goto LABEL_69;
            if ( (v52 & 0x1C) != 0 )
            {
              v24 = -1073741637;
              goto LABEL_66;
            }
            v53 = v52 & 3;
            if ( (unsigned __int8)v53 >= 3u )
              goto LABEL_142;
            *(_BYTE *)(a4 + 17) = (4 * v53) | *(_BYTE *)(a4 + 17) & 0xF3;
            if ( v53 == 1 )
              *(_DWORD *)(a4 + 288) = HIDWORD(v89);
          }
          else
          {
            v20 = v17 - 6;
            if ( !v20 )
            {
              v22 = a4 + 40;
              v23 = 64LL;
              goto LABEL_34;
            }
            v21 = v20 - 65533;
            if ( !v21 )
            {
              v22 = a4 + 24;
              v23 = 16LL;
LABEL_34:
              LOBYTE(Tag) = v5;
              v24 = PspProcessReturnAttributeForProcessCreation(&v102[2 * i], v22, v23, 4LL, Tag);
              v25 = v24 < 0;
              goto LABEL_35;
            }
            v27 = v21 - 1;
            if ( !v27 )
            {
              v22 = a4 + 32;
              v23 = 8LL;
              goto LABEL_34;
            }
            v33 = v27 - 65537;
            if ( v33 )
            {
              v43 = v33 - 2;
              if ( v43 )
              {
                v44 = v43 - 1;
                if ( v44 )
                {
                  if ( v44 != 1 )
                    goto LABEL_68;
                  if ( v16[1] != 4 )
                    goto LABEL_142;
                  v42 = (void *)(a4 + 316);
                }
                else
                {
                  if ( v16[1] != 1 )
                    goto LABEL_142;
                  v42 = (void *)(a4 + 2);
                }
                goto LABEL_79;
              }
              v66 = v16[1];
              if ( !v66 || (v66 & 0xF) != 0 )
                goto LABEL_142;
              LOBYTE(v14) = v5;
              v24 = PspProbeAttributeBuffer(v16[2], v66, 4LL, v14);
              if ( v24 < 0 )
                goto LABEL_66;
              if ( v16[1] > 0x10 )
              {
                v67 = ExAllocatePool2(0x41uLL);
                if ( !v67 )
                  goto LABEL_162;
              }
              else
              {
                v67 = a4 + 264;
              }
              *(_QWORD *)(a4 + 280) = v67;
              LOBYTE(v14) = v5;
              v24 = PspCopyAttributeBuffer(v67, v16[2], v16[1], v14);
              if ( v24 < 0 )
                goto LABEL_66;
              *(_QWORD *)(a4 + 256) = v16[1] >> 4;
            }
            else
            {
              v34 = v16[1];
              if ( !v34 || (v34 & 1) != 0 || v34 > 0xFFFF )
                goto LABEL_142;
              LOBYTE(v14) = v5;
              v24 = PspProbeAttributeBuffer(v16[2], v34, 1LL, v14);
              if ( v24 < 0 )
                goto LABEL_66;
              v35 = ExAllocatePool2(0x41uLL);
              if ( !v35 )
                goto LABEL_162;
              *(_OWORD *)(a4 + 240) = 0LL;
              *(_WORD *)(a4 + 242) = *((_WORD *)v16 + 4);
              *(_QWORD *)(a4 + 248) = v35;
              LOBYTE(v14) = v5;
              v24 = PspCopyAttributeBuffer(v35, v16[2], v16[1], v14);
              if ( v24 < 0 )
                goto LABEL_66;
              *(_WORD *)(a4 + 240) = *((_WORD *)v16 + 4);
            }
          }
LABEL_65:
          v24 = 0;
          goto LABEL_66;
        }
        v36 = v17 - 131083;
        if ( !v36 )
        {
          v57 = v16[1];
          if ( !v57 || (v57 & 7) != 0 || (v57 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFF8LL )
            goto LABEL_142;
          LOBYTE(v14) = v5;
          v24 = PspProbeAttributeBuffer(v16[2], v57, 4LL, v14);
          if ( v24 < 0 )
            goto LABEL_66;
          v58 = ExAllocatePool2(0x41uLL);
          *(_QWORD *)(a4 + 296) = v58;
          if ( !v58 )
            goto LABEL_162;
          LOBYTE(v14) = v5;
          v24 = PspCopyAttributeBuffer(v58, v16[2], v16[1], v14);
          if ( v24 < 0 )
            goto LABEL_66;
          *(_DWORD *)(a4 + 292) = v16[1] >> 3;
          goto LABEL_65;
        }
        v37 = v36 - 2;
        if ( !v37 )
          break;
        v38 = v37 - 3;
        if ( !v38 )
        {
          *(_OWORD *)&ProcNumber[0].Group = 0LL;
          v91 = 0LL;
          v50 = v16[1];
          if ( v50 > 0x18 )
            goto LABEL_68;
          LOBYTE(v14) = v5;
          v24 = PspCopyAttributeBuffer(ProcNumber, v16[2], v50, v14);
          if ( v24 < 0 )
            goto LABEL_69;
          v98 = *(__m128i *)&ProcNumber[0].Group;
          v99 = v91;
          v24 = PspValidateMitigationOptions(&v98, 0);
          if ( v24 < 0 )
            goto LABEL_69;
          v51 = *(__m128i *)&ProcNumber[0].Group;
          *(_OWORD *)(a4 + 336) = *(_OWORD *)&ProcNumber[0].Group;
          *(_QWORD *)(a4 + 352) = v91;
LABEL_102:
          ProcNumber[0] = (struct _PROCESSOR_NUMBER)_mm_cvtsi128_si32(v51);
          goto LABEL_36;
        }
        v39 = v38 - 2;
        if ( v39 )
        {
          v40 = v39 - 1;
          if ( v40 )
          {
            v41 = v40 - 1;
            if ( !v41 )
            {
              if ( v16[1] == 4 )
              {
                v42 = (void *)(a4 + 384);
                goto LABEL_79;
              }
LABEL_142:
              v24 = -1073741811;
LABEL_66:
              v25 = v24 < 0;
LABEL_35:
              if ( v25 )
                goto LABEL_69;
              goto LABEL_36;
            }
            if ( v41 != 1 )
              goto LABEL_68;
            if ( v16[1] != 4 )
              goto LABEL_142;
            v42 = (void *)(a4 + 388);
LABEL_79:
            v24 = PspCopyAttributeBufferAligned(v42, v5);
            goto LABEL_66;
          }
          v59 = v16[1];
          if ( !v59 || (v59 & 7) != 0 || (v59 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFF8LL )
            goto LABEL_142;
          LOBYTE(v14) = v5;
          v24 = PspProbeAttributeBuffer(v16[2], v59, 4LL, v14);
          if ( v24 < 0 )
            goto LABEL_66;
          v60 = ExAllocatePool2(0x41uLL);
          *(_QWORD *)(a4 + 368) = v60;
          if ( v60 )
          {
            LOBYTE(v14) = v5;
            v24 = PspCopyAttributeBuffer(v60, v16[2], v16[1], v14);
            if ( v24 < 0 )
              goto LABEL_66;
            v61 = *(_QWORD *)(a4 + 368);
            *(_DWORD *)(a4 + 380) = v16[1] >> 3;
            for ( j = 0LL; ; ++j )
            {
              if ( j >= *(unsigned int *)(a4 + 380) )
              {
                v24 = 0;
                goto LABEL_144;
              }
              Object[0] = 0LL;
              v24 = ObReferenceObjectByHandleWithTag(
                      *(HANDLE *)(v61 + 8 * j),
                      1u,
                      (POBJECT_TYPE)PsJobType,
                      a2,
                      0x6C4A7350u,
                      Object,
                      0LL);
              v63 = (PVOID *)(*(_QWORD *)(a4 + 368) + 8 * j);
              if ( v24 < 0 )
                break;
              *v63 = Object[0];
            }
            memset_0(v63, 0, 8LL * *(unsigned int *)(a4 + 380) - 8 * j);
            goto LABEL_144;
          }
LABEL_162:
          v24 = -1073741670;
          goto LABEL_66;
        }
        v68 = v16[1];
        if ( !v68 || (v68 & 7) != 0 || v68 > 0x88 )
          goto LABEL_68;
        LOBYTE(v14) = v5;
        v24 = PspProbeAttributeBuffer(v16[2], v68, 4LL, v14);
        if ( v24 < 0 )
          goto LABEL_69;
        v69 = ExAllocatePool2(0x41uLL);
        *(_QWORD *)(a4 + 360) = v69;
        if ( v69 )
        {
          LOBYTE(v70) = v5;
          v24 = PspCopyAttributeBuffer(v69, v16[2], v16[1], v70);
          if ( v24 < 0 )
            goto LABEL_69;
          v71 = *((unsigned int *)v16 + 2);
          *(_DWORD *)(a4 + 376) = v71;
          valid = IsTrustletCreateAttributeWellFormed(*(_QWORD **)(a4 + 360), v71);
          goto LABEL_141;
        }
        v24 = -1073741670;
LABEL_69:
        v11 = v87;
LABEL_38:
        if ( v24 < 0 )
          goto LABEL_156;
        v10 = v11 + v94;
        v5 = a2;
        v9 = v96;
        v6 = v97;
      }
      if ( v16[1] != 2 )
        goto LABEL_68;
      v24 = PspCopyAttributeBufferAligned(ProcNumber, v5);
      if ( v24 < 0 )
        goto LABEL_69;
      if ( ProcNumber[0].Group >= (unsigned __int16)KeNumberNodes )
        goto LABEL_68;
      *(_QWORD *)&ProcNumber[2].Group = KeNodeBlock[ProcNumber[0].Group];
      LOBYTE(v72) = KeIsEmptyGroupMask((unsigned __int64 *)(*(_QWORD *)&ProcNumber[2].Group + 16LL));
      if ( v72 )
        goto LABEL_68;
      *(_WORD *)(a4 + 170) = ProcNumber[0].Group;
      goto LABEL_36;
    }
  }
  v24 = -1073741811;
LABEL_156:
  PspDeleteCreateProcessContext(a4);
  return (unsigned int)v24;
}
