/*
 * XREFs of ?UnregisterRawInputDevice@RawInput@InputTraceLogging@@SAXPEBUtagRAWINPUTDEVICE@@@Z @ 0x14016F220
 * Callers:
 *     _RegisterRawInputDevices @ 0x14016FDF8 (_RegisterRawInputDevices.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@5@Z @ 0x140091E58 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U3@@-$_tlgWr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14016F35C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::RawInput::UnregisterRawInputDevice(const struct tagRAWINPUTDEVICE *a1)
{
  __int16 v1; // ax
  __int64 v2; // r8
  __int64 v3; // r9
  __int16 v4; // r11
  int v5; // r8d
  __int64 v6; // r9
  void *v7; // rdx
  int v8; // [rsp+50h] [rbp+10h] BYREF
  __int64 v9; // [rsp+58h] [rbp+18h] BYREF
  int v10; // [rsp+60h] [rbp+20h] BYREF
  __int64 v11; // [rsp+68h] [rbp+28h] BYREF

  if ( *(_WORD *)a1 != 1 )
    goto LABEL_17;
  v1 = *((_WORD *)a1 + 1);
  if ( v1 == 2 )
  {
    if ( (unsigned int)dword_1403AA9C0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1403AA9C0, 0x40000LL) )
    {
      v7 = &unk_1403739B7;
LABEL_14:
      v9 = *(_QWORD *)(v6 + 8);
      v8 = *(_DWORD *)(v6 + 4);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1403AA9C0,
        (_DWORD)v7,
        v5,
        v6,
        (__int64)&v8,
        (__int64)&v9);
      return;
    }
    return;
  }
  if ( v1 != 6 )
  {
LABEL_17:
    if ( (unsigned int)dword_1403AA9C0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1403AA9C0, 0x40000LL) )
    {
      LOWORD(v8) = *(_WORD *)(v3 + 2);
      v11 = *(_QWORD *)(v3 + 8);
      v10 = *(_DWORD *)(v3 + 4);
      LOWORD(v9) = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
        (__int64)&dword_1403AA9C0,
        (__int64)&unk_1403739FE,
        v2,
        v3,
        (__int64)&v10,
        (__int64)&v11,
        (__int64)&v9,
        (__int64)&v8);
    }
    return;
  }
  if ( (unsigned int)dword_1403AA9C0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1403AA9C0, 0x40000LL) )
  {
    v7 = &unk_14037396D;
    goto LABEL_14;
  }
}
