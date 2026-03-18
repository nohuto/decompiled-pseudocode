/*
 * XREFs of ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400A1E74
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1400477E4 (RIMProcessAnyPointerDeviceInput.c)
 *     rimSignalReadComplete @ 0x140098988 (rimSignalReadComplete.c)
 *     rimObsDeliverToExclusiveObservers @ 0x140099E6C (rimObsDeliverToExclusiveObservers.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 *     rimStackAttachAndProcessInput @ 0x1400A05C4 (rimStackAttachAndProcessInput.c)
 *     rimProcessMouseInput @ 0x1400A0798 (rimProcessMouseInput.c)
 *     rimProcessHidInput @ 0x1400A19E0 (rimProcessHidInput.c)
 *     RIMQueueMouseInput @ 0x140155B0C (RIMQueueMouseInput.c)
 *     rimProcessInjectedDeviceBuffers @ 0x14017ECF0 (rimProcessInjectedDeviceBuffers.c)
 *     RIMQueueKeyboardInput @ 0x1402098CC (RIMQueueKeyboardInput.c)
 * Callees:
 *     ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@RIM@1@@Z @ 0x1400A1FBC (-DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@RIM@1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1400A28C4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 */

__int64 __fastcall InputTraceLogging::RIM::DropInput(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // r8
  int v5; // r9d
  void *v6; // rdx
  unsigned int v7; // r9d
  unsigned int v8; // r9d
  __int64 v9; // [rsp+40h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF

  result = *(unsigned int *)(a1 + 48);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 2 )
    {
      result = *(unsigned int *)(a1 + 184);
      if ( (result & 0x80u) != 0LL )
      {
        if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 0x100) != 0 )
        {
          result = qword_1402A9E58 & 0x100;
          if ( result == qword_1402A9E58 )
          {
            v3 = InputTraceLogging::DropReasonToString(a2);
            v6 = &unk_14028589F;
            goto LABEL_14;
          }
        }
      }
      else if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 0x100) != 0 )
      {
        result = qword_1402A9E58 & 0x100;
        if ( result == qword_1402A9E58 )
        {
          v3 = InputTraceLogging::DropReasonToString(a2);
          v6 = &unk_1402858D5;
LABEL_14:
          v9 = v3;
          v10 = v4;
          return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
                   (unsigned int)&dword_1402A9E40,
                   (_DWORD)v6,
                   v4,
                   v5,
                   (__int64)&v10,
                   (__int64)&v9);
        }
      }
    }
    else if ( (_DWORD)result == 1 && (unsigned int)dword_1402A9E40 > 4 )
    {
      result = tlgKeywordOn(&dword_1402A9E40, 256LL);
      if ( (_BYTE)result )
      {
        v3 = InputTraceLogging::DropReasonToString(v8);
        v6 = &unk_140285907;
        goto LABEL_14;
      }
    }
  }
  else if ( (unsigned int)dword_1402A9E40 > 4 )
  {
    result = tlgKeywordOn(&dword_1402A9E40, 256LL);
    if ( (_BYTE)result )
    {
      v3 = InputTraceLogging::DropReasonToString(v7);
      v6 = &unk_14028586B;
      goto LABEL_14;
    }
  }
  return result;
}
