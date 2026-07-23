/*
 * XREFs of RtlQueryProcessHeapInformation @ 0x180075B50
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800742B0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180076180 (RtlpEnumProcessHeaps.c)
 *     RtlpReleaseHeapListLock @ 0x1800762B0 (RtlpReleaseHeapListLock.c)
 *     RtlpAcquireHeapListLock @ 0x1800762FC (RtlpAcquireHeapListLock.c)
 *     RtlQueryHeapInformation @ 0x180076310 (RtlQueryHeapInformation.c)
 *     RtlpGetHeapTag @ 0x1800764FC (RtlpGetHeapTag.c)
 *     RtlStringCbPrintfW @ 0x18011EDB8 (RtlStringCbPrintfW.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryProcessHeapInformation(__int64 a1)
{
  _DWORD *v2; // r13
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  unsigned int *v5; // r12
  NTSTATUS v6; // r15d
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int i; // edx
  unsigned int *v13; // rdi
  __int64 v14; // rax
  ULONG_PTR v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // esi
  unsigned int v18; // eax
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rcx
  ULONG_PTR v21; // r14
  __int64 v22; // rsi
  unsigned int v23; // edi
  unsigned int v24; // eax
  __int16 v25; // cx
  unsigned int v26; // r8d
  unsigned int v27; // edx
  unsigned int j; // r9d
  wchar_t *v29; // r10
  __int64 v30; // r9
  const wchar_t *v31; // r8
  __int64 v32; // rcx
  const wchar_t *v33; // r8
  __int64 v34; // rax
  __int64 v35; // r9
  unsigned int v36; // ecx
  int v37; // edx
  int v38; // eax
  int v39; // edi
  int v40; // eax
  unsigned int v42; // [rsp+38h] [rbp-110h]
  PVOID BaseAddress; // [rsp+40h] [rbp-108h] BYREF
  PVOID v44; // [rsp+48h] [rbp-100h] BYREF
  wchar_t *v45; // [rsp+50h] [rbp-F8h]
  __int64 v46; // [rsp+58h] [rbp-F0h]
  _DWORD *v47; // [rsp+60h] [rbp-E8h]
  const wchar_t *v48; // [rsp+68h] [rbp-E0h]
  __int64 v49; // [rsp+70h] [rbp-D8h]
  __int64 v50; // [rsp+78h] [rbp-D0h]
  __int64 v51; // [rsp+80h] [rbp-C8h]
  _QWORD v52[5]; // [rsp+88h] [rbp-C0h] BYREF
  _QWORD HeapInformation[2]; // [rsp+B0h] [rbp-98h] BYREF
  int v54; // [rsp+C0h] [rbp-88h]
  __int64 (__fastcall *v55)(); // [rsp+C8h] [rbp-80h]
  _QWORD *v56; // [rsp+D0h] [rbp-78h]
  ULONG_PTR v57; // [rsp+150h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+158h] [rbp+10h] BYREF
  ULONG_PTR v59; // [rsp+160h] [rbp+18h] BYREF
  PVOID v60; // [rsp+168h] [rbp+20h] BYREF

  *(_QWORD *)(a1 + 152) = NtCurrentPeb()->ProcessHeap;
  v2 = 0LL;
  v60 = 0LL;
  v57 = 0LL;
  v3 = *(_QWORD *)(a1 + 72) + 8LL;
  v4 = *(_QWORD *)(a1 + 80);
  if ( v3 <= v4 )
    goto LABEL_2;
  if ( v3 > *(_QWORD *)(a1 + 88) )
  {
    v5 = 0LL;
  }
  else
  {
    v60 = (PVOID)(v4 + a1);
    v57 = v3 - v4;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v60, 0LL, &v57, 0x1000u, 4u) >= 0 )
    {
      *(_QWORD *)(a1 + 80) += v57;
LABEL_2:
      v5 = (unsigned int *)(a1 + *(_QWORD *)(a1 + 72));
      *(_QWORD *)(a1 + 72) = v3;
      goto LABEL_3;
    }
    v5 = 0LL;
  }
LABEL_3:
  if ( !v5 )
    return 3221225495LL;
  *v5 = 0;
  *(_QWORD *)(a1 + 112) = v5;
  RtlpAcquireHeapListLock();
  v6 = RtlpEnumProcessHeaps(RtlpQueryProcessEnumHeapsRoutine, a1, 2LL);
  if ( v6 < 0 )
  {
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  else if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
  {
    v7 = RtlpGlobalTagHeap;
    if ( !RtlpGlobalTagHeap || !*(_QWORD *)(RtlpGlobalTagHeap + 232) )
      goto LABEL_11;
    BaseAddress = 0LL;
    RegionSize = 0LL;
    v8 = *(_QWORD *)(a1 + 72) + 96LL;
    v9 = *(_QWORD *)(a1 + 80);
    if ( v8 > v9 )
    {
      if ( v8 > *(_QWORD *)(a1 + 88) )
        goto LABEL_49;
      BaseAddress = (PVOID)(v9 + a1);
      RegionSize = v8 - v9;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        goto LABEL_49;
      *(_QWORD *)(a1 + 80) += RegionSize;
    }
    v10 = *(_QWORD *)(a1 + 72);
    v11 = a1 + v10;
    *(_QWORD *)(a1 + 72) = v8;
    if ( a1 + v10 )
    {
      memset_thunk_772440563353939046((void *)(a1 + v10), 0, 0x60uLL);
      *(_QWORD *)v11 = v7;
      *(_DWORD *)(v11 + 8) = *(_DWORD *)(v7 + 112);
      *(_WORD *)(v11 + 12) = 16;
      *(_QWORD *)(v11 + 88) = RtlpGetHeapTag(v7);
      ++*v5;
LABEL_11:
      for ( i = 0; ; ++i )
      {
        v42 = i;
        if ( i >= *v5 )
          goto LABEL_43;
        v13 = &v5[24 * i];
        v14 = *(_QWORD *)(a1 + 128);
        if ( v14 && v14 != *((_QWORD *)v13 + 1) )
          continue;
        v15 = *((_QWORD *)v13 + 1);
        RegionSize = v15;
        v16 = *(unsigned __int16 *)(v15 + 224);
        v13[10] = v16;
        v17 = 72 * v16;
        if ( *(_QWORD *)(v15 + 328) )
        {
          v18 = v16 + 129;
          v13[10] = v18;
          v17 = 72 * v18;
        }
        v44 = 0LL;
        v59 = 0LL;
        v19 = *(_QWORD *)(a1 + 72) + ((v17 + 7) & 0xFFFFFFF8);
        v20 = *(_QWORD *)(a1 + 80);
        if ( v19 > v20 )
        {
          if ( v19 > *(_QWORD *)(a1 + 88) )
            goto LABEL_19;
          v44 = (PVOID)(v20 + a1);
          v59 = v19 - v20;
          if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v44, 0LL, &v59, 0x1000u, 4u) < 0 )
            goto LABEL_19;
          *(_QWORD *)(a1 + 80) += v59;
        }
        v2 = (_DWORD *)(*(_QWORD *)(a1 + 72) + a1);
        *(_QWORD *)(a1 + 72) = v19;
LABEL_19:
        v47 = v2;
        if ( !v2 )
        {
          v6 = -1073741801;
          goto LABEL_57;
        }
        memset_thunk_772440563353939046(v2, 0, v17);
        *((_QWORD *)v13 + 10) = v2;
        v21 = RegionSize;
        v22 = *(_QWORD *)(RegionSize + 328);
        v51 = v22;
        if ( v22 )
        {
          v13[12] = 129;
          v13[13] = 16;
          v23 = 0;
          v24 = 0;
          v25 = 0;
          v26 = 0;
          v27 = 0;
          for ( j = 0; ; j = v23 )
          {
            if ( v24 > 0x80 )
              goto LABEL_37;
            *v2 = *(_DWORD *)v22;
            v2[1] = *(_DWORD *)(v22 + 4);
            *((_QWORD *)v2 + 1) = 16LL * *(_QWORD *)(v22 + 8);
            *((_WORD *)v2 + 8) = v25 | 0x8000;
            v29 = (wchar_t *)(v2 + 5);
            if ( !v26 )
              break;
            if ( v27 < 0x80 )
            {
              v30 = 16 * j;
              v31 = L"Objects=%4u";
LABEL_35:
              RtlStringCbPrintfW(v2 + 5, 48LL, v31, v30);
              goto LABEL_36;
            }
            v32 = 2147483646LL;
            v50 = 2147483646LL;
            v33 = L"VirtualAlloc";
            v48 = L"VirtualAlloc";
            v34 = 24LL;
            v49 = 24LL;
            v45 = (wchar_t *)(v2 + 5);
            v35 = 0LL;
            v46 = 0LL;
            while ( v34 )
            {
              if ( !v32 || !*v33 )
                goto LABEL_33;
              *v29++ = *v33;
              v45 = v29;
              v48 = ++v33;
              v49 = --v34;
              v50 = --v32;
              v46 = ++v35;
            }
            v45 = --v29;
            v46 = v35 - 1;
LABEL_33:
            *v29 = 0;
LABEL_36:
            v2 += 18;
            v47 = v2;
            v22 += 16LL;
            v51 = v22;
            v24 = ++v23;
            v25 = v23;
            v26 = v23;
            v27 = v23;
          }
          v30 = 2048LL;
          v31 = L"Objects>%4u";
          goto LABEL_35;
        }
LABEL_37:
        memmove(v2, *(const void **)(v21 + 232), 72LL * *(unsigned __int16 *)(v21 + 224));
        v36 = 0;
        v37 = 0;
        while ( v36 < *(unsigned __int16 *)(v21 + 224) )
        {
          *((_QWORD *)v2 + 1) *= 16LL;
          v2 += 18;
          v47 = v2;
          v36 = ++v37;
        }
        i = v42;
        v2 = 0LL;
      }
    }
LABEL_49:
    v6 = -1073741801;
    goto LABEL_57;
  }
LABEL_43:
  if ( v6 >= 0 )
  {
    v38 = *(_DWORD *)(a1 + 64);
    v39 = v38 & 0x10;
    if ( (v38 & 0x10) != 0 || (v38 & 0x200) != 0 )
    {
      memset_thunk_772440563353939046(HeapInformation, 0, 0x58uLL);
      HeapInformation[0] = -1LL;
      HeapInformation[1] = *(_QWORD *)(a1 + 128);
      v55 = RtlpWalkCallbackRoutine;
      v56 = v52;
      v40 = 3;
      if ( v39 )
        v40 = 5;
      v54 = v40;
      v52[0] = a1;
      v52[1] = v5;
      v52[2] = 0LL;
      v52[3] = v5 + 2;
      v6 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, HeapInformation, 0x58uLL, 0LL);
    }
  }
LABEL_57:
  RtlpReleaseHeapListLock(0LL);
  return (unsigned int)v6;
}
