/*
 * XREFs of ?EmitSleepStudyTotalTimeModernStandbyTelemetry@DripsBlockerTrackingHelper@@IEAAX_K@Z @ 0x1403B59B8
 * Callers:
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z @ 0x1403B4088 (-EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333@Z @ 0x14004751C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 */

void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyTotalTimeModernStandbyTelemetry(
        DripsBlockerTrackingHelper *this,
        __int64 a2)
{
  int v2; // r9d
  _BYTE *v3; // r10
  __int64 v5; // rcx
  bool v6; // zf
  int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r11
  __int64 v12; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+58h] [rbp-18h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h] BYREF
  __int64 v15; // [rsp+68h] [rbp-8h] BYREF
  __int64 v16; // [rsp+90h] [rbp+20h] BYREF
  __int64 v17; // [rsp+98h] [rbp+28h] BYREF

  v2 = 0;
  v3 = (char *)this + 104;
  v5 = 64LL;
  do
  {
    v6 = *v3 == 0;
    v7 = v2 + 1;
    v3 += 4720;
    if ( v6 )
      v7 = v2;
    v2 = v7;
    --v5;
  }
  while ( v5 );
  if ( (unsigned int)dword_140166660 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140166660, 0x400000002000LL) )
    {
      v12 = *(_QWORD *)(v11 + 302120);
      v13 = *(_QWORD *)(v11 + 302096);
      v16 = 50331648LL;
      v17 = v10;
      v14 = a2;
      v15 = 17LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v8,
        (__int64)&unk_140142261,
        v9,
        v10,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v17,
        (__int64)&v16);
    }
  }
}
