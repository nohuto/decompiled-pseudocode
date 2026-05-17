/*
 * XREFs of RtlpNotOwnerCriticalSection @ 0x18004A6E0
 * Callers:
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x1800476B0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 * Callees:
 *     DbgPrintEx @ 0x1800413D0 (DbgPrintEx.c)
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlDecodePointer @ 0x18004D5D0 (RtlDecodePointer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_PEB_LDR_DATA *__fastcall RtlpNotOwnerCriticalSection(const void **a1)
{
  _PEB_LDR_DATA *result; // rax
  struct _TEB *v2; // rdx
  __int64 WowTebOffset; // rax

  result = NtCurrentPeb()->Ldr;
  if ( !result->ShutdownInProgress
    || a1 == (const void **)&LdrpLoaderLock && result->ShutdownThreadId != NtCurrentTeb()->ClientId.UniqueThread )
  {
    if ( !UseWOW64 )
      goto LABEL_17;
    v2 = NtCurrentTeb();
    WowTebOffset = v2->WowTebOffset;
    if ( (_DWORD)WowTebOffset )
    {
      if ( (int)WowTebOffset >= 0 )
        v2 = (struct _TEB *)((char *)v2 + WowTebOffset);
    }
    else
    {
      v2 = 0LL;
    }
    result = (_PEB_LDR_DATA *)LODWORD(v2->NtTib.Self);
    if ( !HIDWORD(result->SsHandle) || !*(_BYTE *)(HIDWORD(result->SsHandle) + 0x28LL) )
    {
LABEL_17:
      if ( NtCurrentPeb()->BeingDebugged )
      {
        DbgPrintEx(
          101,
          0,
          "NTDLL: Calling thread (%p) not owner of CritSect: %p  Owner ThreadId: %p\n",
          NtCurrentTeb()->ClientId.UniqueThread,
          a1,
          a1[2]);
        __debugbreak();
      }
      RtlDecodePointer(RtlpUnhandledExceptionFilter);
      RtlRaiseStatus(3221226084LL);
    }
  }
  return result;
}
