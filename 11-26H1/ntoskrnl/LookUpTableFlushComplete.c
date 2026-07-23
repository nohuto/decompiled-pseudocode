/*
 * XREFs of LookUpTableFlushComplete @ 0x140AF012C
 * Callers:
 *     TlgAggregateFlush @ 0x1407214EC (TlgAggregateFlush.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140AEFF60 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 *     ?TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140AF00B0 (-TlgAggregateInternalRegisteredProviderEtwCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIP.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140B52970 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U_tlgWrapperBinary@@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U1@U3@U5@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU_tlgWrapperBinary@@35735735735735735735735745@Z @ 0x140200008 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U-$_tlgWr.c)
 *     FlushLookUpTableBucket @ 0x1404C4898 (FlushLookUpTableBucket.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     UpdateInternalStatsOnFlush @ 0x140AF0060 (UpdateInternalStatsOnFlush.c)
 */

_UNKNOWN **__fastcall LookUpTableFlushComplete(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // edx
  unsigned int v3; // edi
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm0
  char v12; // [rsp+128h] [rbp-80h] BYREF
  char v13; // [rsp+129h] [rbp-7Fh] BYREF
  char v14; // [rsp+12Ah] [rbp-7Eh] BYREF
  char v15; // [rsp+12Bh] [rbp-7Dh] BYREF
  char v16; // [rsp+12Ch] [rbp-7Ch] BYREF
  char v17; // [rsp+12Dh] [rbp-7Bh] BYREF
  char v18; // [rsp+12Eh] [rbp-7Ah] BYREF
  char v19; // [rsp+12Fh] [rbp-79h] BYREF
  char v20; // [rsp+130h] [rbp-78h] BYREF
  _BYTE v21[3]; // [rsp+131h] [rbp-77h] BYREF
  int v22; // [rsp+134h] [rbp-74h] BYREF
  int v23; // [rsp+138h] [rbp-70h] BYREF
  int v24; // [rsp+13Ch] [rbp-6Ch] BYREF
  __int64 v25; // [rsp+140h] [rbp-68h] BYREF
  __int64 v26; // [rsp+148h] [rbp-60h] BYREF
  __int64 v27; // [rsp+150h] [rbp-58h] BYREF
  __int64 v28; // [rsp+158h] [rbp-50h] BYREF
  __int64 v29; // [rsp+160h] [rbp-48h] BYREF
  __int64 v30; // [rsp+168h] [rbp-40h] BYREF
  __int64 v31; // [rsp+170h] [rbp-38h] BYREF
  __int64 v32; // [rsp+178h] [rbp-30h] BYREF
  __int128 *v33; // [rsp+180h] [rbp-28h] BYREF
  __int64 v34; // [rsp+188h] [rbp-20h] BYREF
  const wchar_t *v35; // [rsp+190h] [rbp-18h] BYREF
  __int16 v36; // [rsp+198h] [rbp-10h]
  const wchar_t *v37; // [rsp+1A0h] [rbp-8h] BYREF
  __int16 v38; // [rsp+1A8h] [rbp+0h]
  const wchar_t *v39; // [rsp+1B0h] [rbp+8h] BYREF
  __int16 v40; // [rsp+1B8h] [rbp+10h]
  const wchar_t *v41; // [rsp+1C0h] [rbp+18h] BYREF
  __int16 v42; // [rsp+1C8h] [rbp+20h]
  const wchar_t *v43; // [rsp+1D0h] [rbp+28h] BYREF
  __int16 v44; // [rsp+1D8h] [rbp+30h]
  const wchar_t *v45; // [rsp+1E0h] [rbp+38h] BYREF
  __int16 v46; // [rsp+1E8h] [rbp+40h]
  const wchar_t *v47; // [rsp+1F0h] [rbp+48h] BYREF
  __int16 v48; // [rsp+1F8h] [rbp+50h]
  const wchar_t *v49; // [rsp+200h] [rbp+58h] BYREF
  __int16 v50; // [rsp+208h] [rbp+60h]
  const wchar_t *v51; // [rsp+210h] [rbp+68h] BYREF
  __int16 v52; // [rsp+218h] [rbp+70h]
  __int64 v53; // [rsp+240h] [rbp+98h]
  __int128 v54; // [rsp+248h] [rbp+A0h] BYREF
  _UNKNOWN *retaddr; // [rsp+270h] [rbp+C8h] BYREF

  result = &retaddr;
  v2 = *(_DWORD *)(a1 + 256);
  v3 = 0;
  if ( v2 )
  {
    UpdateInternalStatsOnFlush(a1, v2);
    v8 = *(_QWORD *)(v5 + 288);
    if ( v8 )
    {
      if ( (unsigned int)dword_140E0A510 > 5 )
      {
        v6 = 0x200000000000LL;
        if ( (qword_140E0A520 & 0x200000000000LL) != 0 && (qword_140E0A528 & 0x200000000000LL) == qword_140E0A528 )
        {
          v12 = 4;
          v35 = L"SummaryCount";
          v36 = 24;
          v25 = *(unsigned int *)(v5 + 324);
          v37 = L"NumLargeEventFailures";
          v26 = *(unsigned int *)(a1 + 320);
          v39 = L"NumAllocationFailures";
          v27 = *(unsigned int *)(a1 + 316);
          v41 = L"NumBucketLimitReached";
          v28 = *(unsigned int *)(a1 + 312);
          v43 = L"MinEntriesFlushed";
          v29 = *(unsigned int *)(a1 + 308);
          v45 = L"MaxEntriesFlushed";
          v47 = L"TotalEntriesFlushed";
          v38 = 42;
          v40 = 42;
          v42 = 42;
          v22 = 1;
          v13 = 4;
          v14 = 4;
          v15 = 4;
          v48 = 38;
          v31 = *(unsigned int *)(a1 + 304);
          v49 = L"MaxEntriesStored";
          v32 = *(_QWORD *)(a1 + 296);
          v51 = L"NumFlushes";
          v52 = 20;
          v9 = *(_QWORD *)(a1 + 344);
          v16 = 4;
          v17 = 4;
          v18 = 4;
          v30 = v8;
          v19 = 4;
          v20 = 4;
          v44 = 34;
          v46 = 34;
          v10 = *(_QWORD *)(v9 + 8);
          v33 = &v54;
          v11 = *(_OWORD *)(v10 - 16);
          v50 = 32;
          v54 = v11;
          v21[0] = 0;
          v23 = -1;
          v24 = 300;
          v34 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
            v10,
            (__int64)word_14005BE82,
            0x200000000000LL,
            (__int64)v7,
            (__int64)&v34,
            (__int64)&v24,
            (__int64)&v23,
            (__int64)v21,
            (__int64 *)&v33,
            (__int64 *)&v51,
            (__int64)&v32,
            (__int64)&v20,
            (__int64 *)&v49,
            (__int64)&v31,
            (__int64)&v19,
            (__int64 *)&v47,
            (__int64)&v30,
            (__int64)&v18,
            (__int64 *)&v45,
            (__int64)&v29,
            (__int64)&v17,
            (__int64 *)&v43,
            (__int64)&v28,
            (__int64)&v16,
            (__int64 *)&v41,
            (__int64)&v27,
            (__int64)&v15,
            (__int64 *)&v39,
            (__int64)&v26,
            (__int64)&v14,
            (__int64 *)&v37,
            (__int64)&v25,
            (__int64)&v13,
            (__int64 *)&v35,
            (__int64)&v22,
            (__int64)&v12);
        }
      }
      *(_OWORD *)(a1 + 288) = 0LL;
      v53 = 0LL;
      *(_OWORD *)(a1 + 304) = 0LL;
      *(_QWORD *)(a1 + 320) = v53;
    }
    do
      result = (_UNKNOWN **)FlushLookUpTableBucket(a1, v3++, v6, v7);
    while ( v3 < 0x20 );
  }
  return result;
}
