/*
 * XREFs of GrepIsPublicPFTSemaphoreOwnedByCurrentThread @ 0x14030F430
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x140008F8C (-GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z.c)
 */

_BOOL8 __fastcall GrepIsPublicPFTSemaphoreOwnedByCurrentThread(int a1, __int64 a2)
{
  struct _ERESOURCE *v2; // rcx

  v2 = *(struct _ERESOURCE **)(*(_QWORD *)(W32GetSessionState(a1, a2) + 96) + 20344LL);
  return v2 && GrepIsLockOwnedByCurrentThread(v2);
}
