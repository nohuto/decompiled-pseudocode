/*
 * XREFs of LdrpGenericExceptionFilter @ 0x18015B768
 * Callers:
 *     LdrUnlockLoaderLock @ 0x18002B040 (LdrUnlockLoaderLock.c)
 *     LdrpAllocateTls @ 0x18007F910 (LdrpAllocateTls.c)
 *     LdrpHandleTlsData @ 0x1800801B0 (LdrpHandleTlsData.c)
 *     LdrpAllocateTlsEntry @ 0x180081D90 (LdrpAllocateTlsEntry.c)
 *     LdrpProtectedCopyMemory @ 0x1800C9F20 (LdrpProtectedCopyMemory.c)
 *     LdrpTouchThreadStack @ 0x1800CED2C (LdrpTouchThreadStack.c)
 *     LdrpProtectAndRelocateImage @ 0x1800D8074 (LdrpProtectAndRelocateImage.c)
 *     LdrLockLoaderLock @ 0x1800E67E0 (LdrLockLoaderLock.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010CE10 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpSnapModule @ 0x18011B530 (LdrpSnapModule.c)
 * Callees:
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800CE290 (LdrpLogFatalLdrEtwEvent.c)
 *     DbgPrompt @ 0x18013B9E0 (DbgPrompt.c)
 *     ZwTerminateProcess @ 0x18015F4C0 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x18015F9A0 (NtTerminateThread.c)
 */

__int64 __fastcall LdrpGenericExceptionFilter(const void **a1, const char *a2)
{
  unsigned int v3; // edi
  bool v4; // zf
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  char v9; // [rsp+60h] [rbp+8h]

  v3 = *(_DWORD *)*a1;
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrutil.c",
    564,
    (__int64)"LdrpGenericExceptionFilter",
    0,
    "Function %s raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
    a2,
    v3,
    *a1,
    a1[1]);
  if ( (LdrpDebugFlags & 0x30) == 0x20 )
  {
    while ( 1 )
    {
      DbgPrint("\n***Exception thrown within loader***\n");
      DbgPrompt((__int64)"Break repeatedly, break Once, Ignore, terminate Process or terminate Thread (boipt)? ");
      if ( v9 > 98 )
      {
        v5 = v9 - 105;
        v4 = v9 == 105;
      }
      else
      {
        if ( v9 == 98 || v9 == 66 )
          goto LABEL_13;
        v5 = v9 - 73;
        v4 = v9 == 73;
      }
      if ( v4 )
        return 1LL;
      v6 = v5 - 6;
      if ( !v6 )
      {
LABEL_13:
        DbgPrint("Execute '.cxr %p' to dump context\n", a1[1]);
        __debugbreak();
      }
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 4 )
        {
          LdrpLogFatalLdrEtwEvent(
            &NtCurrentPeb()->ProcessParameters->ImagePathName.Length,
            (__int64)&LoaderFatalErrorThread);
          NtTerminateThread(-2LL, v3);
        }
      }
      else
      {
        LdrpLogFatalLdrEtwEvent(
          &NtCurrentPeb()->ProcessParameters->ImagePathName.Length,
          (__int64)&LoaderFatalErrorProc);
        ZwTerminateProcess(-1LL, v3);
      }
    }
  }
  return 1LL;
}
