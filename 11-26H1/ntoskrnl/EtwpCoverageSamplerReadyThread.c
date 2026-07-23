/*
 * XREFs of EtwpCoverageSamplerReadyThread @ 0x140533BB8
 * Callers:
 *     EtwTraceReadyThread @ 0x140218A90 (EtwTraceReadyThread.c)
 * Callees:
 *     ExSaDecodeHandle @ 0x14030C290 (ExSaDecodeHandle.c)
 *     EtwpCovSampCaptureSample @ 0x1406CC924 (EtwpCovSampCaptureSample.c)
 */

unsigned __int64 __fastcall EtwpCoverageSamplerReadyThread(struct _LIST_ENTRY *a1)
{
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v3; // rax
  unsigned __int64 v4; // r11
  int v5; // r9d
  int v6; // r8d
  int v7; // r10d
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // r9d
  int v11; // edx
  signed __int32 v12; // eax
  bool v13; // cc

  result = (unsigned __int64)KeGetCurrentThread();
  if ( ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Blink->Flink != (struct _LIST_ENTRY *)result
    && ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Blink->Flink != a1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = (unsigned __int64)KeGetCurrentThread();
    if ( (_KTHREAD *)result != CurrentPrcb->IdleThread || CurrentPrcb->NestingLevel > 1u )
    {
      v3 = ExSaDecodeHandle(*(_QWORD *)(ExpSysDbgLock.InGlobalUpdateVpThreadPriorityList + 8));
      v4 = (v3 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      v5 = *(_DWORD *)(v4 + 0xE0);
      if ( !v5 )
      {
LABEL_16:
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 328));
        return EtwpCovSampCaptureSample(0LL, 805306376LL);
      }
      v6 = *(_DWORD *)(((v3 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0xF4);
      v7 = MEMORY[0xFFFFF78000000320];
      result = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(((v3 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0xE4));
      if ( (unsigned int)result <= *(_DWORD *)(v4 + 232) )
      {
        v10 = *(_DWORD *)(v4 + 256);
      }
      else
      {
        *(_DWORD *)(v4 + 228) = MEMORY[0xFFFFF78000000320];
        v8 = v6 + v5;
        v6 = *(_DWORD *)(v4 + 236);
        if ( v8 <= v6 )
          v6 = v8;
        result = (unsigned int)(2 * v5);
        *(_DWORD *)(v4 + 244) = v6;
        v9 = (unsigned int)(*(_DWORD *)(v4 + 252) + *(_DWORD *)(v4 + 240)) >> 1;
        *(_DWORD *)(v4 + 252) = v9;
        *(_DWORD *)(v4 + 240) = 0;
        if ( v9 >= (unsigned int)result )
        {
          result = v9 / (v5 + 1);
          *(_DWORD *)(v4 + 256) = result;
          v10 = v9 / (v5 + 1);
          v11 = 16777619 * (v7 ^ *(_DWORD *)(v4 + 260));
          *(_DWORD *)(v4 + 260) = v11;
          *(_DWORD *)(v4 + 248) = v11 & (2 * result);
        }
        else
        {
          v10 = 1;
          *(_DWORD *)(v4 + 256) = 1;
          *(_DWORD *)(v4 + 248) = 1;
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 240));
      if ( v6 > 0 )
      {
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 248), 0xFFFFFFFF);
        v13 = v12 <= 1;
        result = (unsigned int)(v12 - 1);
        if ( v13 )
        {
          *(_DWORD *)(v4 + 244) = v6 - 1;
          *(_DWORD *)(v4 + 248) = v10;
          goto LABEL_16;
        }
      }
    }
  }
  return result;
}
