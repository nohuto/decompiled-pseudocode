/*
 * XREFs of RIMCreateDev @ 0x1400916DC
 * Callers:
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x14009050C (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401A4390 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDiscoverSpecificDevice @ 0x1401BC738 (RIMDiscoverSpecificDevice.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401FFA30 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1402006B0 (RIMAddNonPnpDeviceOfType.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     rimCreateDev @ 0x14005FF5C (rimCreateDev.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMCreateHidDesc @ 0x1400780EC (RIMCreateHidDesc.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x140092208 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x140092458 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     rimDoRimDevChange @ 0x140096D74 (rimDoRimDevChange.c)
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x140096FAC (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMIsCurrentProcessTrusted @ 0x1400D7D30 (RIMIsCurrentProcessTrusted.c)
 *     RIMPopulateExtendedKeyboardDeviceProperties @ 0x1400EC170 (RIMPopulateExtendedKeyboardDeviceProperties.c)
 *     RIMPopulateExtendedMouseDeviceProperties @ 0x1400EDD70 (RIMPopulateExtendedMouseDeviceProperties.c)
 *     RIMLoadDeviceLegacyInfo @ 0x1400EDEFC (RIMLoadDeviceLegacyInfo.c)
 *     RIMGetDeviceParent @ 0x1400EE228 (RIMGetDeviceParent.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400F074C (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMFreeSpecificDevWorker @ 0x140131EEC (RIMFreeSpecificDevWorker.c)
 *     rimDereferenceDev @ 0x14013217C (rimDereferenceDev.c)
 *     RIMGetMouseDeviceHardwareId @ 0x14016ECEC (RIMGetMouseDeviceHardwareId.c)
 *     RIMFindSiblingPointerDeviceForMouseWorker @ 0x14017B7F0 (RIMFindSiblingPointerDeviceForMouseWorker.c)
 *     RIMFindInputDeviceForConfig @ 0x14017EAAC (RIMFindInputDeviceForConfig.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFindSiblingMouseDeviceWorker @ 0x140204868 (RIMFindSiblingMouseDeviceWorker.c)
 *     RIMMarkSiblingMouseDevice @ 0x1402049FC (RIMMarkSiblingMouseDevice.c)
 */

