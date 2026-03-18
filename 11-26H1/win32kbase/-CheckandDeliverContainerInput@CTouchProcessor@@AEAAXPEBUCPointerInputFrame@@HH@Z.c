/*
 * XREFs of ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x140213C90
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x14006A8A0 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     IsPTPIVEnabled @ 0x14008A078 (IsPTPIVEnabled.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1400D4970 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     IsExemptInjectionDevice @ 0x140163428 (IsExemptInjectionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ @ 0x1401C12C0 (-GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ.c)
 *     IsTouchIVEnabled @ 0x1401C3E68 (IsTouchIVEnabled.c)
 *     IsPenIVEnabled @ 0x1401C3EA8 (IsPenIVEnabled.c)
 *     ?GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x140211D94 (-GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x140211DB8 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     ?TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFONODE@@@Z @ 0x140216E04 (-TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFON.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x140221E14 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 *     ApiSetGetLatestInputTransform @ 0x140228148 (ApiSetGetLatestInputTransform.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CTouchProcessor::CheckandDeliverContainerInput(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        int a3,
        int a4)
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // ebx
  char v9; // al
  CTouchProcessor *v10; // rcx
  unsigned int v11; // r12d
  const struct CPointerInfoNode *v12; // r14
  unsigned int v13; // r15d
  CInputDest *v14; // rsi
  char v15; // bl
  int v16; // edx
  int v17; // r8d
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  unsigned int v28; // ecx
  __int64 v29; // rdx
  int v30; // r15d
  int v31; // eax
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r14
  bool v37; // di
  int v38; // edx
  int v39; // r8d
  __int64 v40; // r9
  unsigned int v41; // r13d
  _WORD *v42; // rsi
  int v43; // eax
  __int64 v44; // r12
  __int64 v45; // rdx
  __int64 v46; // r10
  __int64 v47; // r9
  int v48; // ecx
  int v49; // eax
  _OWORD *v50; // rax
  __int128 v51; // xmm1
  HWND ContainerHwndDest; // rax
  __int64 v53; // r10
  __int64 v54; // r11
  __int64 v55; // r9
  int v56; // r8d
  struct DEVICEINFO *v57; // rax
  struct CPTPProcessor *Processor; // rax
  bool v59; // di
  __int64 UserSessionState; // rax
  int v61; // r8d
  int v62; // edx
  __int16 v63; // [rsp+30h] [rbp-D0h]
  int v64; // [rsp+50h] [rbp-B0h]
  size_t Sizea; // [rsp+58h] [rbp-A8h]
  HWND WindowHandle; // [rsp+60h] [rbp-A0h]
  struct tagRIMPOINTERINFONODE *v69; // [rsp+68h] [rbp-98h]
  _QWORD v70[2]; // [rsp+70h] [rbp-90h] BYREF
  int v71; // [rsp+80h] [rbp-80h]
  int v72; // [rsp+84h] [rbp-7Ch]
  _OWORD v73[15]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v74[64]; // [rsp+180h] [rbp+80h] BYREF

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 16174);
  v8 = *(_DWORD *)(*((_QWORD *)a2 + 30) + 168LL);
  if ( v8 == 2 )
  {
    v9 = IsTouchIVEnabled(v6, v5, v7);
  }
  else
  {
    if ( v8 == 3 && IsPenIVEnabled(v6, v5, v7) )
      goto LABEL_6;
    if ( v8 != 5 )
      return;
    v9 = IsPTPIVEnabled();
  }
  if ( !v9 )
    return;
LABEL_6:
  v11 = 0;
  v12 = (const struct CPointerInfoNode *)*((_QWORD *)a2 + 30);
  v13 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v14 = (const struct CPointerInfoNode *)((char *)v12 + 352);
    v15 = 1;
    do
    {
      if ( (unsigned int)CTouchProcessor::ShouldGenerateMessagesForNode(v10, a2, v12, a4)
        && CInputDest::GetContainerInfo(v14) )
      {
        ++v11;
        v10 = (CTouchProcessor *)(unsigned int)*CInputDest::GetContainerId(v14);
        *(_DWORD *)v12 |= 0x1000u;
        *((_DWORD *)v14 - 87) |= 0x2000u;
        *((_DWORD *)v14 + 30) = (_DWORD)v10;
      }
      ++v13;
      v12 = (const struct CPointerInfoNode *)((char *)v12 + 480);
      v14 = (CInputDest *)((char *)v14 + 480);
    }
    while ( v13 < *((_DWORD *)a2 + 12) );
    if ( v11 )
    {
      memset(v73, 0, sizeof(v73));
      if ( !IsExemptInjectionDevice(*((_QWORD *)a2 + 8), v16, v17) )
      {
        v19 = *(_QWORD *)(*((_QWORD *)a2 + 32) + 16LL);
        if ( a3 )
          v20 = *(_QWORD *)(v19 + 24);
        else
          v20 = *(_QWORD *)(v19 + 16);
        *(_QWORD *)&v73[2] = v20;
      }
      v21 = *(_OWORD *)((char *)a2 + 88);
      v73[3] = *(_OWORD *)((char *)a2 + 72);
      v22 = *(_OWORD *)((char *)a2 + 104);
      v73[4] = v21;
      v23 = *(_OWORD *)((char *)a2 + 120);
      v73[5] = v22;
      v24 = *(_OWORD *)((char *)a2 + 136);
      v73[6] = v23;
      v25 = *(_OWORD *)((char *)a2 + 152);
      v73[7] = v24;
      v26 = *(_OWORD *)((char *)a2 + 168);
      v73[8] = v25;
      v27 = *(_OWORD *)((char *)a2 + 200);
      v73[9] = v26;
      v73[10] = *(_OWORD *)((char *)a2 + 184);
      v73[11] = v27;
      v28 = *((_DWORD *)a2 + 14);
      v29 = *((_QWORD *)a2 + 29);
      LODWORD(v73[12]) = a3;
      *(_QWORD *)((char *)&v73[12] + 4) = 0LL;
      *(_QWORD *)&v73[13] = 0LL;
      HIDWORD(v73[1]) = v28;
      v30 = 24 * (v28 + 10);
      *(_QWORD *)&v73[14] = 0LL;
      if ( v28 )
      {
        v18 = v28;
        do
        {
          v31 = *(_DWORD *)(v29 + 8);
          v29 = *(_QWORD *)(v29 + 24);
          v30 += (v31 + 7) & 0xFFFFFFF8;
          --v18;
        }
        while ( v18 );
      }
      v32 = 192LL * v11;
      if ( v32 > 0xFFFFFFFF )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v15 = 0;
        }
        v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v40 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v29, v18) + 69136);
          v63 = 340;
          goto LABEL_68;
        }
      }
      else
      {
        Sizea = (unsigned int)v32;
        v36 = Win32AllocPoolZInitImpl(256LL, (unsigned int)v32, 0x43547072u);
        if ( v36 )
        {
          v41 = 0;
          v64 = 0;
          v42 = (_WORD *)(*((_QWORD *)a2 + 30) + 474LL);
          while ( v41 < *((_DWORD *)a2 + 12) )
          {
            v43 = *(_DWORD *)(v42 - 235);
            if ( (v43 & 0x2000) != 0 && (v43 & 0x4000) == 0 )
            {
              v44 = 0LL;
              memset((void *)v36, 0, Sizea);
              while ( v41 < *((_DWORD *)a2 + 12) )
              {
                v46 = *((_QWORD *)a2 + 30);
                v47 = 480LL * v41;
                v48 = *(_DWORD *)(v47 + v46 + 4);
                if ( (v48 & 0x2000) != 0 )
                {
                  v45 = 0x4000LL;
                  if ( (v48 & 0x4000) == 0
                    && *(v42 - 1) == *(_WORD *)(v47 + v46 + 472)
                    && *v42 == *(_WORD *)(v47 + v46 + 474) )
                  {
                    v49 = *(_DWORD *)(v47 + v46 + 156);
                    *(_DWORD *)(v47 + v46 + 4) = v48 | 0x4000;
                    v69 = (struct tagRIMPOINTERINFONODE *)(v36 + 192 * v44);
                    *(_DWORD *)v69 = v49;
                    v50 = (_OWORD *)(v47 + v46 + 160);
                    *(_OWORD *)((char *)v69 + 8) = *v50;
                    *(_OWORD *)((char *)v69 + 24) = v50[1];
                    *(_OWORD *)((char *)v69 + 40) = v50[2];
                    *(_OWORD *)((char *)v69 + 56) = v50[3];
                    *(_OWORD *)((char *)v69 + 72) = v50[4];
                    *(_OWORD *)((char *)v69 + 88) = v50[5];
                    *(_OWORD *)((char *)v69 + 104) = v50[6];
                    v51 = v50[7];
                    v50 += 8;
                    *(_OWORD *)((char *)v69 + 120) = v51;
                    *(_OWORD *)((char *)v69 + 136) = *v50;
                    *(_OWORD *)((char *)v69 + 152) = v50[1];
                    *(_OWORD *)((char *)v69 + 168) = v50[2];
                    *((_QWORD *)v69 + 23) = *((_QWORD *)v50 + 6);
                    *((_DWORD *)v69 + 7) &= 0xFF87FFFE;
                    ContainerHwndDest = CInputDest::GetContainerHwndDest((CInputDest *)(v42 - 61));
                    *(_QWORD *)(v54 + 40) = ContainerHwndDest;
                    WindowHandle = CInputDest::GetWindowHandle((CInputDest *)(v55 + v53 + 352));
                    memset(v74, 0, sizeof(v74));
                    if ( !(unsigned int)ApiSetGetLatestInputTransform(WindowHandle, v74)
                      || !CTouchProcessor::TransformPointerCoordinates((const struct tagINPUT_TRANSFORM *)v74, v69) )
                    {
                      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
                      {
                        v15 = 0;
                      }
                      v59 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v45, v56);
                        LOBYTE(v61) = v59;
                        LOBYTE(v62) = v15;
                        WPP_RECORDER_AND_TRACE_SF_q(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v62,
                          v61,
                          *(_QWORD *)(UserSessionState + 69136),
                          2,
                          4,
                          342,
                          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids,
                          (char)WindowHandle);
                      }
                      return;
                    }
                    v44 = (unsigned int)(v44 + 1);
                  }
                }
                ++v41;
              }
              DWORD2(v73[1]) = v44;
              v30 += 192 * v44;
              *((_QWORD *)&v73[14] + 1) = v36;
              LODWORD(v73[0]) = v30;
              v70[0] = v73;
              v71 = *(_DWORD *)(v42 - 1);
              v72 = 0;
              v70[1] = a2;
              IVRootDeliver::Pointer::SendTouchInput(
                (IVRootDeliver::Pointer *)v70,
                (struct CContainerPointerInput *)v45);
              if ( (*(_DWORD *)(v36 + 28) & 0x10000) != 0 )
              {
                LOBYTE(v33) = 19;
                v57 = (struct DEVICEINFO *)HMValidateHandleNoSecure(*(_QWORD *)(v36 + 32), v33);
                Processor = CPTPProcessorFactory::GetProcessor(v57);
                v41 = v64;
                if ( Processor )
                {
                  *((_DWORD *)Processor + 97) |= 2u;
                  *((_DWORD *)Processor + 96) = v71;
                }
              }
              else
              {
                v41 = v64;
              }
            }
            v64 = ++v41;
            v42 += 240;
          }
          GreDeleteFastMutex((char *)v36, v33, v34, v35);
        }
        else
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
          {
            v15 = 0;
          }
          v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v40 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v33, v34) + 69136);
            v63 = 341;
LABEL_68:
            LOBYTE(v39) = v37;
            LOBYTE(v38) = v15;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v38,
              v39,
              v40,
              2,
              4,
              v63,
              (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
          }
        }
      }
    }
  }
}
