/*
 * XREFs of RtlReleaseResource @ 0x1800CC6B0
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x1800FDA40 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     ZwReleaseSemaphore @ 0x18015F080 (ZwReleaseSemaphore.c)
 */

__int64 __fastcall RtlReleaseResource(__int64 a1)
{
  __int64 result; // rax
  int v3; // ett
  int v4; // ett
  __int64 v5; // rdx
  int v6; // eax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 68);
  v7 = 0;
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1 )
      *(_QWORD *)(a1 + 72) = 0LL;
    if ( !_InterlockedIncrement((volatile signed __int32 *)(a1 + 68)) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v5 = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 48), 0);
        if ( (_DWORD)v5 )
        {
          v6 = ZwReleaseSemaphore(*(_QWORD *)(a1 + 40), v5, &v7);
          if ( v6 < 0 )
            RtlRaiseStatus(v6);
        }
      }
      result = *(unsigned int *)(a1 + 64);
      while ( (int)result > 0 )
      {
        v3 = result;
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), result - 1, result);
        if ( v3 == (_DWORD)result )
          goto LABEL_11;
      }
      if ( !(_DWORD)result )
        return result;
LABEL_11:
      result = ZwReleaseSemaphore(*(_QWORD *)(a1 + 56), 1LL, &v7);
      if ( (int)result < 0 )
        RtlRaiseStatus(result);
    }
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 68), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = *(unsigned int *)(a1 + 64);
      while ( (int)result > 0 )
      {
        v4 = result;
        result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), result - 1, result);
        if ( v4 == (_DWORD)result )
          goto LABEL_16;
      }
      if ( !(_DWORD)result )
        return result;
LABEL_16:
      result = ZwReleaseSemaphore(*(_QWORD *)(a1 + 56), 1LL, &v7);
      if ( (int)result < 0 )
        RtlRaiseStatus(result);
    }
  }
  return result;
}
