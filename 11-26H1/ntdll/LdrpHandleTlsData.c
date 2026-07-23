/*
 * XREFs of LdrpHandleTlsData @ 0x180077550
 * Callers:
 *     LdrpSnapModule @ 0x18011B2E0 (LdrpSnapModule.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrpQueueDeferredTlsData @ 0x180076BB4 (LdrpQueueDeferredTlsData.c)
 *     LdrpGetNewTlsVector @ 0x180076F24 (LdrpGetNewTlsVector.c)
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     LdrpAllocateTlsEntry @ 0x180079130 (LdrpAllocateTlsEntry.c)
 *     LdrpFindTlsEntry @ 0x1800C1900 (LdrpFindTlsEntry.c)
 *     LdrpGenericExceptionFilter @ 0x18015B628 (LdrpGenericExceptionFilter.c)
 *     NtSetInformationProcess @ 0x18015F1C0 (NtSetInformationProcess.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall LdrpHandleTlsData(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r14d
  PVOID v3; // rax
  int v4; // ebx
  unsigned int *v5; // r15
  _DWORD *Heap_0; // r13
  unsigned int SizeOfBitMap; // esi
  NTSTATUS TlsEntry; // r12d
  unsigned int *v9; // r8
  int v10; // edx
  size_t v11; // r9
  char v12; // cl
  unsigned int v13; // r10d
  __int64 v14; // rbx
  unsigned int v15; // r10d
  unsigned int v16; // esi
  unsigned int v17; // ecx
  __int64 v18; // rdi
  PVOID v19; // rax
  void *v20; // r15
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  _DWORD *v23; // rax
  __int64 v25; // rbx
  _DWORD *v26; // r15
  int v27; // r14d
  int v28; // eax
  __int64 v29; // r8
  void *v30; // r8
  _DWORD *NewTlsVector; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdi
  unsigned __int64 v34; // rcx
  signed int v35; // r12d
  SIZE_T v36; // r8
  unsigned int *v37; // rax
  unsigned int *v38; // r9
  __int64 v39; // rcx
  unsigned int **v40; // rax
  _BYTE *v41; // rdx
  char v42; // [rsp+30h] [rbp-108h]
  char v43; // [rsp+31h] [rbp-107h] BYREF
  ULONG Size; // [rsp+34h] [rbp-104h] BYREF
  int v45; // [rsp+38h] [rbp-100h]
  ULONG v46; // [rsp+3Ch] [rbp-FCh]
  int v47; // [rsp+40h] [rbp-F8h]
  unsigned int v48; // [rsp+44h] [rbp-F4h]
  unsigned int v49; // [rsp+48h] [rbp-F0h]
  unsigned int v50; // [rsp+4Ch] [rbp-ECh]
  unsigned int v51; // [rsp+50h] [rbp-E8h]
  __int64 v52; // [rsp+58h] [rbp-E0h]
  unsigned int *v53; // [rsp+60h] [rbp-D8h]
  unsigned int v54; // [rsp+68h] [rbp-D0h]
  unsigned int v55; // [rsp+70h] [rbp-C8h]
  __int64 v56; // [rsp+78h] [rbp-C0h] BYREF
  _BYTE *v57; // [rsp+80h] [rbp-B8h]
  size_t v58; // [rsp+88h] [rbp-B0h]
  __int64 v59; // [rsp+90h] [rbp-A8h]
  _DWORD *v60; // [rsp+98h] [rbp-A0h]
  _DWORD *v61; // [rsp+A0h] [rbp-98h]
  PVOID v62; // [rsp+A8h] [rbp-90h]
  __int64 v63; // [rsp+B0h] [rbp-88h]
  size_t v64; // [rsp+B8h] [rbp-80h]
  _QWORD *v65; // [rsp+C0h] [rbp-78h]
  __int64 v66; // [rsp+C8h] [rbp-70h]
  unsigned int *v67; // [rsp+D0h] [rbp-68h]
  _BYTE ProcessInformation[32]; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v69; // [rsp+F8h] [rbp-40h]

  v1 = a1;
  v52 = a1;
  v66 = a1;
  v2 = 0;
  v56 = 0LL;
  v43 = 0;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  v69 = 0LL;
  Size = 0;
  if ( !LdrpActiveThreadCount )
    return 0LL;
  if ( *(_DWORD *)(a1 + 268) == 9 )
    return 0LL;
  v3 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 9u, &Size);
  v4 = (int)v3;
  if ( !v3 )
    return 0LL;
  v47 = 0;
  v5 = 0LL;
  v53 = 0LL;
  v63 = 0LL;
  Heap_0 = 0LL;
  v57 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  if ( LdrpActiveThreadCount != 1 )
  {
    v61 = 0LL;
    v34 = 24LL * (unsigned int)LdrpActiveThreadCount;
    if ( is_mul_ok((unsigned int)LdrpActiveThreadCount, 0x18uLL) )
    {
      v35 = 0;
    }
    else
    {
      v34 = -1LL;
      v35 = -1073741675;
    }
    if ( v35 >= 0 )
    {
      v36 = -1LL;
      if ( v34 + 16 >= v34 )
        v36 = v34 + 16;
      v35 = v34 + 16 < v34 ? 0xC0000095 : 0;
      if ( v34 + 16 < v34
        || (Heap_0 = RtlAllocateHeap_0(LdrpTlsHeap, NtdllBaseTag + 786432, v36), (v57 = Heap_0) != 0LL) )
      {
        if ( v35 >= 0 )
          goto LABEL_6;
      }
      else
      {
        v35 = -1073741801;
      }
    }
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
    return (unsigned int)v35;
  }
  Heap_0 = ProcessInformation;
  v57 = ProcessInformation;
LABEL_6:
  v60 = Heap_0;
  v61 = Heap_0;
  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  v48 = LdrpTlsBitmap.SizeOfBitMap;
  TlsEntry = LdrpAllocateTlsEntry(v4, v1, (unsigned int)&Size, (unsigned int)&v43, (__int64)&v56);
  v45 = TlsEntry;
  if ( TlsEntry >= 0 )
  {
    v9 = Heap_0 + 2;
    v67 = Heap_0 + 2;
    Heap_0[2] = LdrpActiveThreadCount;
    v42 = v43;
    if ( v43 )
    {
      Heap_0[1] = 1;
      Heap_0[3] = SizeOfBitMap;
      v48 = LdrpTlsBitmap.SizeOfBitMap;
      v46 = Size;
    }
    else
    {
      Heap_0[1] = 0;
      v46 = Size;
      Heap_0[3] = Size;
    }
    v59 = v56;
    v10 = (*(_DWORD *)(v56 + 52) >> 20) & 0xF;
    v11 = *(_QWORD *)(v56 + 24) - *(_QWORD *)(v56 + 16);
    v58 = v11;
    v12 = v10 - 1;
    if ( (*(_DWORD *)(v56 + 52) & 0xF00000) == 0 )
      v12 = v10;
    v13 = 1 << v12;
    if ( (unsigned int)(1 << v12) < 0x10 )
      v13 = 16;
    v14 = v13;
    v55 = v13;
    v15 = v13 - 1;
    v54 = v15;
    v64 = v11;
    v16 = 0;
    v51 = v15;
    while ( 1 )
    {
      v50 = v16;
      v49 = v16;
      v17 = *v9;
      if ( v16 >= *v9 )
      {
        *v61 = 0;
        TlsEntry = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessTlsInformation, Heap_0, 24 * v17 + 16);
        v45 = TlsEntry;
        goto LABEL_20;
      }
      v18 = v15;
      v19 = RtlAllocateHeap_0(LdrpTlsHeap, NtdllBaseTag + 786432, v15 + v11 + 1);
      v20 = v19;
      v62 = v19;
      if ( !v19 )
      {
        TlsEntry = -1073741801;
        v45 = -1073741801;
        goto LABEL_20;
      }
      v21 = (_QWORD *)(~v18 & ((unsigned __int64)v19 + v14));
      v65 = v21;
      *(v21 - 1) = v19;
      memmove(v21, *(const void **)(v59 + 16), v58);
      if ( v42 )
        break;
LABEL_17:
      v22 = 3LL * v16;
      v23 = v60;
      *(_QWORD *)&v60[2 * v22 + 6] = v21;
      v23[2 * v22 + 4] = 0;
      ++v16;
      v9 = v67;
      v11 = v58;
      v15 = v51;
      v14 = v55;
    }
    NewTlsVector = LdrpGetNewTlsVector(v48);
    if ( NewTlsVector )
    {
      *(_QWORD *)&NewTlsVector[2 * v46] = v21;
      v21 = NewTlsVector;
      goto LABEL_17;
    }
    RtlFreeHeap_0(LdrpTlsHeap, 0, v20);
    TlsEntry = -1073741801;
    v45 = -1073741801;
LABEL_20:
    if ( v16 )
    {
      v25 = 6LL * v16;
      v26 = v60;
      v27 = v47;
      while ( 1 )
      {
        --v16;
        v25 -= 6LL;
        v28 = Heap_0[v25 + 4];
        if ( (v28 & 2) == 0 )
          break;
        v29 = *(_QWORD *)&v26[v25 + 6];
        if ( v29 )
        {
          if ( v42 )
          {
            LdrpQueueDeferredTlsData(*(_QWORD *)&v26[v25 + 6], *(_QWORD *)&v26[v25 + 8]);
            goto LABEL_24;
          }
          v30 = *(void **)(v29 - 8);
          goto LABEL_40;
        }
LABEL_24:
        if ( !v16 )
        {
          v47 = v27;
          v2 = 0;
          TlsEntry = v45;
          goto LABEL_26;
        }
      }
      if ( (v28 & 1) != 0 )
      {
        ++LdrpPotentialTlsLeaks;
        goto LABEL_24;
      }
      ++v27;
      v32 = *(_QWORD *)&v26[v25 + 6];
      if ( v42 )
      {
        v33 = *(_QWORD *)(v32 + 8LL * v46);
        RtlFreeHeap_0(LdrpTlsHeap, 0, (PVOID)(v32 - 16));
      }
      else
      {
        v33 = *(_QWORD *)&v26[v25 + 6];
      }
      v30 = *(void **)(v33 - 8);
LABEL_40:
      RtlFreeHeap_0(LdrpTlsHeap, 0, v30);
      goto LABEL_24;
    }
LABEL_26:
    v1 = v52;
    if ( TlsEntry < 0 )
    {
      v37 = (unsigned int *)LdrpFindTlsEntry(v52);
      v38 = v37;
      if ( v37 )
      {
        v39 = *(_QWORD *)v37;
        v40 = (unsigned int **)*((_QWORD *)v37 + 1);
        if ( *(unsigned int **)(v39 + 8) != v38 || *v40 != v38 )
          __fastfail(3u);
        *v40 = (unsigned int *)v39;
        *(_QWORD *)(v39 + 8) = v40;
        v41 = (char *)LdrpTlsBitmap.Buffer + ((unsigned __int64)v38[16] >> 3);
        *v41 &= ~(1 << (v38[16] & 7));
      }
      v5 = v53;
      if ( v38 )
        v5 = v38;
      if ( v42 )
        LdrpTlsBitmap.SizeOfBitMap -= 8;
    }
    else
    {
      v5 = v53;
      if ( v47 )
        LdrpActiveThreadCount -= v47;
    }
  }
  if ( TlsEntry >= 0 )
    *(_WORD *)(v1 + 110) = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap_0 != (_DWORD *)ProcessInformation )
    RtlFreeHeap_0(LdrpTlsHeap, 0, Heap_0);
  if ( v5 )
    RtlFreeHeap_0(LdrpTlsHeap, 0, v5);
  if ( TlsEntry < 0 )
    return (unsigned int)TlsEntry;
  return v2;
}
