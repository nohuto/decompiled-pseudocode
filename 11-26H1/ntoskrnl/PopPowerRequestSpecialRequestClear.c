/*
 * XREFs of PopPowerRequestSpecialRequestClear @ 0x140AF465C
 * Callers:
 *     PopPowerRequestActionInfo @ 0x140AF441C (PopPowerRequestActionInfo.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PsReleaseProcessWakeCounter @ 0x14098F1E0 (PsReleaseProcessWakeCounter.c)
 */

__int64 __fastcall PopPowerRequestSpecialRequestClear(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v5; // edx
  unsigned int v6; // ebx
  __int64 v8; // rdx
  void *v9; // rbp
  __int64 v10; // rsi
  char v11; // r14
  void *v12; // rax

  if ( a2 && (v5 = a2 - 1) != 0 && (v8 = (unsigned int)(v5 - 1), (_DWORD)v8 == 1) && *(_BYTE *)(a1 + 152) )
  {
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0;
    PopAcquireRwLockExclusive(stru_140F12EA0.TracingPrivate, v8, a3, a4);
    v12 = *(void **)(a1 + 136);
    if ( v12 )
    {
      v10 = *(_QWORD *)(a1 + 144);
      v11 = 1;
      *(_QWORD *)(a1 + 144) = 0LL;
      v9 = v12;
      *(_QWORD *)(a1 + 136) = 0LL;
      v6 = 0;
    }
    else
    {
      v6 = -1073741811;
    }
    PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
    if ( v11 )
    {
      if ( v10 )
        PsReleaseProcessWakeCounter(v10);
      ObfDereferenceObjectWithTag(v9, 0x72506F50u);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
