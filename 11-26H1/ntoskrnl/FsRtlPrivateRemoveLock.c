/*
 * XREFs of FsRtlPrivateRemoveLock @ 0x140510F2C
 * Callers:
 *     FsRtlPrivateCheckWaitingLocks @ 0x14030A7AC (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlPrivateLock @ 0x14030AE50 (FsRtlPrivateLock.c)
 * Callees:
 *     FsRtlFastUnlockSingleShared @ 0x14030A210 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x14030C590 (FsRtlFastUnlockSingleExclusive.c)
 */

__int64 __fastcall FsRtlPrivateRemoveLock(_QWORD *a1, __int64 a2, char a3)
{
  unsigned int v3; // eax
  _RTL_SPLAY_LINKS **v4; // r9
  _RTL_SPLAY_LINKS *v5; // r10
  bool v6; // zf
  _RTL_SPLAY_LINKS *v8; // rdx

  v3 = *(_DWORD *)(a2 + 20);
  v4 = (_RTL_SPLAY_LINKS **)(a2 + 8);
  v5 = *(_RTL_SPLAY_LINKS **)(a2 + 32);
  v6 = *(_BYTE *)(a2 + 16) == 0;
  v8 = *(_RTL_SPLAY_LINKS **)(a2 + 24);
  if ( v6 )
    return FsRtlFastUnlockSingleShared(a1, v8, (_RTL_SPLAY_LINKS **)a2, v4, v5, v3, 0LL, 1, a3);
  else
    return FsRtlFastUnlockSingleExclusive(a1, v8, (_RTL_SPLAY_LINKS **)a2, v4, v5, v3, 0LL, 1, a3);
}
