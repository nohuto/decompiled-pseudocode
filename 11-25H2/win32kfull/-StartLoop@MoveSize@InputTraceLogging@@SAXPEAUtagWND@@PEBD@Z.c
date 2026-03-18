/*
 * XREFs of ?StartLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z @ 0x140223630
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@@Z @ 0x140003184 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D@@@-$_tlgWrit.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::MoveSize::StartLoop(struct tagWND *a1, const char *a2)
{
  __int64 v2; // r8
  __int64 *v3; // r9
  __int64 v4; // r10
  const __m128i *v5; // rcx
  __m128i v6; // xmm0
  int v7; // [rsp+50h] [rbp-20h] BYREF
  int v8; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v9; // [rsp+58h] [rbp-18h] BYREF
  __int64 v10; // [rsp+60h] [rbp-10h] BYREF
  int v11; // [rsp+90h] [rbp+20h] BYREF
  int v12; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned int)dword_14039BB50 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_14039BB50, 0x80000LL) )
    {
      v5 = (const __m128i *)v3[5];
      v9 = v4;
      v11 = HIDWORD(v5[6].m128i_i64[0]);
      v12 = _mm_cvtsi128_si32(_mm_loadl_epi64(v5 + 6));
      v7 = HIDWORD(v5[5].m128i_i64[1]);
      v6 = *(const __m128i *)((char *)v5 + 88);
      v10 = *v3;
      v8 = _mm_cvtsi128_si32(v6);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)&dword_14039BB50,
        (__int64)&unk_140369292,
        v2,
        (__int64)v3,
        (__int64)&v10,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v12,
        (__int64)&v11,
        &v9);
    }
  }
}
