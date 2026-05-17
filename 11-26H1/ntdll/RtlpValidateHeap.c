/*
 * XREFs of RtlpValidateHeap @ 0x180014EB8
 * Callers:
 *     RtlDebugAllocateHeap @ 0x180014940 (RtlDebugAllocateHeap.c)
 *     RtlDebugSizeHeap @ 0x180014CCC (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x1800156C0 (RtlValidateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180022780 (RtlDebugReAllocateHeap.c)
 *     RtlDebugWalkHeap @ 0x180074344 (RtlDebugWalkHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800DC6E4 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugFreeHeap @ 0x1800FF818 (RtlDebugFreeHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180106C68 (RtlDebugQueryTagHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180108A0C (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x18010DBB0 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugDestroyHeap @ 0x18011FBB4 (RtlDebugDestroyHeap.c)
 *     RtlDebugCompactHeap @ 0x1801214DC (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180146E14 (RtlDebugCreateTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180146F08 (RtlDebugZeroHeap.c)
 * Callees:
 *     RtlpValidateHeapHeaders @ 0x180015508 (RtlpValidateHeapHeaders.c)
 *     RtlpCheckBusyBlockTail @ 0x180015B4C (RtlpCheckBusyBlockTail.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800257B0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180027944 (RtlpBreakPointHeap.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18007F200 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpValidateHeapSegment @ 0x1800DD034 (RtlpValidateHeapSegment.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 */

