/*
 * XREFs of RtlpValidateHeap @ 0x1800605E8
 * Callers:
 *     RtlDebugReAllocateHeap @ 0x18000D850 (RtlDebugReAllocateHeap.c)
 *     RtlDebugAllocateHeap @ 0x180060070 (RtlDebugAllocateHeap.c)
 *     RtlDebugSizeHeap @ 0x1800603FC (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x180060DF0 (RtlValidateHeap.c)
 *     RtlDebugWalkHeap @ 0x180094934 (RtlDebugWalkHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800D9654 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugFreeHeap @ 0x1800FEF68 (RtlDebugFreeHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180106668 (RtlDebugQueryTagHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1801083AC (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x18010D700 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugDestroyHeap @ 0x18011F964 (RtlDebugDestroyHeap.c)
 *     RtlDebugCompactHeap @ 0x180121278 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180146CC4 (RtlDebugCreateTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180146DB8 (RtlDebugZeroHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180012A14 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180060C38 (RtlpValidateHeapHeaders.c)
 *     RtlpCheckBusyBlockTail @ 0x18006127C (RtlpCheckBusyBlockTail.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18006D540 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpValidateHeapSegment @ 0x1800D9FA4 (RtlpValidateHeapSegment.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 */

char __fastcall RtlpValidateHeap(unsigned __int64 a1, char a2)
{
  unsigned __int16 v3; // r13
  __int64 v5; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // r15
  int v9; // r14d
  unsigned __int64 v10; // rdi
  _DWORD *v11; // rsi
  char *v12; // r15
  __int64 *i; // rdi
  _QWORD *v14; // rdi
  int v15; // edi
  __int64 v16; // rsi
  __int64 v17; // rsi
  unsigned __int16 k; // di
  char *v19; // rbx
  unsigned __int16 j; // di
  __int16 v21; // ax
  unsigned __int16 v22; // ax
  __int64 v23; // [rsp+40h] [rbp-10h] BYREF
  __int64 v24; // [rsp+48h] [rbp-8h] BYREF
  int v25; // [rsp+90h] [rbp+40h]
  PVOID BaseAddress; // [rsp+A0h] [rbp+50h] BYREF
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp+58h] BYREF

  v23 = a1;
  v3 = 0;
  RegionSize = 0LL;
  BaseAddress = 0LL;
  if ( (unsigned __int8)RtlpValidateHeapHeaders((void *)a1) )
  {
    v5 = 1LL;
    if ( a2 || (*(_DWORD *)(a1 + 112) & 0x20000000) != 0 )
    {
      v25 = 0;
      v8 = *(_QWORD **)(a1 + 336);
      v9 = 0;
      while ( (_QWORD *)(a1 + 336) != v8 )
      {
        v10 = (unsigned __int64)(v8 - 2);
        v11 = (_DWORD *)(a1 + 124);
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
          if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
          {
            RtlpAnalyzeHeapFailure(a1, v10);
            v5 = 1LL;
            v11 = (_DWORD *)(a1 + 124);
          }
        }
        v8 = (_QWORD *)*v8;
        RegionSize = *(unsigned __int16 *)(v10 + 8);
        v23 = v10;
        if ( (*(_BYTE *)(v10 + 10) & 1) != 0 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("dedicated (%04Ix) free list element %p is marked busy\n", RegionSize, (const void *)v10);
LABEL_7:
          if ( *v11 )
          {
            *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
            *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
          }
          goto LABEL_9;
        }
        if ( *(_WORD *)(v10 + 8) < v3 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("Non-Dedicated free list element %p is out of order\n", (const void *)v10);
          goto LABEL_7;
        }
        v3 = *(_WORD *)(v10 + 8);
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v10 + 11) = v3 ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
          *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        v9 = ++v25;
      }
      RegionSize = 8LL * *(unsigned __int16 *)(a1 + 224) + 1040;
      if ( RtlpValidateHeapTagsEnable
        && *(_QWORD *)(a1 + 328)
        && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        v12 = (char *)BaseAddress + 1032;
      }
      else
      {
        v12 = 0LL;
      }
      for ( i = *(__int64 **)(a1 + 272); (__int64 *)(a1 + 272) != i; i = (__int64 *)*i )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_DWORD *)i + 14) ^= *(_DWORD *)(a1 + 136);
          if ( *((_BYTE *)i + 59) != (*((_BYTE *)i + 56) ^ (unsigned __int8)(*((_BYTE *)i + 57) ^ *((_BYTE *)i + 58))) )
            RtlpAnalyzeHeapFailure(a1, (unsigned __int64)(i + 6));
        }
        if ( v12 )
        {
          v21 = *((_WORD *)i + 9);
          if ( v21 )
          {
            if ( v21 < 0 )
            {
              v5 = 0x7FFFLL;
              v22 = v21 & 0x7FFF;
              if ( v22 < 0x81u )
              {
                v5 = (__int64)BaseAddress;
                *((_QWORD *)BaseAddress + v22) += (unsigned __int64)i[4] >> 4;
              }
            }
            else if ( (v21 & 0x800) == 0 && (unsigned __int16)v21 < *(_WORD *)(a1 + 224) )
            {
              v5 = *((unsigned __int16 *)i + 9);
              *(_QWORD *)&v12[8 * v5] += (unsigned __int64)i[4] >> 4;
            }
          }
        }
        if ( (*((_BYTE *)i + 58) & 4) != 0 && !(unsigned __int8)RtlpCheckBusyBlockTail(a1, i + 6) )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            *((_BYTE *)i + 59) = *((_BYTE *)i + 56) ^ *((_BYTE *)i + 57) ^ *((_BYTE *)i + 58);
            *((_DWORD *)i + 14) ^= *(_DWORD *)(a1 + 136);
          }
          return 0;
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)i + 59) = *((_BYTE *)i + 56) ^ *((_BYTE *)i + 58) ^ *((_BYTE *)i + 57);
          *((_DWORD *)i + 14) ^= *(_DWORD *)(a1 + 136);
        }
      }
      v14 = *(_QWORD **)(a1 + 288);
      v24 = 0LL;
      while ( v14 != (_QWORD *)(a1 + 288) )
      {
        if ( !(unsigned __int8)RtlpValidateHeapSegment(
                                 a1,
                                 (__int64)&v24,
                                 (__int64)&v23,
                                 (__int64)v12,
                                 (__int64)BaseAddress) )
          goto LABEL_9;
        v14 = (_QWORD *)*v14;
      }
      if ( v9 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("Number of free blocks in arena (%ld) does not match number in the free lists (%ld)\n", 0, v9);
        goto LABEL_9;
      }
      v15 = v24;
      if ( *(_QWORD *)(a1 + 192) != v24 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "Total size of free blocks in arena (%Id) does not match number total in heap header (%Id)\n",
          v15,
          *(_QWORD *)(a1 + 192));
        goto LABEL_9;
      }
      if ( BaseAddress )
      {
        v16 = *(_QWORD *)(a1 + 328);
        if ( v16 )
        {
          for ( j = 1; j < 0x81u; ++j )
          {
            v16 += 16LL;
            v5 = *(_QWORD *)(v16 + 8);
            if ( *((_QWORD *)BaseAddress + j) != v5 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ", 1LL);
              DbgPrint(
                "Pseudo Tag %04x size incorrect (%Ix != %Ix) %p\n",
                j,
                *(_QWORD *)(v16 + 8),
                *((_QWORD *)BaseAddress + j),
                (char *)BaseAddress + 8 * j);
              goto LABEL_9;
            }
          }
        }
        v17 = *(_QWORD *)(a1 + 232);
        if ( v17 )
        {
          v5 = *(unsigned __int16 *)(a1 + 224);
          for ( k = 1; k < (unsigned __int16)v5; ++k )
          {
            v17 += 72LL;
            v19 = &v12[8 * k];
            if ( *(_QWORD *)v19 != *(_QWORD *)(v17 + 8) )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ", 1LL);
              DbgPrint(
                "Tag %04x (%ws) size incorrect (%Ix != %Ix) %p\n",
                k,
                v17 + 20,
                *(_QWORD *)(v17 + 8),
                *(_QWORD *)v19,
                &v12[8 * k]);
              goto LABEL_9;
            }
          }
        }
        RegionSize = 0LL;
        RtlpSecMemFreeVirtualMemory(v5, &BaseAddress, &RegionSize, 0x8000LL);
      }
      LOBYTE(v5) = 1;
    }
    return v5;
  }
  else
  {
LABEL_9:
    RtlpBreakPointHeap();
    if ( BaseAddress )
    {
      RegionSize = 0LL;
      RtlpSecMemFreeVirtualMemory(v7, &BaseAddress, &RegionSize, 0x8000LL);
    }
    return 0;
  }
}
