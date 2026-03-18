/*
 * XREFs of rimOnPnpArrived @ 0x140181640
 * Callers:
 *     RIMDoOnPnpNotification @ 0x140113F30 (RIMDoOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x14012C380 (RIMDirectStartStopDeviceRead.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1401D9660 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401D9BA0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140004DC4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     RIMQueryDev @ 0x14002E9E8 (RIMQueryDev.c)
 *     RIMDeliverDeviceResetRequest @ 0x140032DCC (RIMDeliverDeviceResetRequest.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     RIMStartDeviceSpecificRead @ 0x140033FDC (RIMStartDeviceSpecificRead.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetDeviceObjectPointer @ 0x14007A964 (RIMGetDeviceObjectPointer.c)
 *     RimDeviceTypeToRimInputType @ 0x140099344 (RimDeviceTypeToRimInputType.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1400ED4D4 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqS @ 0x1401162E0 (WPP_RECORDER_AND_TRACE_SF_qqS.c)
 *     RIMIsRawInputActive @ 0x1401172AC (RIMIsRawInputActive.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x140135188 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     RIMCloseDev @ 0x14013F5A8 (RIMCloseDev.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x140140134 (RIMRegisterForDeviceChangeNotifications.c)
 *     RawInputManagerDeviceObjectReference @ 0x1401806B0 (RawInputManagerDeviceObjectReference.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIsTestSigningOn @ 0x14019F5D4 (RIMIsTestSigningOn.c)
 *     RIMFreeDev @ 0x1401D5288 (RIMFreeDev.c)
 *     RIMOpenDev @ 0x1401D57E0 (RIMOpenDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqqS @ 0x1401ECC10 (WPP_RECORDER_AND_TRACE_SF_dqqS.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall rimOnPnpArrived(__int64 a1, __int64 a2, void *a3)
{
  __int64 v4; // rdi
  char v6; // si
  char v7; // bl
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  char v12; // bl
  bool v13; // r14
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // r14d
  __int64 v21; // r8
  PVOID v22; // rbx
  PVOID *v23; // r15
  int v24; // eax
  __int64 v25; // rdx
  bool v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  bool v31; // r15
  __int64 v32; // rbx
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  void *v36; // rcx
  int v37; // r8d
  int v38; // r14d
  __int64 v39; // rax
  char v40; // r15
  char v41; // r12
  const wchar_t *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // r8
  void *v45; // rcx
  int v46; // ebx
  void *v47; // rcx
  int v48; // edx
  unsigned int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // r9
  __int64 v52; // rdx
  char v53; // bl
  bool v54; // r15
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  unsigned int v58; // eax
  int v59; // ecx
  __int64 v60; // rdx
  char v61; // r15
  char v62; // r12
  const wchar_t *v63; // rbx
  __int64 v64; // rax
  int v65; // edx
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // eax
  int v69; // [rsp+20h] [rbp-79h]
  int v70; // [rsp+20h] [rbp-79h]
  int v71; // [rsp+20h] [rbp-79h]
  int v72; // [rsp+20h] [rbp-79h]
  int HandleInformation; // [rsp+28h] [rbp-71h]
  int HandleInformationa; // [rsp+28h] [rbp-71h]
  int v75; // [rsp+38h] [rbp-61h]
  PVOID v76; // [rsp+60h] [rbp-39h] BYREF
  PVOID Object; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v78[6]; // [rsp+70h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+7h] BYREF
  int v80; // [rsp+A8h] [rbp+Fh]

  v4 = a2;
  v6 = 1;
  if ( (*(_DWORD *)(a2 + 168) & 1) == 0 )
  {
    LODWORD(v76) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 334LL);
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      18,
      (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids);
  }
  *(_DWORD *)(v4 + 168) &= ~1u;
  if ( (*(_DWORD *)(v4 + 168) & 0x40) == 0 )
  {
    v18 = *(unsigned int *)(v4 + 48);
    if ( (_DWORD)v18 == 3 )
    {
      v76 = 0LL;
      Object = 0LL;
      Handle = 0LL;
      v20 = RIMGetDeviceObjectPointer(
              (struct _UNICODE_STRING *)(v4 + 192),
              a2,
              (__int64)a3,
              &Handle,
              &v76,
              (PDEVICE_OBJECT *)&Object);
      if ( v20 < 0 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v6 = 0;
        }
        v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v32 = *(_QWORD *)(v4 + 200);
          v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
          LOBYTE(v34) = v31;
          LOBYTE(v35) = v6;
          WPP_RECORDER_AND_TRACE_SF_dqqS(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v35,
            v34,
            *(_QWORD *)(v33 + 19336),
            v70,
            HandleInformationa,
            21,
            v75,
            v20,
            a1,
            v4,
            v32);
        }
        v23 = (PVOID *)(v4 + 232);
      }
      else
      {
        ObfReferenceObject(Object);
        v22 = v76;
        *(_QWORD *)(v4 + 216) = v76;
        if ( !*(_QWORD *)(a1 + 120) )
        {
          LODWORD(v76) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 373LL);
        }
        v23 = (PVOID *)(v4 + 232);
        v24 = RIMRegisterForDeviceChangeNotifications(
                v4,
                *(struct _DRIVER_OBJECT **)(a1 + 120),
                v21,
                (void *)v4,
                (PVOID *)(v4 + 232));
        *(_QWORD *)(v4 + 216) = 0LL;
        v20 = v24;
        ObfDereferenceObject(v22);
        ObfDereferenceObject(Object);
        ZwClose(Handle);
        if ( v20 < 0 )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
          {
            v6 = 0;
          }
          v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v27 = *(_QWORD *)(v4 + 200);
            v28 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
            LOBYTE(v29) = v26;
            LOBYTE(v30) = v6;
            WPP_RECORDER_AND_TRACE_SF_dqqS(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v30,
              v29,
              *(_QWORD *)(v28 + 19336),
              v71,
              HandleInformationa,
              20,
              v75,
              v20,
              a1,
              v4,
              v27);
          }
        }
        else
        {
          v20 = RawInputManagerDeviceObjectReference(*(void **)(v4 + 32));
        }
        if ( v20 >= 0 )
          return (unsigned int)v20;
      }
      if ( *v23 )
      {
        v20 = IoUnregisterPlugPlayNotification(*v23);
        if ( v20 < 0 )
        {
          LODWORD(v76) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 418LL);
        }
        v36 = *(void **)(v4 + 32);
        *v23 = 0LL;
        ObfDereferenceObject(v36);
      }
      RIMCloseDev(v4);
      RIMFreeDev((struct RawInputManagerObject *)a1, (struct RIMDEV *)v4);
      return (unsigned int)v20;
    }
    if ( a3 == (void *)-1LL )
    {
      v78[0] = 48LL;
      v78[3] = 512LL;
      v78[2] = v4 + 192;
      v78[5] = &Handle;
      v37 = 1048577;
      v80 = 257;
      v38 = 2;
      v78[1] = 0LL;
      v78[4] = 0LL;
      Handle = (HANDLE)0x20000000CLL;
      if ( (_DWORD)v18 == 2 )
      {
        LODWORD(v76) = 1048579;
        if ( (*(_DWORD *)(v4 + 184) & 0x200) != 0 )
        {
          v38 = (unsigned int)RIMIsTestSigningOn(v18, 2LL, 1048577LL) != 0 ? 3 : 0;
        }
        else
        {
          v39 = *(_QWORD *)(v4 + 456);
          if ( !v39 || *(_DWORD *)(v39 + 24) == 6 )
          {
            v38 = 3;
          }
          else
          {
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v40 = 0;
            }
            v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v42 = *(const wchar_t **)(v4 + 200);
              v43 = W32GetUserSessionState(WPP_GLOBAL_Control, 2LL);
              WPP_RECORDER_AND_TRACE_SF_qqS(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v40,
                v41,
                *(_QWORD *)(v43 + 19336),
                v69,
                HandleInformation,
                0x16u,
                v75,
                a1,
                v4,
                v42);
            }
          }
        }
        v37 = (int)v76;
      }
      v20 = RIMOpenDev(v4, (unsigned int)v78, v37, v38, v69);
      if ( v20 < 0 )
        goto LABEL_62;
    }
    else
    {
      Handle = 0LL;
      v20 = ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Handle, 0LL);
      *(_QWORD *)(v4 + 216) = Handle;
      if ( v20 < 0 )
        goto LABEL_62;
      *(_DWORD *)(v4 + 168) |= 0x40000u;
      *(_QWORD *)(v4 + 208) = a3;
    }
    if ( *(_DWORD *)(v4 + 48) == 2 || (v20 = RIMQueryDev(a1, v4), v20 >= 0) )
    {
      if ( (*(_DWORD *)(v4 + 168) & 0x20) != 0 || *(_QWORD *)(v4 + 232) )
        goto LABEL_89;
      if ( !*(_QWORD *)(a1 + 120) )
      {
        LODWORD(v76) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 523LL);
      }
      v20 = RIMRegisterForDeviceChangeNotifications(
              v4,
              *(struct _DRIVER_OBJECT **)(a1 + 120),
              v44,
              (void *)v4,
              (PVOID *)(v4 + 232));
      if ( v20 >= 0 )
      {
        v20 = RawInputManagerDeviceObjectReference(*(void **)(v4 + 32));
        if ( v20 >= 0 )
        {
LABEL_89:
          RIMDeliverDeviceResetRequest((char *)v4);
          v58 = *(_DWORD *)(v4 + 168) & 0xFFFFFBFF;
          *(_DWORD *)(v4 + 168) = v58;
          if ( *(_DWORD *)(v4 + 48) != 2
            || (v59 = *(_DWORD *)(v4 + 184), (v59 & 0x80u) != 0)
            || (v59 & 0x100) != 0
            || (v59 & 0x200) != 0
            || (v58 & 0x10000) != 0
            || (unsigned int)RIMIsRawInputActive(v4) )
          {
            RIMLockExclusive(a1 + 760);
            v68 = *(_DWORD *)(v4 + 80);
            if ( (v68 & 1) != 0 )
              *(_DWORD *)(v4 + 80) = v68 | 2;
            else
              RIMStartDeviceSpecificRead(a1, v4);
            RIMUnlockExclusive(a1 + 760);
          }
          else
          {
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v61 = 0;
            }
            v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v63 = *(const wchar_t **)(v4 + 200);
              v64 = W32GetUserSessionState(WPP_GLOBAL_Control, v60);
              WPP_RECORDER_AND_TRACE_SF_qqS(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v61,
                v62,
                *(_QWORD *)(v64 + 19336),
                v72,
                HandleInformation,
                0x17u,
                v75,
                a1,
                v4,
                v63);
            }
            RIMCloseDev(v4);
            if ( *(_QWORD *)(v4 + 232)
              && (unsigned int)dword_14029EF38 > 5
              && tlgKeywordOn((__int64)&dword_14029EF38, 0x400000000000LL) )
            {
              v65 = *(_DWORD *)(v4 + 48);
              Handle = *(HANDLE *)(v4 + 200);
              LODWORD(v76) = RimDeviceTypeToRimInputType(v4, v65);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                (__int64)&dword_14029EF38,
                byte_14027B676,
                v66,
                v67,
                (__int64)&v76,
                (const WCHAR **)&Handle);
            }
          }
          goto LABEL_70;
        }
      }
    }
LABEL_62:
    v45 = *(void **)(v4 + 232);
    v46 = v20;
    if ( v45 )
    {
      v20 = IoUnregisterPlugPlayNotification(v45);
      if ( v20 < 0 )
      {
        LODWORD(v76) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 628LL);
      }
      v47 = *(void **)(v4 + 32);
      *(_QWORD *)(v4 + 232) = 0LL;
      ObfDereferenceObject(v47);
    }
    if ( (unsigned int)dword_14029EF38 > 5 && tlgKeywordOn((__int64)&dword_14029EF38, 0x400000000000LL) )
    {
      v48 = *(_DWORD *)(v4 + 48);
      LODWORD(v76) = v46;
      v49 = RimDeviceTypeToRimInputType(v4, v48);
      Object = *(PVOID *)(v4 + 200);
      Handle = (HANDLE)v49;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v50,
        (__int64)&unk_14027B625,
        v49,
        v51,
        (const WCHAR **)&Object,
        (__int64)&Handle,
        (__int64)&v76);
    }
    RIMCloseDev(v4);
    RIMFreeDev((struct RawInputManagerObject *)a1, (struct RIMDEV *)v4);
    LOBYTE(v4) = 0;
LABEL_70:
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v53 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v53 = 0;
    }
    v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v53 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v55 = W32GetUserSessionState(WPP_GLOBAL_Control, v52);
      LOBYTE(v56) = v54;
      LOBYTE(v57) = v53;
      WPP_RECORDER_AND_TRACE_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v57,
        v56,
        *(_QWORD *)(v55 + 19336),
        4,
        1,
        24,
        (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids,
        a1,
        v4,
        v20);
    }
    return (unsigned int)v20;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v12 = 0;
  }
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v15) = v13;
    LOBYTE(v16) = v12;
    WPP_RECORDER_AND_TRACE_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v15,
      *(_QWORD *)(v14 + 19336),
      4,
      1,
      19,
      (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids,
      a1,
      v4,
      0);
  }
  return 0LL;
}
