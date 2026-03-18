/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x140985588
 * Callers:
 *     DbgkpSendErrorMessage @ 0x140954DF4 (DbgkpSendErrorMessage.c)
 *     DbgkCopyProcessDebugPort @ 0x1409845B8 (DbgkCopyProcessDebugPort.c)
 *     PspThreadOpen @ 0x1409854A0 (PspThreadOpen.c)
 *     NtDebugActiveProcess @ 0x140985620 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140985870 (NtRemoveProcessDebug.c)
 *     DbgkOpenProcessDebugPort @ 0x140987150 (DbgkOpenProcessDebugPort.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

bool __fastcall PsTestProtectedProcessIncompatibility(char a1, __int64 a2, __int64 a3)
{
  int v4; // eax

  if ( a2 == a3 )
    return 0;
  if ( !a1 )
    return 0;
  if ( (*(_BYTE *)(a3 + 1530) & 7) == 0 )
    return 0;
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 1530) & 7) >= (unsigned __int8)(*(_BYTE *)(a3 + 1530) & 7) )
  {
    v4 = *((_DWORD *)&RtlProtectedAccess + 3 * ((unsigned __int64)*(unsigned __int8 *)(a2 + 1530) >> 4));
    if ( _bittest(&v4, *(_BYTE *)(a3 + 1530) >> 4) )
      return 0;
  }
  if ( SepRmCapTableLock.KernelShadowStackInitial )
    return (unsigned __int8)guard_dispatch_icall_no_overrides(a2, a3) == 0;
  return 1;
}
