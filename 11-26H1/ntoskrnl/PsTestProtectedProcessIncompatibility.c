/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x140947588
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x1409465C8 (DbgkCopyProcessDebugPort.c)
 *     PspThreadOpen @ 0x1409474A0 (PspThreadOpen.c)
 *     NtDebugActiveProcess @ 0x140947620 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140947870 (NtRemoveProcessDebug.c)
 *     DbgkOpenProcessDebugPort @ 0x140948E50 (DbgkOpenProcessDebugPort.c)
 *     DbgkpSendErrorMessage @ 0x140B5CE74 (DbgkpSendErrorMessage.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
  if ( SepRmCapTableLock.WpsFeedback )
    return (unsigned __int8)guard_dispatch_icall_no_overrides(a2, a3) == 0;
  return 1;
}
