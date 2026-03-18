/*
 * XREFs of _lambda_9c64183a7203233da3db63571940bf4a_::operator() @ 0x140196EF8
 * Callers:
 *     _DXGKCALLONEXIT__lambda_9c64183a7203233da3db63571940bf4a____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14006E688 (_DXGKCALLONEXIT__lambda_9c64183a7203233da3db63571940bf4a____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x140002340 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     McTemplateK0qtqqq_EtwWriteTransfer @ 0x14006DE90 (McTemplateK0qtqqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkWriteDiagEntry @ 0x14031B9C0 (DxgkWriteDiagEntry.c)
 */

char __fastcall lambda_9c64183a7203233da3db63571940bf4a_::operator()(int **a1)
{
  unsigned __int8 *v1; // rax
  int v3; // r9d
  int v4; // r8d
  int CurrentProcessSessionId; // eax
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  int *v9; // rax
  int v10; // ecx
  int *v11; // rax
  int v12; // ecx
  int *v13; // rax
  int v15; // [rsp+50h] [rbp-19h] BYREF
  int v16; // [rsp+54h] [rbp-15h] BYREF
  int v17; // [rsp+58h] [rbp-11h] BYREF
  unsigned int v18; // [rsp+5Ch] [rbp-Dh] BYREF
  int v19; // [rsp+60h] [rbp-9h] BYREF
  __int64 v20; // [rsp+68h] [rbp-1h] BYREF
  _DWORD v21[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v22; // [rsp+78h] [rbp+Fh]
  __int128 v23; // [rsp+80h] [rbp+17h]
  __int64 v24; // [rsp+90h] [rbp+27h]
  int v25; // [rsp+98h] [rbp+2Fh]
  int v26; // [rsp+9Ch] [rbp+33h]
  int v27; // [rsp+A0h] [rbp+37h]
  int v28; // [rsp+A4h] [rbp+3Bh]
  int v29; // [rsp+A8h] [rbp+3Fh]
  int v30; // [rsp+ACh] [rbp+43h]

  v1 = (unsigned __int8 *)a1[2];
  v22 = 0LL;
  v23 = 0LL;
  v26 = 0;
  v3 = *v1;
  v4 = **a1;
  LODWORD(v1) = (*a1[3] << 16) + *a1[1];
  v22 = 0LL;
  v28 = (int)v1;
  v21[0] = 6;
  v21[1] = 64;
  v25 = 0;
  v24 = 0LL;
  v23 = 0LL;
  v27 = 76;
  v29 = v4;
  v30 = v3;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v21);
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  v6 = CurrentProcessSessionId;
  if ( (unsigned int)dword_140166660 > 5 )
  {
    LOBYTE(CurrentProcessSessionId) = tlgKeywordOn((__int64)&dword_140166660, 0x400000000000LL);
    if ( (_BYTE)CurrentProcessSessionId )
    {
      v9 = a1[3];
      v15 = *(unsigned __int8 *)a1[2];
      v10 = *v9;
      v11 = a1[1];
      v16 = v10;
      v12 = *v11;
      v13 = *a1;
      v17 = v12;
      v18 = *v13;
      v19 = v6;
      v20 = 33556480LL;
      LOBYTE(CurrentProcessSessionId) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                          v18,
                                          (__int64)&unk_1401409C8,
                                          v7,
                                          v8,
                                          (__int64)&v20,
                                          (__int64)&v19,
                                          (__int64)&v18,
                                          (__int64)&v17,
                                          (__int64)&v16,
                                          (__int64)&v15);
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
    LOBYTE(CurrentProcessSessionId) = McTemplateK0qtqqq_EtwWriteTransfer(
                                        (__int64)a1[3],
                                        (__int64)a1[1],
                                        *(unsigned __int8 *)a1[2],
                                        **a1,
                                        *(_BYTE *)a1[2],
                                        *a1[1],
                                        *a1[3],
                                        v6);
  return CurrentProcessSessionId;
}
