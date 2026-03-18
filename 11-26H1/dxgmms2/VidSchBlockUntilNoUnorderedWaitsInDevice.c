/*
 * XREFs of VidSchBlockUntilNoUnorderedWaitsInDevice @ 0x1401189B0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x140035C50 (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400EA1E8 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400EA5D8 (VidSchRegisterCompletionEvent.c)
 */

__int64 __fastcall VidSchBlockUntilNoUnorderedWaitsInDevice(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v4; // rbx
  _QWORD v5[21]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = a1 + 1852;
  result = *(unsigned int *)(a1 + 1852);
  if ( (_DWORD)result )
  {
    memset(v5, 0, 0xA0uLL);
    LODWORD(v5[4]) |= 0x10u;
    v5[5] = v1;
    v4 = *(_QWORD *)(a1 + 40);
    LODWORD(v5[2]) = 1;
    VidSchRegisterCompletionEvent(v4, (__int64)v5);
    if ( *(_DWORD *)(a1 + 1852) )
      VidSchWaitForCompletionEvent(v4, (__int64)v5, 49LL);
    return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v4 + 2032), v5, 0LL);
  }
  return result;
}
