/*
 * XREFs of PsEnumProcessThreads @ 0x1409BC840
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1409BC0E0 (EtwpProcessEnumCallback.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KiFatalFilter @ 0x1405E7A40 (KiFatalFilter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PsGetNextProcessThread @ 0x14094ADD0 (PsGetNextProcessThread.c)
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
