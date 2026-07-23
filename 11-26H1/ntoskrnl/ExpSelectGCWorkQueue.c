/*
 * XREFs of ExpSelectGCWorkQueue @ 0x140522408
 * Callers:
 *     ExpHpGCTimerCallback @ 0x1404EA110 (ExpHpGCTimerCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSelectGCWorkQueue(int a1)
{
  unsigned int v1; // r10d
  unsigned __int64 v2; // r8
  __int64 v3; // rax
  unsigned int v4; // ecx

  v1 = 4;
  if ( (unsigned __int64)(100LL * *(_QWORD *)(*(_QWORD *)stru_140E2ED08.ThreadLock + 23168LL))
     / *(_QWORD *)(*(_QWORD *)stru_140E2ED08.ThreadLock + 23448LL) >= 0x55 )
    return 3;
  v2 = *(_QWORD *)(*(_QWORD *)stru_140E2ED08.ThreadLock + 22288LL);
  if ( 100LL * *(_QWORD *)(*(_QWORD *)stru_140E2ED08.ThreadLock + 22464LL) / v2 <= 0xF )
  {
    return 3;
  }
  else if ( a1 == 1 )
  {
    v3 = 0LL;
    v4 = 4;
    if ( *(__int64 *)(*(_QWORD *)stru_140E2ED08.ThreadLock + 22528LL) >= 0 )
      v3 = *(_QWORD *)(*(_QWORD *)stru_140E2ED08.ThreadLock + 22528LL);
    if ( 100 * v3 / v2 <= 0xF )
      return 3;
    return v4;
  }
  return v1;
}
