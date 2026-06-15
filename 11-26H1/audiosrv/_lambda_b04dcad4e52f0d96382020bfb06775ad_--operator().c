/*
 * XREFs of _lambda_b04dcad4e52f0d96382020bfb06775ad_::operator() @ 0x180136D48
 * Callers:
 *     wil::details::lambda_call__lambda_b04dcad4e52f0d96382020bfb06775ad___::_lambda_call__lambda_b04dcad4e52f0d96382020bfb06775ad___ @ 0x180135318 (wil--details--lambda_call__lambda_b04dcad4e52f0d96382020bfb06775ad___--_lambda_call__lambda_b04d.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@44AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180005024 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U2@U2@U-$_tlgWrapperByVal@$03@@@-$_tlgWrite.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000B910 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

char __fastcall lambda_b04dcad4e52f0d96382020bfb06775ad_::operator()(__int64 *a1)
{
  __int64 v1; // rax
  _DWORD *v3; // rbx
  _DWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+50h] [rbp+17h] BYREF
  GUID *v13; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+60h] [rbp+27h] BYREF
  __int128 *v15; // [rsp+68h] [rbp+2Fh] BYREF
  const wchar_t *v16; // [rsp+70h] [rbp+37h] BYREF
  __int128 v17; // [rsp+78h] [rbp+3Fh] BYREF

  v1 = *a1;
  v3 = *(_DWORD **)(*a1 + 2120);
  if ( *v3 > 2u )
  {
    LOBYTE(v1) = tlgKeywordOn(*(_QWORD *)(*a1 + 2120), 16LL);
    if ( (_BYTE)v1 )
    {
      v4 = (_DWORD *)a1[2];
      v12 = *(_DWORD *)a1[3];
      LODWORD(v4) = *v4;
      v5 = a1[1];
      v13 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v6 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v5, (signed int)v4);
      v7 = *a1;
      v14 = v6;
      v8 = *(_OWORD *)*(_QWORD *)(v7 + 1568);
      v15 = &v17;
      v17 = v8;
      v16 = *(const wchar_t **)(*(_QWORD *)(v7 + 1584) + 48LL);
      LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
                     (int)v3,
                     (int)&unk_1801AB737,
                     v9,
                     v10,
                     &v16,
                     (__int64 *)&v15,
                     &v14,
                     (__int64 *)&v13,
                     (__int64)&v12);
    }
  }
  return v1;
}
