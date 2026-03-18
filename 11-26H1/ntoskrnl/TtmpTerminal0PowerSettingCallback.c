/*
 * XREFs of TtmpTerminal0PowerSettingCallback @ 0x1407E7850
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1407EC504 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpAcquireSessionLock @ 0x140A3ACCC (TtmpAcquireSessionLock.c)
 */

__int64 __fastcall TtmpTerminal0PowerSettingCallback(
        LPCGUID SettingGuid,
        int *Value,
        ULONG ValueLength,
        _DWORD *Context)
{
  __int64 v8; // rax
  int v9; // ecx

  TtmpAcquireSessionLock();
  if ( ValueLength == 4 && *((_BYTE *)Context + 240) && (Context[1] & 4) == 0 )
  {
    v8 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 )
      v8 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4;
    v9 = *Value;
    if ( v8 )
      Context[67] = v9;
    else
      Context[66] = v9;
    TtmiTerminalSetDisplayTimeouts(
      Context,
      *((_QWORD *)Context + 4),
      (unsigned int)Context[66],
      (unsigned int)Context[67]);
  }
  ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
  KeLeaveCriticalRegion();
  return 0LL;
}
