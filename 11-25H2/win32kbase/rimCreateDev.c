/*
 * XREFs of RIMCreateDev @ 0x1401D4A5C
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1401D8A10 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1401D9660 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401D9BA0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EFCCC (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDiscoverSpecificDevice @ 0x1401F0D54 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x140033D40 (rimDoRimDevChange.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     rimCreateDev @ 0x140061FCC (rimCreateDev.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMGetMouseDeviceHardwareId @ 0x1400B11D8 (RIMGetMouseDeviceHardwareId.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400B2938 (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMIsCurrentProcessTrusted @ 0x1400CD380 (RIMIsCurrentProcessTrusted.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1400F14BC (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1401140A0 (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     RIMFindInputDeviceForConfig @ 0x14012A394 (RIMFindInputDeviceForConfig.c)
 *     RIMGetDeviceParent @ 0x14012AB40 (RIMGetDeviceParent.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x140132014 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     RIMFreeSpecificDevWorker @ 0x1401380A4 (RIMFreeSpecificDevWorker.c)
 *     rimDereferenceDev @ 0x1401382E4 (rimDereferenceDev.c)
 *     RIMMarkSiblingMouseDevice @ 0x14017F7BC (RIMMarkSiblingMouseDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_HEATInjectionUIAccess__private_IsEnabledDeviceUsageNoInline @ 0x1401A8F5C (Feature_HEATInjectionUIAccess__private_IsEnabledDeviceUsageNoInline.c)
 *     RIMLoadDeviceLegacyInfo @ 0x1401D54D4 (RIMLoadDeviceLegacyInfo.c)
 *     RIMCreateHidDesc @ 0x1401DF458 (RIMCreateHidDesc.c)
 *     RIMFindSiblingMouseDeviceWorker @ 0x1401E04B8 (RIMFindSiblingMouseDeviceWorker.c)
 *     RIMFindSiblingPointerDeviceForMouseWorker @ 0x1401E06B0 (RIMFindSiblingPointerDeviceForMouseWorker.c)
 *     RIMPopulateExtendedKeyboardDeviceProperties @ 0x1401EC314 (RIMPopulateExtendedKeyboardDeviceProperties.c)
 *     RIMPopulateExtendedMouseDeviceProperties @ 0x1401EC394 (RIMPopulateExtendedMouseDeviceProperties.c)
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
  char *v8; // r13
  _QWORD *Dev; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // r15
  bool v17; // r12
  __int64 Buffer; // rbx
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rbx
  char *v23; // rcx
  PVOID v24; // r15
  struct _KEVENT *v25; // rax
  __int64 v26; // rdx
  char v27; // bl
  bool v28; // r15
  int v29; // edx
  int v30; // r8d
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  bool v37; // zf
  PVOID v38; // r15
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int16 v41; // dx
  int v42; // eax
  struct RIMDEV *v43; // rcx
  __int64 v44; // rdx
  void *v45; // rcx
  char v46; // bl
  bool v47; // r15
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  __int64 v51; // rbx
  int v52; // eax
  PVOID v53; // r15
  __int64 v54; // rax
  _QWORD *v55; // rcx
  __int64 v56; // rcx
  _QWORD *v57; // rbx
  __int16 v59; // [rsp+30h] [rbp-30h]
  PVOID Object[2]; // [rsp+50h] [rbp-10h] BYREF
  int v61; // [rsp+A8h] [rbp+48h] BYREF
  int v62; // [rsp+B8h] [rbp+58h] BYREF

  v7 = a5;
  v8 = 0LL;
  if ( a2 > 2 )
  {
    v61 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 296);
  }
  if ( (a4 || v7) && a4 == v7 )
  {
    v61 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 297);
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
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v16 = 0;
      }
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Buffer = (__int64)a3->Buffer;
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
        LOBYTE(v20) = v17;
        LOBYTE(v21) = v16;
        WPP_RECORDER_AND_TRACE_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v21,
          v20,
          *(_QWORD *)(UserSessionState + 19336),
          2,
          1,
          13,
          (__int64)&WPP_cd5da7af252039b4591bb9c5c0da731f_Traceguids,
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
      v61 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 328);
    }
    *((_DWORD *)Dev + 42) |= 0x2000u;
    *(_OWORD *)(Dev + 47) = *(_OWORD *)(v22 + 100);
    *((_DWORD *)Dev + 330) = *(_DWORD *)(v22 + 120);
    Dev[166] = *(_QWORD *)(v22 + 128);
    if ( (unsigned int)RIMIsCurrentProcessTrusted() )
    {
      v23 = (char *)Dev[166];
      *((_DWORD *)Dev + 42) |= 0x4000u;
      Object[0] = 0LL;
      if ( (int)RawInputManagerDeviceObjectResolveHandle(v23, 1u, 1, Object) >= 0 )
      {
        v24 = Object[0];
        if ( (*((_DWORD *)Object[0] + 60) & 0x2000) == 0 )
        {
          *((_DWORD *)Dev + 42) |= 0x8000u;
          if ( (unsigned int)Feature_HEATInjectionUIAccess__private_IsEnabledDeviceUsageNoInline() )
            *((_DWORD *)Dev + 97) = 1;
        }
        ObfDereferenceObject(v24);
      }
    }
    v25 = (struct _KEVENT *)Win32AllocPoolZInitImpl(64LL, 0x18uLL, 0x76656B52u);
    Dev[45] = v25;
    if ( !v25 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v27 = 0;
      }
      v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v27 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_112;
      v31 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v26) + 19336);
      v59 = 14;
      goto LABEL_111;
    }
  }
  else
  {
    v25 = (struct _KEVENT *)Win32AllocPoolZInitImpl(64LL, 0x18uLL, 0x76656B52u);
    Dev[42] = v25;
    if ( !v25 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v27 = 0;
      }
      v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v27 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_112;
      v31 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v32) + 19336);
      v59 = 15;
LABEL_111:
      LOBYTE(v30) = v28;
      LOBYTE(v29) = v27;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v30,
        v31,
        2,
        1,
        v59,
        (__int64)&WPP_cd5da7af252039b4591bb9c5c0da731f_Traceguids);
LABEL_112:
      *(_BYTE *)(Dev[4] + 9LL) = 1;
      RIMFreeSpecificDevWorker((__int64)a1, (__int64)Dev);
      rimDereferenceDev((__int64)Dev);
      return 3221225495LL;
    }
  }
  KeInitializeEvent(v25, SynchronizationEvent, 0);
  *((_DWORD *)Dev + 42) |= 0x20000u;
  if ( *((_DWORD *)Dev + 12) == 2 )
  {
    v34 = RIMCreateHidDesc(a1, Dev, v22);
    Dev[55] = v34;
    if ( !v34 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v27 = 0;
      }
      v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v27 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_112;
      v31 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v35) + 19336);
      v59 = 16;
      goto LABEL_111;
    }
    v37 = (Dev[21] & 0x2000) == 0;
    v38 = 0LL;
    Object[0] = 0LL;
    if ( v37 )
    {
      v39 = W32GetUserSessionState(v36, v35);
      RIMLockExclusive(v39 + 56);
      v40 = Dev[55];
      *((_DWORD *)Dev + 581) |= 1u;
      if ( *(_WORD *)(v40 + 42) == 13 )
      {
        v41 = *(_WORD *)(v40 + 40);
        if ( (unsigned __int16)(v41 - 1) <= 1u || (unsigned __int16)(v41 - 4) <= 1u )
        {
          v42 = RIMFindSiblingMouseDeviceWorker(v40, Dev, Object);
          v38 = Object[0];
          if ( v42 )
          {
            v43 = (struct RIMDEV *)((char *)Object[0] + 72);
            if ( !Object[0] )
              v43 = 0LL;
            RIMMarkSiblingMouseDevice(v43, *(unsigned __int16 *)(Dev[55] + 40LL));
          }
        }
      }
      RIMUnlockExclusive(v39 + 56);
      if ( v38 )
        ObfDereferenceObject(v38);
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
      if ( !(unsigned int)RIMGetDeviceParent(0LL, (__int64)Dev, v33) )
      {
        v45 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v46 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v46 = 0;
        }
        v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v48 = W32GetUserSessionState(WPP_GLOBAL_Control, v44);
          LOBYTE(v49) = v47;
          LOBYTE(v50) = v46;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v50,
            v49,
            *(_QWORD *)(v48 + 19336),
            3,
            1,
            17,
            (__int64)&WPP_cd5da7af252039b4591bb9c5c0da731f_Traceguids);
        }
      }
      Object[0] = 0LL;
      v51 = W32GetUserSessionState(v45, v44);
      RIMLockExclusive(v51 + 56);
      *((_DWORD *)Dev + 581) |= 1u;
      v52 = RIMFindSiblingPointerDeviceForMouseWorker(Dev, Object);
      v53 = Object[0];
      if ( v52 )
      {
        if ( Object[0] )
          v8 = (char *)Object[0] + 72;
        if ( *((_DWORD *)v8 + 12) != 2 )
        {
          v61 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 493);
        }
        RIMMarkSiblingMouseDevice((struct RIMDEV *)Dev, *(unsigned __int16 *)(*((_QWORD *)v8 + 55) + 40LL));
      }
      RIMUnlockExclusive(v51 + 56);
      if ( v53 )
        ObfDereferenceObject(v53);
      else
        RIMLoadDeviceLegacyInfo((struct DEVICEINFO *)Dev);
      RIMGetMouseDeviceHardwareId((__int64)Dev);
      RIMPopulateExtendedMouseDeviceProperties((struct RIMDEV *)Dev);
    }
  }
  if ( *((_DWORD *)Dev + 12) == 1 && !v7 )
    RIMPopulateExtendedKeyboardDeviceProperties((struct RIMDEV *)Dev);
  *((_DWORD *)Dev + 46) |= 0x20u;
  if ( (int)ObfReferenceObject(a1) < 0 )
    goto LABEL_112;
  Dev[40] = a1;
  v54 = *((_QWORD *)a1 + 53);
  if ( v54 )
  {
    do
    {
      v55 = (_QWORD *)(v54 + 40);
      v54 = *(_QWORD *)(v54 + 40);
    }
    while ( v54 );
    *v55 = Dev;
  }
  else
  {
    *((_QWORD *)a1 + 53) = Dev;
  }
  if ( !*((_QWORD *)a1 + 104) || *((_DWORD *)a1 + 264) || !v7 )
  {
    if ( v7 || (Dev[21] & 0x20) != 0 )
      rimDoRimDevChange((__int64)a1, (__int64)Dev, 1u);
    else
      rimQueueRimDevChangeAsyncWorkItem(a1, (__int64)Dev, 1);
  }
  if ( (Dev[21] & 0x1000) != 0 )
  {
    v56 = Dev[55];
    v62 = 0;
    v61 = 0;
    Object[0] = 0LL;
    if ( (unsigned int)RIMFindInputDeviceForConfig(v56, (__int64)a1, (int)Dev, &v62, &v61, Object) )
    {
      if ( !v61 )
      {
        v57 = Object[0];
        if ( *(_DWORD *)(*((_QWORD *)Object[0] + 57) + 24LL) != 7 )
        {
          v61 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 634);
        }
        RIMApiSetSetUserPTPEnabledPreference((__int64)v57, v57[55], (__int64)a1);
      }
    }
  }
  if ( !*((_QWORD *)a1 + 104) && !*((_DWORD *)a1 + 264) && v7 )
    rimDoRimDevChange((__int64)a1, (__int64)Dev, 2u);
  RimTelemetry::ReportRimDevice(1, -__CFSHR__(*((_DWORD *)Dev + 46), 8), (struct RIMDEV *const)Dev);
  *a7 = Dev;
  return 0LL;
}
