/*
 * XREFs of RtlConvertExclusiveToShared @ 0x18010B330
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     ZwReleaseSemaphore @ 0x18015F080 (ZwReleaseSemaphore.c)
 */

__int64 __fastcall RtlConvertExclusiveToShared(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 72) = 0LL;
  v3 = 0;
  _InterlockedExchange((volatile __int32 *)(a1 + 68), 1);
  result = *(unsigned int *)(a1 + 48);
  if ( (_DWORD)result )
  {
    v2 = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 48), 0);
    if ( (_DWORD)v2 )
    {
      result = ZwReleaseSemaphore(*(_QWORD *)(a1 + 40), v2, &v3);
      if ( (int)result < 0 )
        RtlRaiseStatus(result);
    }
  }
  return result;
}
