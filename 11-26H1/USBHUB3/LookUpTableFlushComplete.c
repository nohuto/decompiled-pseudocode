/*
 * XREFs of LookUpTableFlushComplete @ 0x140094610
 * Callers:
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140094AB0 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140094B40 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140094BB0 (-TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIP.c)
 *     TlgUnregisterAggregateProvider @ 0x140094DBC (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U_tlgWrapperBinary@@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU_tlgWrapperBinary@@35735735735735735735735745@Z @ 0x1400010AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U-$_tlgWr.c)
 *     FlushLookUpTableBucket @ 0x140045FBC (FlushLookUpTableBucket.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 */

__int64 __fastcall LookUpTableFlushComplete(const __m128i *a1)
{
  __int64 result; // rax
  unsigned int v2; // edi
  unsigned int v4; // edx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm0
  char v10; // [rsp+120h] [rbp-80h] BYREF
  char v11; // [rsp+121h] [rbp-7Fh] BYREF
  char v12; // [rsp+122h] [rbp-7Eh] BYREF
  char v13; // [rsp+123h] [rbp-7Dh] BYREF
  char v14; // [rsp+124h] [rbp-7Ch] BYREF
  char v15; // [rsp+125h] [rbp-7Bh] BYREF
  char v16; // [rsp+126h] [rbp-7Ah] BYREF
  char v17; // [rsp+127h] [rbp-79h] BYREF
  char v18; // [rsp+128h] [rbp-78h] BYREF
  _BYTE v19[3]; // [rsp+129h] [rbp-77h] BYREF
  int v20; // [rsp+12Ch] [rbp-74h] BYREF
  int v21; // [rsp+130h] [rbp-70h] BYREF
  int v22; // [rsp+134h] [rbp-6Ch] BYREF
  __int64 v23; // [rsp+138h] [rbp-68h] BYREF
  __int64 v24; // [rsp+140h] [rbp-60h] BYREF
  __int64 v25; // [rsp+148h] [rbp-58h] BYREF
  __int64 v26; // [rsp+150h] [rbp-50h] BYREF
  __int64 v27; // [rsp+158h] [rbp-48h] BYREF
  __int64 v28; // [rsp+160h] [rbp-40h] BYREF
  __int64 v29; // [rsp+168h] [rbp-38h] BYREF
  __int64 v30; // [rsp+170h] [rbp-30h] BYREF
  __int128 *v31; // [rsp+178h] [rbp-28h] BYREF
  __int64 v32; // [rsp+180h] [rbp-20h] BYREF
  const wchar_t *v33; // [rsp+188h] [rbp-18h] BYREF
  __int16 v34; // [rsp+190h] [rbp-10h]
  const wchar_t *v35; // [rsp+198h] [rbp-8h] BYREF
  __int16 v36; // [rsp+1A0h] [rbp+0h]
  const wchar_t *v37; // [rsp+1A8h] [rbp+8h] BYREF
  __int16 v38; // [rsp+1B0h] [rbp+10h]
  const wchar_t *v39; // [rsp+1B8h] [rbp+18h] BYREF
  __int16 v40; // [rsp+1C0h] [rbp+20h]
  const wchar_t *v41; // [rsp+1C8h] [rbp+28h] BYREF
  __int16 v42; // [rsp+1D0h] [rbp+30h]
  const wchar_t *v43; // [rsp+1D8h] [rbp+38h] BYREF
  __int16 v44; // [rsp+1E0h] [rbp+40h]
  const wchar_t *v45; // [rsp+1E8h] [rbp+48h] BYREF
  __int16 v46; // [rsp+1F0h] [rbp+50h]
  const wchar_t *v47; // [rsp+1F8h] [rbp+58h] BYREF
  __int16 v48; // [rsp+200h] [rbp+60h]
  const wchar_t *v49; // [rsp+208h] [rbp+68h] BYREF
  __int16 v50; // [rsp+210h] [rbp+70h]
  __int64 v51; // [rsp+238h] [rbp+98h]
  __int128 v52; // [rsp+240h] [rbp+A0h] BYREF

  result = a1[16].m128i_u32[0];
  v2 = 0;
  if ( (_DWORD)result )
  {
    v4 = a1[19].m128i_u32[2];
    if ( v4 > (unsigned int)result || !a1[18].m128i_i64[1] )
    {
      a1[19].m128i_i32[2] = result;
      v4 = result;
    }
    v5 = a1[19].m128i_u32[1];
    if ( (unsigned int)v5 < (unsigned int)result )
    {
      a1[19].m128i_i32[1] = result;
      v5 = (unsigned int)result;
    }
    a1[18] = _mm_add_epi64(
               _mm_unpacklo_epi64((__m128i)(unsigned __int64)result, (__m128i)1uLL),
               _mm_loadu_si128(a1 + 18));
    v6 = a1[18].m128i_i64[0];
    if ( v6 )
    {
      if ( (unsigned int)dword_140070850 > 5
        && (qword_140070860 & 0x200000000000LL) != 0
        && (qword_140070868 & 0x200000000000LL) == qword_140070868 )
      {
        v10 = 4;
        v33 = L"SummaryCount";
        v34 = 24;
        v23 = a1[20].m128i_u32[1];
        v35 = L"NumLargeEventFailures";
        v24 = a1[20].m128i_u32[0];
        v37 = L"NumAllocationFailures";
        v25 = a1[19].m128i_u32[3];
        v39 = L"NumBucketLimitReached";
        v26 = v4;
        v41 = L"MinEntriesFlushed";
        v27 = (unsigned int)v5;
        v43 = L"MaxEntriesFlushed";
        v45 = L"TotalEntriesFlushed";
        v46 = 38;
        v29 = a1[19].m128i_u32[0];
        v47 = L"MaxEntriesStored";
        v30 = a1[18].m128i_i64[1];
        v49 = L"NumFlushes";
        v50 = 20;
        v7 = a1[21].m128i_i64[1];
        v36 = 42;
        v38 = 42;
        v40 = 42;
        v20 = 1;
        v11 = 4;
        v12 = 4;
        v13 = 4;
        v14 = 4;
        v15 = 4;
        v16 = 4;
        v28 = v6;
        v17 = 4;
        v18 = 4;
        v42 = 34;
        v44 = 34;
        v8 = *(_QWORD *)(v7 + 8);
        v31 = &v52;
        v9 = *(_OWORD *)(v8 - 16);
        v48 = 32;
        v52 = v9;
        v19[0] = 0;
        v21 = -1;
        v22 = 300;
        v32 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
          v8,
          byte_14006943B,
          v5,
          v6,
          (__int64)&v32,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)v19,
          (__int64 *)&v31,
          (__int64 *)&v49,
          (__int64)&v30,
          (__int64)&v18,
          (__int64 *)&v47,
          (__int64)&v29,
          (__int64)&v17,
          (__int64 *)&v45,
          (__int64)&v28,
          (__int64)&v16,
          (__int64 *)&v43,
          (__int64)&v27,
          (__int64)&v15,
          (__int64 *)&v41,
          (__int64)&v26,
          (__int64)&v14,
          (__int64 *)&v39,
          (__int64)&v25,
          (__int64)&v13,
          (__int64 *)&v37,
          (__int64)&v24,
          (__int64)&v12,
          (__int64 *)&v35,
          (__int64)&v23,
          (__int64)&v11,
          (__int64 *)&v33,
          (__int64)&v20,
          (__int64)&v10);
      }
      a1[18] = 0LL;
      v51 = 0LL;
      a1[19] = 0LL;
      a1[20].m128i_i64[0] = v51;
    }
    do
      result = FlushLookUpTableBucket((__int64)a1, v2++);
    while ( v2 < 0x20 );
  }
  return result;
}
