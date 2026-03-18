/*
 * XREFs of rimOnPnpArrived @ 0x140093AC0
 * Callers:
 *     RIMDoOnPnpNotification @ 0x140091548 (RIMDoOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x140095B60 (RIMDirectStartStopDeviceRead.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401A4390 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1402006B0 (RIMAddNonPnpDeviceOfType.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140002904 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RIMDeliverDeviceResetRequest @ 0x14005B0E0 (RIMDeliverDeviceResetRequest.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x14006E614 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     RIMFreeDev @ 0x140092664 (RIMFreeDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqS @ 0x140092F6C (WPP_RECORDER_AND_TRACE_SF_qqS.c)
 *     RIMCloseDev @ 0x1400933FC (RIMCloseDev.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x140093704 (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMOpenDev @ 0x1400944B4 (RIMOpenDev.c)
 *     RIMQueryDev @ 0x140094624 (RIMQueryDev.c)
 *     RawInputManagerDeviceObjectReference @ 0x1400955E0 (RawInputManagerDeviceObjectReference.c)
 *     RimDeviceTypeToRimInputType @ 0x140096120 (RimDeviceTypeToRimInputType.c)
 *     RIMIsRawInputActive @ 0x1400961C4 (RIMIsRawInputActive.c)
 *     RIMStartDeviceSpecificRead @ 0x1400996FC (RIMStartDeviceSpecificRead.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     RIMGetDeviceObjectPointer @ 0x1400F2B34 (RIMGetDeviceObjectPointer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x14017009C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIsTestSigningOn @ 0x1401C0140 (RIMIsTestSigningOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqqS @ 0x14020B520 (WPP_RECORDER_AND_TRACE_SF_dqqS.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
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
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r14d
  __int64 v15; // r8
  int v16; // r14d
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // r8d
  char v22; // bl
  char v23; // r15
  void *v25; // rcx
  int v26; // ebx
  __int64 v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r9
  char v31; // bl
  char v32; // r14
  int v33; // edx
  int v34; // r8d
  char v35; // r15
  char v36; // r12
  const wchar_t *v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // edx
  int v45; // r8d
  __int64 v46; // r8
  PVOID v47; // rbx
  PVOID *v48; // r15
  int v49; // eax
  int v50; // edx
  int v51; // r8d
  bool v52; // r12
  __int64 v53; // rbx
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  bool v57; // r15
  __int64 v58; // rbx
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  void *v62; // rcx
  __int64 v63; // rax
  char v64; // r15
  char v65; // r12
  const wchar_t *v66; // rbx
  __int64 v67; // rax
  void *v68; // rcx
  int Object; // [rsp+20h] [rbp-79h]
  int Objecta; // [rsp+20h] [rbp-79h]
  int Objectb; // [rsp+20h] [rbp-79h]
  int Objectc; // [rsp+20h] [rbp-79h]
  int HandleInformation; // [rsp+28h] [rbp-71h]
  int HandleInformationa; // [rsp+28h] [rbp-71h]
  int v75; // [rsp+38h] [rbp-61h]
  __int64 v76; // [rsp+50h] [rbp-49h]
  PVOID v77; // [rsp+60h] [rbp-39h] BYREF
  PVOID v78; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v79[6]; // [rsp+70h] [rbp-29h] BYREF
  PVOID Handle; // [rsp+A0h] [rbp+7h] BYREF
  int v81; // [rsp+A8h] [rbp+Fh]

  v4 = a2;
  v6 = 1;
  if ( (*(_DWORD *)(a2 + 168) & 1) == 0 )
  {
    LODWORD(v77) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 339LL);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, (_DWORD)a3);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      18,
      (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids);
  }
  *(_DWORD *)(v4 + 168) &= ~1u;
  if ( (*(_DWORD *)(v4 + 168) & 0x40) == 0 )
  {
    v12 = *(unsigned int *)(v4 + 48);
    if ( (_DWORD)v12 == 3 )
    {
      v77 = 0LL;
      v78 = 0LL;
      Handle = 0LL;
      v16 = RIMGetDeviceObjectPointer(
              (int)v4 + 192,
              a2,
              (_DWORD)a3,
              (unsigned int)&Handle,
              (__int64)&v77,
              (__int64)&v78);
      if ( v16 < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v6 = 0;
        }
        v57 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v58 = *(_QWORD *)(v4 + 200);
          v59 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v44, v45);
          LOBYTE(v60) = v57;
          LOBYTE(v61) = v6;
          WPP_RECORDER_AND_TRACE_SF_dqqS(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v61,
            v60,
            *(_QWORD *)(v59 + 19368),
            Objectb,
            HandleInformationa,
            21,
            v75,
            v16,
            a1,
            v4,
            v58);
        }
        v48 = (PVOID *)(v4 + 232);
      }
      else
      {
        ObfReferenceObject(v78);
        v47 = v77;
        *(_QWORD *)(v4 + 216) = v77;
        if ( !*(_QWORD *)(a1 + 120) )
        {
          LODWORD(v77) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 378LL);
        }
        v48 = (PVOID *)(v4 + 232);
        v49 = RIMRegisterForDeviceChangeNotifications(
                v4,
                *(struct _DRIVER_OBJECT **)(a1 + 120),
                v46,
                (void *)v4,
                (PVOID *)(v4 + 232));
        *(_QWORD *)(v4 + 216) = 0LL;
        v16 = v49;
        ObfDereferenceObject(v47);
        ObfDereferenceObject(v78);
        ZwClose(Handle);
        if ( v16 < 0 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
          {
            v6 = 0;
          }
          v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v53 = *(_QWORD *)(v4 + 200);
            v54 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v50, v51);
            LOBYTE(v55) = v52;
            LOBYTE(v56) = v6;
            WPP_RECORDER_AND_TRACE_SF_dqqS(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v56,
              v55,
              *(_QWORD *)(v54 + 19368),
              Objectc,
              HandleInformationa,
              20,
              v75,
              v16,
              a1,
              v4,
              v53);
          }
        }
        else
        {
          v16 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v4 + 32));
        }
        if ( v16 >= 0 )
          return (unsigned int)v16;
      }
      if ( *v48 )
      {
        v16 = IoUnregisterPlugPlayNotification(*v48);
        if ( v16 < 0 )
        {
          LODWORD(v77) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 423LL);
        }
        v62 = *(void **)(v4 + 32);
        *v48 = 0LL;
        ObfDereferenceObject(v62);
      }
      RIMCloseDev(v4);
      RIMFreeDev((struct RawInputManagerObject *)a1, (struct RIMDEV *)v4);
      return (unsigned int)v16;
    }
    if ( a3 == (void *)-1LL )
    {
      v79[0] = 48LL;
      v79[3] = 512LL;
      v79[2] = v4 + 192;
      v79[5] = &Handle;
      v13 = 1048577;
      v81 = 257;
      v14 = 2;
      v79[1] = 0LL;
      v79[4] = 0LL;
      Handle = (PVOID)0x20000000CLL;
      if ( (_DWORD)v12 == 2 )
      {
        LODWORD(v77) = 1048579;
        if ( (*(_DWORD *)(v4 + 184) & 0x200) != 0 )
        {
          v14 = (unsigned int)RIMIsTestSigningOn(v12, 2LL, 1048577LL) != 0 ? 3 : 0;
        }
        else
        {
          v63 = *(_QWORD *)(v4 + 456);
          if ( !v63 || *(_DWORD *)(v63 + 24) == 6 )
          {
            v14 = 3;
          }
          else
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v64 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v64 = 0;
            }
            v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v64 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v66 = *(const wchar_t **)(v4 + 200);
              v67 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 2, 1048577);
              WPP_RECORDER_AND_TRACE_SF_qqS(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v64,
                v65,
                *(_QWORD *)(v67 + 19368),
                Object,
                HandleInformation,
                0x16u,
                v75,
                a1,
                v4,
                v66);
            }
          }
        }
        v13 = (int)v77;
      }
      v16 = RIMOpenDev(v4, (unsigned int)v79, v13, v14, Object);
      if ( v16 < 0 )
        goto LABEL_37;
    }
    else
    {
      Handle = 0LL;
      v16 = ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Handle, 0LL);
      *(_QWORD *)(v4 + 216) = Handle;
      if ( v16 < 0 )
        goto LABEL_37;
      *(_DWORD *)(v4 + 168) |= 0x40000u;
      *(_QWORD *)(v4 + 208) = a3;
    }
    if ( *(_DWORD *)(v4 + 48) == 2 || (v16 = RIMQueryDev(a1), v16 >= 0) )
    {
      if ( (*(_DWORD *)(v4 + 168) & 0x20) != 0 || *(_QWORD *)(v4 + 232) )
        goto LABEL_21;
      if ( !*(_QWORD *)(a1 + 120) )
      {
        LODWORD(v77) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 528LL);
      }
      v16 = RIMRegisterForDeviceChangeNotifications(
              v4,
              *(struct _DRIVER_OBJECT **)(a1 + 120),
              v15,
              (void *)v4,
              (PVOID *)(v4 + 232));
      if ( v16 >= 0 )
      {
        v16 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v4 + 32));
        if ( v16 >= 0 )
        {
LABEL_21:
          RIMDeliverDeviceResetRequest((char *)v4);
          v17 = *(_DWORD *)(v4 + 168) & 0xFFFFFBFF;
          *(_DWORD *)(v4 + 168) = v17;
          if ( *(_DWORD *)(v4 + 48) != 2
            || (v18 = *(_DWORD *)(v4 + 184), (v18 & 0x80u) != 0)
            || (v18 & 0x100) != 0
            || (v18 & 0x200) != 0
            || (v17 & 0x10000) != 0
            || (unsigned int)RIMIsRawInputActive(v4) )
          {
            RIMLockExclusive(a1 + 760);
            v19 = *(_DWORD *)(v4 + 80);
            if ( (v19 & 1) != 0 )
              *(_DWORD *)(v4 + 80) = v19 | 2;
            else
              RIMStartDeviceSpecificRead(a1, v4);
            RIMUnlockExclusive(a1 + 760);
          }
          else
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v35 = 0;
            }
            v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v37 = *(const wchar_t **)(v4 + 200);
              v38 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v33, v34);
              WPP_RECORDER_AND_TRACE_SF_qqS(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v35,
                v36,
                *(_QWORD *)(v38 + 19368),
                Objecta,
                HandleInformation,
                0x17u,
                v75,
                a1,
                v4,
                v37);
            }
            RIMCloseDev(v4);
            if ( *(_QWORD *)(v4 + 232)
              && (unsigned int)dword_1402A9F58 > 5
              && (unsigned __int8)tlgKeywordOn(&dword_1402A9F58, 0x400000000000LL) )
            {
              v39 = *(unsigned int *)(v4 + 48);
              Handle = *(PVOID *)(v4 + 200);
              LODWORD(v77) = RimDeviceTypeToRimInputType(v4, v39);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                (unsigned int)&dword_1402A9F58,
                (unsigned int)&unk_140285ABE,
                v40,
                v41,
                (__int64)&v77,
                (__int64)&Handle);
            }
          }
          goto LABEL_29;
        }
      }
    }
LABEL_37:
    v25 = *(void **)(v4 + 232);
    v26 = v16;
    if ( v25 )
    {
      v16 = IoUnregisterPlugPlayNotification(v25);
      if ( v16 < 0 )
      {
        LODWORD(v77) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 633LL);
      }
      v68 = *(void **)(v4 + 32);
      *(_QWORD *)(v4 + 232) = 0LL;
      ObfDereferenceObject(v68);
    }
    if ( (unsigned int)dword_1402A9F58 > 5
      && (qword_1402A9F68 & 0x400000000000LL) != 0
      && (qword_1402A9F70 & 0x400000000000LL) == qword_1402A9F70 )
    {
      v27 = *(unsigned int *)(v4 + 48);
      LODWORD(v77) = v26;
      v28 = RimDeviceTypeToRimInputType(v4, v27);
      v78 = *(PVOID *)(v4 + 200);
      Handle = (PVOID)v28;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v29,
        (__int64)&unk_140285A6D,
        v28,
        v30,
        (const WCHAR **)&v78,
        (__int64)&Handle,
        (__int64)&v77);
    }
    RIMCloseDev(v4);
    RIMFreeDev((struct RawInputManagerObject *)a1, (struct RIMDEV *)v4);
    v4 = 0LL;
LABEL_29:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v22 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v42 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v20, v21);
      LODWORD(v76) = v16;
      WPP_RECORDER_AND_TRACE_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v23,
        *(_QWORD *)(v42 + 19368),
        4u,
        1u,
        0x18u,
        (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
        a1,
        v4,
        v76);
    }
    return (unsigned int)v16;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v31 = 0;
  }
  v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v43 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, (_DWORD)a3);
    WPP_RECORDER_AND_TRACE_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v31,
      v32,
      *(_QWORD *)(v43 + 19368),
      4u,
      1u,
      0x13u,
      (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
      a1,
      v4,
      0);
  }
  return 0LL;
}
