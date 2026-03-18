/*
 * XREFs of ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403E8EAC
 * Callers:
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140274514 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E8810 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?LogMonitorHandleOnOffState@@YAXQEAUHDXGMONITOR__@@AEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403E8B70 (-LogMonitorHandleOnOffState@@YAXQEAUHDXGMONITOR__@@AEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIG.c)
 *     ?_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403E8C90 (-_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$00@@U4@U4@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$00@@6677@Z @ 0x140047DB0 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWra.c)
 */

_UNKNOWN **__fastcall DXGMONITOR::LogMonitorObjectOnOffState(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  char v6; // si
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v11; // [rsp+78h] [rbp+27h] BYREF
  char v12; // [rsp+79h] [rbp+28h] BYREF
  __int16 v13; // [rsp+7Ah] [rbp+29h] BYREF
  int v14; // [rsp+7Ch] [rbp+2Bh] BYREF
  int v15; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v16; // [rsp+88h] [rbp+37h] BYREF
  __int64 v17; // [rsp+90h] [rbp+3Fh] BYREF
  __int64 v18; // [rsp+98h] [rbp+47h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+4Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  char v21; // [rsp+D0h] [rbp+7Fh] BYREF

  result = &retaddr;
  if ( (_BYTE)a4 == 1 )
  {
    v6 = 2 - (a3 != 0);
    if ( v6 == *(_BYTE *)(a1 + 344) )
      return result;
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 344);
  }
  v7 = MEMORY[0xFFFFF78000000014];
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 24LL) + 16LL) + 412LL);
  LODWORD(v16) = v8;
  result = (_UNKNOWN **)HIDWORD(v8);
  HIDWORD(v16) = (_DWORD)result;
  if ( (_BYTE)a4 == 1 )
  {
    if ( (unsigned int)dword_1401665B8 > 5 && (qword_1401665C8 & 0x400000000010LL) != 0 )
    {
      result = (_UNKNOWN **)(qword_1401665D0 & 0x400000000010LL);
      if ( (qword_1401665D0 & 0x400000000010LL) == qword_1401665D0 )
      {
        v9 = (unsigned int)dword_140169580;
        v21 = *(_BYTE *)(a1 + 344);
        v17 = *(_QWORD *)(a1 + 352);
        v14 = *(_DWORD *)(a1 + 180);
        ++dword_140169580;
        v19 = a2;
        v11 = v6;
        v18 = MEMORY[0xFFFFF78000000014];
        v12 = 1;
        v15 = v9;
        v13 = 1;
        result = (_UNKNOWN **)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                                v9,
                                (__int64)&unk_140145D68,
                                a2,
                                a4,
                                (__int64)&v13,
                                (__int64)&v15,
                                &v19,
                                (__int64)&v16,
                                (__int64)&v14,
                                (__int64)&v12,
                                (__int64)&v18,
                                (__int64)&v17,
                                (__int64)&v11,
                                (__int64)&v21);
      }
    }
    *(_QWORD *)(a1 + 352) = v7;
    *(_BYTE *)(a1 + 344) = v6;
  }
  else if ( (unsigned int)dword_1401665B8 > 5 && (qword_1401665C8 & 0x10) != 0 )
  {
    result = (_UNKNOWN **)(qword_1401665D0 & 0x10);
    if ( result == (_UNKNOWN **)qword_1401665D0 )
    {
      v10 = (unsigned int)dword_140169580;
      v21 = *(_BYTE *)(a1 + 344);
      v19 = *(_QWORD *)(a1 + 352);
      v15 = *(_DWORD *)(a1 + 180);
      v17 = v16;
      ++dword_140169580;
      v16 = a2;
      v12 = v6;
      v18 = MEMORY[0xFFFFF78000000014];
      v11 = a4;
      v14 = v10;
      v13 = 1;
      return (_UNKNOWN **)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                            v10,
                            (__int64)&unk_140145E06,
                            a2,
                            a4,
                            (__int64)&v13,
                            (__int64)&v14,
                            &v16,
                            (__int64)&v17,
                            (__int64)&v15,
                            (__int64)&v11,
                            (__int64)&v18,
                            (__int64)&v19,
                            (__int64)&v12,
                            (__int64)&v21);
    }
  }
  return result;
}
