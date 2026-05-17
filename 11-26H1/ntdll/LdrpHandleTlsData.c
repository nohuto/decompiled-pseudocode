/*
 * XREFs of LdrpHandleTlsData @ 0x1800801B0
 * Callers:
 *     LdrpSnapModule @ 0x18011B530 (LdrpSnapModule.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpFindTlsEntry @ 0x18007F0F0 (LdrpFindTlsEntry.c)
 *     LdrpQueueDeferredTlsData @ 0x18007F814 (LdrpQueueDeferredTlsData.c)
 *     LdrpGetNewTlsVector @ 0x18007FB84 (LdrpGetNewTlsVector.c)
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 *     LdrpAllocateTlsEntry @ 0x180081D90 (LdrpAllocateTlsEntry.c)
 *     LdrpGenericExceptionFilter @ 0x18015B768 (LdrpGenericExceptionFilter.c)
 *     NtSetInformationProcess @ 0x18015F2C0 (NtSetInformationProcess.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrpHandleTlsData(__int64 a1, __int64 a2)
{
  _WORD *v2; // rdi
  unsigned int v3; // r14d
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // ebx
  _UNKNOWN **v7; // r15
  _BYTE *Heap_0; // r13
  int v9; // esi
  int TlsEntry; // r12d
  unsigned int *v11; // r8
  int v12; // edx
  size_t v13; // r9
  char v14; // cl
  unsigned int v15; // r10d
  __int64 v16; // rbx
  unsigned int v17; // r10d
  unsigned int v18; // esi
  unsigned int v19; // ecx
  __int64 v20; // rdi
  __int64 v21; // rax
  _QWORD *v22; // rbx
  __int64 v23; // rcx
  _BYTE *v24; // rax
  __int64 v26; // rbx
  _BYTE *v27; // r15
  int v28; // r14d
  int v29; // eax
  _DWORD *NewTlsVector; // rcx
  unsigned __int64 v31; // rcx
  signed int v32; // r12d
  _UNKNOWN **v33; // rax
  _UNKNOWN **v34; // r9
  _UNKNOWN ***v35; // rcx
  _QWORD *v36; // rax
  _BYTE *v37; // rdx
  char v38; // [rsp+30h] [rbp-108h]
  char v39; // [rsp+31h] [rbp-107h] BYREF
  int v40; // [rsp+34h] [rbp-104h] BYREF
  int v41; // [rsp+38h] [rbp-100h]
  int v42; // [rsp+3Ch] [rbp-FCh]
  int v43; // [rsp+40h] [rbp-F8h]
  unsigned int v44; // [rsp+44h] [rbp-F4h]
  unsigned int v45; // [rsp+48h] [rbp-F0h]
  unsigned int v46; // [rsp+4Ch] [rbp-ECh]
  unsigned int v47; // [rsp+50h] [rbp-E8h]
  _WORD *v48; // [rsp+58h] [rbp-E0h]
  _UNKNOWN **v49; // [rsp+60h] [rbp-D8h]
  unsigned int v50; // [rsp+68h] [rbp-D0h]
  unsigned int v51; // [rsp+70h] [rbp-C8h]
  __int64 v52; // [rsp+78h] [rbp-C0h] BYREF
  _BYTE *v53; // [rsp+80h] [rbp-B8h]
  size_t Size; // [rsp+88h] [rbp-B0h]
  __int64 v55; // [rsp+90h] [rbp-A8h]
  _BYTE *v56; // [rsp+98h] [rbp-A0h]
  _DWORD *v57; // [rsp+A0h] [rbp-98h]
  __int64 v58; // [rsp+A8h] [rbp-90h]
  __int64 v59; // [rsp+B0h] [rbp-88h]
  size_t v60; // [rsp+B8h] [rbp-80h]
  _QWORD *v61; // [rsp+C0h] [rbp-78h]
  __int64 v62; // [rsp+C8h] [rbp-70h]
  unsigned int *v63; // [rsp+D0h] [rbp-68h]
  _BYTE v64[32]; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v65; // [rsp+F8h] [rbp-40h]

  v2 = (_WORD *)a1;
  v48 = (_WORD *)a1;
  v62 = a1;
  v3 = 0;
  v52 = 0LL;
  v39 = 0;
  memset(v64, 0, sizeof(v64));
  v65 = 0LL;
  v40 = 0;
  if ( !LdrpActiveThreadCount )
    return 0LL;
  if ( *(_DWORD *)(a1 + 268) == 9 )
    return 0LL;
  LOBYTE(a2) = 1;
  v4 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), a2, 9LL, &v40);
  v6 = v4;
  if ( !v4 )
    return 0LL;
  v43 = 0;
  v7 = 0LL;
  v49 = 0LL;
  v59 = 0LL;
  Heap_0 = 0LL;
  v53 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpTlsLock, v5);
  if ( LdrpActiveThreadCount != 1 )
  {
    v57 = 0LL;
    v31 = 24LL * (unsigned int)LdrpActiveThreadCount;
    if ( is_mul_ok((unsigned int)LdrpActiveThreadCount, 0x18uLL) )
    {
      v32 = 0;
    }
    else
    {
      v31 = -1LL;
      v32 = -1073741675;
    }
    if ( v32 >= 0 )
    {
      v32 = v31 + 16 < v31 ? 0xC0000095 : 0;
      if ( v31 + 16 < v31 || (Heap_0 = (_BYTE *)RtlAllocateHeap_0(), (v53 = Heap_0) != 0LL) )
      {
        if ( v32 >= 0 )
          goto LABEL_6;
      }
      else
      {
        v32 = -1073741801;
      }
    }
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
    return (unsigned int)v32;
  }
  Heap_0 = v64;
  v53 = v64;
LABEL_6:
  v56 = Heap_0;
  v57 = Heap_0;
  v9 = LdrpTlsBitmap;
  v44 = LdrpTlsBitmap;
  TlsEntry = LdrpAllocateTlsEntry(v6, (_DWORD)v2, (unsigned int)&v40, (unsigned int)&v39, (__int64)&v52);
  v41 = TlsEntry;
  if ( TlsEntry >= 0 )
  {
    v11 = (unsigned int *)(Heap_0 + 8);
    v63 = (unsigned int *)(Heap_0 + 8);
    *((_DWORD *)Heap_0 + 2) = LdrpActiveThreadCount;
    v38 = v39;
    if ( v39 )
    {
      *((_DWORD *)Heap_0 + 1) = 1;
      *((_DWORD *)Heap_0 + 3) = v9;
      v44 = LdrpTlsBitmap;
      v42 = v40;
    }
    else
    {
      *((_DWORD *)Heap_0 + 1) = 0;
      v42 = v40;
      *((_DWORD *)Heap_0 + 3) = v40;
    }
    v55 = v52;
    v12 = (*(_DWORD *)(v52 + 52) >> 20) & 0xF;
    v13 = *(_QWORD *)(v52 + 24) - *(_QWORD *)(v52 + 16);
    Size = v13;
    v14 = v12 - 1;
    if ( (*(_DWORD *)(v52 + 52) & 0xF00000) == 0 )
      v14 = v12;
    v15 = 1 << v14;
    if ( (unsigned int)(1 << v14) < 0x10 )
      v15 = 16;
    v16 = v15;
    v51 = v15;
    v17 = v15 - 1;
    v50 = v17;
    v60 = v13;
    v18 = 0;
    v47 = v17;
    while ( 1 )
    {
      v46 = v18;
      v45 = v18;
      v19 = *v11;
      if ( v18 >= *v11 )
      {
        *v57 = 0;
        TlsEntry = NtSetInformationProcess(-1LL, 35LL, Heap_0, 24 * v19 + 16);
        v41 = TlsEntry;
        goto LABEL_20;
      }
      v20 = v17;
      v21 = RtlAllocateHeap_0();
      v58 = v21;
      if ( !v21 )
      {
        TlsEntry = -1073741801;
        v41 = -1073741801;
        goto LABEL_20;
      }
      v22 = (_QWORD *)(~v20 & (v21 + v16));
      v61 = v22;
      *(v22 - 1) = v21;
      memmove(v22, *(const void **)(v55 + 16), Size);
      if ( v38 )
        break;
LABEL_17:
      v23 = 3LL * v18;
      v24 = v56;
      *(_QWORD *)&v56[8 * v23 + 24] = v22;
      *(_DWORD *)&v24[8 * v23 + 16] = 0;
      ++v18;
      v11 = v63;
      v17 = v47;
      v16 = v51;
    }
    NewTlsVector = LdrpGetNewTlsVector(v44);
    if ( NewTlsVector )
    {
      *(_QWORD *)&NewTlsVector[2 * v42] = v22;
      v22 = NewTlsVector;
      goto LABEL_17;
    }
    RtlFreeHeap_0();
    TlsEntry = -1073741801;
    v41 = -1073741801;
LABEL_20:
    if ( v18 )
    {
      v26 = 24LL * v18;
      v27 = v56;
      v28 = v43;
      while ( 1 )
      {
        --v18;
        v26 -= 24LL;
        v29 = *(_DWORD *)&Heap_0[v26 + 16];
        if ( (v29 & 2) == 0 )
          break;
        if ( *(_QWORD *)&v27[v26 + 24] )
        {
          if ( v38 )
          {
            LdrpQueueDeferredTlsData(*(_QWORD *)&v27[v26 + 24], *(_QWORD *)&v27[v26 + 32]);
            goto LABEL_24;
          }
          goto LABEL_39;
        }
LABEL_24:
        if ( !v18 )
        {
          v43 = v28;
          v3 = 0;
          TlsEntry = v41;
          goto LABEL_26;
        }
      }
      if ( (v29 & 1) != 0 )
      {
        ++LdrpPotentialTlsLeaks;
        goto LABEL_24;
      }
      ++v28;
      if ( v38 )
        RtlFreeHeap_0();
LABEL_39:
      RtlFreeHeap_0();
      goto LABEL_24;
    }
LABEL_26:
    v2 = v48;
    if ( TlsEntry < 0 )
    {
      v33 = LdrpFindTlsEntry(v48);
      v34 = v33;
      if ( v33 )
      {
        v35 = (_UNKNOWN ***)*v33;
        v36 = v33[1];
        if ( v35[1] != v34 || (_UNKNOWN **)*v36 != v34 )
          __fastfail(3u);
        *v36 = v35;
        v35[1] = (_UNKNOWN **)v36;
        v37 = (char *)qword_1801CB6C8 + ((unsigned __int64)*((unsigned int *)v34 + 16) >> 3);
        *v37 &= ~(1 << ((_BYTE)v34[8] & 7));
      }
      v7 = v49;
      if ( v34 )
        v7 = v34;
      if ( v38 )
        LdrpTlsBitmap -= 8;
    }
    else
    {
      v7 = v49;
      if ( v43 )
        LdrpActiveThreadCount -= v43;
    }
  }
  if ( TlsEntry >= 0 )
    v2[55] = -1;
  RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( Heap_0 != v64 )
    RtlFreeHeap_0();
  if ( v7 )
    RtlFreeHeap_0();
  if ( TlsEntry < 0 )
    return (unsigned int)TlsEntry;
  return v3;
}
