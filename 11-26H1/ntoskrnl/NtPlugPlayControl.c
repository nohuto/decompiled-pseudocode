/*
 * XREFs of NtPlugPlayControl @ 0x1409672B0
 * Callers:
 *     DifNtPlugPlayControlWrapper @ 0x140683820 (DifNtPlugPlayControlWrapper.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1409675B8 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtPlugPlayControl(
        PLUGPLAY_CONTROL_CLASS PnPControlClass,
        PVOID PnPControlData,
        ULONG PnPControlDataLength)
{
  __int64 v5; // r14
  char PreviousMode; // di
  __int64 *v7; // rbx
  PVOID v8; // rsi
  NTSTATUS v9; // ebx
  int v11; // eax
  void *Pool2; // rax
  NTSTATUS v13; // r12d

  v5 = (unsigned int)PnPControlClass;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return -1073741727;
  if ( (unsigned int)v5 >= 0x18 )
    return -1073741585;
  v7 = &PlugPlayHandlerTable[3 * v5];
  if ( *(_DWORD *)v7 != (_DWORD)v5 )
    return -1073741595;
  if ( !v7 )
    return -1073741585;
  if ( !v7[1] )
    return -1073741822;
  if ( *((_DWORD *)v7 + 1) != PnPControlDataLength )
    return -1073741776;
  if ( PsIsCurrentThreadInServerSilo() && !*((_BYTE *)v7 + 16) )
    return -1073741727;
  if ( PreviousMode )
  {
    if ( PnPControlDataLength )
    {
      Pool2 = (void *)ExAllocatePool2(0x101uLL);
      v8 = Pool2;
      if ( !Pool2 )
        return -1073741670;
      v13 = PiControlCopyUserModeCallersBuffer(Pool2, PreviousMode, 1);
      if ( v13 < 0 )
      {
        ExFreePoolWithTag(v8, 0);
        return v13;
      }
    }
    else
    {
      v8 = 0LL;
    }
  }
  else
  {
    v8 = PnPControlData;
  }
  v9 = guard_dispatch_icall_no_overrides((unsigned int)v5, (__int64)v8);
  if ( (v9 & 0xC0000000) != 0xC0000000 || v9 == -1073741789 )
  {
    if ( PreviousMode )
    {
      if ( PnPControlDataLength )
      {
        if ( PnPControlData )
        {
          v11 = PiControlCopyUserModeCallersBuffer(PnPControlData, PreviousMode, 0);
          if ( v11 < 0 )
            v9 = v11;
        }
      }
    }
  }
  if ( v9 == -1073741738 )
    v9 = -1073741810;
  if ( PreviousMode )
  {
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  return v9;
}
