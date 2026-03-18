/*
 * XREFs of ?EndLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z @ 0x1402191E4
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@@Z @ 0x140003184 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D@@@-$_tlgWrit.c)
 */

void __fastcall InputTraceLogging::MoveSize::EndLoop(struct tagWND *a1, const char *a2, __int64 a3)
{
  const __m128i *v4; // rcx
  __m128i v5; // xmm0
  int v6; // [rsp+50h] [rbp-20h] BYREF
  int v7; // [rsp+54h] [rbp-1Ch] BYREF
  const char *v8; // [rsp+58h] [rbp-18h] BYREF
  __int64 v9; // [rsp+60h] [rbp-10h] BYREF
  int v10; // [rsp+90h] [rbp+20h] BYREF
  int v11; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned int)dword_14039BB50 > 4
    && (qword_14039BB60 & 0x80000) != 0
    && (qword_14039BB68 & 0x80000) == qword_14039BB68 )
  {
    v4 = (const __m128i *)*((_QWORD *)a1 + 5);
    v8 = a2;
    v10 = HIDWORD(v4[6].m128i_i64[0]);
    v11 = _mm_cvtsi128_si32(_mm_loadl_epi64(v4 + 6));
    v6 = HIDWORD(v4[5].m128i_i64[1]);
    v5 = *(const __m128i *)((char *)v4 + 88);
    v9 = *(_QWORD *)a1;
    v7 = _mm_cvtsi128_si32(v5);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_14039BB50,
      (__int64)&unk_1403692E9,
      a3,
      (__int64)a1,
      (__int64)&v9,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v11,
      (__int64)&v10,
      &v8);
  }
}
