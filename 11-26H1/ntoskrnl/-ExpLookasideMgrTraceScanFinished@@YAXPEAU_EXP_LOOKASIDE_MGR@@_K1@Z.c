/*
 * XREFs of ?ExpLookasideMgrTraceScanFinished@@YAXPEAU_EXP_LOOKASIDE_MGR@@_K1@Z @ 0x140B2E838
 * Callers:
 *     ?ExpLookasideMgrIoCallback@@YAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x140B2E720 (-ExpLookasideMgrIoCallback@@YAXPEAX0PEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x140200488 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall ExpLookasideMgrTraceScanFinished(struct _EXP_LOOKASIDE_MGR *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+48h] [rbp-20h] BYREF
  struct _EXP_LOOKASIDE_MGR *v6; // [rsp+50h] [rbp-18h] BYREF
  int v7; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_140E09170 > 4 && (byte_140E09180 & 1) != 0 && (qword_140E09188 & 1) == qword_140E09188 )
  {
    v7 = *((_DWORD *)a1 + 4);
    v5 = a2;
    v4 = a3;
    v6 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)a1,
      (__int64)&word_14005BE2E,
      a3,
      a4,
      (__int64)&v6,
      (__int64)&v7,
      (__int64)&v5,
      (__int64)&v4);
  }
}
