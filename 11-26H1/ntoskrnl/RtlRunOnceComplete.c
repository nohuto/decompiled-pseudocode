/*
 * XREFs of RtlRunOnceComplete @ 0x1409D58C0
 * Callers:
 *     RtlRunOnceExecuteOnce @ 0x1409D46E0 (RtlRunOnceExecuteOnce.c)
 * Callees:
 *     KeAlertThreadByThreadId @ 0x1404F297C (KeAlertThreadByThreadId.c)
 */

NTSTATUS __stdcall RtlRunOnceComplete(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID Context)
{
  bool v4; // r9
  __int64 v5; // rdx
  unsigned __int64 Value; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // r8
  unsigned __int64 v10; // r8
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx

  v4 = ((Flags - 1) & Flags) == 0;
  if ( !v4 || (Flags & 0xFFFFFFF9) != 0 )
    return -1073741584;
  v5 = ~(unsigned __int8)(Flags >> 1) & 3;
  if ( Context && ((unsigned int)v5 < 2 || ((unsigned __int8)Context & 3) != 0) )
    return -1073741583;
  _m_prefetchw(RunOnce);
  Value = RunOnce->Value;
  v7 = Value & 3;
  v8 = (unsigned __int64)Context & 0xFFFFFFFFFFFFFFFCuLL | ((unsigned int)v5 >= 2 ? 2 : 0);
  if ( v7 != 1 )
  {
    if ( v7 != 3 )
      return -1073741823;
    if ( (v5 & 1) == 0 )
      return Value != _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, v8, Value) ? 0xC0000035 : 0;
    return -1073741584;
  }
  if ( (v5 & 1) == 0 )
    return -1073741584;
  v9 = _InterlockedExchange64((volatile __int64 *)RunOnce, v8);
  if ( (v9 & 3) != 1 )
    return -1073741734;
  v10 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v10 )
  {
    do
    {
      v12 = *(_QWORD *)v10;
      v13 = *(_QWORD *)(v10 + 24);
      _interlockedbittestandset((volatile signed __int32 *)(v10 + 36), 2u);
      KeAlertThreadByThreadId(v13, v5, (void *)v10, v4);
      v10 = v12;
    }
    while ( v12 );
  }
  return 0;
}