__int64 __fastcall RIMCreateDev(
        struct RawInputManagerObject *a1,
        unsigned int a2,
        const UNICODE_STRING *a3,
        int a4,
        int a5,
        __int64 a6,
        _QWORD *a7)
{
  int v7; // r12d
  char v8; // r15
  _QWORD *Dev; // rdi
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  bool v17; // r12
  __int64 Buffer; // rbx
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rbx
  char *v23; // rcx
  PVOID v24; // rcx
  struct _KEVENT *v25; // rax
  int v26; // edx
  int v27; // r8d
  char v28; // bl
  bool v29; // r15
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r9
  int v33; // edx
  int v34; // r8d
  __int64 v35; // rax
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  bool v39; // zf
  PVOID v40; // rbx
  __int64 v41; // r15
  __int64 v42; // rcx
  __int16 v43; // dx
  int v44; // eax
  struct RIMDEV *v45; // rcx
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  char v49; // bl
  bool v50; // r15
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  __int64 v54; // r13
  int v55; // eax
  PVOID v56; // rbx
  char *v57; // r15
  __int64 v58; // rax
  _QWORD *v59; // rcx
  __int64 v60; // rcx
  _QWORD *v61; // rbx
  __int16 v63; // [rsp+30h] [rbp-30h]
  PVOID Object[2]; // [rsp+50h] [rbp-10h] BYREF
  int v65; // [rsp+A8h] [rbp+48h] BYREF
  int v66; // [rsp+B8h] [rbp+58h] BYREF

  v7 = a5;
  v8 = 0;
  if ( a2 > 2 )
  {
    v65 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 296LL);
  }
  if ( (a4 || v7) && a4 == v7 )
  {
    v65 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 297LL);
  }
  Dev = rimCreateDev((int)a1, a2, (int)a3, a4);
  if ( !Dev )
    return 3221225495LL;
  if ( a3->Buffer )
  {
    v14 = Win32AllocPoolZInitImpl(256LL, a3->MaximumLength, 0x70707352u);
    Dev[25] = v14;
    if ( !v14 )
    {
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
      {
        v8 = 1;
      }
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Buffer = (__int64)a3->Buffer;
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
        LOBYTE(v20) = v17;
        LOBYTE(v21) = v8;
        WPP_RECORDER_AND_TRACE_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v21,
          v20,
          *(_QWORD *)(UserSessionState + 19368),
          2,
          1,
          13,
          (__int64)&WPP_f18322ca25db3dd0b6c6579719269eab_Traceguids,
          Buffer);
      }
      goto LABEL_112;
    }
    *((_WORD *)Dev + 97) = a3->MaximumLength;
    RtlCopyUnicodeString((PUNICODE_STRING)Dev + 12, a3);
  }
  *((_DWORD *)Dev + 12) = a2;
  if ( a4 )
    *((_DWORD *)Dev + 42) |= 0x20u;
  v22 = a6;
  if ( v7 )
  {
    if ( !a6 )
    {
      v65 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 328LL);
    }
    *((_DWORD *)Dev + 42) |= 0x2000u;
    *(_OWORD *)(Dev + 47) = *(_OWORD *)(v22 + 100);
    Dev[165] = *(_QWORD *)(v22 + 120);
    if ( (unsigned int)RIMIsCurrentProcessTrusted() )
    {
      v23 = (char *)Dev[165];
      *((_DWORD *)Dev + 42) |= 0x4000u;
      Object[0] = 0LL;
      if ( (int)RawInputManagerDeviceObjectResolveHandle(v23, 1u, 1, Object) >= 0 )
      {
        v24 = Object[0];
        if ( (*((_DWORD *)Object[0] + 60) & 0x2000) == 0 )
        {
          *((_DWORD *)Dev + 42) |= 0x8000u;
          *((_DWORD *)Dev + 97) = 1;
        }
        ObfDereferenceObject(v24);
      }
    }
    v25 = (struct _KEVENT *)Win32AllocPoolZInitImpl(64LL, 0x18uLL, 0x76656B52u);
    Dev[45] = v25;
    if ( !v25 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v28 = 0;
      }
      v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v28 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_112;
      v32 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v26, v27) + 19368);
      v63 = 14;
      goto LABEL_111;
    }
  }
  else
  {
    v25 = (struct _KEVENT *)Win32AllocPoolZInitImpl(64LL, 0x18uLL, 0x76656B52u);
    Dev[42] = v25;
    if ( !v25 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v28 = 0;
      }
      v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v28 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_112;
      v32 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v33, v34) + 19368);
      v63 = 15;
LABEL_111:
      LOBYTE(v31) = v29;
      LOBYTE(v30) = v28;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v30,
        v31,
        v32,
        2,
        1,
        v63,
        (__int64)&WPP_f18322ca25db3dd0b6c6579719269eab_Traceguids);
