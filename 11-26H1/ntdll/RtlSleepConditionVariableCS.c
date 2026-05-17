/*
 * XREFs of RtlSleepConditionVariableCS @ 0x18004BCD0
 * Callers:
 *     EtwpSwitchBuffer @ 0x180011380 (EtwpSwitchBuffer.c)
 * Callees:
 *     RtlpWakeSingle @ 0x18002A440 (RtlpWakeSingle.c)
 *     RtlpWakeConditionVariable @ 0x18002B160 (RtlpWakeConditionVariable.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     NtWaitForAlertByThreadId @ 0x180162BB0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlSleepConditionVariableCS(signed __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  signed __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rax
  signed __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  signed __int64 v15; // rax
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r8
  unsigned int v18; // ebx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  int i; // edx
  _QWORD v24[4]; // [rsp+20h] [rbp-48h] BYREF
  int v25; // [rsp+40h] [rbp-28h]
  signed __int32 v26; // [rsp+44h] [rbp-24h] BYREF
  __int64 v27; // [rsp+48h] [rbp-20h]

  v3 = 0;
  v25 = 0;
  _m_prefetchw(a1);
  v7 = *a1;
  v24[2] = 0LL;
  v26 = 2;
  v27 = 0LL;
  v24[3] = NtCurrentTeb()->ClientId.UniqueThread;
  while ( 1 )
  {
    v8 = (unsigned __int64)v24 | v7 & 0xF;
    v9 = v24;
    v24[0] = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (v7 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v9 = 0LL;
    v24[1] = v9;
    if ( (v7 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v8 |= 8uLL;
    v10 = _InterlockedCompareExchange64(a1, v8, v7);
    if ( v7 == v10 )
      break;
    v7 = v10;
  }
  RtlLeaveCriticalSection(a2);
  if ( (((unsigned __int8)v7 ^ (unsigned __int8)v8) & 8) != 0 )
  {
    v11 = v8;
    while ( 1 )
    {
      v12 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
      v13 = (_QWORD *)v12;
      if ( !*(_QWORD *)(v12 + 8) )
      {
        do
        {
          v14 = v13;
          v13 = (_QWORD *)*v13;
          v13[2] = v14;
        }
        while ( !v13[1] );
      }
      *(_QWORD *)(v12 + 8) = v13[1];
      v15 = _InterlockedCompareExchange64(a1, v12, v8);
      v11 = v15;
      if ( v8 == v15 )
        break;
      v8 = v15;
      if ( (v15 & 7) != 0 )
      {
        RtlpWakeConditionVariable(a1, v15, 0);
        break;
      }
    }
  }
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    if ( MEMORY[0x7FFE0297] )
    {
      v16 = __rdtsc();
      v17 = v16 + (unsigned int)ConditionVariableSpinCycleCount;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        if ( (v26 & 2) == 0 )
          break;
        v21 = v16;
        v22 = __rdtsc();
        v16 = v22;
        if ( v22 < v21 || v22 >= v17 )
          break;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    else
    {
      for ( i = 0; (v26 & 2) != 0 && i != ConditionVariableSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6]; ++i )
        _mm_pause();
    }
  }
  v18 = 0;
  if ( !_interlockedbittestandreset(&v26, 1u) )
  {
    _InterlockedOr(&v26, 4u);
LABEL_20:
    if ( (v26 & 4) != 0 )
      goto LABEL_21;
    goto LABEL_30;
  }
  v18 = NtWaitForAlertByThreadId(a2, a3);
  if ( v18 != 258 )
    goto LABEL_20;
LABEL_30:
  if ( RtlpWakeSingle(a1, (__int64)v24) )
  {
    if ( v18 != 258 )
      v18 = 0;
    v3 = v18;
  }
  else
  {
    do
      NtWaitForAlertByThreadId(a2, 0LL);
    while ( (v26 & 4) == 0 );
  }
LABEL_21:
  RtlEnterCriticalSection(a2);
  return v3;
}
