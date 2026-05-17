/*
 * XREFs of RtlQueryProcessHeapInformation @ 0x180090DF0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpEnumProcessHeaps @ 0x180091420 (RtlpEnumProcessHeaps.c)
 *     RtlQueryHeapInformation @ 0x180091560 (RtlQueryHeapInformation.c)
 *     RtlpGetHeapTag @ 0x18009174C (RtlpGetHeapTag.c)
 *     RtlStringCbPrintfW @ 0x18011F008 (RtlStringCbPrintfW.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryProcessHeapInformation(__int64 a1)
{
  _DWORD *v2; // r13
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  unsigned int *v5; // r12
  int HeapInformation; // r15d
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int i; // edx
  unsigned int *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // eax
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rdi
  unsigned int v23; // esi
  unsigned int v24; // eax
  __int16 v25; // cx
  unsigned int v26; // r8d
  unsigned int v27; // edx
  unsigned int v28; // r9d
  wchar_t *v29; // r10
  __int64 v30; // rdx
  const wchar_t *v31; // r8
  __int64 v32; // rax
  __int64 v33; // r9
  unsigned int v34; // ecx
  int v35; // edx
  int v36; // eax
  int v37; // edi
  int v38; // eax
  unsigned int v40; // [rsp+38h] [rbp-110h]
  __int64 v41; // [rsp+40h] [rbp-108h] BYREF
  __int64 v42; // [rsp+48h] [rbp-100h] BYREF
  wchar_t *v43; // [rsp+50h] [rbp-F8h]
  __int64 v44; // [rsp+58h] [rbp-F0h]
  _DWORD *v45; // [rsp+60h] [rbp-E8h]
  const wchar_t *v46; // [rsp+68h] [rbp-E0h]
  __int64 v47; // [rsp+70h] [rbp-D8h]
  __int64 v48; // [rsp+78h] [rbp-D0h]
  __int64 v49; // [rsp+80h] [rbp-C8h]
  _QWORD v50[5]; // [rsp+88h] [rbp-C0h] BYREF
  _QWORD v51[2]; // [rsp+B0h] [rbp-98h] BYREF
  int v52; // [rsp+C0h] [rbp-88h]
  __int64 (__fastcall *v53)(); // [rsp+C8h] [rbp-80h]
  _QWORD *v54; // [rsp+D0h] [rbp-78h]
  unsigned __int64 v55; // [rsp+150h] [rbp+8h] BYREF
  __int64 v56; // [rsp+158h] [rbp+10h] BYREF
  unsigned __int64 v57; // [rsp+160h] [rbp+18h] BYREF
  __int64 v58; // [rsp+168h] [rbp+20h] BYREF

  *(_QWORD *)(a1 + 152) = NtCurrentPeb()->ProcessHeap;
  v2 = 0LL;
  v58 = 0LL;
  v55 = 0LL;
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
    v58 = v4 + a1;
    v55 = v3 - v4;
    if ( (int)ZwAllocateVirtualMemory(-1LL, &v58, 0LL, &v55, 4096, 4) >= 0 )
    {
      *(_QWORD *)(a1 + 80) += v55;
LABEL_2:
      v5 = (unsigned int *)(a1 + *(_QWORD *)(a1 + 72));
      *(_QWORD *)(a1 + 72) = v3;
      goto LABEL_3;
    }
    v5 = 0LL;
  }
LABEL_3:
  if ( v5 )
  {
    *v5 = 0;
    *(_QWORD *)(a1 + 112) = v5;
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
    HeapInformation = RtlpEnumProcessHeaps(RtlpQueryProcessEnumHeapsRoutine, a1, 2LL);
    if ( HeapInformation < 0 )
    {
      *(_QWORD *)(a1 + 112) = 0LL;
    }
    else if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
    {
      v7 = RtlpGlobalTagHeap;
      if ( !RtlpGlobalTagHeap || !*(_QWORD *)(RtlpGlobalTagHeap + 232) )
        goto LABEL_11;
      v41 = 0LL;
      v56 = 0LL;
      v8 = *(_QWORD *)(a1 + 72) + 96LL;
      v9 = *(_QWORD *)(a1 + 80);
      if ( v8 > v9 )
      {
        if ( v8 > *(_QWORD *)(a1 + 88)
          || (v41 = v9 + a1, v56 = v8 - v9, (int)ZwAllocateVirtualMemory(-1LL, &v41, 0LL, &v56, 4096, 4) < 0) )
        {
LABEL_48:
          HeapInformation = -1073741801;
LABEL_56:
          RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
          return (unsigned int)HeapInformation;
        }
        *(_QWORD *)(a1 + 80) += v56;
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
          v40 = i;
          if ( i >= *v5 )
            goto LABEL_42;
          v13 = &v5[24 * i];
          v14 = *(_QWORD *)(a1 + 128);
          if ( !v14 || v14 == *((_QWORD *)v13 + 1) )
            break;
LABEL_39:
          ;
        }
        v15 = *((_QWORD *)v13 + 1);
        v56 = v15;
        v16 = *(unsigned __int16 *)(v15 + 224);
        v13[10] = v16;
        v17 = 72 * v16;
        if ( *(_QWORD *)(v15 + 328) )
        {
          v18 = v16 + 129;
          v13[10] = v18;
          v17 = 72 * v18;
        }
        v42 = 0LL;
        v57 = 0LL;
        v19 = *(_QWORD *)(a1 + 72) + ((v17 + 7) & 0xFFFFFFF8);
        v20 = *(_QWORD *)(a1 + 80);
        if ( v19 > v20 )
        {
          if ( v19 > *(_QWORD *)(a1 + 88) )
            goto LABEL_19;
          v42 = v20 + a1;
          v57 = v19 - v20;
          if ( (int)ZwAllocateVirtualMemory(-1LL, &v42, 0LL, &v57, 4096, 4) < 0 )
            goto LABEL_19;
          *(_QWORD *)(a1 + 80) += v57;
        }
        v2 = (_DWORD *)(*(_QWORD *)(a1 + 72) + a1);
        *(_QWORD *)(a1 + 72) = v19;
LABEL_19:
        v45 = v2;
        if ( !v2 )
        {
          HeapInformation = -1073741801;
          goto LABEL_56;
        }
        memset_thunk_772440563353939046(v2, 0, v17);
        *((_QWORD *)v13 + 10) = v2;
        v21 = v56;
        v22 = *(_QWORD *)(v56 + 328);
        v49 = v22;
        if ( v22 )
        {
          v13[12] = 129;
          v13[13] = 16;
          v23 = 0;
          v24 = 0;
          v25 = 0;
          v26 = 0;
          v27 = 0;
          v28 = 0;
          while ( v24 <= 0x80 )
          {
            *v2 = *(_DWORD *)v22;
            v2[1] = *(_DWORD *)(v22 + 4);
            *((_QWORD *)v2 + 1) = 16LL * *(_QWORD *)(v22 + 8);
            *((_WORD *)v2 + 8) = v25 | 0x8000;
            v29 = (wchar_t *)(v2 + 5);
            if ( v26 )
            {
              if ( v27 >= 0x80 )
              {
                v30 = 2147483646LL;
                v48 = 2147483646LL;
                v31 = L"VirtualAlloc";
                v46 = L"VirtualAlloc";
                v32 = 24LL;
                v47 = 24LL;
                v43 = (wchar_t *)(v2 + 5);
                v33 = 0LL;
                v44 = 0LL;
                while ( v32 )
                {
                  if ( !v30 || !*v31 )
                    goto LABEL_33;
                  *v29++ = *v31;
                  v43 = v29;
                  v46 = ++v31;
                  v47 = --v32;
                  v48 = --v30;
                  v44 = ++v33;
                }
                v43 = --v29;
                v44 = v33 - 1;
LABEL_33:
                *v29 = 0;
              }
              else
              {
                RtlStringCbPrintfW(v2 + 5, 48LL, L"Objects=%4u", 16 * v28);
              }
            }
            else
            {
              RtlStringCbPrintfW(v2 + 5, 48LL, L"Objects>%4u", 2048LL);
            }
            v2 += 18;
            v45 = v2;
            v22 += 16LL;
            v49 = v22;
            v24 = ++v23;
            v25 = v23;
            v26 = v23;
            v27 = v23;
            v28 = v23;
          }
        }
        memmove(v2, *(const void **)(v21 + 232), 72LL * *(unsigned __int16 *)(v21 + 224));
        v34 = 0;
        v35 = 0;
        while ( v34 < *(unsigned __int16 *)(v21 + 224) )
        {
          *((_QWORD *)v2 + 1) *= 16LL;
          v2 += 18;
          v45 = v2;
          v34 = ++v35;
        }
        i = v40;
        v2 = 0LL;
        goto LABEL_39;
      }
      goto LABEL_48;
    }
LABEL_42:
    if ( HeapInformation >= 0 )
    {
      v36 = *(_DWORD *)(a1 + 64);
      v37 = v36 & 0x10;
      if ( (v36 & 0x10) != 0 || (v36 & 0x200) != 0 )
      {
        memset_thunk_772440563353939046(v51, 0, 0x58uLL);
        v51[0] = -1LL;
        v51[1] = *(_QWORD *)(a1 + 128);
        v53 = RtlpWalkCallbackRoutine;
        v54 = v50;
        v38 = 3;
        if ( v37 )
          v38 = 5;
        v52 = v38;
        v50[0] = a1;
        v50[1] = v5;
        v50[2] = 0LL;
        v50[3] = v5 + 2;
        HeapInformation = RtlQueryHeapInformation(0LL, 2LL, v51, 88LL, 0LL);
      }
    }
    goto LABEL_56;
  }
  return 3221225495LL;
}
