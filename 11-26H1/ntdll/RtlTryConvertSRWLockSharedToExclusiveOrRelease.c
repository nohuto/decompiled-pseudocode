/*
 * XREFs of RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x18013DE00
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlAbPostRelease @ 0x180067EA0 (RtlAbPostRelease.c)
 */

char __fastcall RtlTryConvertSRWLockSharedToExclusiveOrRelease(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  signed __int64 v3; // rtt
  _QWORD *i; // rax
  __int64 v5; // rcx

  v1 = *a1;
  if ( (*a1 & 1) == 0 )
    RtlRaiseStatus(-1073741212);
  while ( (v1 & 2) == 0 )
  {
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1, v1 - 16, v1);
    if ( v3 == v1 )
    {
      if ( (v1 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
      {
LABEL_12:
        RtlAbPostRelease((__int64)a1, 0LL);
        return 0;
      }
      return 1;
    }
  }
  if ( (v1 & 8) != 0 )
  {
    for ( i = (_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0uLL); ; i = (_QWORD *)*i )
    {
      v5 = i[1];
      if ( v5 )
        break;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 32), 0xFFFFFFFF) > 1 )
      goto LABEL_12;
    _InterlockedAdd64(a1, 0xFFFFFFFFFFFFFFF8uLL);
  }
  return 1;
}
