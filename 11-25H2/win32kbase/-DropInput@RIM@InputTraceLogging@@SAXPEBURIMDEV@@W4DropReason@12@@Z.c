/*
 * XREFs of ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400D74EC
 * Callers:
 *     rimObsDeliverToExclusiveObservers @ 0x140034480 (rimObsDeliverToExclusiveObservers.c)
 *     rimSignalReadComplete @ 0x140035980 (rimSignalReadComplete.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1400D6900 (RIMProcessAnyPointerDeviceInput.c)
 *     rimStackAttachAndProcessInput @ 0x1400E69D8 (rimStackAttachAndProcessInput.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMQueueKeyboardInput @ 0x1401EA96C (RIMQueueKeyboardInput.c)
 *     RIMQueueMouseInput @ 0x1401EAB30 (RIMQueueMouseInput.c)
 *     rimProcessHidInput @ 0x1401F11FC (rimProcessHidInput.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1401F1380 (rimProcessInjectedDeviceBuffers.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@RIM@1@@Z @ 0x1400D7624 (-DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@RIM@1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1400D78AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

char __fastcall InputTraceLogging::RIM::DropInput(__int64 a1, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // r9d
  void *v7; // rdx
  unsigned int v8; // r9d
  unsigned int v9; // r9d
  __int64 v11; // [rsp+40h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  if ( !v2 )
  {
    if ( (unsigned int)dword_14029EE20 > 4 )
    {
      LOBYTE(v2) = tlgKeywordOn((__int64)&dword_14029EE20, 256LL);
      if ( (_BYTE)v2 )
      {
        v4 = InputTraceLogging::DropReasonToString(v9);
        v7 = &unk_14027B459;
        goto LABEL_16;
      }
    }
    return v2;
  }
  if ( v2 != 2 )
  {
    if ( v2 != 1 )
      return v2;
    if ( (unsigned int)dword_14029EE20 <= 4 )
      return v2;
    LOBYTE(v2) = tlgKeywordOn((__int64)&dword_14029EE20, 256LL);
    if ( !(_BYTE)v2 )
      return v2;
    v4 = InputTraceLogging::DropReasonToString(v8);
    v7 = &unk_14027B48D;
LABEL_16:
    v11 = v4;
    v12 = v5;
    LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
                   (unsigned int)&dword_14029EE20,
                   (_DWORD)v7,
                   v5,
                   v6,
                   (__int64)&v12,
                   (__int64)&v11);
    return v2;
  }
  v2 = *(_DWORD *)(a1 + 184);
  if ( (v2 & 0x80u) == 0 )
  {
    if ( (unsigned int)dword_14029EE20 <= 4 )
      return v2;
    LOBYTE(v2) = tlgKeywordOn((__int64)&dword_14029EE20, 256LL);
    if ( !(_BYTE)v2 )
      return v2;
    v4 = InputTraceLogging::DropReasonToString(v3);
    v7 = &unk_14027B4C4;
    goto LABEL_16;
  }
  if ( (unsigned int)dword_14029EE20 > 4 && (qword_14029EE30 & 0x100) != 0 )
  {
    LOBYTE(v2) = 0;
    if ( (qword_14029EE38 & 0x100) == qword_14029EE38 )
    {
      v4 = InputTraceLogging::DropReasonToString(a2);
      v7 = &unk_14027B423;
      goto LABEL_16;
    }
  }
  return v2;
}
