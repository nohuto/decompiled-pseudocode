/*
 * XREFs of RtlpHpSegTlsCleanup @ 0x180064560
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpLfhContextTlsCleanup @ 0x1800645D0 (RtlpHpLfhContextTlsCleanup.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x180121080 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 */

__int64 __fastcall RtlpHpSegTlsCleanup(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // r8

  v2 = *(_QWORD *)(a1 + 56);
  v5 = v2 + 20;
  __writegsqword(0x250u, v2 + 20);
  v6 = *(unsigned int *)(v2 + 20);
  if ( (v6 & 0x10) != 0 )
  {
    v8 = *(unsigned int *)(v2 + 224);
    if ( (_DWORD)v8 != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
      RtlpHpEnvAcquireGlobalLockSharedContended(v5, v6, v8);
  }
  result = RtlpHpLfhContextTlsCleanup(*(_QWORD *)(a1 + 24), a2);
  __writegsqword(0x250u, 0LL);
  return result;
}
