/*
 * XREFs of RtlpOptimizeSRWLockList @ 0x1800156E0
 * Callers:
 *     RtlpQueueWaitBlockToSRWLock @ 0x180015B00 (RtlpQueueWaitBlockToSRWLock.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180035D70 (RtlpAcquireSRWLockSharedContended.c)
 * Callees:
 *     ZwAlertThreadByThreadIdEx @ 0x18015FC70 (ZwAlertThreadByThreadIdEx.c)
 */

__int64 __fastcall RtlpOptimizeSRWLockList(volatile signed __int64 *a1, signed __int64 a2)
{
  _QWORD *v3; // r8
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  bool v6; // zf
  __int64 result; // rax
  volatile signed __int64 *v8; // rdi
  _QWORD *v9; // r8
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  signed __int64 v13; // rax
  __int64 v14; // rbx

  while ( (a2 & 1) != 0 )
  {
    v3 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !*(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) )
    {
      do
      {
        v4 = v3;
        v3 = (_QWORD *)*v3;
        v3[2] = v4;
        v5 = v3[1];
      }
      while ( !v5 );
      if ( v3 != (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v5;
    }
    result = _InterlockedCompareExchange64(a1, a2 - 4, a2);
    v6 = a2 == result;
    a2 = result;
    if ( v6 )
      return result;
  }
  v8 = a1;
  while ( 1 )
  {
    while ( (a2 & 1) != 0 )
    {
      result = _InterlockedCompareExchange64(a1, a2 - 4, a2);
      v6 = a2 == result;
      a2 = result;
      if ( v6 )
        return result;
    }
    v9 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
    v10 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
    if ( !v10 )
    {
      do
      {
        v11 = v9;
        v9 = (_QWORD *)*v9;
        v9[2] = v11;
        v10 = v9[1];
      }
      while ( !v10 );
      if ( v9 != (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v10;
    }
    if ( (*(_DWORD *)(v10 + 36) & 1) != 0 )
    {
      v12 = *(_QWORD *)(v10 + 16);
      if ( v12 )
        break;
    }
    v8 = 0LL;
    v13 = _InterlockedCompareExchange64(a1, 0LL, a2);
    v6 = a2 == v13;
    a2 = v13;
    if ( v6 )
      goto LABEL_19;
  }
  *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v12;
  *(_QWORD *)(v10 + 16) = 0LL;
  _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
  do
  {
LABEL_19:
    v14 = *(_QWORD *)(v10 + 16);
    result = *(_QWORD *)(v10 + 24);
    _interlockedbittestandset((volatile signed __int32 *)(v10 + 36), 2u);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)(v10 + 36), 1u) )
      result = ZwAlertThreadByThreadIdEx(result, v8, v9);
    v10 = v14;
  }
  while ( v14 );
  return result;
}
