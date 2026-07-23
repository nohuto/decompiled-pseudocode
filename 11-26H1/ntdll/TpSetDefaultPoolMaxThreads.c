/*
 * XREFs of TpSetDefaultPoolMaxThreads @ 0x180039890
 * Callers:
 *     RtlRegisterWait @ 0x180039430 (RtlRegisterWait.c)
 *     RtlpTpInitializeData @ 0x180039800 (RtlpTpInitializeData.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180039020 (TppPoolpDereferenceGlobalPool.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800878AC (TpPoolReferenceExistingGlobalPool.c)
 *     TpSetPoolMaxThreads @ 0x1800EC1D0 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x1800FEE00 (TpSetPoolMaxThreadsSoftLimit.c)
 */

void __fastcall TpSetDefaultPoolMaxThreads(ULONG a1)
{
  _TP_POOL *v2; // rsi
  int v3; // eax
  unsigned int SelectedCpuSetCount; // ebp
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  unsigned int v7; // r14d
  ULONG v8; // eax
  ULONG v9; // edi

  v2 = (_TP_POOL *)TpPoolReferenceExistingGlobalPool();
  v3 = TppPoolpGlobalPoolMaxThreadsOverride;
  if ( TppPoolpGlobalPoolMaxThreadsOverride )
  {
    v5 = TppPoolpGlobalPoolMaxThreadsOverride;
  }
  else
  {
    if ( !v2
      || (SelectedCpuSetCount = v2->SelectedCpuSetCount, v3 = TppPoolpGlobalPoolMaxThreadsOverride, !SelectedCpuSetCount) )
    {
      SelectedCpuSetCount = MEMORY[0x7FFE03C0];
    }
    v5 = 8 * SelectedCpuSetCount;
    if ( v5 < 0x300 )
      v5 = 768;
  }
  if ( v3 )
  {
    v7 = 0;
  }
  else
  {
    if ( !v2 || (v6 = v2->SelectedCpuSetCount) == 0 )
      v6 = MEMORY[0x7FFE03C0];
    v7 = 4 * v6;
    if ( v7 < 0x180 )
      v7 = 384;
  }
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 <= TppPoolpGlobalPoolMaxThreads )
      return;
LABEL_15:
    v8 = a1;
    goto LABEL_16;
  }
  if ( a1 <= v7 )
    return;
  v8 = v5;
  if ( a1 > v5 )
    goto LABEL_15;
LABEL_16:
  if ( !v8 )
    return;
  RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
  v9 = 0;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 > TppPoolpGlobalPoolMaxThreads )
      goto LABEL_28;
  }
  else if ( a1 > v7 )
  {
    v9 = v5;
    if ( a1 <= v5 )
    {
LABEL_29:
      if ( v9 )
        TppPoolpGlobalPoolMaxThreads = v9;
      goto LABEL_31;
    }
LABEL_28:
    v9 = a1;
    goto LABEL_29;
  }
LABEL_31:
  RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  if ( v9 )
  {
    if ( v2 )
    {
      TpSetPoolMaxThreads(v2, v9);
      TpSetPoolMaxThreadsSoftLimit(v2, 0LL);
      TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
  }
}
