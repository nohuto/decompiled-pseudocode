/*
 * XREFs of PsEnumProcessThreads @ 0x14096F1F0
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14096EA90 (EtwpProcessEnumCallback.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KiFatalFilter @ 0x1405E50D0 (KiFatalFilter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PsGetNextProcessThread @ 0x1409573A0 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PsEnumProcessThreads(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rsi
  int v5; // edi
  _QWORD *v6; // rdx
  _QWORD *NextProcessThread; // rax
  void *v8; // rbx

  v4 = a1;
  v5 = 0;
  v6 = 0LL;
  while ( 1 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, v6, a3, a4);
    v8 = NextProcessThread;
    if ( !NextProcessThread )
      break;
    v5 = guard_dispatch_icall_no_overrides(v4, (__int64)NextProcessThread);
    if ( v5 < 0 )
    {
      ObfDereferenceObjectWithTag(v8, 0x6E457350u);
      return (unsigned int)v5;
    }
    v6 = v8;
    a1 = v4;
  }
  return (unsigned int)v5;
}
