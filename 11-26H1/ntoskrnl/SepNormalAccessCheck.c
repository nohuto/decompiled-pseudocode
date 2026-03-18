/*
 * XREFs of SepNormalAccessCheck @ 0x1402B0BC0
 * Callers:
 *     SepAccessCheck @ 0x1402B00F0 (SepAccessCheck.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     AuthzBasepAddAccessTypeList @ 0x1402ACF50 (AuthzBasepAddAccessTypeList.c)
 *     SepMatchCapability @ 0x1402AFC18 (SepMatchCapability.c)
 *     SepSidInToken @ 0x1402AFC70 (SepSidInToken.c)
 *     SepIsCapabilitySid @ 0x1402B0010 (SepIsCapabilitySid.c)
 *     SepIsPackageSid @ 0x1402B0080 (SepIsPackageSid.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1402B2370 (SepCanTokenMatchAllPackageSid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403CDD60 (AuthzBasepEvaluateAceCondition.c)
 *     SepMatchPackage @ 0x140468CC0 (SepMatchPackage.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14048B6E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 */

__int64 __fastcall SepNormalAccessCheck(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        unsigned __int8 *a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        __int64 a13)
{
  __int64 v13; // rbx
  int v14; // r14d
  __int64 v15; // r12
  unsigned int v16; // ebp
  int v17; // edi
  __int64 result; // rax
  _DWORD *v19; // r15
  _DWORD *v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // r13d
  char *v23; // rsi
  unsigned __int8 *v24; // rdx
  char v25; // al
  __int64 v26; // rdi
  __int64 v27; // rdi
  unsigned __int8 *v28; // r12
  __int64 v29; // rax
  __int16 v30; // r9
  size_t v31; // r8
  unsigned __int64 v32; // rbp
  unsigned __int8 j; // cl
  int v34; // ebx
  __int64 v35; // r13
  int v36; // r15d
  __int64 v37; // r14
  unsigned int v38; // ebx
  __int64 v39; // rcx
  unsigned __int8 *v40; // r8
  char v41; // bl
  _DWORD *SparePtr; // rbx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // ebp
  _DWORD *v46; // rbx
  int v47; // eax
  int v48; // ebp
  int v49; // eax
  int v50; // r14d
  __int64 v51; // rbx
  unsigned __int8 *v52; // rbp
  __int64 v53; // r15
  __int64 v54; // r15
  __int64 v55; // rax
  __int16 v56; // r8
  unsigned int v57; // r9d
  unsigned __int64 v58; // rdi
  unsigned __int8 v59; // r13
  int v60; // ebx
  __int64 v61; // r12
  int v62; // ebp
  __int64 v63; // r14
  __int64 v64; // rdi
  __int64 v65; // rdi
  unsigned __int8 *v66; // r12
  __int64 v67; // rax
  __int16 v68; // r9
  size_t v69; // r8
  unsigned __int64 v70; // rbp
  unsigned __int8 m; // cl
  int v72; // ebx
  __int64 v73; // r13
  int v74; // r15d
  __int64 v75; // r14
  _WORD *v76; // rcx
  unsigned int v77; // ebx
  unsigned int n; // ebp
  int v79; // eax
  unsigned int v80; // ebx
  unsigned int jj; // edi
  unsigned int v82; // eax
  unsigned int k; // ebp
  int v84; // ecx
  __int64 v85; // r8
  char *v86; // rax
  unsigned int v87; // eax
  _DWORD *v88; // rbp
  _DWORD *v89; // rbx
  int v90; // eax
  __int64 i; // r8
  unsigned int v92; // ebx
  __int64 ii; // r9
  __int64 v94; // rdx
  unsigned int v95; // ebx
  _QWORD *v96; // rax
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // r10
  __int64 v100; // r11
  unsigned int v101; // [rsp+60h] [rbp-78h]
  _DWORD *v102; // [rsp+68h] [rbp-70h]
  __int16 v103; // [rsp+70h] [rbp-68h]
  unsigned int v104; // [rsp+70h] [rbp-68h]
  __int16 v105; // [rsp+70h] [rbp-68h]
  int v106; // [rsp+74h] [rbp-64h]
  unsigned int v107; // [rsp+78h] [rbp-60h]
  unsigned int Buf1; // [rsp+80h] [rbp-58h]
  unsigned __int8 *Buf1a; // [rsp+80h] [rbp-58h]
  unsigned int Buf1b; // [rsp+80h] [rbp-58h]
  int v111; // [rsp+88h] [rbp-50h] BYREF
  unsigned int v112; // [rsp+8Ch] [rbp-4Ch]
  int v113; // [rsp+90h] [rbp-48h]
  int v114; // [rsp+94h] [rbp-44h]
  unsigned __int8 v117; // [rsp+F8h] [rbp+20h]
  __int16 v118; // [rsp+F8h] [rbp+20h]
  unsigned __int8 v119; // [rsp+F8h] [rbp+20h]

  v13 = a9;
  v14 = 0;
  v15 = a2;
  v16 = a8;
  v17 = *(_DWORD *)(a2 + 200) & 0x2000;
  v111 = -1;
  result = *(unsigned __int16 *)(a4 + 4);
  v19 = (_DWORD *)(a9 + 24);
  v102 = (_DWORD *)(a9 + 24);
  v106 = 0;
  v114 = v17;
  v112 = result;
  if ( a8 )
  {
    v20 = (_DWORD *)(a9 + 24);
    v21 = a8;
    do
    {
      *v20 = a1;
      v20 += 12;
      --v21;
    }
    while ( v21 );
    result = v112;
  }
  else
  {
    v102 = (_DWORD *)(a9 + 24);
  }
  if ( !v17 && !a11 )
  {
    v14 = *(_DWORD *)a13 | a1;
    v106 = v14;
  }
  v22 = 0;
  v107 = v14;
  v113 = v14;
  v23 = (char *)(a4 + 8);
  v101 = 0;
  if ( (_DWORD)result )
  {
    v24 = a7;
    while ( 1 )
    {
      if ( !*v19 && !v14 )
        return result;
      if ( (v23[1] & 8) == 0 && (*v19 || !*v23 || *v23 == 9) )
        break;
LABEL_31:
      result = *((unsigned __int16 *)v23 + 1);
      ++v22;
      v17 = v114;
      v23 += result;
      v14 = v106;
      v15 = a2;
      v16 = a8;
      v13 = a9;
      v101 = v22;
      if ( v22 >= v112 )
        return result;
    }
    v25 = *v23;
    if ( *v23 )
    {
      switch ( v25 )
      {
        case 5:
          v84 = *((_DWORD *)v23 + 2);
          if ( (v84 & 1) != 0 )
          {
            if ( v23 != (char *)-12LL )
            {
              if ( !a10 )
                goto LABEL_31;
              if ( SepSidInToken(
                     v15,
                     v24,
                     (unsigned __int8 *)&v23[16 * (v84 & 1) + ((8LL * (v84 & 2)) | 0xC)],
                     0,
                     a11,
                     a12) )
              {
                for ( i = 0LL; (unsigned int)i < v16; i = (unsigned int)(i + 1) )
                {
                  if ( *((_DWORD *)v23 + 3) == *(_DWORD *)(a9 + 48 * i + 4)
                    && *((_DWORD *)v23 + 4) == *(_DWORD *)(a9 + 48 * i + 8)
                    && *((_DWORD *)v23 + 5) == *(_DWORD *)(a9 + 48 * i + 12)
                    && *((_DWORD *)v23 + 6) == *(_DWORD *)(a9 + 48 * i + 16) )
                  {
                    AuthzBasepAddAccessTypeList(a9, v16, i, v22, *((_DWORD *)v23 + 1), 0);
                    goto LABEL_30;
                  }
                }
              }
              goto LABEL_30;
            }
            v13 = a9;
          }
          v85 = 16LL * (v84 & 1);
          v86 = &v23[(8LL * (v84 & 2)) | 0xC];
          v39 = v15;
          v40 = (unsigned __int8 *)&v86[v85];
          goto LABEL_154;
        case 4:
          v26 = 504LL;
          if ( !a11 )
            v26 = 232LL;
          v27 = v15 + v26;
          v28 = (unsigned __int8 *)&v23[4 * (unsigned __int8)v23[13] + 20];
          if ( v24
            && *(_WORD *)RtlpBootStatHandleLock.WaitBlock[2].SparePtr == *(_WORD *)v28
            && !memcmp(
                  RtlpBootStatHandleLock.WaitBlock[2].SparePtr,
                  &v23[4 * (unsigned __int8)v23[13] + 20],
                  4 * ((unsigned __int64)*(unsigned __int16 *)RtlpBootStatHandleLock.WaitBlock[2].SparePtr >> 8) + 8) )
          {
            v28 = a7;
          }
          if ( a12
            && RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Flink->Flink == (struct _LIST_ENTRY *)*(_WORD *)v28
            && !memcmp(
                  RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Flink,
                  v28,
                  4
                * ((unsigned __int64)(unsigned __int16)RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Flink->Flink >> 8)
                + 8) )
          {
LABEL_38:
            v39 = a3;
            v40 = (unsigned __int8 *)(v23 + 12);
            v24 = 0LL;
LABEL_154:
            if ( SepSidInToken(v39, v24, v40, 0, a11, a12) )
            {
              v87 = *((_DWORD *)v23 + 1);
              if ( v16 == 1 )
                *v19 &= ~v87;
              else
                AuthzBasepAddAccessTypeList(v13, v16, 0, v22, v87, 0);
            }
            goto LABEL_30;
          }
          if ( !v27 || !v28 )
          {
LABEL_30:
            v24 = a7;
            goto LABEL_31;
          }
          v29 = v28[1];
          v30 = *(_WORD *)v28;
          v103 = *(_WORD *)v28;
          v31 = (unsigned int)(4 * v29 + 8);
          Buf1 = 4 * v29 + 8;
          v32 = *(_QWORD *)(v27 + 8LL * (v28[4 * v29 + 4] & 0xF) + 16) & *(_QWORD *)(v27
                                                                                   + 8
                                                                                   * ((unsigned __int64)v28[4 * v29 + 4] >> 4)
                                                                                   + 144);
          for ( j = 0; ; j += 8 )
          {
            v117 = j;
            if ( !v32 )
              break;
            LOBYTE(v34) = v32;
            while ( (_BYTE)v34 )
            {
              v35 = *(_QWORD *)(v27 + 8);
              v36 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v34);
              v37 = v35 + 16LL * (v36 + (unsigned int)j);
              if ( **(_WORD **)v37 == v30 )
              {
                if ( !memcmp(v28, *(const void **)v37, v31) )
                  goto LABEL_34;
                v31 = Buf1;
                v30 = v103;
              }
              j = v117;
              v34 = (unsigned __int8)v34 ^ (1 << v36);
            }
            v32 >>= 8;
          }
          v38 = *(_DWORD *)v27;
          if ( *(_DWORD *)v27 > 0x40u )
          {
            for ( k = 64; k < v38; ++k )
            {
              v35 = *(_QWORD *)(v27 + 8);
              v37 = v35 + 16LL * k;
              if ( **(_WORD **)v37 == v30 )
              {
                if ( !memcmp(v28, *(const void **)v37, v31) )
                {
LABEL_34:
                  if ( !v37 )
                    break;
                  if ( v37 != v35 || a11 || (*(_DWORD *)(v37 + 8) & 0x10) != 0 )
                  {
                    v22 = v101;
                    v19 = v102;
                    if ( (*(_DWORD *)(v37 + 8) & 4) == 0 )
                      goto LABEL_30;
                  }
                  else
                  {
                    v22 = v101;
                    v19 = v102;
                  }
                  v13 = a9;
                  v16 = a8;
                  goto LABEL_38;
                }
                v31 = Buf1;
                v30 = v103;
              }
            }
          }
LABEL_29:
          v22 = v101;
          v19 = v102;
          goto LABEL_30;
        case 1:
          v64 = 504LL;
          if ( !a11 )
            v64 = 232LL;
          v65 = v15 + v64;
          v66 = (unsigned __int8 *)(v23 + 8);
          if ( v24 && RtlEqualSid(RtlpBootStatHandleLock.WaitBlock[2].SparePtr, v23 + 8) )
            v66 = a7;
          if ( !a12
            || RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Flink->Flink != (struct _LIST_ENTRY *)*(_WORD *)v66
            || memcmp(
                 RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Flink,
                 v66,
                 4
               * ((unsigned __int64)(unsigned __int16)RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Flink->Flink >> 8)
               + 8) )
          {
            if ( !v65 || !v66 )
              goto LABEL_30;
            v67 = v66[1];
            v68 = *(_WORD *)v66;
            v105 = *(_WORD *)v66;
            v69 = (unsigned int)(4 * v67 + 8);
            Buf1b = 4 * v67 + 8;
            v70 = *(_QWORD *)(v65 + 8LL * (v66[4 * v67 + 4] & 0xF) + 16) & *(_QWORD *)(v65
                                                                                     + 8
                                                                                     * ((unsigned __int64)v66[4 * v67 + 4] >> 4)
                                                                                     + 144);
            for ( m = 0; ; m += 8 )
            {
              v119 = m;
              if ( !v70 )
                break;
              LOBYTE(v72) = v70;
              while ( (_BYTE)v72 )
              {
                v73 = *(_QWORD *)(v65 + 8);
                v74 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v72);
                v75 = v73 + 16LL * (v74 + (unsigned int)m);
                if ( **(_WORD **)v75 == v68 )
                {
                  if ( !memcmp(v66, *(const void **)v75, v69) )
                    goto LABEL_113;
                  v69 = Buf1b;
                  v68 = v105;
                }
                m = v119;
                v72 = (unsigned __int8)v72 ^ (1 << v74);
              }
              v70 >>= 8;
            }
            v77 = *(_DWORD *)v65;
            if ( *(_DWORD *)v65 > 0x40u )
            {
              for ( n = 64; n < v77; ++n )
              {
                v73 = *(_QWORD *)(v65 + 8);
                v75 = v73 + 16LL * n;
                if ( **(_WORD **)v75 == v68 )
                {
                  if ( !memcmp(v66, *(const void **)v75, v69) )
                  {
LABEL_113:
                    if ( !v75 )
                      goto LABEL_29;
                    if ( v75 == v73 && !a11 )
                    {
                      v22 = v101;
                      v19 = v102;
                      goto LABEL_116;
                    }
                    v79 = *(_DWORD *)(v75 + 8);
                    v22 = v101;
                    v19 = v102;
                    if ( (v79 & 4) != 0 || (v79 & 0x10) != 0 )
                      goto LABEL_116;
                    goto LABEL_30;
                  }
                  v69 = Buf1b;
                  v68 = v105;
                }
              }
            }
            goto LABEL_29;
          }
LABEL_116:
          result = *((unsigned int *)v23 + 1);
          if ( ((unsigned int)result & *v19) != 0 )
            return result;
          goto LABEL_30;
        case 6:
          v92 = *((_DWORD *)v23 + 2) & 1;
          if ( !SepSidInToken(
                  v15,
                  v24,
                  (unsigned __int8 *)&v23[16 * v92 + ((8LL * (*((_DWORD *)v23 + 2) & 2)) | 0xC)],
                  1,
                  a11,
                  a12) )
            goto LABEL_30;
          if ( v92 && v23 != (char *)-12LL && a10 )
          {
            for ( ii = 0LL; (unsigned int)ii < v16; ii = (unsigned int)(ii + 1) )
            {
              v94 = a9 + 48 * ii;
              if ( *(_QWORD *)(v23 + 12) == *(_QWORD *)(v94 + 4)
                && *((_DWORD *)v23 + 5) == *(_DWORD *)(v94 + 12)
                && *((_DWORD *)v23 + 6) == *(_DWORD *)(v94 + 16) )
              {
                result = *((unsigned int *)v23 + 1);
                if ( ((unsigned int)result & *(_DWORD *)(v94 + 24)) != 0 )
                  return result;
                goto LABEL_30;
              }
            }
            goto LABEL_30;
          }
          goto LABEL_116;
      }
      if ( v25 != 9 )
        goto LABEL_31;
      v95 = 4 * (unsigned __int8)v23[9] + 8;
      if ( *((unsigned __int16 *)v23 + 1) - v95 == 8 )
        goto LABEL_31;
      if ( a5 && !*a6 )
        AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
      v96 = *(_QWORD **)(v15 + 1096);
      if ( v96 )
      {
        v97 = v96[75];
        v98 = v96[73];
        v99 = v96[74];
        v100 = v96[72];
      }
      else
      {
        v97 = 0LL;
        v98 = 0LL;
        v99 = 0LL;
        LODWORD(v100) = 0;
      }
      AuthzBasepEvaluateAceCondition(
        v15,
        *(_QWORD *)(v15 + 776),
        *a6,
        v100,
        v99,
        v98,
        v97,
        (__int64)&v23[v95 + 8],
        *((unsigned __int16 *)v23 + 1) - v95 - 8,
        0,
        a11,
        (__int64)&v111);
      if ( v111 != 1 )
        goto LABEL_30;
      if ( v17 || a11 || !v14 )
        goto LABEL_221;
      if ( SepIsPackageSid((__int64)(v23 + 8)) )
      {
        v88 = (_DWORD *)a13;
        v89 = (_DWORD *)(a13 + 4);
        SepMatchPackage(v15, v107, v23 + 8, *((unsigned int *)v23 + 1), a13 + 21, a13 + 4, a13 + 20, a13 + 16, a13 + 24);
        goto LABEL_159;
      }
      if ( !SepIsCapabilitySid((__int64)(v23 + 8)) )
      {
LABEL_221:
        if ( *v19 && SepSidInToken(v15, a7, (unsigned __int8 *)v23 + 8, 0, a11, a12) )
          AuthzBasepAddAccessTypeList(a9, v16, 0, v22, *((_DWORD *)v23 + 1), 0);
        goto LABEL_30;
      }
LABEL_158:
      v88 = (_DWORD *)a13;
      v89 = (_DWORD *)(a13 + 8);
      SepMatchCapability(v15, v107, (__int64)(v23 + 8), *((_DWORD *)v23 + 1), (_BYTE *)(a13 + 22), (_DWORD *)(a13 + 8));
LABEL_159:
      v90 = ~*v89;
      v50 = v90 & v14;
      *v88 &= v90;
      goto LABEL_59;
    }
    v41 = a11;
    if ( !v17 && !a11 && v14 )
    {
      SparePtr = RtlpBootStatHandleLock.WaitBlock[3].SparePtr;
      if ( (unsigned __int8)v23[9] >= 2u
        && v23[8] == *(_BYTE *)RtlpBootStatHandleLock.WaitBlock[3].SparePtr
        && RtlCompareMemory(v23 + 10, (const void *)(RtlpBootStatHandleLock.LastXStateSaveDebugInfo + 2), 6uLL) == 6 )
      {
        v43 = *((_DWORD *)v23 + 4);
        if ( v43 == SparePtr[2] )
        {
          v44 = a13;
          v45 = *((_DWORD *)v23 + 1);
          v46 = (_DWORD *)(a13 + 4);
          if ( v43 == 2 && v23[9] == 2 )
          {
            v47 = *((_DWORD *)v23 + 5);
            if ( v47 == 1 )
            {
              v48 = v113 & v45;
              if ( (unsigned __int8)SepCanTokenMatchAllPackageSid(v15) )
              {
                *v46 |= v48;
                *(_BYTE *)(a13 + 21) = 1;
              }
              else
              {
                *(_DWORD *)(a13 + 16) |= v48;
                *(_BYTE *)(a13 + 24) = 1;
              }
              v46 = (_DWORD *)(a13 + 4);
              goto LABEL_58;
            }
            if ( v47 != 2 )
            {
LABEL_58:
              v49 = ~*v46;
              v50 = v49 & v14;
              *(_DWORD *)a13 &= v49;
LABEL_59:
              v106 = v50;
              goto LABEL_30;
            }
          }
          else
          {
            *(_BYTE *)(a13 + 20) = 1;
            if ( (*(_DWORD *)(v15 + 200) & 0x4000) == 0 )
              goto LABEL_58;
            v76 = *(_WORD **)(v15 + 784);
            if ( *v76 != *((_WORD *)v23 + 4)
              || memcmp(v76, v23 + 8, 4 * ((unsigned __int64)(unsigned __int16)*v76 >> 8) + 8) )
            {
              goto LABEL_58;
            }
            v44 = a13;
          }
          *v46 |= v107 & v45;
          *(_BYTE *)(v44 + 21) = 1;
          goto LABEL_58;
        }
      }
      v51 = *(_QWORD *)&RtlpBootStatHandleLock.ThreadFlags2;
      if ( (unsigned __int8)v23[9] >= 2u
        && v23[8] == **(_BYTE **)&RtlpBootStatHandleLock.ThreadFlags2
        && RtlCompareMemory(v23 + 10, (const void *)(*(_QWORD *)&RtlpBootStatHandleLock.ThreadFlags2 + 2LL), 6uLL) == 6
        && *((_DWORD *)v23 + 4) == *(_DWORD *)(v51 + 8) )
      {
        goto LABEL_158;
      }
      v41 = a11;
    }
    if ( !*v19 )
      goto LABEL_30;
    v52 = (unsigned __int8 *)(v23 + 8);
    Buf1a = (unsigned __int8 *)(v23 + 8);
    v53 = 504LL;
    if ( !v41 )
      v53 = 232LL;
    v54 = v15 + v53;
    if ( a7 )
    {
      if ( RtlEqualSid(RtlpBootStatHandleLock.WaitBlock[2].SparePtr, v23 + 8) )
        v52 = a7;
      Buf1a = v52;
    }
    if ( a12
      && RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Flink->Flink == (struct _LIST_ENTRY *)*(_WORD *)v52
      && !memcmp(
            RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Flink,
            v52,
            4
          * ((unsigned __int64)(unsigned __int16)RtlpBootStatHandleLock.WaitBlock[3].WaitListEntry.Flink->Flink >> 8)
          + 8) )
    {
LABEL_128:
      v82 = *((_DWORD *)v23 + 1);
      if ( a8 == 1 )
      {
        v19 = v102;
        *v102 &= ~v82;
      }
      else
      {
        AuthzBasepAddAccessTypeList(a9, a8, 0, v22, v82, 0);
LABEL_146:
        v19 = v102;
      }
      goto LABEL_30;
    }
    if ( !v54 || !v52 )
    {
      v19 = v102;
      v24 = a7;
      goto LABEL_31;
    }
    v55 = v52[1];
    v56 = *(_WORD *)v52;
    v118 = *(_WORD *)v52;
    v57 = 4 * v55 + 8;
    v104 = v57;
    v58 = *(_QWORD *)(v54 + 8LL * (v52[4 * v55 + 4] & 0xF) + 16) & *(_QWORD *)(v54
                                                                             + 8
                                                                             * ((unsigned __int64)v52[4 * v55 + 4] >> 4)
                                                                             + 144);
    v59 = 0;
    while ( v58 )
    {
      LOBYTE(v60) = v58;
      while ( (_BYTE)v60 )
      {
        v61 = *(_QWORD *)(v54 + 8);
        v62 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v60);
        v63 = v61 + 16LL * (v62 + (unsigned int)v59);
        if ( **(_WORD **)v63 == v56 )
        {
          if ( !memcmp(Buf1a, *(const void **)v63, v57) )
            goto LABEL_125;
          v56 = v118;
          v57 = v104;
        }
        v60 = (unsigned __int8)v60 ^ (1 << v62);
      }
      v59 += 8;
      v58 >>= 8;
    }
    v80 = *(_DWORD *)v54;
    if ( *(_DWORD *)v54 > 0x40u )
    {
      for ( jj = 64; jj < v80; ++jj )
      {
        v61 = *(_QWORD *)(v54 + 8);
        v63 = v61 + 16LL * jj;
        if ( **(_WORD **)v63 == v56 )
        {
          if ( !memcmp(Buf1a, *(const void **)v63, v57) )
          {
LABEL_125:
            if ( !v63 )
              goto LABEL_29;
            if ( v63 != v61 || a11 || (*(_DWORD *)(v63 + 8) & 0x10) != 0 )
            {
              v22 = v101;
              if ( (*(_DWORD *)(v63 + 8) & 4) == 0 )
                goto LABEL_146;
            }
            else
            {
              v22 = v101;
            }
            goto LABEL_128;
          }
          v56 = v118;
          v57 = v104;
        }
      }
    }
    goto LABEL_29;
  }
  return result;
}
