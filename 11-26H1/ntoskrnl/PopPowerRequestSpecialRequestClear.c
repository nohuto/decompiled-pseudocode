/*
 * XREFs of PopPowerRequestSpecialRequestClear @ 0x140AF1D8C
 * Callers:
 *     PopPowerRequestActionInfo @ 0x140AF1B4C (PopPowerRequestActionInfo.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PsReleaseProcessWakeCounter @ 0x1409BE200 (PsReleaseProcessWakeCounter.c)
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
    PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20, v8, a3, a4);
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
    PopReleaseRwLock(&stru_140F12D20);
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
