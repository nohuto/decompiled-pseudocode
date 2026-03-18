/*
 * XREFs of ?RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x140175320
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x14018B600 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 * Callees:
 *     IsPointerInputClientMessage @ 0x140143F90 (IsPointerInputClientMessage.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1401753F4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall InputTraceLogging::Delivery::RemoveMessage(const struct tagQMSG *a1, const struct tagQ *a2)
{
  unsigned int v2; // r8d
  const struct tagQMSG *v3; // r9
  unsigned int v4; // [rsp+50h] [rbp+8h] BYREF
  const struct tagQ *v5; // [rsp+60h] [rbp+18h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF

  v2 = *((_DWORD *)a1 + 6);
  v3 = a1;
  if ( v2 - 577 > 3 && !IsPointerInputClientMessage(v2) && v2 - 512 > 0xE && v2 - 160 > 0xD )
  {
    if ( v2 >= 0x100 )
    {
      if ( v2 > 0x109 )
        return;
    }
    else if ( v2 != 255 )
    {
      return;
    }
  }
  if ( (unsigned int)dword_14039BB50 > 5 && (qword_14039BB60 & 0x10) != 0 && (qword_14039BB68 & 0x10) == qword_14039BB68 )
  {
    v6 = *((_QWORD *)v3 + 18);
    v5 = a2;
    v4 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_14039BB50,
      (unsigned int)&unk_1403675F8,
      v2,
      (_DWORD)v3,
      (__int64)&v6,
      (__int64)&v4,
      (__int64)&v5);
  }
}
