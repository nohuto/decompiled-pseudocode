/*
 * XREFs of EtwpCoverageSamplerContextSwap @ 0x140534A54
 * Callers:
 *     EtwTraceContextSwap @ 0x140407410 (EtwTraceContextSwap.c)
 * Callees:
 *     ExSaDecodeHandle @ 0x14030C290 (ExSaDecodeHandle.c)
 *     EtwpCovSampCaptureSample @ 0x1406CC924 (EtwpCovSampCaptureSample.c)
 */

void __fastcall EtwpCoverageSamplerContextSwap(struct _LIST_ENTRY *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r11
  int v3; // r9d
  int v4; // r8d
  int v5; // r10d
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // r9d
  unsigned int v9; // eax
  int v10; // edx

  if ( a1
    && a1 != ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Blink->Flink
    && a1 != (struct _LIST_ENTRY *)KeGetCurrentPrcb()->IdleThread )
  {
    v1 = ExSaDecodeHandle(*(_QWORD *)(ExpSysDbgLock.InGlobalUpdateVpThreadPriorityList + 8));
    v2 = (v1 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v3 = *(_DWORD *)(v2 + 0xB8);
    if ( !v3 )
    {
LABEL_15:
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 324));
      EtwpCovSampCaptureSample(0LL, 1342177284LL);
      return;
    }
    v4 = *(_DWORD *)(((v1 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0xCC);
    v5 = MEMORY[0xFFFFF78000000320];
    if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(((v1 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0xBC)) <= *(_DWORD *)(((v1 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0xC0) )
    {
      v8 = *(_DWORD *)(((v1 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0xD8);
    }
    else
    {
      *(_DWORD *)(((v1 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0xBC) = MEMORY[0xFFFFF78000000320];
      v6 = v4 + v3;
      v4 = *(_DWORD *)(v2 + 196);
      if ( v6 <= v4 )
        v4 = v6;
      *(_DWORD *)(v2 + 204) = v4;
      v7 = (unsigned int)(*(_DWORD *)(v2 + 212) + *(_DWORD *)(v2 + 200)) >> 1;
      *(_DWORD *)(v2 + 212) = v7;
      *(_DWORD *)(v2 + 200) = 0;
      if ( v7 >= 2 * v3 )
      {
        v9 = v7 / (v3 + 1);
        *(_DWORD *)(v2 + 216) = v9;
        v8 = v9;
        v10 = 16777619 * (v5 ^ *(_DWORD *)(v2 + 220));
        *(_DWORD *)(v2 + 220) = v10;
        *(_DWORD *)(v2 + 208) = v10 & (2 * v9);
      }
      else
      {
        v8 = 1;
        *(_DWORD *)(v2 + 216) = 1;
        *(_DWORD *)(v2 + 208) = 1;
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 200));
    if ( v4 > 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 208), 0xFFFFFFFF) <= 1 )
    {
      *(_DWORD *)(v2 + 204) = v4 - 1;
      *(_DWORD *)(v2 + 208) = v8;
      goto LABEL_15;
    }
  }
}
