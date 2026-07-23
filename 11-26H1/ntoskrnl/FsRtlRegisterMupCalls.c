/*
 * XREFs of FsRtlRegisterMupCalls @ 0x140790CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FsRtlRegisterMupCalls(__int64 a1)
{
  _InterlockedExchange64((volatile __int64 *)&ExpPlatformBinaryLock.WaitRegister.Flags, a1);
}