char __fastcall RtlpValidateHeap(__int64 a1, char a2)
{
  unsigned __int16 v3; // r13
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // r15
  int v10; // r14d
  _QWORD *v11; // rdi
  _DWORD *v12; // rsi
  __int64 v13; // r15
  __int64 *i; // rdi
  _QWORD *v15; // rdi
  int v16; // edi
  __int64 v17; // rsi
  __int64 v18; // rsi
  unsigned __int16 k; // di
  _QWORD *v20; // rbx
  unsigned __int16 j; // di
  __int16 v22; // ax
  unsigned __int16 v23; // ax
  _QWORD *v24; // [rsp+40h] [rbp-10h] BYREF
  __int64 v25; // [rsp+48h] [rbp-8h] BYREF
  int v26; // [rsp+90h] [rbp+40h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+58h] BYREF

  v24 = (_QWORD *)a1;
  v3 = 0;
  v28 = 0LL;
  v27 = 0LL;
  if ( (unsigned __int8)RtlpValidateHeapHeaders((void *)a1) )
  {
    v6 = 1LL;
    if ( a2 || (*(_DWORD *)(a1 + 112) & 0x20000000) != 0 )
    {
      v26 = 0;
      v9 = *(_QWORD **)(a1 + 336);
      v10 = 0;
      while ( (_QWORD *)(a1 + 336) != v9 )
      {
        v11 = v9 - 2;
        v12 = (_DWORD *)(a1 + 124);
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_DWORD *)v11 + 2) ^= *(_DWORD *)(a1 + 136);
          if ( *((_BYTE *)v11 + 11) != (*((_BYTE *)v11 + 8) ^ (unsigned __int8)(*((_BYTE *)v11 + 9) ^ *((_BYTE *)v11 + 10))) )
          {
            RtlpAnalyzeHeapFailure(a1, v11);
            v6 = 1LL;
            v12 = (_DWORD *)(a1 + 124);
          }
        }
        v9 = (_QWORD *)*v9;
        v28 = *((unsigned __int16 *)v11 + 4);
        v24 = v11;
        if ( (*((_BYTE *)v11 + 10) & 1) != 0 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("dedicated (%04Ix) free list element %p is marked busy\n", v28, v11);
LABEL_7:
          if ( *v12 )
          {
            *((_BYTE *)v11 + 11) = *((_BYTE *)v11 + 8) ^ *((_BYTE *)v11 + 9) ^ *((_BYTE *)v11 + 10);
            *((_DWORD *)v11 + 2) ^= *(_DWORD *)(a1 + 136);
          }
          goto LABEL_9;
        }
        if ( *((_WORD *)v11 + 4) < v3 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("Non-Dedicated free list element %p is out of order\n", v11);
          goto LABEL_7;
        }
        v3 = *((_WORD *)v11 + 4);
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)v11 + 11) = v3 ^ *((_BYTE *)v11 + 9) ^ *((_BYTE *)v11 + 10);
          *((_DWORD *)v11 + 2) ^= *(_DWORD *)(a1 + 136);
        }
        v10 = ++v26;
      }
      v28 = 8LL * *(unsigned __int16 *)(a1 + 224) + 1040;
      if ( RtlpValidateHeapTagsEnable
        && *(_QWORD *)(a1 + 328)
        && (int)ZwAllocateVirtualMemory(-1LL, &v27, 0LL, &v28, 4096, 4) >= 0 )
      {
        v13 = v27 + 1032;
      }
      else
      {
        v13 = 0LL;
      }
      for ( i = *(__int64 **)(a1 + 272); (__int64 *)(a1 + 272) != i; i = (__int64 *)*i )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_DWORD *)i + 14) ^= *(_DWORD *)(a1 + 136);
          if ( *((_BYTE *)i + 59) != (*((_BYTE *)i + 56) ^ (unsigned __int8)(*((_BYTE *)i + 57) ^ *((_BYTE *)i + 58))) )
            RtlpAnalyzeHeapFailure(a1, i + 6);
        }
        if ( v13 )
        {
          v22 = *((_WORD *)i + 9);
          if ( v22 )
          {
            if ( v22 < 0 )
            {
              v6 = 0x7FFFLL;
              v23 = v22 & 0x7FFF;
              if ( v23 < 0x81u )
              {
                v6 = v27;
                *(_QWORD *)(v27 + 8LL * v23) += (unsigned __int64)i[4] >> 4;
              }
            }
            else if ( (v22 & 0x800) == 0 && (unsigned __int16)v22 < *(_WORD *)(a1 + 224) )
            {
              v6 = *((unsigned __int16 *)i + 9);
              *(_QWORD *)(v13 + 8 * v6) += (unsigned __int64)i[4] >> 4;
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
      v26 = 0;
      v15 = *(_QWORD **)(a1 + 288);
      v25 = 0LL;
      while ( v15 != (_QWORD *)(a1 + 288) )
      {
        if ( !(unsigned __int8)RtlpValidateHeapSegment(
                                 a1,
                                 (int)v15 - 24,
                                 v5,
                                 (unsigned int)&v26,
                                 (__int64)&v25,
                                 (__int64)&v24,
                                 v13,
                                 v27) )
          goto LABEL_9;
        v15 = (_QWORD *)*v15;
      }
      if ( v10 != v26 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("Number of free blocks in arena (%ld) does not match number in the free lists (%ld)\n", v26, v10);
        goto LABEL_9;
      }
      v16 = v25;
      if ( *(_QWORD *)(a1 + 192) != v25 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "Total size of free blocks in arena (%Id) does not match number total in heap header (%Id)\n",
          v16,
          *(_QWORD *)(a1 + 192));
        goto LABEL_9;
      }
      if ( v27 )
      {
        v17 = *(_QWORD *)(a1 + 328);
        if ( v17 )
        {
          for ( j = 1; j < 0x81u; ++j )
          {
            v17 += 16LL;
            v6 = *(_QWORD *)(v17 + 8);
            if ( *(_QWORD *)(v27 + 8LL * j) != v6 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ", 1LL);
              DbgPrint(
                "Pseudo Tag %04x size incorrect (%Ix != %Ix) %p\n",
                j,
                *(_QWORD *)(v17 + 8),
                *(_QWORD *)(v27 + 8LL * j),
                (const void *)(v27 + 8LL * j));
              goto LABEL_9;
            }
          }
        }
        v18 = *(_QWORD *)(a1 + 232);
        if ( v18 )
        {
          v6 = *(unsigned __int16 *)(a1 + 224);
          for ( k = 1; k < (unsigned __int16)v6; ++k )
          {
            v18 += 72LL;
            v20 = (_QWORD *)(v13 + 8LL * k);
            if ( *v20 != *(_QWORD *)(v18 + 8) )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ", 1LL);
              DbgPrint(
                "Tag %04x (%ws) size incorrect (%Ix != %Ix) %p\n",
                k,
                v18 + 20,
                *(_QWORD *)(v18 + 8),
                *v20,
                v13 + 8LL * k);
              goto LABEL_9;
            }
          }
        }
        v28 = 0LL;
        RtlpSecMemFreeVirtualMemory(v6, &v27, &v28, 0x8000LL);
      }
      LOBYTE(v6) = 1;
    }
    return v6;
  }
  else
  {
LABEL_9:
    RtlpBreakPointHeap();
    if ( v27 )
    {
      v28 = 0LL;
      RtlpSecMemFreeVirtualMemory(v8, &v27, &v28, 0x8000LL);
    }
    return 0;
  }
}
