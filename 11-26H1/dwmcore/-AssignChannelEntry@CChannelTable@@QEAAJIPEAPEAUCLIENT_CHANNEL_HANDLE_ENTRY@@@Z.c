/*
 * XREFs of ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x180153DFC
 * Callers:
 *     ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z @ 0x180153B44 (-CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x180116A94 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x180155640 (-AssignEntry@HANDLE_TABLE@@QEAAJIK@Z.c)
 */

__int64 __fastcall CChannelTable::AssignChannelEntry(
        CChannelTable *this,
        unsigned int a2,
        struct CLIENT_CHANNEL_HANDLE_ENTRY **a3)
{
  int MasterTableEntry; // eax
  unsigned int v7; // ebx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v8; // rsi
  HANDLE EventW; // rax
  int v11; // r9d
  signed int LastError; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  MasterTableEntry = HANDLE_TABLE::AssignEntry(this, a2, 1u);
  v7 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    v13 = 69;
LABEL_7:
    v11 = MasterTableEntry;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v13, 0LL);
    return v7;
  }
  MasterTableEntry = CChannelTable::GetMasterTableEntry(this, a2, &v14);
  v7 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    v13 = 71;
    goto LABEL_7;
  }
  v8 = v14;
  *((_QWORD *)v14 + 1) = 0LL;
  SetLastError(0);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)v8 + 2) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v7 = LastError;
    if ( LastError > 0 )
      v7 = (unsigned __int16)LastError | 0x80070000;
    v13 = 74;
    if ( (v7 & 0x80000000) == 0 )
      v7 = -2003304445;
    v11 = v7;
    goto LABEL_8;
  }
  ++*((_DWORD *)this + 8);
  *a3 = v8;
  return v7;
}
