/*
 * XREFs of PspBuildCreateProcessContext @ 0x140A79424
 * Callers:
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     NtCreateThreadEx @ 0x140A79100 (NtCreateThreadEx.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14021AC70 (KeGetProcessorIndexFromNumber.c)
 *     KeIsEmptyGroupMask @ 0x140404550 (KeIsEmptyGroupMask.c)
 *     KeVerifyGroupAffinity @ 0x14047D244 (KeVerifyGroupAffinity.c)
 *     IsTrustletCreateAttributeWellFormed @ 0x1405327B4 (IsTrustletCreateAttributeWellFormed.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140929E80 (ObReferenceObjectByHandleWithTag.c)
 *     RtlValidProcessProtection @ 0x140A77BA0 (RtlValidProcessProtection.c)
 *     PspValidateMitigationOptions @ 0x140A78928 (PspValidateMitigationOptions.c)
 *     PspProbeAttributeBuffer @ 0x140A78C58 (PspProbeAttributeBuffer.c)
 *     PspCopyAttributeBufferAligned @ 0x140A78C78 (PspCopyAttributeBufferAligned.c)
 *     PspCopyAttributeBuffer @ 0x140A78D14 (PspCopyAttributeBuffer.c)
 *     PspProcessReturnAttributeForProcessCreation @ 0x140A79F0C (PspProcessReturnAttributeForProcessCreation.c)
 *     PspDeleteCreateProcessContext @ 0x140A79FBC (PspDeleteCreateProcessContext.c)
 *     PspValidateMitigationAuditOptions @ 0x140B42824 (PspValidateMitigationAuditOptions.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
  unsigned __int64 i; // r12
  _OWORD *v15; // rdi
  unsigned __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // ebx
  bool v24; // sf
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  SIZE_T v33; // rdx
  char *v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  char *v41; // rcx
  int v42; // r9d
  size_t v43; // r8
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  size_t v51; // r8
  __m128i v52; // xmm1
  char v53; // al
  int v54; // eax
  unsigned __int64 v55; // rax
  ULONG ProcessorIndexFromNumber; // eax
  bool v57; // zf
  SIZE_T v58; // rdx
  char *v59; // rax
  SIZE_T v60; // rdx
  char *v61; // rax
  __int64 v62; // r15
  unsigned __int64 j; // rdi
  PVOID *v64; // rcx
  PS_PROTECTION v65; // cl
  char valid; // al
  unsigned __int64 v67; // rax
  SIZE_T v68; // rdx
  char *v69; // rax
  SIZE_T v70; // rdx
  char *v71; // rax
  __int64 v72; // rdx
  int v73; // eax
  char *v74; // rax
  _DWORD *v75; // rcx
  bool v76; // cf
  size_t v77; // r8
  __int64 v78; // rax
  __int64 v79; // r12
  volatile void *v80; // r10
  PVOID v81; // r11
  unsigned __int16 v82; // cx
  __int64 v83; // rdi
  char *v84; // r15
  unsigned int v85; // eax
  char *Pool2; // rax
  ULONG Tag; // [rsp+20h] [rbp-338h]
  unsigned __int64 v88; // [rsp+40h] [rbp-318h]
  unsigned __int64 v90; // [rsp+50h] [rbp-308h] BYREF
  _PROCESSOR_NUMBER ProcNumber[4]; // [rsp+58h] [rbp-300h] BYREF
  __int64 v92; // [rsp+68h] [rbp-2F0h]
  int v93; // [rsp+70h] [rbp-2E8h]
  PVOID Object[5]; // [rsp+78h] [rbp-2E0h] BYREF
  unsigned __int64 v95; // [rsp+A0h] [rbp-2B8h]
  volatile void *v96; // [rsp+A8h] [rbp-2B0h]
  unsigned __int64 v97; // [rsp+B0h] [rbp-2A8h]
  char *v98; // [rsp+B8h] [rbp-2A0h]
  __m128i v99; // [rsp+C0h] [rbp-298h] BYREF
  __int64 v100; // [rsp+D0h] [rbp-288h]
  _OWORD v101[2]; // [rsp+E0h] [rbp-278h] BYREF
  __int64 v102; // [rsp+100h] [rbp-258h]
  _OWORD v103[32]; // [rsp+110h] [rbp-248h] BYREF

  v93 = a3;
  v5 = a2;
  v6 = Src;
  v98 = Src;
  Object[3] = (PVOID)a4;
  memset(v101, 0, sizeof(v101));
  v102 = 0LL;
  if ( a2 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyFromUser(v101, Src, 0x28uLL);
  }
  else
  {
    RtlCopyVolatileMemory(v101, Src, 0x28uLL);
  }
  v7 = *(_QWORD *)&v101[0];
  if ( *(_QWORD *)&v101[0] >= 0x28uLL )
  {
    if ( v5 )
      ProbeForRead(v6 + 40, *(_QWORD *)&v101[0] - 40LL, 4u);
    v8 = v7 - 8;
    if ( (v8 & 0x1F) == 0 )
    {
      v9 = v8 >> 5;
      v97 = v9;
      v10 = 0LL;
      while ( 1 )
      {
        v95 = v10;
        if ( v10 >= v9 )
        {
          if ( (*(_DWORD *)(a4 + 8) & 0x800LL) != 0 )
          {
            qsort(*(void **)(a4 + 296), *(unsigned int *)(a4 + 292), 8uLL, PspSortHandleList);
            *(_BYTE *)(a4 + 16) = *(_BYTE *)(a4 + 16) & 0xFE | (v93 != 0);
          }
          return 0;
        }
        v11 = v9 - v10;
        if ( v11 > 0x10 )
          v11 = 16LL;
        v88 = v11;
        v12 = &v6[32 * v10 + 8];
        if ( v5 && 32 * v11 && ((unsigned __int8)v12 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = 32 * v11;
        if ( v5 )
          RtlCopyFromUser(v103, v12, v13);
        else
          RtlCopyVolatileMemory(v103, v12, v13);
        *(_OWORD *)&ProcNumber[0].Group = 0LL;
        v92 = 0LL;
        for ( i = 0LL; ; ++i )
        {
          v90 = i;
          if ( i >= v11 )
          {
            v23 = 0;
            goto LABEL_38;
          }
          v15 = &v103[2 * i];
          v16 = *(_QWORD *)v15;
          v17 = v93;
          if ( v93 && (v16 & 0x10000) == 0
            || (v16 & 0x20000) != 0 && *((_QWORD *)v15 + 3)
            || (v18 = *(_QWORD *)(a4 + 8), (v18 & (1LL << v16)) != 0) )
          {
LABEL_68:
            v23 = -1073741811;
            goto LABEL_69;
          }
          *(_QWORD *)(a4 + 8) = v18 | (1LL << v16);
          if ( v16 <= 0x20016 )
            break;
          if ( v16 <= 0x3001E )
          {
            if ( v16 == 196638 )
            {
              if ( !v17 )
                goto LABEL_68;
              if ( *((_QWORD *)v15 + 1) == 8LL )
                v23 = PspCopyAttributeBufferAligned((char *)(a4 + 480), *((volatile void **)v15 + 2), 8uLL, 4, v5);
              else
                v23 = -1073741811;
              if ( v23 < 0 )
                goto LABEL_69;
              if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & *(_QWORD *)(a4 + 480)) != 0LL )
                goto LABEL_68;
              *(_QWORD *)(a4 + 480) &= 0x40000uLL;
            }
            else
            {
              v46 = v16 - 131095;
              if ( !v46 )
              {
                if ( *((_QWORD *)v15 + 1) != 524LL )
                  goto LABEL_143;
                v23 = PspProbeAttributeBuffer(*((volatile void **)v15 + 2), 0x20CuLL, 1u, v5);
                if ( v23 < 0 )
                  goto LABEL_66;
                Pool2 = (char *)ExAllocatePool2(0x41uLL);
                *(_QWORD *)(a4 + 400) = Pool2;
                if ( !Pool2 )
                  goto LABEL_163;
                v23 = PspCopyAttributeBuffer(Pool2, *((volatile void **)v15 + 2), *((_QWORD *)v15 + 1), v5);
                if ( v23 < 0 )
                  goto LABEL_66;
                *(_DWORD *)(a4 + 396) = *((_DWORD *)v15 + 2);
                v76 = (**(_BYTE **)(a4 + 400) & 0x40) != 0;
LABEL_198:
                v23 = v76 ? 0xC000000D : 0;
                goto LABEL_66;
              }
              v47 = v46 - 1;
              if ( !v47 )
              {
                if ( *((_QWORD *)v15 + 1) != 40LL )
                  goto LABEL_143;
                v23 = PspProbeAttributeBuffer(*((volatile void **)v15 + 2), 0x28uLL, 4u, v5);
                if ( v23 < 0 )
                  goto LABEL_66;
                v78 = ExAllocatePool2(0x41uLL);
                *(_QWORD *)(a4 + 408) = v78;
                if ( !v78 )
                  goto LABEL_163;
                *(_QWORD *)(v78 + 8) = 0LL;
                *(_QWORD *)(*(_QWORD *)(a4 + 408) + 24LL) = 0LL;
                v23 = PspCopyAttributeBuffer(
                        *(char **)(a4 + 408),
                        *((volatile void **)v15 + 2),
                        *((_QWORD *)v15 + 1),
                        v5);
                if ( v23 < 0 )
                  goto LABEL_66;
                v79 = *(_QWORD *)(a4 + 408);
                v80 = *(volatile void **)(v79 + 8);
                v96 = v80;
                v81 = *(PVOID *)(v79 + 24);
                Object[0] = v81;
                *(_QWORD *)(v79 + 8) = 0LL;
                *(_QWORD *)(*(_QWORD *)(a4 + 408) + 24LL) = 0LL;
                v82 = *(_WORD *)(v79 + 2);
                if ( v82 )
                {
                  if ( *(_WORD *)v79 <= v82 && ((*(_WORD *)v79 | v82) & 1) == 0 && v82 != 0xFFFF && v80 )
                  {
                    v23 = PspProbeAttributeBuffer(v80, *(unsigned __int16 *)(v79 + 2), 1u, v5);
                    if ( v23 >= 0 )
                    {
                      v81 = Object[0];
                      goto LABEL_217;
                    }
LABEL_145:
                    i = v90;
                    goto LABEL_66;
                  }
LABEL_222:
                  v23 = -1073741811;
                  goto LABEL_145;
                }
LABEL_217:
                v83 = *(unsigned int *)(*(_QWORD *)(a4 + 408) + 16LL);
                if ( (_DWORD)v83 )
                {
                  if ( !v81 || (unsigned int)v83 > 0xFFFF )
                    goto LABEL_222;
                  v23 = PspProbeAttributeBuffer(v81, 8 * v83, 4u, v5);
                  if ( v23 < 0 )
                    goto LABEL_145;
                }
                v84 = 0LL;
                if ( *(_WORD *)(v79 + 2) || (_DWORD)v83 )
                  v84 = (char *)ExAllocatePool2(0x41uLL);
                v85 = *(unsigned __int16 *)(v79 + 2);
                if ( (_WORD)v85 )
                {
                  *(_QWORD *)(v79 + 8) = v84;
                  v23 = PspCopyAttributeBuffer(v84, v96, v85, a2);
                  if ( v23 < 0 )
                    goto LABEL_145;
                  v84 += *(unsigned __int16 *)(v79 + 2);
                }
                if ( !(_DWORD)v83
                  || (*(_QWORD *)(*(_QWORD *)(a4 + 408) + 24LL) = v84,
                      v23 = PspCopyAttributeBuffer(*(char **)(*(_QWORD *)(a4 + 408) + 24LL), Object[0], 8 * v83, a2),
                      v23 >= 0) )
                {
                  v23 = 0;
                }
                goto LABEL_145;
              }
              v48 = v47 - 1;
              if ( !v48 )
              {
                if ( *((_QWORD *)v15 + 1) != 4LL )
                  goto LABEL_143;
                v41 = (char *)(a4 + 392);
                goto LABEL_79;
              }
              v49 = v48 - 2;
              if ( !v49 )
              {
                *(_OWORD *)&ProcNumber[0].Group = 0LL;
                v92 = 0LL;
                v77 = *((_QWORD *)v15 + 1);
                if ( v77 > 0x18 )
                  goto LABEL_68;
                v23 = PspCopyAttributeBuffer((char *)ProcNumber, *((volatile void **)v15 + 2), v77, v5);
                if ( v23 < 0 )
                  goto LABEL_69;
                v99 = *(__m128i *)&ProcNumber[0].Group;
                v100 = v92;
                v23 = PspValidateMitigationAuditOptions(&v99);
                if ( v23 < 0 )
                  goto LABEL_69;
                v52 = *(__m128i *)&ProcNumber[0].Group;
                *(_OWORD *)(a4 + 448) = *(_OWORD *)&ProcNumber[0].Group;
                *(_QWORD *)(a4 + 464) = v92;
                goto LABEL_103;
              }
              v50 = v49 - 2;
              if ( v50 )
              {
                v55 = v50 - 65519;
                if ( v55 )
                {
                  if ( v55 != 2 || !v17 || *((_QWORD *)v15 + 1) != 4LL )
                    goto LABEL_68;
                  v23 = PspCopyAttributeBufferAligned((char *)ProcNumber, *((volatile void **)v15 + 2), 4uLL, 2, v5);
                  if ( v23 < 0 )
                    goto LABEL_69;
                  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
                  *(_DWORD *)(a4 + 20) = ProcessorIndexFromNumber;
                  v57 = ProcessorIndexFromNumber == -1;
                }
                else
                {
                  if ( !v17 )
                    goto LABEL_68;
                  if ( *((_QWORD *)v15 + 1) == 16LL )
                  {
                    v23 = PspCopyAttributeBufferAligned(
                            (char *)(a4 + 320),
                            *((volatile void **)v15 + 2),
                            0x10uLL,
                            4,
                            a2);
                    i = v90;
                  }
                  else
                  {
                    v23 = -1073741811;
                  }
                  if ( v23 < 0 )
                    goto LABEL_69;
                  valid = KeVerifyGroupAffinity(a4 + 320, 1);
LABEL_142:
                  v57 = valid == 0;
                }
                if ( v57 )
                  goto LABEL_68;
                goto LABEL_36;
              }
              if ( *((_QWORD *)v15 + 1) == 4LL )
                v23 = PspCopyAttributeBufferAligned((char *)ProcNumber, *((volatile void **)v15 + 2), 4uLL, 4, v5);
              else
                v23 = -1073741811;
              if ( v23 < 0 )
                goto LABEL_69;
              if ( (*(_DWORD *)ProcNumber & 0xFFFFFFFE) != 0 )
                goto LABEL_68;
              *(_PROCESSOR_NUMBER *)(a4 + 440) = ProcNumber[0];
            }
          }
          else
          {
            v27 = v16 - 393216;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( v28 )
              {
                v29 = v28 - 1;
                if ( !v29 )
                {
                  if ( *((_QWORD *)v15 + 1) != 8LL )
                    goto LABEL_68;
                  *(_QWORD *)(a4 + 152) = *((_QWORD *)v15 + 2);
                  goto LABEL_36;
                }
                v30 = v29 - 15;
                if ( !v30 )
                {
                  if ( *((_QWORD *)v15 + 1) != 1LL )
                    goto LABEL_68;
                  v65.Level = *((_BYTE *)v15 + 16);
                  *(PS_PROTECTION *)(a4 + 1) = v65;
                  valid = RtlValidProcessProtection(v65);
                  goto LABEL_142;
                }
                v31 = v30 - 9;
                if ( v31 )
                {
                  v67 = v31 - 2;
                  if ( v67 )
                  {
                    if ( v67 != 3 || *((_QWORD *)v15 + 1) != 4LL || (v15[1] & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
                      goto LABEL_68;
                    *(_DWORD *)(a4 + 488) = *((_DWORD *)v15 + 4);
                  }
                  else
                  {
                    if ( *((_QWORD *)v15 + 1) != 2LL )
                      goto LABEL_68;
                    *(_WORD *)(a4 + 168) = *((_WORD *)v15 + 8);
                  }
                }
                else
                {
                  if ( *((_QWORD *)v15 + 1) != 1LL )
                    goto LABEL_68;
                  *(_BYTE *)(a4 + 17) = *(_BYTE *)(a4 + 17) & 0x7F | (*((_QWORD *)v15 + 2) != 0LL ? 0x80 : 0);
                }
              }
              else
              {
                if ( *((_QWORD *)v15 + 1) != 8LL )
                  goto LABEL_68;
                *(_QWORD *)(a4 + 144) = *((_QWORD *)v15 + 2);
              }
            }
            else
            {
              if ( *((_QWORD *)v15 + 1) != 8LL )
                goto LABEL_68;
              *(_QWORD *)(a4 + 128) = *((_QWORD *)v15 + 2);
            }
          }
LABEL_36:
          v5 = a2;
          v11 = v88;
        }
        if ( v16 == 131094 )
        {
          if ( *((_QWORD *)v15 + 1) != 8LL )
            goto LABEL_143;
          v23 = PspProbeAttributeBuffer(*((volatile void **)v15 + 2), 8uLL, 4u, v5);
          if ( v23 < 0 )
            goto LABEL_66;
          v74 = (char *)ExAllocatePool2(0x41uLL);
          *(_QWORD *)(a4 + 432) = v74;
          if ( !v74 )
            goto LABEL_163;
          v23 = PspCopyAttributeBuffer(v74, *((volatile void **)v15 + 2), *((_QWORD *)v15 + 1), v5);
          if ( v23 < 0 )
            goto LABEL_66;
          v75 = *(_DWORD **)(a4 + 432);
          if ( (*v75 & 3) == 0 )
            goto LABEL_143;
          v76 = (unsigned int)(v75[1] - 1) > 5;
          goto LABEL_198;
        }
        if ( v16 <= 0x2000A )
        {
          if ( v16 == 131082 )
          {
            v53 = 0;
            v90 = 0LL;
            if ( *((_QWORD *)v15 + 1) == 8LL )
            {
              v23 = PspCopyAttributeBufferAligned((char *)&v90, *((volatile void **)v15 + 2), 8uLL, 4, v5);
              v53 = v90;
            }
            else
            {
              v23 = -1073741811;
            }
            if ( v23 < 0 )
              goto LABEL_69;
            if ( (v53 & 0x1C) != 0 )
            {
              v23 = -1073741637;
              goto LABEL_66;
            }
            v54 = v53 & 3;
            if ( (unsigned __int8)v54 >= 3u )
              goto LABEL_143;
            *(_BYTE *)(a4 + 17) = (4 * v54) | *(_BYTE *)(a4 + 17) & 0xF3;
            if ( v54 == 1 )
              *(_DWORD *)(a4 + 288) = HIDWORD(v90);
          }
          else
          {
            v19 = v16 - 6;
            if ( !v19 )
            {
              v21 = a4 + 40;
              v22 = 64LL;
              goto LABEL_34;
            }
            v20 = v19 - 65533;
            if ( !v20 )
            {
              v21 = a4 + 24;
              v22 = 16LL;
LABEL_34:
              LOBYTE(Tag) = v5;
              v23 = PspProcessReturnAttributeForProcessCreation(&v103[2 * i], v21, v22, 4LL, Tag);
              v24 = v23 < 0;
              goto LABEL_35;
            }
            v26 = v20 - 1;
            if ( !v26 )
            {
              v21 = a4 + 32;
              v22 = 8LL;
              goto LABEL_34;
            }
            v32 = v26 - 65537;
            if ( v32 )
            {
              v44 = v32 - 2;
              if ( v44 )
              {
                v45 = v44 - 1;
                if ( v45 )
                {
                  if ( v45 != 1 )
                    goto LABEL_68;
                  if ( *((_QWORD *)v15 + 1) != 4LL )
                    goto LABEL_143;
                  v41 = (char *)(a4 + 316);
                  goto LABEL_79;
                }
                if ( *((_QWORD *)v15 + 1) != 1LL )
                  goto LABEL_143;
                v41 = (char *)(a4 + 2);
                v42 = 1;
                v43 = 1LL;
LABEL_80:
                v23 = PspCopyAttributeBufferAligned(v41, *((volatile void **)v15 + 2), v43, v42, v5);
                goto LABEL_66;
              }
              v68 = *((_QWORD *)v15 + 1);
              if ( !v68 || (v68 & 0xF) != 0 )
                goto LABEL_143;
              v23 = PspProbeAttributeBuffer(*((volatile void **)v15 + 2), v68, 4u, v5);
              if ( v23 < 0 )
                goto LABEL_66;
              if ( *((_QWORD *)v15 + 1) > 0x10uLL )
              {
                v69 = (char *)ExAllocatePool2(0x41uLL);
                if ( !v69 )
                  goto LABEL_163;
              }
              else
              {
                v69 = (char *)(a4 + 264);
              }
              *(_QWORD *)(a4 + 280) = v69;
              v23 = PspCopyAttributeBuffer(v69, *((volatile void **)v15 + 2), *((_QWORD *)v15 + 1), v5);
              if ( v23 < 0 )
                goto LABEL_66;
              *(_QWORD *)(a4 + 256) = *((_QWORD *)v15 + 1) >> 4;
            }
            else
            {
              v33 = *((_QWORD *)v15 + 1);
              if ( !v33 || (v33 & 1) != 0 || v33 > 0xFFFF )
                goto LABEL_143;
              v23 = PspProbeAttributeBuffer(*((volatile void **)v15 + 2), v33, 1u, v5);
              if ( v23 < 0 )
                goto LABEL_66;
              v34 = (char *)ExAllocatePool2(0x41uLL);
              if ( !v34 )
                goto LABEL_163;
              *(_OWORD *)(a4 + 240) = 0LL;
              *(_WORD *)(a4 + 242) = *((_WORD *)v15 + 4);
              *(_QWORD *)(a4 + 248) = v34;
              v23 = PspCopyAttributeBuffer(v34, *((volatile void **)v15 + 2), *((_QWORD *)v15 + 1), v5);
              if ( v23 < 0 )
                goto LABEL_66;
              *(_WORD *)(a4 + 240) = *((_WORD *)v15 + 4);
            }
          }
LABEL_65:
          v23 = 0;
          goto LABEL_66;
        }
        v35 = v16 - 131083;
        if ( !v35 )
        {
          v58 = *((_QWORD *)v15 + 1);
          if ( !v58 || (v58 & 7) != 0 || (v58 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFF8LL )
            goto LABEL_143;
          v23 = PspProbeAttributeBuffer(*((volatile void **)v15 + 2), v58, 4u, v5);
          if ( v23 < 0 )
            goto LABEL_66;
          v59 = (char *)ExAllocatePool2(0x41uLL);
          *(_QWORD *)(a4 + 296) = v59;
          if ( !v59 )
            goto LABEL_163;
          v23 = PspCopyAttributeBuffer(v59, *((volatile void **)v15 + 2), *((_QWORD *)v15 + 1), v5);
          if ( v23 < 0 )
            goto LABEL_66;
          *(_DWORD *)(a4 + 292) = *((_QWORD *)v15 + 1) >> 3;
          goto LABEL_65;
        }
        v36 = v35 - 2;
        if ( !v36 )
          break;
        v37 = v36 - 3;
        if ( !v37 )
        {
          *(_OWORD *)&ProcNumber[0].Group = 0LL;
          v92 = 0LL;
          v51 = *((_QWORD *)v15 + 1);
          if ( v51 > 0x18 )
            goto LABEL_68;
          v23 = PspCopyAttributeBuffer((char *)ProcNumber, *((volatile void **)v15 + 2), v51, v5);
          if ( v23 < 0 )
            goto LABEL_69;
          v99 = *(__m128i *)&ProcNumber[0].Group;
          v100 = v92;
          v23 = PspValidateMitigationOptions(&v99, 0);
          if ( v23 < 0 )
            goto LABEL_69;
          v52 = *(__m128i *)&ProcNumber[0].Group;
          *(_OWORD *)(a4 + 336) = *(_OWORD *)&ProcNumber[0].Group;
          *(_QWORD *)(a4 + 352) = v92;
LABEL_103:
          ProcNumber[0] = (_PROCESSOR_NUMBER)_mm_cvtsi128_si32(v52);
          goto LABEL_36;
        }
        v38 = v37 - 2;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( v39 )
          {
            v40 = v39 - 1;
            if ( !v40 )
            {
              if ( *((_QWORD *)v15 + 1) == 4LL )
              {
                v41 = (char *)(a4 + 384);
                goto LABEL_79;
              }
LABEL_143:
              v23 = -1073741811;
LABEL_66:
              v24 = v23 < 0;
LABEL_35:
              if ( v24 )
                goto LABEL_69;
              goto LABEL_36;
            }
            if ( v40 != 1 )
              goto LABEL_68;
            if ( *((_QWORD *)v15 + 1) != 4LL )
              goto LABEL_143;
            v41 = (char *)(a4 + 388);
LABEL_79:
            v42 = 4;
            v43 = 4LL;
            goto LABEL_80;
          }
          v60 = *((_QWORD *)v15 + 1);
          if ( !v60 || (v60 & 7) != 0 || (v60 & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFF8LL )
            goto LABEL_143;
          v23 = PspProbeAttributeBuffer(*((volatile void **)v15 + 2), v60, 4u, v5);
          if ( v23 < 0 )
            goto LABEL_66;
          v61 = (char *)ExAllocatePool2(0x41uLL);
          *(_QWORD *)(a4 + 368) = v61;
          if ( v61 )
          {
            v23 = PspCopyAttributeBuffer(v61, *((volatile void **)v15 + 2), *((_QWORD *)v15 + 1), v5);
            if ( v23 < 0 )
              goto LABEL_66;
            v62 = *(_QWORD *)(a4 + 368);
            *(_DWORD *)(a4 + 380) = *((_QWORD *)v15 + 1) >> 3;
            for ( j = 0LL; ; ++j )
            {
              if ( j >= *(unsigned int *)(a4 + 380) )
              {
                v23 = 0;
                goto LABEL_145;
              }
              Object[0] = 0LL;
              v23 = ObReferenceObjectByHandleWithTag(
                      *(HANDLE *)(v62 + 8 * j),
                      1u,
                      (POBJECT_TYPE)PsJobType,
                      a2,
                      0x6C4A7350u,
                      Object,
                      0LL);
              v64 = (PVOID *)(*(_QWORD *)(a4 + 368) + 8 * j);
              if ( v23 < 0 )
                break;
              *v64 = Object[0];
            }
            memset_0(v64, 0, 8LL * *(unsigned int *)(a4 + 380) - 8 * j);
            goto LABEL_145;
          }
LABEL_163:
          v23 = -1073741670;
          goto LABEL_66;
        }
        v70 = *((_QWORD *)v15 + 1);
        if ( !v70 || (v70 & 7) != 0 || v70 > 0x88 )
          goto LABEL_68;
        v23 = PspProbeAttributeBuffer(*((volatile void **)v15 + 2), v70, 4u, v5);
        if ( v23 < 0 )
          goto LABEL_69;
        v71 = (char *)ExAllocatePool2(0x41uLL);
        *(_QWORD *)(a4 + 360) = v71;
        if ( v71 )
        {
          v23 = PspCopyAttributeBuffer(v71, *((volatile void **)v15 + 2), *((_QWORD *)v15 + 1), v5);
          if ( v23 < 0 )
            goto LABEL_69;
          v72 = *((unsigned int *)v15 + 2);
          *(_DWORD *)(a4 + 376) = v72;
          valid = IsTrustletCreateAttributeWellFormed(*(_QWORD **)(a4 + 360), v72);
          goto LABEL_142;
        }
        v23 = -1073741670;
LABEL_69:
        v11 = v88;
LABEL_38:
        if ( v23 < 0 )
          goto LABEL_157;
        v10 = v11 + v95;
        v5 = a2;
        v9 = v97;
        v6 = v98;
      }
      if ( *((_QWORD *)v15 + 1) != 2LL )
        goto LABEL_68;
      v23 = PspCopyAttributeBufferAligned((char *)ProcNumber, *((volatile void **)v15 + 2), 2uLL, 2, v5);
      if ( v23 < 0 )
        goto LABEL_69;
      if ( ProcNumber[0].Group >= (unsigned __int16)KeNumberNodes )
        goto LABEL_68;
      *(_QWORD *)&ProcNumber[2].Group = KeNodeBlock[ProcNumber[0].Group];
      LOBYTE(v73) = KeIsEmptyGroupMask((unsigned __int64 *)(*(_QWORD *)&ProcNumber[2].Group + 16LL));
      if ( v73 )
        goto LABEL_68;
      *(_WORD *)(a4 + 170) = ProcNumber[0].Group;
      goto LABEL_36;
    }
  }
  v23 = -1073741811;
LABEL_157:
  PspDeleteCreateProcessContext(a4);
  return (unsigned int)v23;
}
