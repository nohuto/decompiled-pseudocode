/*
 * XREFs of ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401FB1F0
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     IsPTPIVEnabled @ 0x14005E094 (IsPTPIVEnabled.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1400DEC04 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x140105A80 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     IsExemptInjectionDevice @ 0x1401284F0 (IsExemptInjectionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ @ 0x14019FD58 (-GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ.c)
 *     ?GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1401F6FD0 (-GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x1401F6FF4 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     ?TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFONODE@@@Z @ 0x14020C0A8 (-TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFON.c)
 *     IsPenIVEnabled @ 0x14021B7A4 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x14021B7FC (IsTouchIVEnabled.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x14021E6D0 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 *     ApiSetGetLatestInputTransform @ 0x140225EA8 (ApiSetGetLatestInputTransform.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall CTouchProcessor::CheckandDeliverContainerInput(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        int a3,
        int a4)
{
  int v5; // ebx
  char v6; // al
  CTouchProcessor *v7; // rcx
  unsigned int v8; // r12d
  const struct CPointerInfoNode *v9; // r14
  unsigned int v10; // r15d
  CInputDest *v11; // rsi
  char v12; // bl
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  unsigned int v23; // ecx
  __int64 v24; // rdx
  int v25; // r15d
  __int64 v26; // r8
  int v27; // eax
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rsi
  bool v31; // di
  int v32; // edx
  int v33; // r8d
  __int64 v34; // r9
  unsigned int v35; // r13d
  __int64 v36; // r14
  __int64 v37; // r12
  __int64 v38; // rdx
  bool v39; // cf
  __int64 i; // rax
  __int64 v41; // r10
  __int64 v42; // r9
  int v43; // ecx
  int v45; // eax
  _OWORD *v46; // rax
  __int128 v47; // xmm1
  HWND ContainerHwndDest; // rax
  __int64 v49; // r10
  __int64 v50; // r11
  __int64 v51; // r9
  struct DEVICEINFO *v52; // rax
  struct CPTPProcessor *Processor; // rax
  bool v54; // di
  __int64 UserSessionState; // rax
  int v56; // r8d
  int v57; // edx
  __int16 v58; // [rsp+30h] [rbp-D0h]
  int v59; // [rsp+50h] [rbp-B0h]
  size_t Sizea; // [rsp+58h] [rbp-A8h]
  HWND WindowHandle; // [rsp+60h] [rbp-A0h]
  struct tagRIMPOINTERINFONODE *v64; // [rsp+68h] [rbp-98h]
  _QWORD v65[2]; // [rsp+70h] [rbp-90h] BYREF
  int v66; // [rsp+80h] [rbp-80h]
  int v67; // [rsp+84h] [rbp-7Ch]
  _OWORD v68[15]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v69[64]; // [rsp+180h] [rbp+80h] BYREF

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 16251);
  v5 = *(_DWORD *)(*((_QWORD *)a2 + 30) + 168LL);
  if ( v5 == 2 )
  {
    v6 = IsTouchIVEnabled();
  }
  else
  {
    if ( v5 == 3 && (unsigned __int8)IsPenIVEnabled() )
      goto LABEL_6;
    if ( v5 != 5 )
      return;
    v6 = IsPTPIVEnabled();
  }
  if ( !v6 )
    return;
LABEL_6:
  v8 = 0;
  v9 = (const struct CPointerInfoNode *)*((_QWORD *)a2 + 30);
  v10 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v11 = (const struct CPointerInfoNode *)((char *)v9 + 352);
    v12 = 1;
    do
    {
      if ( (unsigned int)CTouchProcessor::ShouldGenerateMessagesForNode(v7, a2, v9, a4)
        && CInputDest::GetContainerInfo(v11) )
      {
        ++v8;
        v7 = (CTouchProcessor *)(unsigned int)*CInputDest::GetContainerId(v11);
        *(_DWORD *)v9 |= 0x1000u;
        *((_DWORD *)v11 - 87) |= 0x2000u;
        *((_DWORD *)v11 + 30) = (_DWORD)v7;
      }
      ++v10;
      v9 = (const struct CPointerInfoNode *)((char *)v9 + 480);
      v11 = (CInputDest *)((char *)v11 + 480);
    }
    while ( v10 < *((_DWORD *)a2 + 12) );
    if ( v8 )
    {
      memset(v68, 0, sizeof(v68));
      if ( !IsExemptInjectionDevice(*((_QWORD *)a2 + 8), v13) )
      {
        v14 = *(_QWORD *)(*((_QWORD *)a2 + 32) + 16LL);
        if ( a3 )
          v15 = *(_QWORD *)(v14 + 24);
        else
          v15 = *(_QWORD *)(v14 + 16);
        *(_QWORD *)&v68[2] = v15;
      }
      v16 = *(_OWORD *)((char *)a2 + 88);
      v68[3] = *(_OWORD *)((char *)a2 + 72);
      v17 = *(_OWORD *)((char *)a2 + 104);
      v68[4] = v16;
      v18 = *(_OWORD *)((char *)a2 + 120);
      v68[5] = v17;
      v19 = *(_OWORD *)((char *)a2 + 136);
      v68[6] = v18;
      v20 = *(_OWORD *)((char *)a2 + 152);
      v68[7] = v19;
      v21 = *(_OWORD *)((char *)a2 + 168);
      v68[8] = v20;
      v22 = *(_OWORD *)((char *)a2 + 200);
      v68[9] = v21;
      v68[10] = *(_OWORD *)((char *)a2 + 184);
      v68[11] = v22;
      v23 = *((_DWORD *)a2 + 14);
      v24 = *((_QWORD *)a2 + 29);
      LODWORD(v68[12]) = a3;
      *(_QWORD *)((char *)&v68[12] + 4) = 0LL;
      *(_QWORD *)&v68[13] = 0LL;
      HIDWORD(v68[1]) = v23;
      v25 = 24 * (v23 + 10);
      *(_QWORD *)&v68[14] = 0LL;
      if ( v23 )
      {
        v26 = v23;
        do
        {
          v27 = *(_DWORD *)(v24 + 8);
          v24 = *(_QWORD *)(v24 + 24);
          v25 += (v27 + 7) & 0xFFFFFFF8;
          --v26;
        }
        while ( v26 );
      }
      v28 = 192LL * v8;
      if ( v28 <= 0xFFFFFFFF )
      {
        Sizea = (unsigned int)v28;
        v30 = Win32AllocPoolZInitImpl(256LL, (unsigned int)v28, 0x43547072u);
        if ( v30 )
        {
          v35 = 0;
          if ( *((_DWORD *)a2 + 12) )
          {
            v36 = *((_QWORD *)a2 + 30) + 4LL;
            do
            {
              if ( (*(_DWORD *)v36 & 0x2000) != 0 && (*(_DWORD *)v36 & 0x4000) == 0 )
              {
                v37 = 0LL;
                memset((void *)v30, 0, Sizea);
                v39 = v35 < *((_DWORD *)a2 + 12);
                for ( i = v35; ; v39 = (unsigned int)i < *((_DWORD *)a2 + 12) )
                {
                  v59 = i;
                  if ( !v39 )
                  {
                    v67 = 0;
                    v25 += 192 * v37;
                    DWORD2(v68[1]) = v37;
                    *((_QWORD *)&v68[14] + 1) = v30;
                    v65[0] = v68;
                    LODWORD(v68[0]) = v25;
                    v66 = *(_DWORD *)(v36 + 468);
                    v65[1] = a2;
                    IVRootDeliver::Pointer::SendTouchInput(
                      (IVRootDeliver::Pointer *)v65,
                      (struct CContainerPointerInput *)v38);
                    if ( (*(_DWORD *)(v30 + 28) & 0x10000) != 0 )
                    {
                      v52 = (struct DEVICEINFO *)HMValidateHandleNoSecure(*(_QWORD *)(v30 + 32), 19);
                      Processor = CPTPProcessorFactory::GetProcessor(v52);
                      if ( Processor )
                      {
                        *((_DWORD *)Processor + 97) |= 2u;
                        *((_DWORD *)Processor + 96) = v66;
                      }
                    }
                    break;
                  }
                  v41 = *((_QWORD *)a2 + 30);
                  v42 = 480 * i;
                  v43 = *(_DWORD *)(v41 + 480 * i + 4);
                  if ( (v43 & 0x2000) != 0 )
                  {
                    v38 = 0x4000LL;
                    if ( (v43 & 0x4000) == 0
                      && *(_WORD *)(v36 + 468) == *(_WORD *)(v41 + v42 + 472)
                      && *(_WORD *)(v36 + 470) == *(_WORD *)(v41 + v42 + 474) )
                    {
                      v45 = *(_DWORD *)(v41 + v42 + 156);
                      *(_DWORD *)(v41 + v42 + 4) = v43 | 0x4000;
                      v64 = (struct tagRIMPOINTERINFONODE *)(v30 + 192 * v37);
                      *(_DWORD *)v64 = v45;
                      v46 = (_OWORD *)(v42 + v41 + 160);
                      *(_OWORD *)((char *)v64 + 8) = *v46;
                      *(_OWORD *)((char *)v64 + 24) = v46[1];
                      *(_OWORD *)((char *)v64 + 40) = v46[2];
                      *(_OWORD *)((char *)v64 + 56) = v46[3];
                      *(_OWORD *)((char *)v64 + 72) = v46[4];
                      *(_OWORD *)((char *)v64 + 88) = v46[5];
                      *(_OWORD *)((char *)v64 + 104) = v46[6];
                      v47 = v46[7];
                      v46 += 8;
                      *(_OWORD *)((char *)v64 + 120) = v47;
                      *(_OWORD *)((char *)v64 + 136) = *v46;
                      *(_OWORD *)((char *)v64 + 152) = v46[1];
                      *(_OWORD *)((char *)v64 + 168) = v46[2];
                      *((_QWORD *)v64 + 23) = *((_QWORD *)v46 + 6);
                      *((_DWORD *)v64 + 7) &= 0xFF87FFFE;
                      ContainerHwndDest = CInputDest::GetContainerHwndDest((CInputDest *)(v36 + 348));
                      *(_QWORD *)(v50 + 40) = ContainerHwndDest;
                      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)(v51 + v49 + 352));
                      memset(v69, 0, sizeof(v69));
                      if ( !(unsigned int)ApiSetGetLatestInputTransform(WindowHandle, v69)
                        || !CTouchProcessor::TransformPointerCoordinates((const struct tagINPUT_TRANSFORM *)v69, v64) )
                      {
                        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
                        {
                          v12 = 0;
                        }
                        v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                        if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v38);
                          LOBYTE(v56) = v54;
                          LOBYTE(v57) = v12;
                          WPP_RECORDER_AND_TRACE_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v57,
                            v56,
                            *(_QWORD *)(UserSessionState + 69144),
                            2,
                            4,
                            342,
                            (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids,
                            (char)WindowHandle);
                        }
                        return;
                      }
                      v37 = (unsigned int)(v37 + 1);
                    }
                  }
                  i = (unsigned int)(v59 + 1);
                }
              }
              ++v35;
              v36 += 480LL;
            }
            while ( v35 < *((_DWORD *)a2 + 12) );
          }
          GreDeleteFastMutex((char *)v30);
          return;
        }
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v12 = 0;
        }
        v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v34 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v29) + 69144);
        v58 = 341;
LABEL_70:
        LOBYTE(v33) = v31;
        LOBYTE(v32) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v32,
          v33,
          v34,
          2,
          4,
          v58,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
        return;
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v12 = 0;
      }
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v34 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v24) + 69144);
        v58 = 340;
        goto LABEL_70;
      }
    }
  }
}
