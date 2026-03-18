/*
 * XREFs of Command_D0EntryPostInterruptsEnabled @ 0x1400342E4
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1400444D0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     Command_SendInternalCommandSynchronously @ 0x14003E5A4 (Command_SendInternalCommandSynchronously.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x14004F508 (Etw_ControllerFirmareVersionUpdate.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall Command_D0EntryPostInterruptsEnabled(__int64 a1, int a2)
{
  char *v2; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 Pool2; // rax
  int v8; // edx
  int v9; // r9d
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int16 v12; // ax
  __int16 v13; // cx
  _QWORD *v14; // r15
  bool v15; // zf
  __int64 (__fastcall **v16)(); // r14
  void *v17; // rcx
  unsigned int *v18; // rsi
  __int64 (__fastcall *v19)(); // rcx
  unsigned int v20; // eax

  v2 = 0LL;
  if ( a2 != 5 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v5 + 88);
  if ( (*(_DWORD *)(v6 + 108) & 0x100) != 0 )
  {
    Pool2 = ExAllocatePool2(64LL, 128LL, 1229146200LL);
    v2 = (char *)Pool2;
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v9 = 27;
      LOBYTE(v8) = 2;
LABEL_17:
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v8, 7, v9, (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
      return 0LL;
    }
    *(_QWORD *)Pool2 = a1;
    KeInitializeEvent((PRKEVENT)(Pool2 + 104), SynchronizationEvent, 0);
    *((_QWORD *)v2 + 7) = v2;
    *((_QWORD *)v2 + 6) = Command_GetSupportedExtendedCapabilityCommandCompletion;
    v10 = *((_DWORD *)v2 + 11) & 0xFFFF63FF;
    *((_QWORD *)v2 + 10) = 0LL;
    *((_QWORD *)v2 + 11) = 0LL;
    *((_DWORD *)v2 + 11) = v10 | 0x6000;
    *((_QWORD *)v2 + 12) = 0LL;
    Command_SendInternalCommandSynchronously(a1, v2);
    if ( (*(_BYTE *)(v6 + 112) & 1) != 0 )
      *(_DWORD *)(v5 + 1036) = 2;
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_WORD *)(v11 + 648);
  if ( v12 != 4147 && v12 != 6418 && v12 != 6945 && _stricmp((const char *)(v11 + 704), "NVDA") )
    goto LABEL_28;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 728LL) = -1LL;
  if ( !v2 )
  {
    v2 = (char *)ExAllocatePool2(64LL, 128LL, 1229146200LL);
    if ( !v2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v9 = 28;
      LOBYTE(v8) = 3;
      goto LABEL_17;
    }
  }
  v13 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 648LL);
  if ( v13 == 4147 || v13 == 6418 )
  {
    memset(v2 + 8, 0, 0x78uLL);
    *(_QWORD *)v2 = a1;
    KeInitializeEvent((PRKEVENT)(v2 + 104), SynchronizationEvent, 0);
    v19 = Command_RenesasGetFirmwareVersionCommandCompletion;
    v18 = (unsigned int *)(v2 + 44);
    v16 = (__int64 (__fastcall **)())(v2 + 48);
    v14 = v2 + 56;
    goto LABEL_25;
  }
  v14 = v2 + 56;
  v15 = v13 == 6945;
  v16 = (__int64 (__fastcall **)())(v2 + 48);
  v17 = v2 + 8;
  v18 = (unsigned int *)(v2 + 44);
  if ( !v15 )
  {
    memset(v17, 0, 0x78uLL);
    *(_QWORD *)v2 = a1;
    KeInitializeEvent((PRKEVENT)(v2 + 104), SynchronizationEvent, 0);
    v19 = Command_NvidiaGetFirmwareVersionCommandCompletion;
LABEL_25:
    v20 = *v18 & 0xFFFF03FF | 0xC400;
LABEL_26:
    *v14 = v2;
    *v16 = v19;
    *v18 = v20;
    Command_SendInternalCommandSynchronously(a1, v2);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 728LL) != -1LL )
      Etw_ControllerFirmareVersionUpdate();
    goto LABEL_28;
  }
  memset(v17, 0, 0x78uLL);
  *(_QWORD *)v2 = a1;
  KeInitializeEvent((PRKEVENT)(v2 + 104), SynchronizationEvent, 0);
  *v14 = v2;
  *v16 = Command_ASMediaGetFirmwareVersionLowCommandCompletion;
  *v18 = *v18 & 0xFFFF03FF | 0xD000;
  Command_SendInternalCommandSynchronously(a1, v2);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 728LL) != -1LL )
  {
    memset(v2 + 8, 0, 0x78uLL);
    *(_QWORD *)v2 = a1;
    KeInitializeEvent((PRKEVENT)(v2 + 104), SynchronizationEvent, 0);
    v19 = Command_ASMediaGetFirmwareVersionHighCommandCompletion;
    v20 = *v18 & 0xFFFF03FF | 0xCC00;
    goto LABEL_26;
  }
LABEL_28:
  if ( v2 )
    ExFreePoolWithTag(v2, 0x49434858u);
  return 0LL;
}
