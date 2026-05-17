/*
 * XREFs of TpSetDefaultPoolMaxThreads @ 0x18004F310
 * Callers:
 *     RtlRegisterWait @ 0x18004EEB0 (RtlRegisterWait.c)
 *     RtlpTpInitializeData @ 0x18004F280 (RtlpTpInitializeData.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18004EAA0 (TppPoolpDereferenceGlobalPool.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18006745C (TpPoolReferenceExistingGlobalPool.c)
 *     TpSetPoolMaxThreads @ 0x1800ECDE0 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x1800FF6B0 (TpSetPoolMaxThreadsSoftLimit.c)
 */

unsigned __int64 __fastcall TpSetDefaultPoolMaxThreads(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  int v4; // eax
  int v5; // ebp
  unsigned int v6; // ebp
  int v7; // r14d
  unsigned int v8; // r14d
  unsigned __int64 result; // rax
  unsigned int v10; // edi

  v3 = TpPoolReferenceExistingGlobalPool();
  v4 = TppPoolpGlobalPoolMaxThreadsOverride;
  if ( TppPoolpGlobalPoolMaxThreadsOverride )
  {
    v6 = TppPoolpGlobalPoolMaxThreadsOverride;
  }
  else
  {
    if ( !v3 || (v5 = *(_DWORD *)(v3 + 440), v4 = TppPoolpGlobalPoolMaxThreadsOverride, !v5) )
      v5 = MEMORY[0x7FFE03C0];
    v6 = 8 * v5;
    if ( v6 < 0x300 )
      v6 = 768;
  }
  if ( v4 )
  {
    v8 = 0;
  }
  else
  {
    if ( !v3 || (v7 = *(_DWORD *)(v3 + 440)) == 0 )
      v7 = MEMORY[0x7FFE03C0];
    v8 = 4 * v7;
    if ( v8 < 0x180 )
      v8 = 384;
  }
  result = (unsigned int)TppPoolpGlobalPoolMaxThreads;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 <= TppPoolpGlobalPoolMaxThreads )
      return result;
LABEL_15:
    result = a1;
    goto LABEL_16;
  }
  if ( a1 <= v8 )
    return result;
  result = v6;
  if ( a1 > v6 )
    goto LABEL_15;
LABEL_16:
  if ( !(_DWORD)result )
    return result;
  RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock, v2);
  v10 = 0;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 > TppPoolpGlobalPoolMaxThreads )
      goto LABEL_28;
  }
  else if ( a1 > v8 )
  {
    v10 = v6;
    if ( a1 <= v6 )
    {
LABEL_29:
      if ( v10 )
        TppPoolpGlobalPoolMaxThreads = v10;
      goto LABEL_31;
    }
LABEL_28:
    v10 = a1;
    goto LABEL_29;
  }
LABEL_31:
  result = (unsigned __int64)RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  if ( v10 )
  {
    if ( v3 )
    {
      TpSetPoolMaxThreads(v3, v10);
      TpSetPoolMaxThreadsSoftLimit(v3, 0LL);
      return (unsigned __int64)TppPoolpDereferenceGlobalPool(
                                 (const void **)&TppPoolpGlobalPool,
                                 &TppPoolpGlobalPoolLock);
    }
  }
  return result;
}
