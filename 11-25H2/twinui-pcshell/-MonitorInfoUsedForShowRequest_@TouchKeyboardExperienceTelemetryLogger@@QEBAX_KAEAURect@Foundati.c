/*
 * XREFs of ?MonitorInfoUsedForShowRequest_@TouchKeyboardExperienceTelemetryLogger@@QEBAX_KAEAURect@Foundation@Windows@@I01I01I_N2@Z @ 0x180095E80
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180094F90 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForShowRequest_(
        TouchKeyboardExperienceTelemetryLogger *this,
        __int64 a2,
        struct Windows::Foundation::Rect *a3,
        int a4,
        unsigned __int64 a5,
        struct Windows::Foundation::Rect *a6,
        unsigned int a7,
        unsigned __int64 a8,
        struct Windows::Foundation::Rect *a9,
        unsigned int a10,
        bool a11,
        bool a12)
{
  const struct _tlgProvider_t *v15; // rax
  bool v16; // [rsp+38h] [rbp-D0h] BYREF
  bool v17; // [rsp+39h] [rbp-CFh] BYREF
  unsigned int v18; // [rsp+3Ch] [rbp-CCh] BYREF
  int v19; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+44h] [rbp-C4h] BYREF
  int v21; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v23; // [rsp+50h] [rbp-B8h] BYREF
  int v24; // [rsp+54h] [rbp-B4h] BYREF
  int v25; // [rsp+58h] [rbp-B0h] BYREF
  int v26; // [rsp+5Ch] [rbp-ACh] BYREF
  int v27; // [rsp+60h] [rbp-A8h] BYREF
  int v28; // [rsp+64h] [rbp-A4h] BYREF
  int v29; // [rsp+68h] [rbp-A0h] BYREF
  int v30; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v31; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v32[3]; // [rsp+74h] [rbp-94h] BYREF
  unsigned __int64 v33; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v34; // [rsp+88h] [rbp-80h] BYREF
  __int64 v35; // [rsp+90h] [rbp-78h] BYREF
  __int64 v36; // [rsp+98h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  void *v39; // [rsp+C8h] [rbp-40h]
  int v40; // [rsp+D0h] [rbp-38h]
  int v41; // [rsp+D4h] [rbp-34h]
  __int64 *v42; // [rsp+D8h] [rbp-30h]
  __int64 v43; // [rsp+E0h] [rbp-28h]
  __int64 *v44; // [rsp+E8h] [rbp-20h]
  __int64 v45; // [rsp+F0h] [rbp-18h]
  _DWORD *v46; // [rsp+F8h] [rbp-10h]
  __int64 v47; // [rsp+100h] [rbp-8h]
  int *v48; // [rsp+108h] [rbp+0h]
  __int64 v49; // [rsp+110h] [rbp+8h]
  int *v50; // [rsp+118h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+18h]
  int *v52; // [rsp+128h] [rbp+20h]
  __int64 v53; // [rsp+130h] [rbp+28h]
  int *v54; // [rsp+138h] [rbp+30h]
  __int64 v55; // [rsp+140h] [rbp+38h]
  unsigned __int64 *v56; // [rsp+148h] [rbp+40h]
  __int64 v57; // [rsp+150h] [rbp+48h]
  int *v58; // [rsp+158h] [rbp+50h]
  __int64 v59; // [rsp+160h] [rbp+58h]
  int *v60; // [rsp+168h] [rbp+60h]
  __int64 v61; // [rsp+170h] [rbp+68h]
  int *v62; // [rsp+178h] [rbp+70h]
  __int64 v63; // [rsp+180h] [rbp+78h]
  int *v64; // [rsp+188h] [rbp+80h]
  __int64 v65; // [rsp+190h] [rbp+88h]
  unsigned int *v66; // [rsp+198h] [rbp+90h]
  __int64 v67; // [rsp+1A0h] [rbp+98h]
  unsigned __int64 *v68; // [rsp+1A8h] [rbp+A0h]
  __int64 v69; // [rsp+1B0h] [rbp+A8h]
  int *v70; // [rsp+1B8h] [rbp+B0h]
  __int64 v71; // [rsp+1C0h] [rbp+B8h]
  int *v72; // [rsp+1C8h] [rbp+C0h]
  __int64 v73; // [rsp+1D0h] [rbp+C8h]
  int *v74; // [rsp+1D8h] [rbp+D0h]
  __int64 v75; // [rsp+1E0h] [rbp+D8h]
  int *v76; // [rsp+1E8h] [rbp+E0h]
  __int64 v77; // [rsp+1F0h] [rbp+E8h]
  unsigned int *v78; // [rsp+1F8h] [rbp+F0h]
  __int64 v79; // [rsp+200h] [rbp+F8h]
  bool *v80; // [rsp+208h] [rbp+100h]
  __int64 v81; // [rsp+210h] [rbp+108h]
  bool *v82; // [rsp+218h] [rbp+110h]
  __int64 v83; // [rsp+220h] [rbp+118h]

  v15 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v15 > 5u )
  {
    v16 = a12;
    v17 = a11;
    v21 = *((_DWORD *)a9 + 1);
    v22 = *(_DWORD *)a9;
    v33 = a8;
    v23 = a7;
    v18 = a10;
    v19 = *((_DWORD *)a9 + 3);
    v20 = *((_DWORD *)a9 + 2);
    v28 = a4;
    v35 = a2;
    v36 = 0x1000000LL;
    v24 = *((_DWORD *)a6 + 3);
    v25 = *((_DWORD *)a6 + 2);
    v26 = *((_DWORD *)a6 + 1);
    v27 = *(_DWORD *)a6;
    v34 = a5;
    v29 = *((_DWORD *)a3 + 3);
    v30 = *((_DWORD *)a3 + 2);
    v31 = *((_DWORD *)a3 + 1);
    v32[0] = *(_DWORD *)a3;
    v82 = &v16;
    v80 = &v17;
    v78 = &v18;
    v76 = &v19;
    v74 = &v20;
    v72 = &v21;
    v70 = &v22;
    v68 = &v33;
    v66 = &v23;
    v64 = &v24;
    v62 = &v25;
    v60 = &v26;
    v58 = &v27;
    v83 = 1LL;
    v81 = 1LL;
    v79 = 4LL;
    v77 = 4LL;
    v75 = 4LL;
    v73 = 4LL;
    v71 = 4LL;
    v69 = 8LL;
    v67 = 4LL;
    v65 = 4LL;
    v63 = 4LL;
    v61 = 4LL;
    v59 = 4LL;
    v56 = &v34;
    v57 = 8LL;
    v54 = &v28;
    v55 = 4LL;
    v52 = &v29;
    v50 = &v30;
    v48 = &v31;
    v46 = v32;
    v44 = &v35;
    v42 = &v36;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v15 + 1);
    v53 = 4LL;
    v51 = 4LL;
    v49 = 4LL;
    v47 = 4LL;
    v45 = 8LL;
    v43 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v39 = &unk_1807D9456;
    v41 = 1;
    UserData.Reserved = 2;
    v40 = 368;
    v32[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v15 + 4), &EventDescriptor, 0LL, 0LL, 0x17u, &UserData);
  }
}
