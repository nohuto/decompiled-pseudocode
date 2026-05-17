/*
 * XREFs of RtlQueryTagHeap @ 0x180106A90
 * Callers:
 *     RtlDebugQueryTagHeap @ 0x180106C68 (RtlDebugQueryTagHeap.c)
 *     TpDbgDumpHeapUsage @ 0x180159320 (TpDbgDumpHeapUsage.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlDebugQueryTagHeap @ 0x180106C68 (RtlDebugQueryTagHeap.c)
 */

void *__fastcall RtlQueryTagHeap(__int64 a1, int a2, unsigned __int16 a3, char a4, __int64 a5)
{
  __int64 v6; // rsi
  char v8; // r14
  int v9; // ecx
  void *TagHeap; // rbx
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int16 v14; // si
  __int64 v15; // rcx
  __int64 v16; // r8

  v6 = a3;
  v8 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return 0LL;
  v9 = *(_DWORD *)(a1 + 116);
  if ( (v9 & 0x1000000) != 0 || (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0LL;
  TagHeap = 0LL;
  v11 = v9 | a2;
  if ( (v11 & 0x61000000) != 0 && (v11 & 0x10000000) == 0 )
  {
    TagHeap = (void *)RtlDebugQueryTagHeap(a1, v11, a3, a4, a5);
  }
  else
  {
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v8 = 1;
    }
    if ( (unsigned __int16)v6 < *(_WORD *)(a1 + 224) && (v12 = *(_QWORD *)(a1 + 232)) != 0 )
    {
      v13 = v12 + 72 * v6;
      if ( a5 )
      {
        *(_DWORD *)a5 = *(_DWORD *)(v12 + 72 * v6);
        *(_DWORD *)(a5 + 4) = *(_DWORD *)(v13 + 4);
        *(_QWORD *)(a5 + 8) = 16LL * *(_QWORD *)(v13 + 8);
      }
      if ( a4 )
      {
        *(_DWORD *)(v12 + 72 * v6) = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_QWORD *)(v13 + 8) = 0LL;
      }
      TagHeap = (void *)(v12 + 20 + 72 * v6);
    }
    else if ( (v6 & 0x8000u) != 0LL )
    {
      v14 = v6 ^ 0x8000;
      if ( v14 < 0x81u )
      {
        v15 = *(_QWORD *)(a1 + 328);
        if ( v15 )
        {
          v16 = v15 + 16LL * v14;
          if ( a5 )
          {
            *(_DWORD *)a5 = *(_DWORD *)(v15 + 16LL * v14);
            *(_DWORD *)(a5 + 4) = *(_DWORD *)(v16 + 4);
            *(_QWORD *)(a5 + 8) = 16LL * *(_QWORD *)(v16 + 8);
          }
          if ( a4 )
          {
            *(_DWORD *)(v15 + 16LL * v14) = 0;
            *(_DWORD *)(v16 + 4) = 0;
            *(_QWORD *)(v16 + 8) = 0LL;
          }
          TagHeap = &unk_180178474;
        }
      }
    }
  }
  if ( v8 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return TagHeap;
}
