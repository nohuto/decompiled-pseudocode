/*
 * XREFs of ?ExpLookasideMgrTraceScanStarting@@YAXPEAU_EXP_LOOKASIDE_MGR@@_K1@Z @ 0x1404E9458
 * Callers:
 *     ?ExpLookasideMgrQueueWorkers@@YAXPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x1404E9338 (-ExpLookasideMgrQueueWorkers@@YAXPEAU_EXP_LOOKASIDE_MGR@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x140200524 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 */

void __fastcall ExpLookasideMgrTraceScanStarting(struct _EXP_LOOKASIDE_MGR *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // [rsp+50h] [rbp-28h] BYREF
  __int64 v6; // [rsp+58h] [rbp-20h] BYREF
  __int64 v7; // [rsp+60h] [rbp-18h] BYREF
  __int64 v8; // [rsp+68h] [rbp-10h] BYREF
  int v9; // [rsp+98h] [rbp+20h] BYREF

  if ( (unsigned int)dword_140E09170 > 4 && tlgKeywordOn((__int64)&dword_140E09170, 1LL) )
  {
    v5 = *(_QWORD *)(v3 + 56);
    v9 = *(_DWORD *)(v3 + 16);
    v6 = v2;
    v7 = v4;
    v8 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v1,
      (__int64)byte_14005BDB9,
      v2,
      v3,
      (__int64)&v8,
      (__int64)&v9,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5);
  }
}
