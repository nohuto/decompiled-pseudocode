/*
 * XREFs of MiPreUnlockWorkingSetShared @ 0x140532044
 * Callers:
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x1402053B0 (KeQueryPriorityThread.c)
 *     MiForcedTrim @ 0x1403C3240 (MiForcedTrim.c)
 */

__int64 __fastcall MiPreUnlockWorkingSetShared(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  unsigned int i; // ecx
  int v7; // ett
  signed __int32 v8; // ett
  int v9; // edx
  signed __int32 v10; // [rsp+40h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  result = *((unsigned int *)&CurrentThread[1].SwapListEntry + 2);
  if ( (result & 0x400000) == 0 )
  {
    if ( KeQueryPriorityThread(CurrentThread) >= 17 )
    {
      for ( i = 0; i < 2; ++i )
      {
        result = i;
        if ( CurrentThread == *(struct _KTHREAD **)(*(_QWORD *)(stru_140E2ED08.ThreadLock
                                                              + 8LL * *(unsigned __int16 *)(a1 + 174))
                                                  + 8LL * i
                                                  + 18304) )
          return result;
      }
    }
    result = *(unsigned int *)(a1 + 188);
    while ( (_WORD)result )
    {
      HIWORD(v10) = WORD1(result);
      LOWORD(v10) = result - 1;
      v7 = result;
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 188), v10, result);
      if ( v7 == (_DWORD)result )
      {
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
        MiForcedTrim(a1, a2);
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
        v8 = *(_DWORD *)(a1 + 188);
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 188), v8 - 0x10000, v8);
        if ( v8 != (_DWORD)result )
        {
          do
          {
            v9 = result;
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)(a1 + 188),
                                     result - 0x10000,
                                     result);
          }
          while ( (_DWORD)result != v9 );
        }
        return result;
      }
    }
  }
  return result;
}
