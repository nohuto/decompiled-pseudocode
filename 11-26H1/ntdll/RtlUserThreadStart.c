/*
 * XREFs of RtlUserThreadStart @ 0x180086920
 * Callers:
 *     <none>
 * Callees:
 *     RtlDecodePointer @ 0x18004D5D0 (RtlDecodePointer.c)
 *     RtlExitUserThread @ 0x180086970 (RtlExitUserThread.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18011F2F0 (RtlUnhandledExceptionFilter2.c)
 *     ZwTerminateProcess @ 0x18015F4C0 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlUserThreadStart(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax

  if ( Kernel32ThreadInitThunkFunction )
    return Kernel32ThreadInitThunkFunction(0LL, a1, a2, a1);
  v3 = a1(a2);
  v4 = RtlExitUserThread(v3);
  return ZwTerminateProcess(-1LL, v4);
}
