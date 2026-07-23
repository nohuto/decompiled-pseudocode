/*
 * XREFs of FsRtlpOplockPerfSendData @ 0x140AEAF28
 * Callers:
 *     FsRtlpOplockCleanup @ 0x1403F959C (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1403FAC10 (FsRtlUninitializeOplock.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1404D1580 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14052CC9C (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1405B8984 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B8BC0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1405B99A8 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14079171C (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     FsRtlpOplockIsSubjectToTimeout @ 0x1405B9FB0 (FsRtlpOplockIsSubjectToTimeout.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FsRtlpOplockPerfBucketize @ 0x140791C28 (FsRtlpOplockPerfBucketize.c)
 *     FsRtlpOplockPerfCleanupData @ 0x140791CBC (FsRtlpOplockPerfCleanupData.c)
 *     FsRtlpOplockPerfPrepareToSendData @ 0x140791E2C (FsRtlpOplockPerfPrepareToSendData.c)
 *     FsRtlpOplockPerfSummarizeData @ 0x140791EDC (FsRtlpOplockPerfSummarizeData.c)
 */

char __fastcall FsRtlpOplockPerfSendData(_QWORD *a1)
{
  _UNKNOWN **v1; // rax
  _DWORD *v3; // rcx
  _DWORD *v4; // rdi
  __int64 v5; // r8
  _QWORD *v6; // rcx
  int v8; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v9; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v10; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-98h] BYREF
  __int64 v17; // [rsp+78h] [rbp-90h] BYREF
  __int64 v18; // [rsp+80h] [rbp-88h] BYREF
  __int64 v19; // [rsp+88h] [rbp-80h] BYREF
  __int64 v20; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v22; // [rsp+B8h] [rbp-50h]
  __int64 v23; // [rsp+C0h] [rbp-48h]
  __int64 *v24; // [rsp+C8h] [rbp-40h]
  __int64 v25; // [rsp+D0h] [rbp-38h]
  __int64 *v26; // [rsp+D8h] [rbp-30h]
  __int64 v27; // [rsp+E0h] [rbp-28h]
  __int64 *v28; // [rsp+E8h] [rbp-20h]
  __int64 v29; // [rsp+F0h] [rbp-18h]
  __int64 *v30; // [rsp+F8h] [rbp-10h]
  __int64 v31; // [rsp+100h] [rbp-8h]
  __int64 *v32; // [rsp+108h] [rbp+0h]
  __int64 v33; // [rsp+110h] [rbp+8h]
  __int64 *v34; // [rsp+118h] [rbp+10h]
  __int64 v35; // [rsp+120h] [rbp+18h]
  __int64 *v36; // [rsp+128h] [rbp+20h]
  __int64 v37; // [rsp+130h] [rbp+28h]
  __int64 *v38; // [rsp+138h] [rbp+30h]
  __int64 v39; // [rsp+140h] [rbp+38h]
  __int64 *v40; // [rsp+148h] [rbp+40h]
  __int64 v41; // [rsp+150h] [rbp+48h]
  int *v42; // [rsp+158h] [rbp+50h]
  __int64 v43; // [rsp+160h] [rbp+58h]
  _QWORD *v44; // [rsp+168h] [rbp+60h]
  __int64 v45; // [rsp+170h] [rbp+68h]
  __int16 *v46; // [rsp+178h] [rbp+70h]
  __int64 v47; // [rsp+180h] [rbp+78h]
  __int64 v48; // [rsp+188h] [rbp+80h]
  int v49; // [rsp+190h] [rbp+88h]
  int v50; // [rsp+194h] [rbp+8Ch]
  __int64 *v51; // [rsp+198h] [rbp+90h]
  __int64 v52; // [rsp+1A0h] [rbp+98h]
  __int64 v53; // [rsp+1A8h] [rbp+A0h]
  int v54; // [rsp+1B0h] [rbp+A8h]
  int v55; // [rsp+1B4h] [rbp+ACh]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 *v57; // [rsp+1D8h] [rbp+D0h]
  __int64 v58; // [rsp+1E0h] [rbp+D8h]
  __int64 *v59; // [rsp+1E8h] [rbp+E0h]
  __int64 v60; // [rsp+1F0h] [rbp+E8h]
  __int64 *v61; // [rsp+1F8h] [rbp+F0h]
  __int64 v62; // [rsp+200h] [rbp+F8h]
  _UNKNOWN *retaddr; // [rsp+220h] [rbp+118h] BYREF

  v1 = &retaddr;
  v3 = a1 + 1;
  if ( *a1 )
  {
    v4 = v3;
    if ( (*v3 & 1) != 0 )
    {
      if ( (unsigned int)dword_140E06B30 > 5 )
      {
        LOBYTE(v1) = tlgKeywordOn((__int64)&dword_140E06B30, 0x400000000000LL);
        if ( (_BYTE)v1 )
        {
          v11 = 1LL;
          v57 = &v11;
          v58 = 8LL;
          v59 = &v10;
          LODWORD(v10) = v5;
          v61 = &v12;
          v60 = 4LL;
          v12 = 0x1000000LL;
          v62 = 8LL;
          LOBYTE(v1) = tlgWriteAgg((__int64)&dword_140E06B30, (unsigned __int8 *)&byte_1400458AD, v5, 5u, &v56);
        }
      }
    }
    else
    {
      LOBYTE(v1) = FsRtlpOplockIsSubjectToTimeout((__int64)a1);
      if ( (_BYTE)v1 )
      {
        v1 = (_UNKNOWN **)FsRtlpOplockPerfBucketize(v6);
        v3 = v4;
        if ( (__int64)v1 < *(_QWORD *)(g_OplockPerfData + 24) )
          goto LABEL_2;
        if ( _InterlockedIncrement((volatile signed __int32 *)(g_OplockPerfData + 32)) == 1
          && FsRtlpOplockPerfPrepareToSendData() )
        {
          FsRtlpOplockPerfSummarizeData();
          if ( (unsigned int)dword_140E06B30 > 5 && tlgKeywordOn((__int64)&dword_140E06B30, 0x200000000000LL) )
          {
            v22 = &v12;
            v9 = word_140E65DF0;
            v24 = &v11;
            v13 = qword_140E65E38;
            v26 = &v13;
            v14 = qword_140E65DF8;
            v28 = &v14;
            v15 = qword_140E65E00;
            v30 = &v15;
            v16 = qword_140E65E08;
            v32 = &v16;
            v17 = qword_140E65E20;
            v34 = &v17;
            v18 = qword_140E65E28;
            v36 = &v18;
            v19 = qword_140E65E10;
            v38 = &v19;
            v20 = qword_140E65E18;
            v40 = &v20;
            LOWORD(v8) = 16;
            v42 = &v8;
            v44 = qword_140E65D20;
            v46 = &v9;
            v48 = xmmword_140E65DD0;
            v49 = 8 * (unsigned __int16)word_140E65DF0;
            v51 = &v10;
            v53 = *((_QWORD *)&xmmword_140E65DD0 + 1);
            v54 = 8 * (unsigned __int16)word_140E65DF2;
            v12 = 0x1000000LL;
            v23 = 8LL;
            LODWORD(v11) = 2;
            v25 = 4LL;
            v27 = 8LL;
            v29 = 8LL;
            v31 = 8LL;
            v33 = 8LL;
            v35 = 8LL;
            v37 = 8LL;
            v39 = 8LL;
            v41 = 8LL;
            v43 = 2LL;
            v45 = 128LL;
            v47 = 2LL;
            v50 = 0;
            LOWORD(v10) = word_140E65DF2;
            v52 = 2LL;
            v55 = 0;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06B30,
              (unsigned __int8 *)byte_1400456F3,
              0LL,
              0LL,
              0x12u,
              &v21);
          }
          FsRtlpOplockPerfCleanupData();
          _InterlockedExchange64((volatile __int64 *)(g_OplockPerfData + 16), 0LL);
        }
        LOBYTE(v1) = g_OplockPerfData;
        _InterlockedDecrement((volatile signed __int32 *)(g_OplockPerfData + 32));
      }
    }
    v3 = v4;
  }
LABEL_2:
  *a1 = 0LL;
  *v3 = 0;
  return (char)v1;
}
