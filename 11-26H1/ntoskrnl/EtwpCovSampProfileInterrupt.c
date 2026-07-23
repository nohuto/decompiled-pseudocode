/*
 * XREFs of EtwpCovSampProfileInterrupt @ 0x1406CCBD0
 * Callers:
 *     <none>
 * Callees:
 *     ExSaDecodeHandle @ 0x14030C290 (ExSaDecodeHandle.c)
 *     EtwpCovSampCaptureSample @ 0x1406CC924 (EtwpCovSampCaptureSample.c)
 */

int __fastcall EtwpCovSampProfileInterrupt(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CurrentThread; // rax
  unsigned __int64 v5; // r11
  int v6; // r9d
  int v7; // r8d
  int v8; // r10d
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // r9d
  int v12; // edx
  signed __int32 v13; // eax
  bool v14; // cc
  unsigned __int64 v15; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (__int64)KeGetCurrentThread();
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread || CurrentPrcb->NestingLevel > 1u )
  {
    CurrentThread = ExSaDecodeHandle(*(_QWORD *)(a2 + 8));
    v5 = (CurrentThread + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v6 = *(_DWORD *)(v5 + 0x90);
    if ( !v6 )
    {
LABEL_14:
      v15 = *(_QWORD *)(a1 + 360);
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 320));
      LODWORD(CurrentThread) = EtwpCovSampCaptureSample(v15, 0x50000002u);
      return CurrentThread;
    }
    v7 = *(_DWORD *)(((CurrentThread + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0xA4);
    v8 = MEMORY[0xFFFFF78000000320];
    LODWORD(CurrentThread) = MEMORY[0xFFFFF78000000320]
                           - *(_DWORD *)(((CurrentThread + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 0x94);
    if ( (unsigned int)CurrentThread <= *(_DWORD *)(v5 + 152) )
    {
      v11 = *(_DWORD *)(v5 + 176);
    }
    else
    {
      *(_DWORD *)(v5 + 148) = MEMORY[0xFFFFF78000000320];
      v9 = v7 + v6;
      v7 = *(_DWORD *)(v5 + 156);
      if ( v9 <= v7 )
        v7 = v9;
      LODWORD(CurrentThread) = 2 * v6;
      *(_DWORD *)(v5 + 164) = v7;
      v10 = (unsigned int)(*(_DWORD *)(v5 + 172) + *(_DWORD *)(v5 + 160)) >> 1;
      *(_DWORD *)(v5 + 172) = v10;
      *(_DWORD *)(v5 + 160) = 0;
      if ( v10 >= 2 * v6 )
      {
        LODWORD(CurrentThread) = v10 / (v6 + 1);
        *(_DWORD *)(v5 + 176) = CurrentThread;
        v11 = CurrentThread;
        v12 = 16777619 * (v8 ^ *(_DWORD *)(v5 + 180));
        *(_DWORD *)(v5 + 180) = v12;
        *(_DWORD *)(v5 + 168) = v12 & (2 * CurrentThread);
      }
      else
      {
        v11 = 1;
        *(_DWORD *)(v5 + 176) = 1;
        *(_DWORD *)(v5 + 168) = 1;
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 160));
    if ( v7 > 0 )
    {
      v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 168), 0xFFFFFFFF);
      v14 = v13 <= 1;
      LODWORD(CurrentThread) = v13 - 1;
      if ( v14 )
      {
        *(_DWORD *)(v5 + 164) = v7 - 1;
        *(_DWORD *)(v5 + 168) = v11;
        goto LABEL_14;
      }
    }
  }
  return CurrentThread;
}
