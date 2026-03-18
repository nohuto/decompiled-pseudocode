/*
 * XREFs of ?TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z @ 0x14008650C
 * Callers:
 *     TouchTargetChildTree @ 0x140087E8C (TouchTargetChildTree.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444@Z @ 0x1400033CC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemplat.c)
 */

void __fastcall TraceLoggingHitTestWindowTargeting(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  int v7; // [rsp+60h] [rbp+Fh] BYREF
  int v8; // [rsp+64h] [rbp+13h] BYREF
  int v9; // [rsp+68h] [rbp+17h] BYREF
  int v10; // [rsp+6Ch] [rbp+1Bh] BYREF
  int v11; // [rsp+70h] [rbp+1Fh] BYREF
  int v12; // [rsp+74h] [rbp+23h] BYREF
  int v13; // [rsp+78h] [rbp+27h] BYREF
  __int64 v14; // [rsp+80h] [rbp+2Fh] BYREF

  if ( (unsigned int)dword_1403AAA30 > 5
    && (qword_1403AAA40 & 0x200000000000LL) != 0
    && (qword_1403AAA48 & 0x200000000000LL) == qword_1403AAA48 )
  {
    v7 = a7;
    v8 = a6;
    v9 = a5;
    v12 = a2;
    v10 = a4;
    v11 = a3;
    v13 = a1;
    v14 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      a1,
      (__int64)&unk_14037752D,
      a3,
      a4,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7);
  }
}
