/*
 * XREFs of RIMIDECreatePointerDeviceInfo @ 0x140207AC4
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x14020749C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     RIMSetDeviceOutputConfig @ 0x14007B81C (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x14007C5BC (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMGetQDCActivePathsData @ 0x14007CE38 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x14007D080 (RIMFreeQDCActivePathsData.c)
 *     HMValidateSharedHandleNoRip @ 0x140082658 (HMValidateSharedHandleNoRip.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x140085740 (RIMGetVirtualDesktopPhysicalSize.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMIsRunningOnDesktop @ 0x1400F0800 (RIMIsRunningOnDesktop.c)
 *     RIMGetDeviceObjectPointer @ 0x1400F2B34 (RIMGetDeviceObjectPointer.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x14012E834 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMCmFreePointerDeviceContacts @ 0x14012EBA0 (RIMCmFreePointerDeviceContacts.c)
 *     RIMGetDeviceLocationInfo @ 0x140130414 (RIMGetDeviceLocationInfo.c)
 *     DrvGetWDDMAdapterInfo @ 0x140148E40 (DrvGetWDDMAdapterInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1401692DC (RIMRetrieveLinkCollection.c)
 *     RIMGetPropertyCount @ 0x1401698B8 (RIMGetPropertyCount.c)
 *     RIMPopulatePointerDevice @ 0x14016A024 (RIMPopulatePointerDevice.c)
 *     RIMIsParallelDevice @ 0x1401703D8 (RIMIsParallelDevice.c)
 *     RIMInitializeDeadzone @ 0x14017F380 (RIMInitializeDeadzone.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140192A90 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     RIMGetButtonsSupported @ 0x1401AF1FC (RIMGetButtonsSupported.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMGetMonitorPhysicalSize @ 0x140205BA0 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x140205D48 (RIMReadDigitizerToMonitorMappings.c)
 *     ?RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z @ 0x140207204 (-RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z.c)
 *     rimIDECheckConfidenceSupport @ 0x1402072BC (rimIDECheckConfidenceSupport.c)
 *     RIMIDECheckScanTimeSupport @ 0x1402073D8 (RIMIDECheckScanTimeSupport.c)
 *     RIMIDEPopulateExtendedPointerDeviceProperties @ 0x14020AD00 (RIMIDEPopulateExtendedPointerDeviceProperties.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140218E84 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall RIMIDECreatePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int128 v5; // xmm0
  unsigned int v6; // edi
  __int128 v7; // xmm1
  struct _DEVICE_OBJECT *v9; // rbx
  __m128i v10; // xmm6
  __int128 v11; // xmm0
  __int64 v12; // r12
  char *v13; // r13
  int v14; // ecx
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  BOOL v19; // r14d
  char *v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  _WORD *v26; // rbx
  __int64 v27; // rax
  int v28; // eax
  char v29; // bl
  bool v30; // r14
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  __int64 v34; // rax
  char v35; // r14
  bool v36; // r12
  __int64 UserSessionState; // rax
  int v38; // r8d
  int v39; // edx
  int v40; // r12d
  char v41; // r13
  int v42; // ebx
  __int64 v43; // rax
  int v44; // edx
  int v45; // r8d
  __int64 v46; // rdx
  unsigned int *v47; // rbx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // ecx
  __int64 v51; // rcx
  __int64 *v52; // rax
  __int64 v53; // rax
  _DWORD *v54; // rdx
  int v55; // ecx
  __int64 v56; // rax
  int v57; // r8d
  __int128 *v58; // rax
  int v59; // edx
  int v60; // ecx
  __int64 v61; // rax
  char *v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  char *v66; // rcx
  __int16 v68; // cx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 *v71; // rsi
  struct _HIDP_PREPARSED_DATA *v72; // rcx
  ULONG v73; // [rsp+58h] [rbp-B0h] BYREF
  bool v74; // [rsp+5Ch] [rbp-ACh]
  __int64 v75; // [rsp+60h] [rbp-A8h] BYREF
  char *v76; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v77; // [rsp+70h] [rbp-98h]
  PDEVICE_OBJECT v78; // [rsp+78h] [rbp-90h] BYREF
  __int64 v79; // [rsp+80h] [rbp-88h] BYREF
  __int128 v80; // [rsp+90h] [rbp-78h] BYREF
  __int64 v81; // [rsp+A0h] [rbp-68h]
  PVOID Object; // [rsp+A8h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v84; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v85[3]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v86; // [rsp+F8h] [rbp-10h]

  v5 = *(_OWORD *)(a4 + 56);
  v6 = 0;
  v79 = a3;
  v7 = *(_OWORD *)(a4 + 72);
  v81 = a1;
  v9 = 0LL;
  v10 = *(__m128i *)(a4 + 40);
  v85[1] = v5;
  v11 = *(_OWORD *)(a4 + 88);
  v12 = a4;
  v85[2] = v7;
  v13 = 0LL;
  v86 = v11;
  v77 = a4;
  *(_QWORD *)&v80 = a5;
  v76 = 0LL;
  Object = 0LL;
  v78 = 0LL;
  Handle = 0LL;
  v85[0] = v10;
  v84 = 0LL;
  v15 = Win32AllocPoolZInitImpl(256LL, 0x510uLL, 0x63707352u);
  LODWORD(v75) = _mm_cvtsi128_si32(v10);
  v18 = 1LL;
  v19 = v15 == 0;
  if ( *(_DWORD *)(v12 + 40) == 851969 )
  {
    if ( !RIMIsRunningOnDesktop(v14, 1, v16) )
    {
LABEL_9:
      v19 = 1;
      goto LABEL_72;
    }
    v18 = 1LL;
  }
  if ( !v15 )
    goto LABEL_72;
  v20 = *(char **)(a2 + 1320);
  if ( v20 )
  {
    v21 = RawInputManagerDeviceObjectResolveHandle(v20, 3u, 1, (PVOID *)&v76);
    v13 = v76;
    if ( v21 < 0 )
    {
      *(_QWORD *)(a2 + 1320) = 0LL;
      goto LABEL_9;
    }
    if ( (int)RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)(v76 + 264), v18, v16, &Handle, &Object, &v78) < 0 )
      goto LABEL_9;
    v9 = v78;
  }
  *(_DWORD *)(v15 + 368) |= 8u;
  *(_QWORD *)(v15 + 928) = v15 + 920;
  *(_QWORD *)(v15 + 920) = v15 + 920;
  RIMIDESetPointerDeviceType((struct tagHID_POINTER_DEVICE_INFO *)v15, (struct tagHIDDESC *)v12);
  rimIDECheckConfidenceSupport(v15, *(struct _HIDP_PREPARSED_DATA **)(v12 + 16));
  v22 = v79;
  if ( !*(_DWORD *)(v79 + 12) )
  {
    v73 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 208);
    v22 = v79;
  }
  v23 = *(_DWORD *)(v22 + 12);
  *(_DWORD *)(v15 + 364) = v23;
  if ( v23 == 3 )
  {
    RIMIDECheckScanTimeSupport(v15, *(struct _HIDP_PREPARSED_DATA **)(v12 + 16));
  }
  else
  {
    *(_DWORD *)(v15 + 368) |= 0x80u;
    *(_DWORD *)(v15 + 896) = -1;
  }
  *(_DWORD *)(v15 + 800) = 500;
  *(_QWORD *)(v15 + 808) = 500 * gliQpcFreq.QuadPart / 0x3E8uLL;
  if ( v13 )
  {
    v24 = *((_QWORD *)v13 + 64);
    if ( v24 )
    {
      *(_WORD *)(v12 + 110) = *(_WORD *)(v24 + 110);
      *(_WORD *)(v12 + 112) = *(_WORD *)(*((_QWORD *)v13 + 64) + 112LL);
      *(_WORD *)(v12 + 114) = *(_WORD *)(*((_QWORD *)v13 + 64) + 114LL);
    }
    if ( v9 )
      RIMGetDeviceLocationInfo(v9, a2 + 2112);
  }
  v25 = v79;
  v26 = (_WORD *)(a2 + 192);
  *(_DWORD *)(v15 + 776) = *(_DWORD *)(v79 + 96);
  *(_DWORD *)(v15 + 368) = (16 * *(_DWORD *)(a2 + 388)) ^ (*(_DWORD *)(v15 + 368) ^ (16 * *(_DWORD *)(a2 + 388))) & 0xFFFFFFEF;
  *(_QWORD *)(v15 + 952) = *(_QWORD *)(a2 + 376);
  *(_DWORD *)(v15 + 960) = *(_DWORD *)(a2 + 384);
  if ( *(_QWORD *)(a2 + 200) )
  {
    v27 = Win32AllocPoolZInitImpl(256LL, (unsigned __int16)*v26, 0x6A6E6952u);
    *(_QWORD *)(v15 + 384) = v27;
    if ( v27 )
    {
      *(_WORD *)(v15 + 378) = *v26;
      RtlCopyUnicodeString((PUNICODE_STRING)(v15 + 376), (PCUNICODE_STRING)(a2 + 192));
    }
    else
    {
      v19 = 1;
    }
    v25 = v79;
  }
  v28 = *(_DWORD *)(v15 + 24);
  if ( v28 == 3 || v28 == 4 || v28 == 7 )
  {
    *(_DWORD *)(v15 + 816) = *(_DWORD *)(v25 + 116);
    v34 = Win32AllocPoolZInitImpl(256LL, 0x28uLL, 0x6A6E6952u);
    *(_QWORD *)(v15 + 768) = v34;
    if ( !v34 )
    {
LABEL_41:
      v19 = 1;
LABEL_70:
      v12 = v77;
      goto LABEL_71;
    }
    if ( v19 )
      goto LABEL_70;
    v73 = 0;
    if ( (unsigned int)RIMIsParallelDevice(v15, *(struct _HIDP_PREPARSED_DATA **)(v77 + 16), &v73) )
    {
      v12 = v77;
      if ( !(unsigned int)RIMRetrieveLinkCollection(v15, *(struct _HIDP_PREPARSED_DATA **)(v77 + 16), v73) )
      {
        v19 = 1;
        goto LABEL_71;
      }
      if ( (_WORD)v75 == 5 )
      {
        if ( WORD1(v85[0]) != 13 )
        {
          v73 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 306);
        }
        ++*(_DWORD *)(v15 + 776);
        *(_DWORD *)(v15 + 24) = 7;
        *(_DWORD *)(v15 + 964) = 3;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v18 = 1LL, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
        || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v35 = 0;
      }
      v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v18, v16);
        LOBYTE(v38) = v36;
        LOBYTE(v39) = v35;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v39,
          v38,
          *(_QWORD *)(UserSessionState + 19368),
          3,
          1,
          10,
          (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
      }
      v19 = 0;
      if ( *(_DWORD *)(v15 + 364) == 3 )
        goto LABEL_41;
    }
LABEL_58:
    v40 = *(_DWORD *)(v15 + 368);
    if ( (v40 & 2) == 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v41 = 0;
      }
      v74 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v42 = *(_DWORD *)(v15 + 24);
        v43 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v18, v16);
        LOBYTE(v44) = v41;
        LOBYTE(v45) = v74;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v44,
          v45,
          *(_QWORD *)(v43 + 19368),
          4,
          1,
          12,
          (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
          v42,
          -__CFSHR__(v40, 8));
      }
    }
    if ( (int)RIMCmAllocPointerDeviceContacts(v15, 0x6A6E6952u) >= 0 )
    {
      if ( !(unsigned int)RIMPopulatePointerDevice(
                            v81,
                            v15,
                            *(struct _HIDP_PREPARSED_DATA **)(v80 + 32),
                            (unsigned __int16 *)v85) )
        v19 = 1;
    }
    else
    {
      v19 = 1;
    }
    goto LABEL_70;
  }
  v12 = v77;
  if ( !RIMGetPropertyCount(v15, 0, v86, *(struct _HIDP_PREPARSED_DATA **)(v77 + 16)) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v29 = 0;
    }
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v18, v16);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v29;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v32,
        *(_QWORD *)(v31 + 19368),
        2,
        1,
        11,
        (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
    }
    v19 = 1;
    goto LABEL_71;
  }
  if ( !v19 )
    goto LABEL_58;
LABEL_71:
  v13 = v76;
LABEL_72:
  v47 = RIMGetQDCActivePathsData((unsigned int *)&v84, v18, v16, v17);
  if ( v19 )
    goto LABEL_97;
  v50 = *(_DWORD *)(v15 + 24);
  if ( v50 == 7 || v50 == 6 )
  {
    v51 = v79;
    *(_QWORD *)(v79 + 88) = 0LL;
  }
  else
  {
    v51 = v79;
  }
  v52 = *(__int64 **)(v51 + 88);
  if ( v52 )
    v53 = *v52;
  else
    v53 = 0LL;
  v54 = (_DWORD *)(a2 + 1328);
  *(_QWORD *)(a2 + 1336) = v53;
  if ( *(_QWORD *)(v51 + 88) )
  {
    *(_DWORD *)(a2 + 1344) = 6;
    *v54 = 1;
    DrvGetWDDMAdapterInfo(*(_QWORD *)(*(_QWORD *)(v51 + 88) + 88LL), 1, a2 + 1860, a2 + 1868);
  }
  else
  {
    if ( !v13 )
      goto LABEL_85;
    *v54 = 1;
    RIMReadDigitizerToMonitorMappings((const UNICODE_STRING *)(v13 + 72), (__int64)v54);
  }
  rimFindMonitorForDigitizerWithQDCData(a2, (__int64)v47, 0LL);
LABEL_85:
  v55 = *(_DWORD *)(v15 + 364);
  if ( v55 != 3 && ((*(_DWORD *)(v15 + 368) & 8) == 0 || v55 != 2)
    || (LODWORD(v54) = 1, *(_DWORD *)(v15 + 148) - *(_DWORD *)(v15 + 140) <= 1)
    || *(_DWORD *)(v15 + 152) - *(_DWORD *)(v15 + 144) <= 1 )
  {
    if ( *(_DWORD *)(a2 + 1328) )
    {
      v56 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1336), (int)v54, v48);
      v58 = (__int128 *)RIMGetMonitorPhysicalSize((__int64)&v80, v56, v57);
    }
    else
    {
      v58 = (__int128 *)RIMGetVirtualDesktopPhysicalSize((__int64)&v79);
    }
    v80 = *v58;
    *(_OWORD *)(v15 + 140) = v80;
  }
  RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v15, 0, (__int64)v47);
  RIMIDEPopulateExtendedPointerDeviceProperties(a2, v15);
  if ( (unsigned int)RIMIsPenPointerDevice(v15) && (unsigned int)RIMInitializeDeadzone(v60, v59, v48) )
    goto LABEL_96;
  v68 = v75;
  if ( (_WORD)v75 == 5 )
  {
    if ( (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v15) < 0 )
    {
LABEL_96:
      v19 = 1;
LABEL_97:
      if ( v15 )
      {
        v61 = *(_QWORD *)(v15 + 768);
        if ( v61 )
        {
          v62 = *(char **)(v61 + 24);
          if ( v62 )
            GreDeleteFastMutex(v62, v46, v48, v49);
        }
        RIMCmFreePointerDeviceContacts(v15, v46, v48, v49);
        v66 = *(char **)(v15 + 384);
        if ( v66 )
          GreDeleteFastMutex(v66, v63, v64, v65);
        if ( *(_QWORD *)(v15 + 1064) )
          CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v15);
        GreDeleteFastMutex((char *)v15, v63, v64, v65);
      }
      goto LABEL_106;
    }
    v68 = v75;
  }
  *(_DWORD *)(a2 + 184) |= 0x80u;
  v69 = v81;
  *(_QWORD *)(v15 + 792) = -1LL;
  v70 = v69 + 432;
  *(_QWORD *)(v15 + 16) = a2;
  *(_QWORD *)(a2 + 456) = v15;
  v71 = (__int64 *)(v15 + 920);
  v46 = *(_QWORD *)(v70 + 8);
  if ( *(_QWORD *)v46 != v70 )
    __fastfail(3u);
  *v71 = v70;
  v71[1] = v46;
  *(_QWORD *)v46 = v71;
  *(_QWORD *)(v70 + 8) = v71;
  if ( v68 == 5 )
  {
    v72 = *(struct _HIDP_PREPARSED_DATA **)(v12 + 16);
    LODWORD(v78) = 0;
    LODWORD(v75) = 0;
    v73 = 0;
    RIMGetButtonsSupported(v72, &v78, &v75, &v73);
    v46 = 1LL;
    *(_DWORD *)(a2 + 184) = *(_DWORD *)(a2 + 184) & 0xFFFF8FFF | (((unsigned __int8)v78 & 1 | (2
                                                                                             * (v75 & 1 | (2 * (v73 & 1))))) << 12);
  }
LABEL_106:
  if ( v13 )
    ObfDereferenceObject(v13);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle )
    ZwClose(Handle);
  RIMFreeQDCActivePathsData((__int64)v47, v46, v48, v49);
  LOBYTE(v6) = !v19;
  return v6;
}
