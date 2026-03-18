/*
 * XREFs of ?DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z @ 0x180113FBC
 * Callers:
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x180112BF4 (-OnInput@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180094B5C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1801DBC10 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444@Z @ 0x1801DC388 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemp.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::DequeueFrame(struct CManipulationFrame *a1)
{
  const struct _tlgProvider_t *v2; // rax
  unsigned int v3; // edi
  const struct _tlgProvider_t *v4; // rax
  int v5; // r9d
  int v6; // r8d
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  int v9; // eax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rsi
  __m128i v17; // xmm1
  __int128 v18; // xmm0
  const struct _tlgProvider_t *v19; // rax
  int v20; // r9d
  int v21; // [rsp+70h] [rbp-90h] BYREF
  int v22; // [rsp+74h] [rbp-8Ch] BYREF
  int v23; // [rsp+78h] [rbp-88h] BYREF
  int v24; // [rsp+7Ch] [rbp-84h] BYREF
  __m128i v25; // [rsp+80h] [rbp-80h] BYREF
  __m128i v26; // [rsp+90h] [rbp-70h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-60h]
  __int128 v28; // [rsp+B0h] [rbp-50h]
  __int128 v29; // [rsp+C0h] [rbp-40h]
  __int128 v30; // [rsp+D0h] [rbp-30h]
  __int128 v31; // [rsp+E0h] [rbp-20h]
  __int128 v32; // [rsp+F0h] [rbp-10h]
  __int128 v33; // [rsp+100h] [rbp+0h]
  __int128 v34; // [rsp+110h] [rbp+10h]
  __int128 v35; // [rsp+120h] [rbp+20h]
  __int128 v36; // [rsp+130h] [rbp+30h]
  int v37; // [rsp+178h] [rbp+78h] BYREF
  int v38; // [rsp+180h] [rbp+80h] BYREF
  __int64 v39; // [rsp+188h] [rbp+88h] BYREF

  v2 = InputTraceLogging::Provider();
  v3 = 0;
  if ( *(_DWORD *)v2 && tlgKeywordOn((__int64)v2, 2048LL) )
  {
    v4 = InputTraceLogging::Provider();
    v6 = (int)v4;
    if ( *(_DWORD *)v4 > 4u
      && (*((_DWORD *)v4 + 4) & 0x800LL) != 0
      && (*((_QWORD *)v4 + 3) & 0x800LL) == *((_QWORD *)v4 + 3) )
    {
      v7 = *((_OWORD *)a1 + 2);
      v37 = *((_DWORD *)a1 + 4);
      v8 = *((_OWORD *)a1 + 3);
      v9 = *((_DWORD *)a1 + 6);
      v28 = v7;
      v38 = v9;
      v10 = *((_OWORD *)a1 + 4);
      v29 = v8;
      v11 = *((_OWORD *)a1 + 5);
      v30 = v10;
      v12 = *((_OWORD *)a1 + 6);
      v31 = v11;
      v13 = *((_OWORD *)a1 + 7);
      v32 = v12;
      v14 = *((_OWORD *)a1 + 8);
      v33 = v13;
      v15 = *((_OWORD *)a1 + 10);
      v34 = v14;
      v35 = *((_OWORD *)a1 + 9);
      v36 = v15;
      v39 = v28;
      v25.m128i_i64[0] = *((_QWORD *)a1 + 56);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        (unsigned int)&unk_1803B0642,
        v6,
        v5,
        (__int64)&v25,
        (__int64)&v39,
        (__int64)&v38,
        (__int64)&v37);
    }
    if ( *((_DWORD *)a1 + 4) )
    {
      do
      {
        v16 = 248LL * v3;
        v17 = *(__m128i *)((char *)a1 + v16 + 400);
        v25 = *(__m128i *)((char *)a1 + v16 + 368);
        v18 = *(_OWORD *)((char *)a1 + v16 + 448);
        v26 = v17;
        v27 = v18;
        v19 = InputTraceLogging::Provider();
        if ( *(_DWORD *)v19 > 4u
          && (*((_DWORD *)v19 + 4) & 0x800LL) != 0
          && (*((_QWORD *)v19 + 3) & 0x800LL) == *((_QWORD *)v19 + 3) )
        {
          v37 = *(_DWORD *)((char *)a1 + v16 + 600);
          v38 = *(_DWORD *)((char *)a1 + v16 + 560);
          LODWORD(v39) = _mm_cvtsi128_si32(_mm_srli_si128(v26, 12));
          v22 = _mm_cvtsi128_si32(_mm_srli_si128(v26, 4));
          v21 = _mm_cvtsi128_si32(_mm_srli_si128(v26, 8));
          v23 = _mm_cvtsi128_si32(v26);
          v24 = _mm_cvtsi128_si32(_mm_srli_si128(v25, 12));
          v25.m128i_i32[0] = _mm_cvtsi128_si32(_mm_srli_si128(v25, 4));
          v26.m128i_i64[0] = v27;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (_DWORD)v19,
            (unsigned int)&unk_1803B053A,
            (_DWORD)v19,
            v20,
            (__int64)&v26,
            (__int64)&v25,
            (__int64)&v24,
            (__int64)&v23,
            (__int64)&v22,
            (__int64)&v21,
            (__int64)&v39,
            (__int64)&v38,
            (__int64)&v37);
        }
        ++v3;
      }
      while ( v3 != *((_DWORD *)a1 + 4) );
    }
  }
}
