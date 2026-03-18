/*
 * XREFs of EtwpWriteProcessStarted @ 0x140AB66AC
 * Callers:
 *     EtwTraceProcess @ 0x14096E118 (EtwTraceProcess.c)
 * Callees:
 *     EtwWriteTransfer @ 0x140212F30 (EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140437A60 (_tlgCreate1Sz_wchar_t.c)
 *     PsGetSessionId @ 0x140447280 (PsGetSessionId.c)
 *     PsGetProcessStartKey @ 0x1404838E0 (PsGetProcessStartKey.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PsGetSessionCreateTime @ 0x140AB69C0 (PsGetSessionCreateTime.c)
 */

int __fastcall EtwpWriteProcessStarted(
        __int64 a1,
        int *a2,
        const WCHAR *a3,
        unsigned __int16 *a4,
        struct _LIST_ENTRY **a5)
{
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v11; // rcx
  const GUID *v12; // r9
  __int64 v13; // r10
  struct _LIST_ENTRY *Blink; // rcx
  int v15; // eax
  int v17; // [rsp+38h] [rbp-D0h] BYREF
  int v18; // [rsp+3Ch] [rbp-CCh] BYREF
  int SessionId; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+44h] [rbp-C4h] BYREF
  _DWORD v21[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 ProcessStartKey; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h] BYREF
  __int64 Time; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  __int16 *v29; // [rsp+98h] [rbp-70h]
  int v30; // [rsp+A0h] [rbp-68h]
  int v31; // [rsp+A4h] [rbp-64h]
  __int64 *v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  int *v34; // [rsp+B8h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp-48h]
  int *v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  int *p_SessionId; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  _DWORD *v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  __int64 v42; // [rsp+F8h] [rbp-10h]
  _DWORD v43[2]; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 *p_ProcessStartKey; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  __int64 *v46; // [rsp+118h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+18h]
  __int64 *v48; // [rsp+128h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+28h]
  __int64 *p_Time; // [rsp+138h] [rbp+30h]
  __int64 v51; // [rsp+140h] [rbp+38h]
  int *v52; // [rsp+148h] [rbp+40h]
  __int64 v53; // [rsp+150h] [rbp+48h]
  _DWORD *v54; // [rsp+158h] [rbp+50h]
  __int64 v55; // [rsp+160h] [rbp+58h]
  _BYTE v56[16]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v57[16]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v58[16]; // [rsp+188h] [rbp+80h] BYREF
  struct _LIST_ENTRY *v59; // [rsp+198h] [rbp+90h]
  int v60; // [rsp+1A0h] [rbp+98h]
  int v61; // [rsp+1A4h] [rbp+9Ch]
  _DWORD *v62; // [rsp+1A8h] [rbp+A0h]
  __int64 v63; // [rsp+1B0h] [rbp+A8h]
  __int64 v64; // [rsp+1B8h] [rbp+B0h]
  _DWORD v65[2]; // [rsp+1C0h] [rbp+B8h] BYREF

  v5 = *(_QWORD *)(a1 + 848);
  v6 = &EmptyUnicodeString;
  if ( v5 )
    v6 = *(__int64 **)(a1 + 848);
  if ( (unsigned int)dword_140E08F80 > 5 && (qword_140E08F90 & 3) != 0 )
  {
    v5 = qword_140E08F98 & 3;
    if ( v5 == qword_140E08F98 )
    {
      v22 = *(_QWORD *)(a1 + 504);
      v32 = &v22;
      v17 = *(_DWORD *)(a1 + 464);
      v34 = &v17;
      v18 = *(_DWORD *)(a1 + 720);
      v36 = &v18;
      v33 = 8LL;
      v35 = 4LL;
      v37 = 4LL;
      SessionId = PsGetSessionId(a1);
      v39 = 4LL;
      p_SessionId = &SessionId;
      v43[1] = 0;
      v40 = v43;
      v42 = v6[1];
      v43[0] = *(unsigned __int16 *)v6;
      v41 = 2LL;
      ProcessStartKey = PsGetProcessStartKey(a1);
      p_ProcessStartKey = &ProcessStartKey;
      v24 = *(_QWORD *)(a1 + 1656);
      v46 = &v24;
      v25 = *(_QWORD *)(a1 + 1664);
      v48 = &v25;
      v45 = 8LL;
      v47 = 8LL;
      v49 = 8LL;
      Time = PsGetSessionCreateTime(v11);
      v51 = 8LL;
      p_Time = &Time;
      v20 = *a2;
      v52 = &v20;
      v21[0] = a2[1];
      v54 = v21;
      v53 = 4LL;
      v55 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v56, a3 + 12);
      tlgCreate1Sz_wchar_t((__int64)v57, a3 + 140);
      tlgCreate1Sz_wchar_t((__int64)v58, a3 + 205);
      if ( a5 )
        Blink = *a5;
      else
        Blink = PspSiloMonitorLock.Header.WaitListHead.Blink;
      v15 = BYTE1(Blink->Flink);
      v59 = Blink;
      v61 = (int)v12;
      v63 = v13;
      v65[1] = (_DWORD)v12;
      v60 = 4 * v15 + 8;
      v62 = v65;
      v64 = *((_QWORD *)a4 + 1);
      v65[0] = *a4;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_140E08F88;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 3LL;
      UserData.Size = *(unsigned __int16 *)off_140E08F88;
      v29 = word_14005415A;
      UserData.Reserved = v13;
      v30 = 245;
      v31 = 1;
      v21[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      LODWORD(v5) = EtwWriteTransfer(qword_140E08FA0, &EventDescriptor, 0LL, v12, 0x14u, &UserData);
    }
  }
  return v5;
}
