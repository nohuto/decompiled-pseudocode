/*
 * XREFs of LdrpSendShimEngineInitialNotifications @ 0x1801196CC
 * Callers:
 *     LdrpLoadShimEngine @ 0x1800C3CD8 (LdrpLoadShimEngine.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x1801196CC (LdrpSendShimEngineInitialNotifications.c)
 *     LdrpPrepareModuleForExecution @ 0x18011AB50 (LdrpPrepareModuleForExecution.c)
 * Callees:
 *     LdrpSendShimEngineInitialNotifications @ 0x1801196CC (LdrpSendShimEngineInitialNotifications.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpSendShimEngineInitialNotifications(__int64 *a1, __int64 (__fastcall *a2)(__int64 *))
{
  __int64 result; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx
  __int64 *i; // rsi

  result = *a1;
  if ( (*(_DWORD *)(*a1 - 56) & 0x800) == 0 )
  {
    result = *a1;
    *(_BYTE *)(*a1 - 55) |= 8u;
    v5 = (_QWORD *)a1[5];
    if ( v5 )
    {
      v6 = (_QWORD *)a1[5];
      do
      {
        v6 = (_QWORD *)*v6;
        result = LdrpSendShimEngineInitialNotifications(v6[1], a2);
      }
      while ( v6 != v5 );
    }
    for ( i = (__int64 *)a1[1]; i != a1; i = (__int64 *)i[1] )
    {
      result = a2(i - 20);
      *((_BYTE *)i - 55) |= 8u;
    }
  }
  return result;
}
