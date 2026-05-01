/*
 * XREFs of AslEnvBuildBasic @ 0x18015A770
 * Callers:
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x18015A37C (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 * Callees:
 *     RtlDownlevelGetNtSystemRoot @ 0x18015BBFC (RtlDownlevelGetNtSystemRoot.c)
 *     AslRegistryOpenKey @ 0x18015BC88 (AslRegistryOpenKey.c)
 *     AslRegistryGetString @ 0x18015C054 (AslRegistryGetString.c)
 *     AslFree @ 0x18015C31C (AslFree.c)
 *     AslRegistryGetStringExpand @ 0x18015C344 (AslRegistryGetStringExpand.c)
 *     AslLogCallPrintf @ 0x1802C3E28 (AslLogCallPrintf.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

__int64 __fastcall AslEnvBuildBasic(_QWORD *a1, size_t *a2)
{
  PVOID v2; // r12
  PVOID v3; // rdi
  PVOID ProcessHeap; // r15
  PVOID Heap; // rax
  unsigned __int64 v6; // rsi
  SIZE_T v7; // rdi
  unsigned __int64 v8; // rbx
  size_t v9; // r13
  __int64 v10; // r14
  const void *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  size_t v14; // r12
  unsigned __int64 v15; // r14
  PVOID v16; // rax
  PVOID v17; // r15
  unsigned int v18; // ebx
  unsigned __int64 v19; // r14
  PVOID v20; // rax
  PVOID v21; // r15
  __int64 v22; // r8
  void *v23; // rax
  unsigned __int64 v24; // r15
  PVOID v25; // rax
  PVOID v26; // rbx
  SIZE_T v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  _DWORD *NtSystemRoot; // r12
  PVOID v31; // rax
  PVOID v32; // r14
  SIZE_T v33; // r14
  PVOID v34; // rax
  PVOID v35; // r15
  unsigned __int64 v36; // rbx
  PVOID v37; // rax
  PVOID v38; // r15
  __int64 v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rcx
  const void *v42; // rax
  __int64 v43; // rcx
  size_t v44; // r12
  unsigned __int64 v45; // r14
  PVOID v46; // rax
  PVOID v47; // r15
  unsigned __int64 v48; // r14
  PVOID v49; // rax
  PVOID v50; // r15
  unsigned int i; // eax
  __int64 v52; // rbx
  __int64 v53; // rax
  wchar_t *v54; // rcx
  bool v55; // zf
  void *v56; // rax
  unsigned __int64 v57; // r12
  PVOID v58; // rax
  PVOID v59; // rbx
  unsigned __int64 v60; // rbx
  PVOID v61; // rax
  PVOID v62; // r12
  PVOID v63; // r14
  __int64 v64; // rax
  void *v65; // rax
  unsigned __int64 v66; // r12
  PVOID v67; // rax
  PVOID v68; // r14
  PVOID v69; // rax
  PVOID v70; // r12
  __int64 v71; // r8
  int v72; // eax
  __int64 v73; // r8
  unsigned int j; // eax
  __int64 v75; // rbx
  wchar_t *v76; // rcx
  __int64 v77; // rax
  void *v78; // rax
  unsigned __int64 v79; // r12
  PVOID v80; // rax
  PVOID v81; // rbx
  unsigned __int64 v82; // rbx
  PVOID v83; // rax
  PVOID v84; // r12
  PVOID v85; // r14
  __int64 v86; // rax
  void *v87; // rax
  unsigned __int64 v88; // r12
  PVOID v89; // rax
  PVOID v90; // r14
  PVOID v91; // rax
  PVOID v92; // r12
  PVOID v93; // rax
  void *v94; // r12
  unsigned int k; // eax
  __int64 v96; // rbx
  const wchar_t *v97; // r12
  wchar_t *v98; // rcx
  __int64 v99; // rax
  void *v100; // rax
  unsigned __int64 v101; // r12
  PVOID v102; // rax
  PVOID v103; // rbx
  unsigned __int64 v104; // rbx
  PVOID v105; // rax
  PVOID v106; // r12
  PVOID v107; // r14
  __int64 v108; // rax
  void *v109; // rax
  unsigned __int64 v110; // r12
  PVOID v111; // rax
  PVOID v112; // r14
  PVOID v113; // rax
  PVOID v114; // r12
  PVOID v115; // rax
  PVOID P; // [rsp+30h] [rbp-49h] BYREF
  PVOID v118; // [rsp+38h] [rbp-41h]
  HANDLE Handle; // [rsp+40h] [rbp-39h] BYREF
  void *v120; // [rsp+48h] [rbp-31h]
  void *Src; // [rsp+50h] [rbp-29h]
  const void *v124; // [rsp+F0h] [rbp+77h]
  const void *v125; // [rsp+F0h] [rbp+77h]
  unsigned int v126; // [rsp+F0h] [rbp+77h]
  unsigned int v127; // [rsp+F0h] [rbp+77h]
  unsigned int v128; // [rsp+F0h] [rbp+77h]
  PVOID HeapHandle; // [rsp+F8h] [rbp+7Fh]

  Handle = 0LL;
  v2 = 0LL;
  P = 0LL;
  v3 = 0LL;
  v118 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x400uLL);
  v6 = (unsigned __int64)Heap;
  if ( !Heap )
  {
    v18 = -1073741801;
    AslLogCallPrintf(1LL, "AslEnvBuildBasic", 1294LL, "Out of memory");
    v23 = 0LL;
    v6 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    goto LABEL_362;
  }
  memset_0(Heap, 0, 0x400uLL);
  v7 = 1024LL;
  v8 = 22LL;
  v9 = 22LL;
  *(_OWORD *)v6 = *(_OWORD *)L"SystemRoot=";
  *(_DWORD *)(v6 + 16) = *(_DWORD *)L"ot=";
  *(_WORD *)(v6 + 20) = aSystemroot_0[10];
  v10 = ((__int64 (*)(void))RtlDownlevelGetNtSystemRoot)();
  v11 = (const void *)((__int64 (*)(void))RtlDownlevelGetNtSystemRoot)();
  v12 = -1LL;
  v124 = v11;
  v13 = 0LL;
  do
    ++v12;
  while ( *(_WORD *)(v10 + 2 * v12) );
  v14 = 2 * v12;
  if ( 2 * v12 )
  {
    v15 = v14 + 22;
    if ( v14 + 22 < 0x16 )
    {
      v18 = -1073741811;
      goto LABEL_26;
    }
    if ( v15 > 0x400 )
    {
      if ( v14 + 1045 < v14 + 22 )
      {
        v18 = -1073741675;
        goto LABEL_26;
      }
      v7 = (v14 + 1045) & 0xFFFFFFFFFFFFFC00uLL;
      if ( v6 )
      {
        v17 = RtlReAllocateHeap(ProcessHeap, 0, (PVOID)v6, v7);
      }
      else
      {
        v16 = RtlAllocateHeap(ProcessHeap, 0, v7);
        v17 = v16;
        if ( !v16 )
        {
LABEL_13:
          v18 = -1073741801;
LABEL_26:
          v22 = 1304LL;
          goto LABEL_27;
        }
        memset_0(v16, 0, v7);
      }
      if ( !v17 )
        goto LABEL_13;
      v6 = (unsigned __int64)v17;
      v11 = v124;
      ProcessHeap = HeapHandle;
    }
    memcpy_0((void *)(v6 + 22), v11, v14);
    v8 = v14 + 22;
    if ( v15 >= 0x16 )
      v9 = v14 + 22;
    v13 = 0LL;
  }
  v19 = v8 + 2;
  if ( v8 + 2 < v8 )
  {
    v18 = -1073741811;
    goto LABEL_360;
  }
  if ( v19 > v7 )
  {
    if ( v8 + 1025 < v19 )
    {
      v18 = -1073741675;
      goto LABEL_360;
    }
    v7 = (v8 + 1025) & 0xFFFFFFFFFFFFFC00uLL;
    if ( v6 )
    {
      v21 = RtlReAllocateHeap(ProcessHeap, 0, (PVOID)v6, v7);
    }
    else
    {
      v20 = RtlAllocateHeap(ProcessHeap, 0, v7);
      v21 = v20;
      if ( v20 )
        memset_0(v20, 0, v7);
    }
    v13 = 0LL;
    if ( !v21 )
    {
      v18 = -1073741801;
LABEL_360:
      v22 = 1308LL;
      goto LABEL_27;
    }
    v6 = (unsigned __int64)v21;
  }
  *(_WORD *)(v8 + v6) = 0;
  v24 = v8 + 26;
  if ( v9 <= v19 )
    v9 = v8 + 2;
  if ( v24 < v19 )
  {
    v18 = -1073741811;
    goto LABEL_358;
  }
  if ( v24 > v7 )
  {
    if ( v8 + 1049 < v24 )
    {
      v18 = -1073741675;
      goto LABEL_358;
    }
    v7 = (v8 + 1049) & 0xFFFFFFFFFFFFFC00uLL;
    if ( v6 )
    {
      v26 = RtlReAllocateHeap(HeapHandle, 0, (PVOID)v6, v7);
    }
    else
    {
      v25 = RtlAllocateHeap(HeapHandle, 0, v7);
      v26 = v25;
      if ( !v25 )
      {
LABEL_45:
        v18 = -1073741801;
LABEL_358:
        v22 = 1312LL;
        goto LABEL_27;
      }
      memset_0(v25, 0, v7);
    }
    if ( !v26 )
      goto LABEL_45;
    v6 = (unsigned __int64)v26;
  }
  *(_OWORD *)(v19 + v6) = *(_OWORD *)L"SystemDrive=";
  if ( v9 <= v24 )
    v9 = v19 + 24;
  *(_QWORD *)(v19 + v6 + 16) = *(_QWORD *)L"ive=";
  v27 = v19 + 28;
  NtSystemRoot = (_DWORD *)RtlDownlevelGetNtSystemRoot(v12, v13);
  if ( v19 + 28 < v19 + 24 )
  {
    v18 = -1073741811;
    goto LABEL_356;
  }
  if ( v27 > v7 )
  {
    if ( v24 + 1027 < v24 + 4 )
    {
      v18 = -1073741675;
      goto LABEL_356;
    }
    v7 = (v24 + 1027) & 0xFFFFFFFFFFFFFC00uLL;
    if ( v6 )
    {
      v32 = RtlReAllocateHeap(HeapHandle, 0, (PVOID)v6, v7);
    }
    else
    {
      v31 = RtlAllocateHeap(HeapHandle, 0, v7);
      v32 = v31;
      if ( !v31 )
      {
LABEL_58:
        v18 = -1073741801;
LABEL_356:
        v22 = 1316LL;
        goto LABEL_27;
      }
      memset_0(v31, 0, v7);
    }
    if ( !v32 )
      goto LABEL_58;
    v6 = (unsigned __int64)v32;
  }
  v33 = v24 + 6;
  *(_DWORD *)(v24 + v6) = *NtSystemRoot;
  if ( v9 <= v27 )
    v9 = v24 + 4;
  if ( v33 < v27 )
  {
    v18 = -1073741811;
    goto LABEL_354;
  }
  if ( v33 > v7 )
  {
    if ( v27 + 1025 < v27 + 2 )
    {
      v18 = -1073741675;
      goto LABEL_354;
    }
    v7 = (v27 + 1025) & 0xFFFFFFFFFFFFFC00uLL;
    if ( v6 )
    {
      v35 = RtlReAllocateHeap(HeapHandle, 0, (PVOID)v6, v7);
    }
    else
    {
      v34 = RtlAllocateHeap(HeapHandle, 0, v7);
      v35 = v34;
      if ( v34 )
        memset_0(v34, 0, v7);
    }
    if ( !v35 )
    {
      v18 = -1073741801;
LABEL_354:
      v22 = 1322LL;
      goto LABEL_27;
    }
    v6 = (unsigned __int64)v35;
  }
  *(_WORD *)(v27 + v6) = 0;
  v36 = v27 + 16;
  if ( v9 <= v33 )
    v9 = v33;
  if ( v36 < v33 )
  {
    v18 = -1073741811;
    goto LABEL_352;
  }
  if ( v36 > v7 )
  {
    if ( v33 + 1037 < v33 + 14 )
    {
      v18 = -1073741675;
      goto LABEL_352;
    }
    v7 = (v33 + 1037) & 0xFFFFFFFFFFFFFC00uLL;
    if ( v6 )
    {
      v38 = RtlReAllocateHeap(HeapHandle, 0, (PVOID)v6, v7);
    }
    else
    {
      v37 = RtlAllocateHeap(HeapHandle, 0, v7);
      v38 = v37;
      if ( v37 )
        memset_0(v37, 0, v7);
    }
    if ( !v38 )
    {
      v18 = -1073741801;
LABEL_352:
      v22 = 1326LL;
      goto LABEL_27;
    }
    v6 = (unsigned __int64)v38;
  }
  *(_QWORD *)(v33 + v6) = *(_QWORD *)L"WinDir=";
  if ( v9 <= v36 )
    v9 = v33 + 14;
  *(_DWORD *)(v33 + v6 + 8) = *(_DWORD *)L"ir=";
  *(_WORD *)(v33 + v6 + 12) = aWindir_0[6];
  v39 = RtlDownlevelGetNtSystemRoot(v29, v28);
  v42 = (const void *)RtlDownlevelGetNtSystemRoot(v41, v40);
  v125 = v42;
  v43 = -1LL;
  do
    ++v43;
  while ( *(_WORD *)(v39 + 2 * v43) );
  v44 = 2 * v43;
  if ( 2 * v43 )
  {
    v45 = v44 + v36;
    if ( v44 + v36 < v36 )
    {
      v18 = -1073741811;
      goto LABEL_112;
    }
    if ( v45 > v7 )
    {
      if ( v45 + 1023 < v45 )
      {
        v18 = -1073741675;
        goto LABEL_112;
      }
      v7 = (v45 + 1023) & 0xFFFFFFFFFFFFFC00uLL;
      if ( v6 )
      {
        v47 = RtlReAllocateHeap(HeapHandle, 0, (PVOID)v6, v7);
      }
      else
      {
        v46 = RtlAllocateHeap(HeapHandle, 0, v7);
        v47 = v46;
        if ( !v46 )
        {
LABEL_100:
          v18 = -1073741801;
LABEL_112:
          v22 = 1328LL;
          goto LABEL_27;
        }
        memset_0(v46, 0, v7);
      }
      if ( !v47 )
        goto LABEL_100;
      v6 = (unsigned __int64)v47;
      v42 = v125;
    }
    memcpy_0((void *)(v36 + v6), v42, v44);
    v36 += v44;
    if ( v9 <= v45 )
      v9 = v45;
  }
  v48 = v36 + 2;
  if ( v36 + 2 < v36 )
  {
    v18 = -1073741811;
    goto LABEL_350;
  }
  if ( v48 > v7 )
  {
    if ( v36 + 1025 < v36 + 2 )
    {
      v18 = -1073741675;
      goto LABEL_350;
    }
    v7 = (v36 + 1025) & 0xFFFFFFFFFFFFFC00uLL;
    if ( v6 )
    {
      v50 = RtlReAllocateHeap(HeapHandle, 0, (PVOID)v6, v7);
    }
    else
    {
      v49 = RtlAllocateHeap(HeapHandle, 0, v7);
      v50 = v49;
      if ( v49 )
        memset_0(v49, 0, v7);
    }
    if ( !v50 )
    {
      v18 = -1073741801;
LABEL_350:
      v22 = 1332LL;
      goto LABEL_27;
    }
    v6 = (unsigned __int64)v50;
  }
  *(_WORD *)(v36 + v6) = 0;
  if ( v9 <= v48 )
    v9 = v36 + 2;
  if ( (int)AslRegistryOpenKey(&Handle) >= 0 )
  {
    for ( i = 0; ; i = v126 + 1 )
    {
      v126 = i;
      if ( i >= 3 )
        break;
      v52 = 2LL * i;
      if ( (int)AslRegistryGetString(&P, Handle, off_180760660[2 * i]) >= 0 )
      {
        v53 = -1LL;
        v54 = off_180760668[v52];
        Src = v54;
        do
          ++v53;
        while ( v54[v53] );
        v55 = 2 * v53 == 0;
        v56 = (void *)(2 * v53);
        v120 = v56;
        if ( !v55 )
        {
          v57 = (unsigned __int64)v56 + v48;
          if ( (unsigned __int64)v56 + v48 < v48 )
          {
            v18 = -1073741811;
            goto LABEL_178;
          }
          if ( v57 > v7 )
          {
            if ( v57 + 1023 < v57 )
            {
              v18 = -1073741675;
              goto LABEL_178;
            }
            v7 = (v57 + 1023) & 0xFFFFFFFFFFFFFC00uLL;
            if ( v6 )
            {
              v59 = RtlReAllocateHeap(HeapHandle, 0, (PVOID)v6, v7);
            }
            else
            {
              v58 = RtlAllocateHeap(HeapHandle, 0, v7);
              v59 = v58;
              if ( !v58 )
                goto LABEL_175;
              memset_0(v58, 0, v7);
            }
            if ( !v59 )
            {
LABEL_175:
              v18 = -1073741801;
LABEL_178:
              v22 = 1350LL;
              goto LABEL_27;
            }
            v6 = (unsigned __int64)v59;
            v56 = v120;
          }
          memcpy_0((void *)(v48 + v6), Src, (size_t)v56);
          v48 = v57;
          if ( v9 <= v57 )
            v9 = v57;
        }
        v60 = v48 + 2;
        if ( v48 + 2 < v48 )
        {
          v18 = -1073741811;
          goto LABEL_191;
        }
        if ( v60 > v7 )
        {
          if ( v48 + 1025 < v48 + 2 )
          {
            v18 = -1073741675;
            goto LABEL_191;
          }
          v7 = (v48 + 1025) & 0xFFFFFFFFFFFFFC00uLL;
          if ( v6 )
          {
            v62 = RtlReAllocateHeap(HeapHandle, 0, (PVOID)v6, v7);
          }
          else
          {
            v61 = RtlAllocateHeap(HeapHandle, 0, v7);
            v62 = v61;
            if ( v61 )
              memset_0(v61, 0, v7);
          }
          if ( !v62 )
          {
            v18 = -1073741801;
LABEL_191:
            v22 = 1352LL;
            goto LABEL_27;
          }
          v6 = (unsigned __int64)v62;
        }
        *(_WORD *)(v48 + v6) = 61;
        v63 = P;
        if ( v9 <= v60 )
          v9 = v60;
        v64 = -1LL;
        do
          ++v64;
        while ( *((_WORD *)P + v64) );
        v55 = 2 * v64 == 0;
        v65 = (void *)(2 * v64);
        Src = v65;
        if ( !v55 )
        {
          v66 = (unsigned __int64)v65 + v60;
          if ( (unsigned __int64)v65 + v60 < v60 )
          {
            v18 = -1073741811;
            goto LABEL_184;
          }
          if ( v66 > v7 )
          {
            if ( v66 + 1023 < v66 )
            {
              v18 = -1073741675;
              goto LABEL_184;
            }
            v7 = (v66 + 1023) & 0xFFFFFFFFFFFFFC00uLL;
            if ( v6 )
            {
              v68 = RtlReAllocateHeap(HeapHandle, 0, (PVOID)v6, v7);
            }
            else
            {
              v67 = RtlAllocateHeap(HeapHandle, 0, v7);
              v68 = v67;
              if ( !v67 )
                goto LABEL_181;
              memset_0(v67, 0, v7);
            }
            if ( !v68 )
            {
LABEL_181:
              v18 = -1073741801;
LABEL_184:
              v22 = 1354LL;
              goto LABEL_27;
            }
            v6 = (unsigned __int64)v68;
            v65 = Src;
            v63 = P;
          }
          memcpy_0((void *)(v60 + v6), v63, (size_t)v65);
          v60 = v66;
          if ( v9 <= v66 )
            v9 = v66;
        }
        AslFree(NtCurrentPeb()->ProcessHeap, v63);
        v48 = v60 + 2;
        P = 0LL;
        v2 = 0LL;
        if ( v60 + 2 < v60 )
        {
          v18 = -1073741811;
          goto LABEL_188;
        }
        if ( v48 > v7 )
        {
          if ( v60 + 1025 < v60 + 2 )
          {
            v18 = -1073741675;
            goto LABEL_188;
          }
          v7 = (v60 + 1025) & 0xFFFFFFFFFFFFFC00uLL;
          if ( v6 )
          {
            v70 = RtlReAllocateHeap(HeapHandle, 0, (PVOID)v6, v7);
          }
          else
          {
            v69 = RtlAllocateHeap(HeapHandle, 0, v7);
            v70 = v69;
            if ( !v69 )
              goto LABEL_185;
            memset_0(v69, 0, v7);
          }
          if ( !v70 )
          {
LABEL_185:
            v2 = P;
            v18 = -1073741801;
LABEL_188:
            v71 = 1361LL;
            goto LABEL_189;
          }
          v6 = (unsigned __int64)v70;
        }
        *(_WORD *)(v60 + v6) = 0;
        if ( v9 <= v48 )
          v9 = v60 + 2;
      }
    }
    ZwClose(Handle);
    Handle = 0LL;
  }
  v72 = AslRegistryOpenKey(&Handle);
  v18 = v72;
  if ( v72 < 0 )
  {
    v73 = 1378LL;
LABEL_195:
    AslLogCallPrintf(1LL, "AslEnvBuildBasic", v73, "Failed to open reg key [%x]", v72);
    goto LABEL_28;
  }
  for ( j = 0; ; j = v127 + 1 )
  {
    v127 = j;
    if ( j >= 4 )
      break;
    v75 = 2LL * j;
    if ( (int)AslRegistryGetString(&P, Handle, off_1807606B0[2 * j]) >= 0 )
    {
      v76 = off_1807606B8[v75];
      v77 = -1LL;
      v120 = v76;
      do
        ++v77;
      while ( v76[v77] );
      v55 = 2 * v77 == 0;
      v78 = (void *)(2 * v77);
      Src = v78;
      if ( !v55 )
      {
        v79 = (unsigned __int64)v78 + v48;
        if ( (unsigned __int64)v78 + v48 < v48 )
        {
          v18 = -1073741811;
          goto LABEL_255;
        }
        if ( v79 > v7 )
        {
          if ( v79 + 1023 < v79 )
          {
            v18 = -1073741675;
            goto LABEL_255;
          }
          v7 = (v79 + 1023) & 0xFFFFFFFFFFFFFC00uLL;
          if ( v6 )
          {
            v81 = RtlReAllocateHeap(HeapHandle, 0, (PVOID)v6, v7);
          }
          else
          {
            v80 = RtlAllocateHeap(HeapHandle, 0, v7);
            v81 = v80;
            if ( !v80 )
              goto LABEL_252;
            memset_0(v80, 0, v7);
          }
          if ( !v81 )
          {
LABEL_252:
            v18 = -1073741801;
LABEL_255:
            v22 = 1388LL;
            goto LABEL_27;
          }
          v6 = (unsigned __int64)v81;
          v78 = Src;
        }
        memcpy_0((void *)(v48 + v6), v120, (size_t)v78);
        v48 = v79;
        if ( v9 <= v79 )
          v9 = v79;
      }
      v82 = v48 + 2;
      if ( v48 + 2 < v48 )
      {
        v18 = -1073741811;
        goto LABEL_267;
      }
      if ( v82 > v7 )
      {
        if ( v48 + 1025 < v48 + 2 )
        {
          v18 = -1073741675;
          goto LABEL_267;
        }
        v7 = (v48 + 1025) & 0xFFFFFFFFFFFFFC00uLL;
        if ( v6 )
        {
          v84 = RtlReAllocateHeap(HeapHandle, 0, (PVOID)v6, v7);
        }
        else
        {
          v83 = RtlAllocateHeap(HeapHandle, 0, v7);
          v84 = v83;
          if ( v83 )
            memset_0(v83, 0, v7);
        }
        if ( !v84 )
        {
          v18 = -1073741801;
LABEL_267:
          v22 = 1390LL;
          goto LABEL_27;
        }
        v6 = (unsigned __int64)v84;
      }
      *(_WORD *)(v48 + v6) = 61;
      v85 = P;
      if ( v9 <= v82 )
        v9 = v82;
      v86 = -1LL;
      do
        ++v86;
      while ( *((_WORD *)P + v86) );
      v55 = 2 * v86 == 0;
      v87 = (void *)(2 * v86);
      Src = v87;
      if ( !v55 )
      {
        v88 = (unsigned __int64)v87 + v82;
        if ( (unsigned __int64)v87 + v82 < v82 )
        {
          v18 = -1073741811;
          goto LABEL_261;
        }
        if ( v88 > v7 )
        {
          if ( v88 + 1023 < v88 )
          {
            v18 = -1073741675;
            goto LABEL_261;
          }
          v7 = (v88 + 1023) & 0xFFFFFFFFFFFFFC00uLL;
          if ( v6 )
          {
            v90 = RtlReAllocateHeap(HeapHandle, 0, (PVOID)v6, v7);
          }
          else
          {
            v89 = RtlAllocateHeap(HeapHandle, 0, v7);
            v90 = v89;
            if ( !v89 )
              goto LABEL_258;
            memset_0(v89, 0, v7);
          }
          if ( !v90 )
          {
LABEL_258:
            v18 = -1073741801;
LABEL_261:
            v22 = 1392LL;
            goto LABEL_27;
          }
          v6 = (unsigned __int64)v90;
          v87 = Src;
          v85 = P;
        }
        memcpy_0((void *)(v82 + v6), v85, (size_t)v87);
        v82 = v88;
        if ( v9 <= v88 )
          v9 = v88;
      }
      if ( v85 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v85);
      v48 = v82 + 2;
      P = 0LL;
      v2 = 0LL;
      if ( v82 + 2 < v82 )
      {
        v18 = -1073741811;
LABEL_265:
        v71 = 1399LL;
LABEL_189:
        AslLogCallPrintf(1LL, "AslEnvBuildBasic", v71, "Out of memory");
        goto LABEL_29;
      }
      if ( v48 > v7 )
      {
        if ( v82 + 1025 < v82 + 2 )
        {
          v18 = -1073741675;
          goto LABEL_265;
        }
        v7 = (v82 + 1025) & 0xFFFFFFFFFFFFFC00uLL;
        if ( v6 )
        {
          v92 = RtlReAllocateHeap(HeapHandle, 0, (PVOID)v6, v7);
        }
        else
        {
          v91 = RtlAllocateHeap(HeapHandle, 0, v7);
          v92 = v91;
          if ( !v91 )
            goto LABEL_262;
          memset_0(v91, 0, v7);
        }
        if ( !v92 )
        {
LABEL_262:
          v2 = P;
          v18 = -1073741801;
          goto LABEL_265;
        }
        v6 = (unsigned __int64)v92;
      }
      *(_WORD *)(v82 + v6) = 0;
      if ( v9 <= v48 )
        v9 = v82 + 2;
    }
  }
  ZwClose(Handle);
  Handle = 0LL;
  v93 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v9 + 2);
  v118 = v93;
  v94 = v93;
  if ( !v93 )
  {
    v18 = -1073741801;
    v22 = 1414LL;
    goto LABEL_27;
  }
  memcpy_0(v93, (const void *)v6, v9);
  v72 = AslRegistryOpenKey(&Handle);
  v18 = v72;
  if ( v72 < 0 )
  {
    v73 = 1424LL;
    goto LABEL_195;
  }
  for ( k = 0; ; k = v128 + 1 )
  {
    v128 = k;
    if ( k >= 2 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v94);
      v115 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v9 + 2);
      v3 = v115;
      if ( v115 )
      {
        memcpy_0(v115, (const void *)v6, v9);
        *a1 = v3;
        v3 = 0LL;
        *a2 = (v9 + 2) >> 1;
        v18 = 0;
      }
      else
      {
        v18 = -1073741801;
        AslLogCallPrintf(1LL, "AslEnvBuildBasic", 1473LL, "Out of memory");
      }
      v23 = HeapHandle;
      v2 = P;
      goto LABEL_362;
    }
    v96 = 2LL * k;
    if ( (int)AslRegistryGetStringExpand(&P, Handle, off_180760690[2 * k], v94) >= 0 )
      break;
LABEL_328:
    ;
  }
  v97 = (const wchar_t *)P;
  if ( wcschr((const wchar_t *)P, 0x25u) )
  {
    AslLogCallPrintf(1LL, "AslEnvBuildBasic", 1441LL, "Failed to expand: %ls %ls", off_180760690[v96], v97);
    AslFree(NtCurrentPeb()->ProcessHeap, v97);
    P = 0LL;
LABEL_327:
    v94 = v118;
    goto LABEL_328;
  }
  v98 = off_180760698[v96];
  v99 = -1LL;
  v120 = v98;
  do
    ++v99;
  while ( v98[v99] );
  v55 = 2 * v99 == 0;
  v100 = (void *)(2 * v99);
  Src = v100;
  if ( !v55 )
  {
    v101 = (unsigned __int64)v100 + v48;
    if ( (unsigned __int64)v100 + v48 < v48 )
    {
      v18 = -1073741811;
      goto LABEL_332;
    }
    if ( v101 > v7 )
    {
      if ( v101 + 1023 < v101 )
      {
        v18 = -1073741675;
        goto LABEL_332;
      }
      v7 = (v101 + 1023) & 0xFFFFFFFFFFFFFC00uLL;
      if ( v6 )
      {
        v103 = RtlReAllocateHeap(HeapHandle, 0, (PVOID)v6, v7);
      }
      else
      {
        v102 = RtlAllocateHeap(HeapHandle, 0, v7);
        v103 = v102;
        if ( !v102 )
          goto LABEL_329;
        memset_0(v102, 0, v7);
      }
      if ( !v103 )
      {
LABEL_329:
        v18 = -1073741801;
LABEL_332:
        v22 = 1447LL;
        goto LABEL_27;
      }
      v6 = (unsigned __int64)v103;
      v100 = Src;
    }
    memcpy_0((void *)(v48 + v6), v120, (size_t)v100);
    v48 = v101;
    if ( v9 <= v101 )
      v9 = v101;
  }
  v104 = v48 + 2;
  if ( v48 + 2 >= v48 )
  {
    if ( v104 > v7 )
    {
      if ( v48 + 1025 < v48 + 2 )
      {
        v18 = -1073741675;
        goto LABEL_344;
      }
      v7 = (v48 + 1025) & 0xFFFFFFFFFFFFFC00uLL;
      if ( v6 )
      {
        v106 = RtlReAllocateHeap(HeapHandle, 0, (PVOID)v6, v7);
      }
      else
      {
        v105 = RtlAllocateHeap(HeapHandle, 0, v7);
        v106 = v105;
        if ( v105 )
          memset_0(v105, 0, v7);
      }
      if ( !v106 )
      {
        v18 = -1073741801;
        goto LABEL_344;
      }
      v6 = (unsigned __int64)v106;
    }
    *(_WORD *)(v48 + v6) = 61;
    v107 = P;
    if ( v9 <= v104 )
      v9 = v104;
    v108 = -1LL;
    do
      ++v108;
    while ( *((_WORD *)P + v108) );
    v55 = 2 * v108 == 0;
    v109 = (void *)(2 * v108);
    Src = v109;
    if ( v55 )
    {
LABEL_316:
      AslFree(NtCurrentPeb()->ProcessHeap, v107);
      v48 = v104 + 2;
      P = 0LL;
      v2 = 0LL;
      if ( v104 + 2 < v104 )
      {
        v18 = -1073741811;
      }
      else
      {
        if ( v48 <= v7 )
          goto LABEL_325;
        if ( v104 + 1025 < v104 + 2 )
        {
          v18 = -1073741675;
        }
        else
        {
          v7 = (v104 + 1025) & 0xFFFFFFFFFFFFFC00uLL;
          if ( v6 )
          {
            v114 = RtlReAllocateHeap(HeapHandle, 0, (PVOID)v6, v7);
          }
          else
          {
            v113 = RtlAllocateHeap(HeapHandle, 0, v7);
            v114 = v113;
            if ( v113 )
              memset_0(v113, 0, v7);
          }
          if ( v114 )
          {
            v6 = (unsigned __int64)v114;
LABEL_325:
            *(_WORD *)(v104 + v6) = 0;
            if ( v9 <= v48 )
              v9 = v104 + 2;
            goto LABEL_327;
          }
          v2 = P;
          v18 = -1073741801;
        }
      }
      v71 = 1458LL;
      goto LABEL_189;
    }
    v110 = (unsigned __int64)v109 + v104;
    if ( (unsigned __int64)v109 + v104 < v104 )
    {
      v18 = -1073741811;
    }
    else
    {
      if ( v110 <= v7 )
      {
LABEL_314:
        memcpy_0((void *)(v104 + v6), v107, (size_t)v109);
        v104 = v110;
        if ( v9 <= v110 )
          v9 = v110;
        goto LABEL_316;
      }
      if ( v110 + 1023 >= v110 )
      {
        v7 = (v110 + 1023) & 0xFFFFFFFFFFFFFC00uLL;
        if ( v6 )
        {
          v112 = RtlReAllocateHeap(HeapHandle, 0, (PVOID)v6, v7);
        }
        else
        {
          v111 = RtlAllocateHeap(HeapHandle, 0, v7);
          v112 = v111;
          if ( !v111 )
            goto LABEL_335;
          memset_0(v111, 0, v7);
        }
        if ( !v112 )
        {
LABEL_335:
          v18 = -1073741801;
          goto LABEL_338;
        }
        v6 = (unsigned __int64)v112;
        v109 = Src;
        v107 = P;
        goto LABEL_314;
      }
      v18 = -1073741675;
    }
LABEL_338:
    v22 = 1451LL;
    goto LABEL_27;
  }
  v18 = -1073741811;
LABEL_344:
  v22 = 1449LL;
LABEL_27:
  AslLogCallPrintf(1LL, "AslEnvBuildBasic", v22, "Out of memory");
LABEL_28:
  v2 = P;
LABEL_29:
  v23 = HeapHandle;
  v3 = v118;
LABEL_362:
  if ( v6 )
    RtlFreeHeap(v23, 0, (PVOID)v6);
  if ( v2 )
    AslFree(NtCurrentPeb()->ProcessHeap, v2);
  if ( v3 )
    AslFree(NtCurrentPeb()->ProcessHeap, v3);
  if ( Handle )
    ZwClose(Handle);
  return v18;
}
