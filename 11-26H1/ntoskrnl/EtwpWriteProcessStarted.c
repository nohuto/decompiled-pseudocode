/*
 * XREFs of EtwpWriteProcessStarted @ 0x1409D0E30
 * Callers:
 *     EtwTraceProcess @ 0x1409D02D8 (EtwTraceProcess.c)
 * Callees:
 *     EtwWriteTransfer @ 0x140213010 (EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 *     PsGetProcessStartKey @ 0x14047D210 (PsGetProcessStartKey.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PsGetSessionCreateTime @ 0x1409D1144 (PsGetSessionCreateTime.c)
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
  const GUID *v11; // r9
  __int64 v12; // r10
  struct _LIST_ENTRY *Blink; // rcx
  int v14; // eax
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int SessionId; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  _DWORD v20[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 ProcessStartKey; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 Time; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  char *v28; // [rsp+98h] [rbp-70h]
  int v29; // [rsp+A0h] [rbp-68h]
  int v30; // [rsp+A4h] [rbp-64h]
  __int64 *v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  int *v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  int *v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  int *p_SessionId; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  _DWORD *v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  __int64 v41; // [rsp+F8h] [rbp-10h]
  _DWORD v42[2]; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 *p_ProcessStartKey; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  __int64 *v45; // [rsp+118h] [rbp+10h]
  __int64 v46; // [rsp+120h] [rbp+18h]
  __int64 *v47; // [rsp+128h] [rbp+20h]
  __int64 v48; // [rsp+130h] [rbp+28h]
  __int64 *p_Time; // [rsp+138h] [rbp+30h]
  __int64 v50; // [rsp+140h] [rbp+38h]
  int *v51; // [rsp+148h] [rbp+40h]
  __int64 v52; // [rsp+150h] [rbp+48h]
  _DWORD *v53; // [rsp+158h] [rbp+50h]
  __int64 v54; // [rsp+160h] [rbp+58h]
  _BYTE v55[16]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v56[16]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v57[16]; // [rsp+188h] [rbp+80h] BYREF
  struct _LIST_ENTRY *v58; // [rsp+198h] [rbp+90h]
  int v59; // [rsp+1A0h] [rbp+98h]
  int v60; // [rsp+1A4h] [rbp+9Ch]
  _DWORD *v61; // [rsp+1A8h] [rbp+A0h]
  __int64 v62; // [rsp+1B0h] [rbp+A8h]
  __int64 v63; // [rsp+1B8h] [rbp+B0h]
  _DWORD v64[2]; // [rsp+1C0h] [rbp+B8h] BYREF

  v5 = *(_QWORD *)(a1 + 848);
  v6 = &EmptyUnicodeString;
  if ( v5 )
    v6 = *(__int64 **)(a1 + 848);
  if ( (unsigned int)dword_140E08F40 > 5 && (qword_140E08F50 & 3) != 0 )
  {
    v5 = qword_140E08F58 & 3;
    if ( v5 == qword_140E08F58 )
    {
      v21 = *(_QWORD *)(a1 + 504);
      v31 = &v21;
      v16 = *(_DWORD *)(a1 + 464);
      v33 = &v16;
      v17 = *(_DWORD *)(a1 + 720);
      v35 = &v17;
      v32 = 8LL;
      v34 = 4LL;
      v36 = 4LL;
      SessionId = PsGetSessionId(a1);
      v38 = 4LL;
      p_SessionId = &SessionId;
      v42[1] = 0;
      v39 = v42;
      v41 = v6[1];
      v42[0] = *(unsigned __int16 *)v6;
      v40 = 2LL;
      ProcessStartKey = PsGetProcessStartKey(a1);
      p_ProcessStartKey = &ProcessStartKey;
      v23 = *(_QWORD *)(a1 + 1656);
      v45 = &v23;
      v24 = *(_QWORD *)(a1 + 1664);
      v47 = &v24;
      v44 = 8LL;
      v46 = 8LL;
      v48 = 8LL;
      Time = PsGetSessionCreateTime();
      v50 = 8LL;
      p_Time = &Time;
      v19 = *a2;
      v51 = &v19;
      v20[0] = a2[1];
      v53 = v20;
      v52 = 4LL;
      v54 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v55, a3 + 12);
      tlgCreate1Sz_wchar_t((__int64)v56, a3 + 140);
      tlgCreate1Sz_wchar_t((__int64)v57, a3 + 205);
      if ( a5 )
        Blink = *a5;
      else
        Blink = PspSiloMonitorLock.Header.WaitListHead.Blink;
      v14 = BYTE1(Blink->Flink);
      v58 = Blink;
      v60 = (int)v11;
      v62 = v12;
      v64[1] = (_DWORD)v11;
      v59 = 4 * v14 + 8;
      v61 = v64;
      v63 = *((_QWORD *)a4 + 1);
      v64[0] = *a4;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_140E08F48;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 3LL;
      UserData.Size = *(unsigned __int16 *)off_140E08F48;
      v28 = &byte_140054B7F;
      UserData.Reserved = v12;
      v29 = 245;
      v30 = 1;
      v20[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      LODWORD(v5) = EtwWriteTransfer(qword_140E08F60, &EventDescriptor, 0LL, v11, 0x14u, &UserData);
    }
  }
  return v5;
}
