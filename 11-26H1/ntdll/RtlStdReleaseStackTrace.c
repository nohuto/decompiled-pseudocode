/*
 * XREFs of RtlStdReleaseStackTrace @ 0x18006AD50
 * Callers:
 *     RtlInitializeResource @ 0x180068670 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x1800696F0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlLogStackBackTraceEx @ 0x18006AA70 (RtlLogStackBackTraceEx.c)
 *     RtlReleaseStackTrace @ 0x180100810 (RtlReleaseStackTrace.c)
 * Callees:
 *     RtlpStdLockAcquire @ 0x18006AD0C (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x18006AD2C (RtlpStdLockRelease.c)
 *     RtlpInterlockedPushEntrySList @ 0x180162C10 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall RtlStdReleaseStackTrace(__int64 a1, __int64 a2)
{
  int v4; // r14d
  unsigned int v5; // eax
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  _RTL_SRWLOCK *Value; // rsi
  _RTL_SRWLOCK *v9; // r15
  _WORD *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int16 v13; // cx

  v4 = 0;
  v5 = 0;
  if ( *(_WORD *)(a2 + 14) )
  {
    v6 = *(unsigned __int16 *)(a2 + 14);
    v7 = (_DWORD *)(a2 + 16);
    do
    {
      v5 += *v7;
      v7 += 2;
      --v6;
    }
    while ( v6 );
  }
  Value = (_RTL_SRWLOCK *)(a1 + 16LL * (v5 % *(_DWORD *)(a1 + 720)) + 728);
  v9 = Value + 1;
  RtlpStdLockAcquire(Value + 1);
  v10 = (_WORD *)(a2 + 8);
  if ( (*(_WORD *)(a2 + 8) & 0x7FF) != 0x7FF )
  {
    v13 = *v10 - 1;
    *v10 ^= (*v10 ^ v13) & 0x7FF;
    if ( (v13 & 0x7FF) == 0 )
    {
      while ( Value->Value )
      {
        if ( Value->Value == a2 )
        {
          Value->0 = *($2F38BEDF952D5DA5F266621B11247D04 *)a2;
          goto LABEL_13;
        }
        Value = (_RTL_SRWLOCK *)Value->Value;
      }
      __debugbreak();
LABEL_13:
      v4 = 1;
      v10 = (_WORD *)(a2 + 8);
    }
  }
  RtlpStdLockRelease(v9);
  if ( v4 )
  {
    RtlpInterlockedPushEntrySList(a1 + 16 * (((unsigned __int64)(unsigned __int16)*v10 >> 11) + 13), a2 + 16, v11, v12);
    _InterlockedAdd((volatile signed __int32 *)(a1 + 196), 1u);
  }
}