LABEL_112:
      *(_BYTE *)(Dev[4] + 9LL) = 1;
      RIMFreeSpecificDevWorker(a1, Dev);
      rimDereferenceDev(Dev);
      return 3221225495LL;
    }
  }
  KeInitializeEvent(v25, SynchronizationEvent, 0);
  *((_DWORD *)Dev + 42) |= 0x20000u;
  if ( *((_DWORD *)Dev + 12) == 2 )
  {
    v35 = RIMCreateHidDesc((__int64)a1, (__int64)Dev, v22);
    Dev[55] = v35;
    if ( !v35 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v28 = 0;
      }
      v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v28 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_112;
      v32 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v36, v38) + 19368);
      v63 = 16;
      goto LABEL_111;
    }
    v39 = (Dev[21] & 0x2000) == 0;
    v40 = 0LL;
    Object[0] = 0LL;
    if ( v39 )
    {
      v41 = W32GetUserSessionState(v37, v36, v38) + 56;
      RIMLockExclusive(v41);
      v42 = Dev[55];
      *((_DWORD *)Dev + 579) |= 1u;
      if ( *(_WORD *)(v42 + 42) == 13 )
      {
        v43 = *(_WORD *)(v42 + 40);
        if ( v43 == 2 || (unsigned __int16)(v43 - 4) <= 1u || v43 == 1 )
        {
          v44 = RIMFindSiblingMouseDeviceWorker(v42, Dev, Object);
          v40 = Object[0];
          if ( v44 )
          {
            v45 = (struct RIMDEV *)((char *)Object[0] + 72);
            if ( !Object[0] )
              v45 = 0LL;
            RIMMarkSiblingMouseDevice(v45);
          }
        }
      }
      RIMUnlockExclusive(v41);
      if ( v40 )
        ObfDereferenceObject(v40);
    }
  }
  if ( !*((_DWORD *)Dev + 12) )
  {
    if ( v7 )
    {
      *((_WORD *)Dev + 432) = 32;
    }
    else
    {
      if ( !(unsigned int)RIMGetDeviceParent(0LL, Dev) )
      {
        v47 = (int)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v49 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v49 = 0;
        }
        v50 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v49 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v51 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v46, v48);
          LOBYTE(v52) = v50;
          LOBYTE(v53) = v49;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v53,
            v52,
            *(_QWORD *)(v51 + 19368),
            3,
            1,
            17,
            (__int64)&WPP_f18322ca25db3dd0b6c6579719269eab_Traceguids);
        }
      }
      Object[0] = 0LL;
      v54 = W32GetUserSessionState(v47, v46, v48) + 56;
      RIMLockExclusive(v54);
      *((_DWORD *)Dev + 579) |= 1u;
      v55 = RIMFindSiblingPointerDeviceForMouseWorker(Dev, Object);
      v56 = Object[0];
      if ( v55 )
      {
        v57 = (char *)Object[0] + 72;
        if ( !Object[0] )
          v57 = 0LL;
        if ( *((_DWORD *)v57 + 12) != 2 )
        {
          v65 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
        }
        RIMMarkSiblingMouseDevice((struct RIMDEV *)Dev);
      }
      RIMUnlockExclusive(v54);
      if ( v56 )
        ObfDereferenceObject(v56);
      else
        RIMLoadDeviceLegacyInfo((struct DEVICEINFO *)Dev);
      RIMGetMouseDeviceHardwareId(Dev);
      RIMPopulateExtendedMouseDeviceProperties((struct RIMDEV *)Dev);
    }
  }
  if ( *((_DWORD *)Dev + 12) == 1 && !v7 )
    RIMPopulateExtendedKeyboardDeviceProperties(Dev);
  *((_DWORD *)Dev + 46) |= 0x20u;
  if ( (int)ObfReferenceObject(a1) < 0 )
    goto LABEL_112;
  Dev[40] = a1;
  v58 = *((_QWORD *)a1 + 53);
  if ( v58 )
  {
    do
    {
      v59 = (_QWORD *)(v58 + 40);
      v58 = *(_QWORD *)(v58 + 40);
    }
    while ( v58 );
    *v59 = Dev;
  }
  else
  {
    *((_QWORD *)a1 + 53) = Dev;
  }
  if ( !*((_QWORD *)a1 + 104) || *((_DWORD *)a1 + 264) || !v7 )
  {
    if ( v7 || (Dev[21] & 0x20) != 0 )
      rimDoRimDevChange(a1, Dev, 1LL);
    else
      rimQueueRimDevChangeAsyncWorkItem(a1);
  }
  if ( (Dev[21] & 0x1000) != 0 )
  {
    v60 = Dev[55];
    v66 = 0;
    v65 = 0;
    Object[0] = 0LL;
    if ( (unsigned int)RIMFindInputDeviceForConfig(
                         v60,
                         (_DWORD)a1,
                         (_DWORD)Dev,
                         (unsigned int)&v66,
                         (__int64)&v65,
                         (__int64)Object) )
    {
      if ( !v65 )
      {
        v61 = Object[0];
        if ( *(_DWORD *)(*((_QWORD *)Object[0] + 57) + 24LL) != 7 )
        {
          v65 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 631LL);
        }
        RIMApiSetSetUserPTPEnabledPreference(v61, v61[55], a1);
      }
    }
  }
  if ( !*((_QWORD *)a1 + 104) && !*((_DWORD *)a1 + 264) && v7 )
    rimDoRimDevChange(a1, Dev, 2LL);
  RimTelemetry::ReportRimDevice(1, -__CFSHR__(*((_DWORD *)Dev + 46), 8), (struct RIMDEV *const)Dev);
  *a7 = Dev;
  return 0LL;
}
