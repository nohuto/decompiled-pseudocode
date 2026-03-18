/*
 * XREFs of _RegisterRawInputDevices @ 0x14011DA34
 * Callers:
 *     NtUserRegisterRawInputDevices @ 0x14011D7A0 (NtUserRegisterRawInputDevices.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1402751CC (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x140275284 (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?UnregisterRawInputDevice@RawInput@InputTraceLogging@@SAXPEBUtagRAWINPUTDEVICE@@@Z @ 0x14011C414 (-UnregisterRawInputDevice@RawInput@InputTraceLogging@@SAXPEBUtagRAWINPUTDEVICE@@@Z.c)
 *     ?RegisterRawInputDevice@RawInput@InputTraceLogging@@SAXPEBUtagRAWINPUTDEVICE@@@Z @ 0x14011D1D8 (-RegisterRawInputDevice@RawInput@InputTraceLogging@@SAXPEBUtagRAWINPUTDEVICE@@@Z.c)
 *     AllocateProcessHidTable @ 0x14011D524 (AllocateProcessHidTable.c)
 *     ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x14011DBDC (-HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_IN.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x14011DEE0 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?RawInputListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@@Z @ 0x14011E084 (-RawInputListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@@Z.c)
 *     ?HidDeviceStartStop@@YAXXZ @ 0x14011E4F0 (-HidDeviceStartStop@@YAXXZ.c)
 *     ?FixupOrphanedExclusiveRequests@@YAXPEAUtagPROCESSINFO@@@Z @ 0x14011E520 (-FixupOrphanedExclusiveRequests@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x14011E5B0 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x14011EAD8 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     FreeHidProcessRequest @ 0x14011EB54 (FreeHidProcessRequest.c)
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x14011EC20 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 */

__int64 __fastcall RegisterRawInputDevices(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // r9
  const struct tagPROCESS_HID_TABLE **v8; // rbx
  const struct tagPROCESS_HID_TABLE *v9; // rax
  unsigned int v10; // esi
  unsigned int v11; // edi
  const struct tagPROCESS_HID_TABLE *v12; // rdx
  unsigned int i; // esi
  __int64 v14; // r14
  struct tagPROCESS_HID_REQUEST *v15; // rax
  __int64 ProcessHidTable; // rax
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+78h] [rbp+10h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v8 = (const struct tagPROCESS_HID_TABLE **)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v7 = -*(_QWORD *)CurrentProcessWin32Process;
    v8 = (const struct tagPROCESS_HID_TABLE **)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  }
  v9 = v8[103];
  if ( v9 )
  {
    *((_QWORD *)v9 + 11) = 0LL;
    *((_DWORD *)v9 + 24) = 0;
  }
  v10 = 0;
  v11 = 1;
  while ( v10 < a2 )
  {
    v12 = v8[103];
    v18 = *(_OWORD *)(a1 + 16LL * v10);
    if ( !(unsigned int)HidRequestValidityCheck(&v18, v12, a3, v7) )
      goto LABEL_14;
    ++v10;
  }
  if ( !v8[103] )
  {
    ProcessHidTable = AllocateProcessHidTable();
    v8[103] = (const struct tagPROCESS_HID_TABLE *)ProcessHidTable;
    if ( !ProcessHidTable )
    {
      UserSetLastError(8);
LABEL_14:
      v11 = 0;
      goto LABEL_15;
    }
    *(_QWORD *)(ProcessHidTable + 104) = v8;
  }
  for ( i = 0; i < a2; ++i )
  {
    v14 = a1 + 16LL * i;
    v19 = 0;
    v15 = SearchProcessHidRequest((struct tagPROCESSINFO *)v8, *(_WORD *)v14, *(_WORD *)(v14 + 2), &v19);
    if ( (*(_DWORD *)(v14 + 4) & 1) != 0 )
    {
      if ( v15 )
      {
        FreeHidProcessRequest(v15);
        InputTraceLogging::RawInput::UnregisterRawInputDevice((const struct tagRAWINPUTDEVICE *)v14);
      }
    }
    else
    {
      if ( !(unsigned int)SetProcDeviceRequest(v8, v14, v15, v19, a3) )
        goto LABEL_14;
      InputTraceLogging::RawInput::RegisterRawInputDevice((const struct tagRAWINPUTDEVICE *)v14);
    }
  }
LABEL_15:
  if ( v8[103] )
  {
    AdjustLegacyDeviceFlags((struct tagPROCESSINFO *)v8);
    FixupOrphanedExclusiveRequests((struct tagPROCESSINFO *)v8);
    CleanupFreedTLCInfo();
    HidDeviceStartStop();
    InputTraceLogging::RawInput::RawInputListener(v8[103]);
  }
  return v11;
}
