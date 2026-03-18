/*
 * XREFs of ?LogMouseLatencyEvents@MousePerfSummary@@AEAAXAEBU_MousePerf@@@Z @ 0x1400D1DE0
 * Callers:
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1400D17BC (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333333@Z @ 0x14017C300 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPro.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall MousePerfSummary::LogMouseLatencyEvents(MousePerfSummary *this, const struct _MousePerf *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r10
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r11
  __int64 v12; // [rsp+80h] [rbp-88h] BYREF
  __int64 v13; // [rsp+88h] [rbp-80h] BYREF
  __int64 v14; // [rsp+90h] [rbp-78h] BYREF
  __int64 v15; // [rsp+98h] [rbp-70h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v17; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v18; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v21; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v22; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-10h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+100h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+118h] [rbp+10h] BYREF
  void *v30; // [rsp+128h] [rbp+20h]
  int v31; // [rsp+130h] [rbp+28h]
  int v32; // [rsp+134h] [rbp+2Ch]
  unsigned __int64 *v33; // [rsp+138h] [rbp+30h]
  __int64 v34; // [rsp+140h] [rbp+38h]
  __int64 *v35; // [rsp+148h] [rbp+40h]
  __int64 v36; // [rsp+150h] [rbp+48h]
  __int64 *v37; // [rsp+158h] [rbp+50h]
  __int64 v38; // [rsp+160h] [rbp+58h]
  __int64 *v39; // [rsp+168h] [rbp+60h]
  __int64 v40; // [rsp+170h] [rbp+68h]
  __int64 *v41; // [rsp+178h] [rbp+70h]
  __int64 v42; // [rsp+180h] [rbp+78h]
  __int64 *v43; // [rsp+188h] [rbp+80h]
  __int64 v44; // [rsp+190h] [rbp+88h]
  __int64 *v45; // [rsp+198h] [rbp+90h]
  __int64 v46; // [rsp+1A0h] [rbp+98h]
  __int64 *v47; // [rsp+1A8h] [rbp+A0h]
  __int64 v48; // [rsp+1B0h] [rbp+A8h]
  __int64 *v49; // [rsp+1B8h] [rbp+B0h]
  __int64 v50; // [rsp+1C0h] [rbp+B8h]
  __int64 *v51; // [rsp+1C8h] [rbp+C0h]
  __int64 v52; // [rsp+1D0h] [rbp+C8h]
  __int64 *v53; // [rsp+1D8h] [rbp+D0h]
  __int64 v54; // [rsp+1E0h] [rbp+D8h]
  __int64 *v55; // [rsp+1E8h] [rbp+E0h]
  __int64 v56; // [rsp+1F0h] [rbp+E8h]
  __int64 *v57; // [rsp+1F8h] [rbp+F0h]
  __int64 v58; // [rsp+200h] [rbp+F8h]
  __int64 *v59; // [rsp+208h] [rbp+100h]
  __int64 v60; // [rsp+210h] [rbp+108h]
  __int64 *v61; // [rsp+218h] [rbp+110h]
  __int64 v62; // [rsp+220h] [rbp+118h]
  __int64 *v63; // [rsp+228h] [rbp+120h]
  __int64 v64; // [rsp+230h] [rbp+128h]

  v4 = dword_1402A9E78;
  if ( (unsigned int)dword_1402A9E78 > 5 )
  {
    v5 = qword_1402A9E88;
    v6 = qword_1402A9E90;
    if ( (qword_1402A9E88 & 0x10) != 0 && (qword_1402A9E90 & 0x10) == qword_1402A9E90 )
    {
      v21 = *((_QWORD *)a2 + 8);
      v22 = *((_QWORD *)a2 + 7);
      v23 = *((_QWORD *)a2 + 4);
      v24 = *((_QWORD *)a2 + 3);
      v25 = *((_QWORD *)a2 + 2);
      v26 = *((_QWORD *)a2 + 1);
      v27 = *(_QWORD *)a2;
      v12 = *((_QWORD *)a2 + 6);
      v13 = *((_QWORD *)a2 + 5);
      v14 = *((_QWORD *)this + 59);
      v15 = *((_QWORD *)this + 58);
      v16 = *((_QWORD *)this + 57);
      v17 = *((_QWORD *)this + 52);
      v18 = *((_QWORD *)this + 51);
      v19 = *((_QWORD *)this + 50);
      v20 = *((int *)this + 122);
      v63 = &v21;
      v61 = &v22;
      v59 = &v23;
      v57 = &v24;
      v55 = &v25;
      v53 = &v26;
      v51 = &v27;
      v49 = &v12;
      v47 = &v13;
      v45 = &v14;
      v43 = &v15;
      v41 = &v16;
      v39 = &v17;
      v37 = &v18;
      v35 = &v19;
      v33 = &v20;
      v64 = 8LL;
      v62 = 8LL;
      v60 = 8LL;
      v58 = 8LL;
      v56 = 8LL;
      v54 = 8LL;
      v52 = 8LL;
      v50 = 8LL;
      v48 = 8LL;
      v46 = 8LL;
      v44 = 8LL;
      v42 = 8LL;
      v40 = 8LL;
      v38 = 8LL;
      v36 = 8LL;
      v34 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_1402A9E80;
      EventDescriptor.Keyword = 16LL;
      UserData.Size = *(unsigned __int16 *)off_1402A9E80;
      v30 = &unk_14028D2A1;
      UserData.Reserved = 2;
      v31 = 334;
      v32 = 1;
      EtwWriteTransfer(qword_1402A9E98, &EventDescriptor, 0LL, 0LL, 0x12u, &UserData);
      v6 = qword_1402A9E90;
      v5 = qword_1402A9E88;
      v4 = dword_1402A9E78;
    }
    if ( v4 > 5 && (v5 & 0x400000000000LL) != 0 && (v6 & 0x400000000000LL) == v6 )
    {
      v7 = *((int *)this + 122);
      if ( (_DWORD)v7 )
      {
        if ( (_DWORD)v7 != 1 )
          return;
        v8 = *((_QWORD *)this + 50);
        if ( *((_QWORD *)a2 + 2) )
          v10 = v8 + *((_QWORD *)this + 57);
        else
          v10 = *((_QWORD *)this + 50);
        v9 = *((_QWORD *)this + 58) + v10 + *((_QWORD *)this + 59);
      }
      else
      {
        v8 = *((_QWORD *)this + 50);
        v9 = *((_QWORD *)this + 51) + v8 + *((_QWORD *)this + 52);
      }
      if ( v9 >= 0xC350 )
      {
        if ( (v9 >= 0x3D090
           || (v11 = *((_QWORD *)this + 64)) != 0 && (unsigned __int64)(*((_QWORD *)a2 + 8) - v11) <= 0xF4240)
          && (v6 & 0x400000000000LL) == v6 )
        {
          v14 = v8;
          v19 = *((_QWORD *)this + 59);
          v18 = *((_QWORD *)this + 58);
          v17 = *((_QWORD *)this + 57);
          v16 = *((_QWORD *)this + 52);
          v15 = *((_QWORD *)this + 51);
          v20 = v9 / 0x3E8;
          v13 = v7;
          v12 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v9 / 0x3E8,
            (unsigned int)&unk_14028D0C2,
            v8,
            0,
            (__int64)&v12,
            (__int64)&v13,
            (__int64)&v14,
            (__int64)&v15,
            (__int64)&v16,
            (__int64)&v17,
            (__int64)&v18,
            (__int64)&v19,
            (__int64)&v20);
        }
        *((_QWORD *)this + 64) = *((_QWORD *)a2 + 8);
      }
    }
  }
}
