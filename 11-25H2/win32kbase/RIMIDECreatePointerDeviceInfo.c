/*
 * XREFs of RIMIDECreatePointerDeviceInfo @ 0x1401E8734
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x14002A1AC (RIMIDECreateHIDDesc.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     RIMGetQDCActivePathsData @ 0x14002B9C8 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x14002BC10 (RIMFreeQDCActivePathsData.c)
 *     RIMSetDeviceOutputConfig @ 0x14002D684 (RIMSetDeviceOutputConfig.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x140062700 (RIMGetVirtualDesktopPhysicalSize.c)
 *     HMValidateSharedHandleNoRip @ 0x140064D58 (HMValidateSharedHandleNoRip.c)
 *     RIMGetDeviceObjectPointer @ 0x14007A964 (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     RIMGetDeviceLocationInfo @ 0x1400AFCDC (RIMGetDeviceLocationInfo.c)
 *     RIMIsRunningOnDesktop @ 0x1400B29E8 (RIMIsRunningOnDesktop.c)
 *     DrvGetWDDMAdapterInfo @ 0x140108A10 (DrvGetWDDMAdapterInfo.c)
 *     RIMInitializeDeadzone @ 0x140127470 (RIMInitializeDeadzone.c)
 *     RIMRetrieveLinkCollection @ 0x14012D368 (RIMRetrieveLinkCollection.c)
 *     RIMGetPropertyCount @ 0x14012D940 (RIMGetPropertyCount.c)
 *     RIMIsParallelDevice @ 0x14013F814 (RIMIsParallelDevice.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x14015799C (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     RIMCmFreePointerDeviceContacts @ 0x14019D0D0 (RIMCmFreePointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_HEATInjectionUIAccess__private_IsEnabledDeviceUsageNoInline @ 0x1401A8F5C (Feature_HEATInjectionUIAccess__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline @ 0x1401B4F18 (Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     RIMGetButtonsSupported @ 0x1401E0990 (RIMGetButtonsSupported.c)
 *     RIMPopulatePointerDevice @ 0x1401E1634 (RIMPopulatePointerDevice.c)
 *     RIMGetMonitorPhysicalSize @ 0x1401E51B0 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1401E534C (RIMReadDigitizerToMonitorMappings.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E5C14 (rimFindMonitorForDigitizerWithQDCData.c)
 *     ?RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z @ 0x1401E849C (-RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z.c)
 *     rimIDECheckConfidenceSupport @ 0x1401E8554 (rimIDECheckConfidenceSupport.c)
 *     RIMIDECheckScanTimeSupport @ 0x1401E8670 (RIMIDECheckScanTimeSupport.c)
 *     RIMIDEPopulateExtendedPointerDeviceProperties @ 0x1401EC254 (RIMIDEPopulateExtendedPointerDeviceProperties.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1401F5464 (RIMCmAllocPointerDeviceContacts.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140211590 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall RIMIDECreatePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int128 v5; // xmm0
  unsigned int v6; // edi
  __int128 v7; // xmm1
  __int64 v8; // r12
  __m128i v9; // xmm6
  PDEVICE_OBJECT v11; // rbx
  __int128 v12; // xmm0
  char *v13; // r13
  __int64 v14; // rsi
  BOOL v15; // r14d
  char *v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  struct tagHIDDESC *v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  struct tagHIDDESC *v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  int v26; // edx
  __int64 v27; // rax
  struct tagHIDDESC *v28; // r14
  __int64 v29; // rdx
  char v30; // r14
  bool v31; // r12
  __int64 UserSessionState; // rax
  int v33; // r8d
  int v34; // edx
  char v35; // bl
  bool v36; // r14
  __int64 v37; // rax
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
  __int64 *v48; // rax
  __int64 v49; // rax
  int v50; // ecx
  __int64 v51; // rax
  __int128 *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int16 v55; // r12
  __int64 *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 **v59; // r8
  __int64 v60; // rax
  char *v61; // rcx
  char *v62; // rcx
  ULONG v64; // [rsp+58h] [rbp-B0h] BYREF
  bool v65; // [rsp+5Ch] [rbp-ACh]
  __int64 v66; // [rsp+60h] [rbp-A8h] BYREF
  char *v67; // [rsp+68h] [rbp-A0h] BYREF
  struct tagHIDDESC *v68; // [rsp+70h] [rbp-98h]
  PDEVICE_OBJECT v69; // [rsp+78h] [rbp-90h] BYREF
  __int64 v70; // [rsp+80h] [rbp-88h] BYREF
  __int64 v71; // [rsp+90h] [rbp-78h]
  PVOID Object; // [rsp+98h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v74; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v75[3]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v76; // [rsp+E8h] [rbp-20h]
  __int128 v77; // [rsp+F8h] [rbp-10h] BYREF

  v5 = *(_OWORD *)(a4 + 56);
  v6 = 0;
  v71 = a1;
  v7 = *(_OWORD *)(a4 + 72);
  v8 = a3;
  v9 = *(__m128i *)(a4 + 40);
  v70 = a3;
  v75[1] = v5;
  v11 = 0LL;
  v12 = *(_OWORD *)(a4 + 88);
  *(_QWORD *)&v77 = a5;
  v75[2] = v7;
  v76 = v12;
  v68 = (struct tagHIDDESC *)a4;
  v13 = 0LL;
  v67 = 0LL;
  Object = 0LL;
  v69 = 0LL;
  Handle = 0LL;
  v75[0] = v9;
  v74 = 0LL;
  v14 = Win32AllocPoolZInitImpl(256LL, 0x510uLL, 0x63707352u);
  LODWORD(v66) = _mm_cvtsi128_si32(v9);
  v15 = v14 == 0;
  if ( *((_DWORD *)v68 + 10) == 851969 && !RIMIsRunningOnDesktop((__int64)v68, 1LL) )
    goto LABEL_7;
  if ( !v14 )
    goto LABEL_70;
  v16 = *(char **)(a2 + 1328);
  if ( v16 )
  {
    v17 = RawInputManagerDeviceObjectResolveHandle(v16, 3u, 1, (PVOID *)&v67);
    v13 = v67;
    if ( v17 < 0 )
    {
      *(_QWORD *)(a2 + 1328) = 0LL;
LABEL_7:
      v15 = 1;
      goto LABEL_70;
    }
    if ( (int)RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)(v67 + 264), v18, v19, &Handle, &Object, &v69) < 0 )
      goto LABEL_7;
    v11 = v69;
  }
  *(_DWORD *)(v14 + 368) |= 8u;
  v20 = v68;
  *(_QWORD *)(v14 + 928) = v14 + 920;
  *(_QWORD *)(v14 + 920) = v14 + 920;
  RIMIDESetPointerDeviceType((struct tagHID_POINTER_DEVICE_INFO *)v14, v20);
  rimIDECheckConfidenceSupport(v14, *((struct _HIDP_PREPARSED_DATA **)v68 + 2));
  if ( !*(_DWORD *)(v8 + 12) )
  {
    v64 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 208);
  }
  v21 = *(_DWORD *)(v8 + 12);
  *(_DWORD *)(v14 + 364) = v21;
  if ( v21 == 3 )
  {
    RIMIDECheckScanTimeSupport(v14, *((struct _HIDP_PREPARSED_DATA **)v68 + 2));
  }
  else
  {
    *(_DWORD *)(v14 + 368) |= 0x80u;
    *(_DWORD *)(v14 + 896) = -1;
  }
  *(_DWORD *)(v14 + 800) = 500;
  *(_QWORD *)(v14 + 808) = 500 * gliQpcFreq.QuadPart / 0x3E8uLL;
  if ( v13 )
  {
    v22 = *((_QWORD *)v13 + 64);
    if ( v22 )
    {
      v23 = v68;
      *((_WORD *)v68 + 55) = *(_WORD *)(v22 + 110);
      *((_WORD *)v23 + 56) = *(_WORD *)(*((_QWORD *)v13 + 64) + 112LL);
      *((_WORD *)v23 + 57) = *(_WORD *)(*((_QWORD *)v13 + 64) + 114LL);
    }
    if ( v11 )
      RIMGetDeviceLocationInfo((__int64)v11, a2 + 2120);
  }
  *(_DWORD *)(v14 + 776) = *(_DWORD *)(v8 + 96);
  if ( (unsigned int)Feature_HEATInjectionUIAccess__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_DWORD *)(v14 + 368) = (16 * *(_DWORD *)(a2 + 388)) ^ (*(_DWORD *)(v14 + 368) ^ (16 * *(_DWORD *)(a2 + 388))) & 0xFFFFFFEF;
    *(_QWORD *)(v14 + 952) = *(_QWORD *)(a2 + 376);
    v24 = *(_DWORD *)(a2 + 384);
  }
  else
  {
    *(_QWORD *)(v14 + 952) = *(_QWORD *)(v8 + 100);
    v24 = *(_DWORD *)(v8 + 108);
  }
  *(_DWORD *)(v14 + 960) = v24;
  if ( *(_QWORD *)(a2 + 200) )
  {
    v25 = Win32AllocPoolZInitImpl(256LL, *(unsigned __int16 *)(a2 + 192), 0x6A6E6952u);
    *(_QWORD *)(v14 + 384) = v25;
    if ( v25 )
    {
      *(_WORD *)(v14 + 378) = *(_WORD *)(a2 + 192);
      RtlCopyUnicodeString((PUNICODE_STRING)(v14 + 376), (PCUNICODE_STRING)(a2 + 192));
    }
    else
    {
      v15 = 1;
    }
  }
  v26 = *(_DWORD *)(v14 + 24);
  if ( ((v26 - 3) & 0xFFFFFFFA) == 0 && v26 != 8 )
  {
    *(_DWORD *)(v14 + 816) = *(_DWORD *)(v70 + 116);
    v27 = Win32AllocPoolZInitImpl(256LL, 0x28uLL, 0x6A6E6952u);
    *(_QWORD *)(v14 + 768) = v27;
    if ( !v27 )
    {
LABEL_30:
      v15 = 1;
      goto LABEL_69;
    }
    if ( v15 )
      goto LABEL_69;
    v28 = v68;
    v64 = 0;
    if ( (unsigned int)RIMIsParallelDevice(v14, *((struct _HIDP_PREPARSED_DATA **)v68 + 2), &v64) )
    {
      if ( !(unsigned int)RIMRetrieveLinkCollection(v14, *((struct _HIDP_PREPARSED_DATA **)v28 + 2), v64) )
        goto LABEL_30;
      v15 = 0;
      if ( (_WORD)v66 == 5 )
      {
        if ( WORD1(v75[0]) != 13 )
        {
          v64 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 312);
        }
        ++*(_DWORD *)(v14 + 776);
        *(_DWORD *)(v14 + 24) = 7;
        *(_DWORD *)(v14 + 964) = 3;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (v29 = 1LL, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
        || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v30 = 0;
      }
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v29);
        LOBYTE(v33) = v31;
        LOBYTE(v34) = v30;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v34,
          v33,
          *(_QWORD *)(UserSessionState + 19336),
          3,
          1,
          10,
          (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
      }
      v15 = 0;
      if ( *(_DWORD *)(v14 + 364) == 3 )
        goto LABEL_30;
    }
LABEL_57:
    v40 = *(_DWORD *)(v14 + 368);
    if ( (v40 & 2) == 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v41 = 0;
      }
      v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v42 = *(_DWORD *)(v14 + 24);
        v43 = W32GetUserSessionState(WPP_GLOBAL_Control, v29);
        LOBYTE(v44) = v41;
        LOBYTE(v45) = v65;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v44,
          v45,
          *(_QWORD *)(v43 + 19336),
          4,
          1,
          12,
          (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
          v42,
          -__CFSHR__(v40, 8));
      }
    }
    if ( (int)RIMCmAllocPointerDeviceContacts(v14, 1785620818LL) >= 0 )
    {
      if ( !(unsigned int)RIMPopulatePointerDevice(
                            v71,
                            v14,
                            *(struct _HIDP_PREPARSED_DATA **)(v77 + 32),
                            (unsigned __int16 *)v75) )
        v15 = 1;
    }
    else
    {
      v15 = 1;
    }
    goto LABEL_69;
  }
  if ( !RIMGetPropertyCount(v14, 0, v76, *((struct _HIDP_PREPARSED_DATA **)v68 + 2)) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v35 = 0;
    }
    v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v37 = W32GetUserSessionState(WPP_GLOBAL_Control, v29);
      LOBYTE(v38) = v36;
      LOBYTE(v39) = v35;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v39,
        v38,
        *(_QWORD *)(v37 + 19336),
        2,
        1,
        11,
        (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
    }
    v15 = 1;
    goto LABEL_69;
  }
  if ( !v15 )
    goto LABEL_57;
LABEL_69:
  v8 = v70;
  v13 = v67;
LABEL_70:
  v47 = RIMGetQDCActivePathsData((unsigned int *)&v74);
  if ( v15 )
  {
LABEL_93:
    v55 = v66;
    goto LABEL_94;
  }
  if ( (unsigned int)(*(_DWORD *)(v14 + 24) - 6) <= 1 )
    *(_QWORD *)(v8 + 88) = 0LL;
  v48 = *(__int64 **)(v8 + 88);
  if ( v48 )
    v49 = *v48;
  else
    v49 = 0LL;
  *(_QWORD *)(a2 + 1344) = v49;
  if ( *(_QWORD *)(v8 + 88) )
  {
    *(_DWORD *)(a2 + 1336) = 1;
    *(_DWORD *)(a2 + 1352) = 6;
    DrvGetWDDMAdapterInfo(*(_QWORD *)(*(_QWORD *)(v8 + 88) + 88LL), 1, a2 + 1868, a2 + 1876);
  }
  else
  {
    if ( !v13 )
      goto LABEL_81;
    *(_DWORD *)(a2 + 1336) = 1;
    RIMReadDigitizerToMonitorMappings((const UNICODE_STRING *)(v13 + 72), a2 + 1336);
  }
  rimFindMonitorForDigitizerWithQDCData(a2, (__int64)v47, 0LL);
LABEL_81:
  v50 = *(_DWORD *)(v14 + 364);
  if ( v50 != 3 && ((*(_DWORD *)(v14 + 368) & 8) == 0 || v50 != 2)
    || *(_DWORD *)(v14 + 148) - *(_DWORD *)(v14 + 140) <= 1
    || *(_DWORD *)(v14 + 152) - *(_DWORD *)(v14 + 144) <= 1 )
  {
    if ( *(_DWORD *)(a2 + 1336) )
    {
      v51 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1344), v46);
      v52 = (__int128 *)RIMGetMonitorPhysicalSize((__int64)&v77, v51);
    }
    else
    {
      v52 = (__int128 *)RIMGetVirtualDesktopPhysicalSize((__int64)&v70);
    }
    v77 = *v52;
    *(_OWORD *)(v14 + 140) = v77;
  }
  RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v14, 0, (__int64)v47);
  RIMIDEPopulateExtendedPointerDeviceProperties(a2, v14);
  if ( (unsigned int)(*(_DWORD *)(v14 + 24) - 5) <= 1 && (unsigned int)RIMInitializeDeadzone(v54, v53) )
  {
    v15 = 1;
    goto LABEL_93;
  }
  v55 = v66;
  if ( (_WORD)v66 == 5 && (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v14) < 0 )
  {
    v15 = 1;
  }
  else
  {
    *(_DWORD *)(a2 + 184) |= 0x80u;
    v56 = (__int64 *)(v14 + 920);
    *(_QWORD *)(v14 + 792) = -1LL;
    v57 = v71;
    *(_QWORD *)(v14 + 16) = a2;
    v58 = v57 + 432;
    *(_QWORD *)(a2 + 456) = v14;
    v59 = *(__int64 ***)(v58 + 8);
    if ( *v59 != (__int64 *)v58 )
      __fastfail(3u);
    *v56 = v58;
    *(_QWORD *)(v14 + 928) = v59;
    *v59 = v56;
    *(_QWORD *)(v58 + 8) = v56;
  }
LABEL_94:
  if ( (unsigned int)Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v15 )
    {
      if ( v55 == 5 )
      {
        LODWORD(v69) = 0;
        LODWORD(v66) = 0;
        v64 = 0;
        RIMGetButtonsSupported(*((PHIDP_PREPARSED_DATA *)v68 + 2), &v69, &v66, &v64);
        *(_DWORD *)(a2 + 184) = *(_DWORD *)(a2 + 184) & 0xFFFF8FFF | (((unsigned __int8)v69 & 1 | (2
                                                                                                 * (v66 & 1 | (2 * (v64 & 1))))) << 12);
      }
      goto LABEL_114;
    }
  }
  else if ( !v15 )
  {
    goto LABEL_114;
  }
  if ( v14 )
  {
    v60 = *(_QWORD *)(v14 + 768);
    if ( v60 )
    {
      v61 = *(char **)(v60 + 24);
      if ( v61 )
        GreDeleteFastMutex(v61);
    }
    RIMCmFreePointerDeviceContacts(v14);
    v62 = *(char **)(v14 + 384);
    if ( v62 )
      GreDeleteFastMutex(v62);
    if ( *(_QWORD *)(v14 + 1064) )
      CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v14);
    GreDeleteFastMutex((char *)v14);
  }
LABEL_114:
  if ( v13 )
    ObfDereferenceObject(v13);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle )
    ZwClose(Handle);
  RIMFreeQDCActivePathsData((__int64)v47);
  LOBYTE(v6) = !v15;
  return v6;
}
