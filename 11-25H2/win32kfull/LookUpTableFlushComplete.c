/*
 * XREFs of LookUpTableFlushComplete @ 0x1403D415C
 * Callers:
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1403D3AF0 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     TlgUnregisterAggregateProvider @ 0x1403D3CD8 (TlgUnregisterAggregateProvider.c)
 *     ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1403D40E0 (-TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIP.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1403D4760 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U_tlgWrapperBinary@@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU_tlgWrapperBinary@@35735735735735735735735745@Z @ 0x140001DE8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U-$_tlgWr.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     FlushLookUpTableBucket @ 0x14021FB70 (FlushLookUpTableBucket.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     UpdateInternalStatsOnFlush @ 0x1403D3B7C (UpdateInternalStatsOnFlush.c)
 */

_UNKNOWN **__fastcall LookUpTableFlushComplete(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // edx
  unsigned int v3; // edi
  __int64 v5; // rcx
  _UNKNOWN *retaddr; // [rsp+270h] [rbp+C8h] BYREF

  result = &retaddr;
  v2 = *(_DWORD *)(a1 + 256);
  v3 = 0;
  if ( v2 )
  {
    UpdateInternalStatsOnFlush(a1, v2);
    if ( *(_QWORD *)(v5 + 288) )
    {
      if ( (unsigned int)dword_14039BCA0 > 5 && tlgKeywordOn((__int64)&dword_14039BCA0, 0x200000000000LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
          *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL),
          (__int64)&unk_14036BE48);
      *(_OWORD *)(a1 + 288) = 0LL;
      *(_OWORD *)(a1 + 304) = 0LL;
      *(_QWORD *)(a1 + 320) = 0LL;
    }
    do
      result = (_UNKNOWN **)FlushLookUpTableBucket(a1, v3++);
    while ( v3 < 0x20 );
  }
  return result;
}
