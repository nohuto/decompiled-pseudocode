/*
 * XREFs of ?RegisterRawInputDevice@RawInput@InputTraceLogging@@SAXPEBUtagRAWINPUTDEVICE@@@Z @ 0x14016F65C
 * Callers:
 *     _RegisterRawInputDevices @ 0x14016FDF8 (_RegisterRawInputDevices.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@5@Z @ 0x140091E58 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U3@@-$_tlgWr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14016F35C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall InputTraceLogging::RawInput::RegisterRawInputDevice(
        const struct tagRAWINPUTDEVICE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int16 v4; // r10
  __int16 v5; // ax
  unsigned __int8 *v6; // rdx
  int v7; // [rsp+50h] [rbp+10h] BYREF
  __int64 v8; // [rsp+58h] [rbp+18h] BYREF
  int v9; // [rsp+60h] [rbp+20h] BYREF
  __int64 v10; // [rsp+68h] [rbp+28h] BYREF

  v4 = *(_WORD *)a1;
  if ( *(_WORD *)a1 != 1 )
    goto LABEL_7;
  v5 = *((_WORD *)a1 + 1);
  if ( v5 == 2 )
  {
    if ( (unsigned int)dword_1403AA9C0 > 4
      && (qword_1403AA9D0 & 0x40000) != 0
      && (qword_1403AA9D8 & 0x40000) == qword_1403AA9D8 )
    {
      v6 = (unsigned __int8 *)&unk_140373A55;
LABEL_17:
      v8 = *((_QWORD *)a1 + 1);
      v7 = *((_DWORD *)a1 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)&dword_1403AA9C0,
        v6,
        a3,
        a4,
        (__int64)&v7,
        (__int64)&v8);
      return;
    }
    return;
  }
  if ( v5 != 6 )
  {
LABEL_7:
    if ( (unsigned int)dword_1403AA9C0 > 4
      && (qword_1403AA9D0 & 0x40000) != 0
      && (qword_1403AA9D8 & 0x40000) == qword_1403AA9D8 )
    {
      LOWORD(v7) = *((_WORD *)a1 + 1);
      v10 = *((_QWORD *)a1 + 1);
      v9 = *((_DWORD *)a1 + 1);
      LOWORD(v8) = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
        (__int64)&dword_1403AA9C0,
        (__int64)&unk_140373A9A,
        a3,
        a4,
        (__int64)&v9,
        (__int64)&v10,
        (__int64)&v8,
        (__int64)&v7);
    }
    return;
  }
  if ( (unsigned int)dword_1403AA9C0 > 4
    && (qword_1403AA9D0 & 0x40000) != 0
    && (qword_1403AA9D8 & 0x40000) == qword_1403AA9D8 )
  {
    v6 = (unsigned __int8 *)&unk_140373AEF;
    goto LABEL_17;
  }
}
