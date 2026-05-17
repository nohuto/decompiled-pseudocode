/*
 * XREFs of LdrpInitializeInternal @ 0x1800CEA78
 * Callers:
 *     LdrpInitialize @ 0x1800CE998 (LdrpInitialize.c)
 * Callees:
 *     LdrpLoadPatchedNtdll @ 0x1800CDADC (LdrpLoadPatchedNtdll.c)
 *     LdrpInitializeHotPatching @ 0x1800CE894 (LdrpInitializeHotPatching.c)
 *     LdrpWaitForInitializationComplete @ 0x1800CEB74 (LdrpWaitForInitializationComplete.c)
 *     LdrpInitializationComplete @ 0x1800CEC50 (LdrpInitializationComplete.c)
 *     _LdrpInitialize @ 0x1800CEF48 (_LdrpInitialize.c)
 *     ZwCreateEvent @ 0x18015F840 (ZwCreateEvent.c)
 */

struct _TEB *__fastcall LdrpInitializeInternal(__int64 a1, __int64 a2)
{
  struct _TEB *result; // rax
  signed __int32 v5; // eax
  signed __int32 v6; // ebx
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  result = NtCurrentTeb();
  if ( (result->SameTebFlags & 0x4000) == 0 )
  {
    v5 = _InterlockedCompareExchange(&LdrpHotPatchInitialized, 1, 0);
    v6 = v5;
    if ( v5 )
    {
      if ( v5 == 1 )
        LdrpWaitForInitializationComplete(&LdrpHotPatchInitialized, &LdrpHotPatchInitCompleteEvent);
    }
    else
    {
      ZwCreateEvent(&LdrpHotPatchInitCompleteEvent, 2031619LL, 0LL, 0LL, 0);
      LdrpInitializeHotPatching();
      LdrpNtdllHotPatchContext = (__int64)&v7;
      if ( LdrpIsHotPatchingEnabled )
        DWORD2(v7) = LdrpLoadPatchedNtdll(a2, (__int64 *)&v7);
      LdrpInitializationComplete(&LdrpHotPatchInitialized, &LdrpHotPatchInitCompleteEvent, 5256LL);
    }
    result = (struct _TEB *)LdrpInitialize(a1, a2);
    if ( !v6 )
      LdrpNtdllHotPatchContext = 0LL;
  }
  return result;
}
