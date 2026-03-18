/*
 * XREFs of SshpUnlinkBlockerFromLibrary @ 0x140AAD4BC
 * Callers:
 *     SshpDereferenceBlocker @ 0x14049BA90 (SshpDereferenceBlocker.c)
 *     SshpPurgeBlockersWorker @ 0x140AAD230 (SshpPurgeBlockersWorker.c)
 * Callees:
 *     SshpCacheRemoveBlocker @ 0x140AAD518 (SshpCacheRemoveBlocker.c)
 */

_QWORD *__fastcall SshpUnlinkBlockerFromLibrary(__int64 a1)
{
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *result; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 304) + 32LL);
  --*(_DWORD *)(v3 + 40);
  _InterlockedDecrement64(&SshpGlobalBlockerCount);
  SshpCacheRemoveBlocker(v3, a1);
  v4 = *(_QWORD **)(a1 + 304);
  v5 = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (result = (_QWORD *)v4[1], (_QWORD *)*result != v4) )
    __fastfail(3u);
  *result = v5;
  *(_QWORD *)(v5 + 8) = result;
  return result;
}
