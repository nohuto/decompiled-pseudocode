/*
 * XREFs of ?ivPreReceiveCallback@CBaseInput@@KAPEAXPEBX@Z @ 0x14021F7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14006EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 */

__int64 __fastcall CBaseInput::ivPreReceiveCallback(const void *a1, int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  void *v5; // rcx

  v3 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 48LL * (int)a1 + 3136);
  RIMLockShared(v3 + 152);
  v4 = 0LL;
  if ( v3 )
  {
    v5 = *(void **)(v3 + 16);
    if ( v5 )
    {
      if ( ObReferenceObjectByPointer(v5, 3u, ExRawInputManagerObjectType, 0) >= 0 )
        v4 = *(_QWORD *)(v3 + 16);
    }
  }
  CPushLock::ReleaseLock((CPushLock *)(v3 + 152));
  return v4;
}
