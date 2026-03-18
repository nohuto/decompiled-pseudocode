/*
 * XREFs of _CEnergyReporter::SendReportToE3_::_2_::_lambda_1_::operator() @ 0x1801A4020
 * Callers:
 *     std::_Func_impl_no_alloc__CEnergyReporter::SendReportToE3_::_2_::_lambda_1__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x1801A4000 (std--_Func_impl_no_alloc__CEnergyReporter--SendReportToE3_--_2_--_lambda_1__void_vo_ea_1801A4000.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U2@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@44AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180002DB0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U2@U-$_tlgWrapperByVal@$07@@U1@@-$.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CEnergyReporter::SendReportToE3_::_2_::_lambda_1_::operator()(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        char a6)
{
  __int64 v6; // r10
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 result; // rax
  int v11; // edi
  unsigned int v12; // eax
  __int128 v13; // [rsp+68h] [rbp-19h] BYREF
  __int64 v14; // [rsp+78h] [rbp-9h]
  void *retaddr; // [rsp+C8h] [rbp+47h]

  v6 = a2 + 16;
  LODWORD(v14) = a3;
  *((_QWORD *)&v13 + 1) = a4;
  HIDWORD(v14) = *(_DWORD *)(a2 + 8);
  v7 = *(unsigned int *)(a2 + 40);
  LOWORD(v13) = (a6 & 4) != 0;
  WORD1(v13) = (a6 & 2) != 0;
  DWORD1(v13) = a6 & 1;
  v8 = v7 + 1;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v11 = -2147024362;
    v12 = 183;
    goto LABEL_9;
  }
  if ( v8 > *(_DWORD *)(v6 + 20) )
  {
    result = DynArrayImpl<0>::AddMultipleAndSet(v6, 24, 1, &v13);
    v11 = result;
    if ( (int)result >= 0 )
      goto LABEL_4;
    v12 = 194;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v12, 0LL);
    ModuleFailFastForHRESULT(v11, retaddr);
  }
  v9 = 3 * v7;
  result = *(_QWORD *)v6;
  *(_OWORD *)(result + 8 * v9) = v13;
  *(_QWORD *)(result + 8 * v9 + 16) = v14;
  *(_DWORD *)(v6 + 24) = v8;
LABEL_4:
  if ( (unsigned int)dword_1803DC810 > 5 && (qword_1803DC820 & 1) != 0 )
  {
    result = qword_1803DC828 & 1;
    if ( result == qword_1803DC828 )
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
               v9,
               (__int64)&unk_1803B2CEB);
  }
  return result;
}
