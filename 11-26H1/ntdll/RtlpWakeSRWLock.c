/*
 * XREFs of RtlpWakeSRWLock @ 0x1800C6730
 * Callers:
 *     RtlConvertSRWLockExclusiveToShared @ 0x18013DDB0 (RtlConvertSRWLockExclusiveToShared.c)
 * Callees:
 *     ZwAlertThreadByThreadIdEx @ 0x18015FC70 (ZwAlertThreadByThreadIdEx.c)
 */

__int64 __fastcall RtlpWakeSRWLock(volatile signed __int64 *a1, signed __int64 a2, char a3)
{
  volatile signed __int64 *v5; // rdi
  unsigned __int64 v6; // r8
  _QWORD *v7; // r9
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 result; // rax
  __int64 v11; // rax
  bool v12; // zf
  signed __int64 v13; // rax
  __int64 v14; // rbx

  v5 = a1;
  while ( 1 )
  {
    if ( !a3 )
    {
      while ( (a2 & 1) != 0 )
      {
        result = _InterlockedCompareExchange64(a1, a2 - 4, a2);
        v12 = a2 == result;
        a2 = result;
        if ( v12 )
          return result;
      }
    }
    v6 = a2 & 0xFFFFFFFFFFFFFFF0uLL;
    v7 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
    v8 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
    if ( !v8 )
    {
      do
      {
        v9 = v7;
        v7 = (_QWORD *)*v7;
        v7[2] = v9;
        v8 = v7[1];
      }
      while ( !v8 );
      if ( v7 != (_QWORD *)v6 )
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v8;
    }
    result = *(unsigned int *)(v8 + 36);
    if ( (result & 1) != 0 )
    {
      if ( a3 )
      {
        _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
        return result;
      }
      v11 = *(_QWORD *)(v8 + 16);
      if ( v11 )
        break;
    }
    v5 = 0LL;
    v6 = a3 != 0 ? 0x11 : 0;
    v13 = _InterlockedCompareExchange64(a1, v6, a2);
    v12 = a2 == v13;
    a2 = v13;
    if ( v12 )
      goto LABEL_16;
  }
  *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v11;
  *(_QWORD *)(v8 + 16) = 0LL;
  _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
  do
  {
LABEL_16:
    v14 = *(_QWORD *)(v8 + 16);
    result = *(_QWORD *)(v8 + 24);
    _interlockedbittestandset((volatile signed __int32 *)(v8 + 36), 2u);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)(v8 + 36), 1u) )
      result = ZwAlertThreadByThreadIdEx(result, v5, v6);
    v8 = v14;
  }
  while ( v14 );
  return result;
}
