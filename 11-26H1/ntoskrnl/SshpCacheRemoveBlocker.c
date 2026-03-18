/*
 * XREFs of SshpCacheRemoveBlocker @ 0x140AAD518
 * Callers:
 *     SleepstudyHelperDestroyLibrary @ 0x140614000 (SleepstudyHelperDestroyLibrary.c)
 *     SshpUnlinkBlockerFromLibrary @ 0x140AAD4BC (SshpUnlinkBlockerFromLibrary.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403B8A60 (RtlDeleteElementGenericTableAvl.c)
 */

BOOLEAN __fastcall SshpCacheRemoveBlocker(__int64 a1, __int64 a2)
{
  BOOLEAN result; // al
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_DWORD *)(a1 + 44) )
  {
    Buffer[1] = a2;
    Buffer[0] = 1LL;
    return RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 48), Buffer);
  }
  return result;
}
