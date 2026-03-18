/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x140424BA4
 * Callers:
 *     KeUnmaskInterrupt @ 0x140423A04 (KeUnmaskInterrupt.c)
 *     KeDisconnectInterrupt @ 0x140423CA0 (KeDisconnectInterrupt.c)
 *     KeConnectInterrupt @ 0x140424368 (KeConnectInterrupt.c)
 *     KeMaskInterrupt @ 0x140424930 (KeMaskInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( KiDpcCorralLock.WaitBlockFill6[88] && *a1 == 1 )
    return guard_dispatch_icall_no_overrides((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}
