/*
 * XREFs of ?ivPreReceiveCallback@CBaseInput@@KAPEAXPEBX@Z @ 0x14021AF60
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall CBaseInput::ivPreReceiveCallback(const void *a1, __int64 a2)
{
  __int64 v2; // rdi
  CPushLock *v3; // rbx
  void *v4; // rcx
  __int64 v5; // rdi

  v2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 48LL * (int)a1 + 3136);
  v3 = (CPushLock *)(v2 + 152);
  RIMLockShared(v2 + 152);
  if ( v2
    && (v4 = *(void **)(v2 + 16)) != 0LL
    && ObReferenceObjectByPointer(v4, 3u, ExRawInputManagerObjectType, 0) >= 0 )
  {
    v5 = *(_QWORD *)(v2 + 16);
  }
  else
  {
    v5 = 0LL;
  }
  CPushLock::ReleaseLock(v3);
  return v5;
}
