/*
 * XREFs of RtlCreateProcessParametersInternal @ 0x18009F3E0
 * Callers:
 *     RtlCreateProcessParametersWithTemplate @ 0x18009F2B0 (RtlCreateProcessParametersWithTemplate.c)
 *     RtlCreateProcessParametersEx @ 0x18009FA80 (RtlCreateProcessParametersEx.c)
 *     RtlCreateProcessParameters @ 0x18015CA90 (RtlCreateProcessParameters.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     ValidateOptionalString @ 0x18009F910 (ValidateOptionalString.c)
 *     RtlpCopyProcString @ 0x18009F924 (RtlpCopyProcString.c)
 *     ValidateStringParameter @ 0x18009F9C4 (ValidateStringParameter.c)
 *     RtlpGetBlockSizeEx @ 0x18009FA00 (RtlpGetBlockSizeEx.c)
 *     RtlDeNormalizeProcessParams @ 0x180123AA0 (RtlDeNormalizeProcessParams.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateProcessParametersInternal(
        _QWORD *a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        void *Src,
        unsigned __int16 *a7,
        unsigned __int16 *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12)
{
  __int64 v14; // r8
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int16 *v18; // r9
  _WORD *v19; // r10
  unsigned __int16 *v20; // r11
  unsigned __int16 *v21; // r15
  _WORD *v22; // r9
  unsigned __int16 *v23; // rax
  unsigned __int16 *v24; // rdi
  unsigned __int16 *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rdi
  unsigned __int64 v28; // rdi
  size_t BlockSize; // r14
  unsigned __int64 i; // r15
  __int64 Heap_0; // rax
  _DWORD *v32; // rbx
  char *v33; // r14
  _RTL_USER_PROCESS_PARAMETERS *v34; // r14
  int v35; // eax
  __int64 v36; // r9
  size_t v38; // r8
  __int16 v39; // r9
  char v40; // [rsp+20h] [rbp-40h]
  unsigned __int64 v41; // [rsp+28h] [rbp-38h] BYREF
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // [rsp+30h] [rbp-30h]
  unsigned __int16 *v43; // [rsp+38h] [rbp-28h]
  unsigned __int16 *v44; // [rsp+40h] [rbp-20h]
  unsigned __int16 *v45; // [rsp+48h] [rbp-18h]
  unsigned __int16 *v46; // [rsp+50h] [rbp-10h]
  _WORD *v47; // [rsp+58h] [rbp-8h]

  if ( (a12 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  if ( (int)ValidateStringParameter(a2) < 0 || (int)ValidateOptionalString(v14) < 0 )
    return 3221225485LL;
  v40 = 0;
  v15 = 0LL;
  if ( a4 )
  {
    v15 = (unsigned __int64)*a4 >> 1;
    if ( (int)ValidateStringParameter(a4) < 0 || !v15 )
      return 3221225485LL;
    if ( *(_WORD *)(*((_QWORD *)a4 + 1) + 2 * v15 - 2) != v39 )
    {
      if ( v15 > 0x103 )
        return 3221225485LL;
      v40 = 1;
    }
  }
  if ( (int)ValidateOptionalString(a5) < 0
    || (int)ValidateOptionalString(a7) < 0
    || (int)ValidateOptionalString(a8) < 0
    || (int)ValidateOptionalString(a9) < 0
    || (int)ValidateOptionalString(a10) < 0
    || (int)ValidateOptionalString(a11) < 0 )
  {
    return 3221225485LL;
  }
  v21 = a2;
  if ( v18 )
    v21 = v18;
  v22 = &RtlpNullString;
  v43 = v21;
  v23 = (unsigned __int16 *)&RtlpNullString;
  if ( a7 )
    v23 = a7;
  v44 = v23;
  v24 = (unsigned __int16 *)&RtlpNullString;
  if ( a8 )
    v24 = a8;
  v25 = (unsigned __int16 *)&RtlpNullString;
  v45 = v24;
  v26 = v23[1];
  if ( v20 )
    v25 = v20;
  v27 = v24[1];
  if ( v19 )
    v22 = v19;
  v46 = v25;
  v47 = v22;
  v28 = ((*v21 + 9LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((*a2 + 9LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v25[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v26 + 7) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v27 + 7) & 0xFFFFFFFFFFFFFFF8uLL)
      + 1616;
  if ( *v22 )
    v28 += ((unsigned __int16)v22[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v17 )
    v28 += (*(unsigned __int16 *)(v17 + 2) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a11 )
    v28 += (*(unsigned __int16 *)(a11 + 2) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( Src )
    BlockSize = RtlpGetBlockSizeEx(Src, 1LL);
  else
    BlockSize = *(_QWORD *)(v16 + 1008);
  for ( i = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL; ; i = v41 )
  {
    if ( i < BlockSize || i + v28 < v28 )
      return 3221225621LL;
    Heap_0 = RtlAllocateHeap_0();
    v32 = (_DWORD *)Heap_0;
    if ( !Heap_0 )
      return 3221225626LL;
    if ( Src )
    {
      memmove((void *)(v28 + Heap_0), Src, BlockSize);
      v33 = (char *)v32 + v28;
      goto LABEL_35;
    }
    RtlEnterCriticalSection((__int64)&FastPebLock);
    BlockSize = ProcessParameters->EnvironmentSize;
    v41 = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( BlockSize <= i )
      break;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlFreeHeap_0();
  }
  v38 = BlockSize;
  v33 = (char *)v32 + v28;
  memmove((char *)v32 + v28, ProcessParameters->Environment, v38);
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  i = v41;
LABEL_35:
  memset_thunk_772440563353939046(v32, 0, 0x448uLL);
  *((_QWORD *)v32 + 16) = v33;
  v34 = ProcessParameters;
  *v32 = v28;
  v32[1] = v28;
  *((_QWORD *)v32 + 126) = i;
  v41 = (unsigned __int64)(v32 + 274);
  v32[2] = 1;
  v32[6] = v34->ConsoleFlags & 1;
  if ( a4 )
  {
    RtlpCopyProcString(&v41, v32 + 14, a4, 520LL);
    if ( v40 )
    {
      *(_WORD *)(*((_QWORD *)v32 + 8) + 2 * v15) = 92;
      *((_WORD *)v32 + 28) += 2;
    }
  }
  else
  {
    RtlEnterCriticalSection((__int64)&FastPebLock);
    RtlpCopyProcString(&v41, v32 + 14, &v34->CurrentDirectory, 520LL);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
  }
  if ( a3 )
    RtlpCopyProcString(&v41, v32 + 20, a3, *(unsigned __int16 *)(a3 + 2));
  if ( a11 )
    RtlpCopyProcString(&v41, v32 + 260, a11, *(unsigned __int16 *)(a11 + 2));
  RtlpCopyProcString(&v41, v32 + 24, a2, (unsigned int)*a2 + 2);
  v35 = *v43;
  if ( (_WORD)v35 == v43[1] )
    v36 = v43[1];
  else
    v36 = (unsigned int)(v35 + 2);
  RtlpCopyProcString(&v41, v32 + 28, v43, v36);
  RtlpCopyProcString(&v41, v32 + 44, v44, v44[1]);
  RtlpCopyProcString(&v41, v32 + 48, v45, v45[1]);
  RtlpCopyProcString(&v41, v32 + 52, v46, v46[1]);
  if ( *v47 )
    RtlpCopyProcString(&v41, v32 + 56, v47, (unsigned __int16)v47[1]);
  if ( (a12 & 1) == 0 )
    v32 = (_DWORD *)RtlDeNormalizeProcessParams(v32);
  *a1 = v32;
  return 0LL;
}
