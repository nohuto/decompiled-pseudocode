/*
 * XREFs of sub_1400A6658 @ 0x1400A6658
 * Callers:
 *     sub_14000B424 @ 0x14000B424 (sub_14000B424.c)
 * Callees:
 *     sub_140055EE0 @ 0x140055EE0 (sub_140055EE0.c)
 *     sub_1400A6778 @ 0x1400A6778 (sub_1400A6778.c)
 */

__int64 __fastcall sub_1400A6658(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 i; // rsi
  unsigned int v9; // eax
  _DWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = sub_140055EE0(v3);
  v6 = result;
  if ( (_DWORD)result )
  {
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 48) + 992LL), 1, 0);
    if ( !(_DWORD)result )
    {
      v7 = *(_QWORD *)(a1 + 48);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v7 + 968); i = (unsigned int)(i + 1) )
      {
        v9 = 0;
        v10 = (_DWORD *)(a1 + 320 * i);
        if ( a2 <= v10[48] )
          v9 = v10[48] - a2;
        v10[8] = v9;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 320 * i), &LockHandle);
        v10[10] = 1850304845;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v7 = *(_QWORD *)(a1 + 48);
      }
      *(_DWORD *)(v7 + 984) = a2 < v6 ? v6 - a2 : 0;
      _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 48) + 992LL), 2, 1);
      result = sub_140055EE0(*(_QWORD *)(a1 + 48));
      if ( !(_DWORD)result )
        return sub_1400A6778(*(_QWORD *)(a1 + 48), v11, v12);
    }
  }
  return result;
}
