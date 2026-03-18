/*
 * XREFs of ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x14018C130
 * Callers:
 *     <none>
 * Callees:
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     LINPSourceFromPointerType @ 0x1400D9884 (LINPSourceFromPointerType.c)
 *     RIMGetPointerInputType @ 0x1400D98BC (RIMGetPointerInputType.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D99B0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1400FF970 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x140105A80 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1401060A4 (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140188830 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x14018B584 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ApiSetEditionRimDeviceReadNotification @ 0x1401968F0 (ApiSetEditionRimDeviceReadNotification.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1402101A4 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 */

__int64 __fastcall CHidInput::ProcessInput(CHidInput *this, char *a2, unsigned int a3, unsigned int a4, char *a5)
{
  char *v5; // rbx
  int v10; // esi
  int IsInjectionDeviceFromKernelHandle; // eax
  struct DEVICEINFO *DeviceInfo; // rax
  __int64 v13; // rdx
  CHidInput *v14; // rcx
  struct DEVICEINFO *v15; // rdi
  int v16; // ebx
  void *v17; // r13
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct CPTPProcessor *Processor; // rsi
  __int64 UserSessionState; // rax
  unsigned int v25; // esi
  __int64 v26; // rbx
  int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  int v32; // [rsp+20h] [rbp-48h]
  int v33; // [rsp+28h] [rbp-40h]
  int v34; // [rsp+80h] [rbp+18h] BYREF

  v5 = a5;
  v10 = a3 & 0x1C;
  if ( (a3 & 0x1C) != 0 )
    IsInjectionDeviceFromKernelHandle = *((_DWORD *)a2 + 48);
  else
    IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle(this, a5);
  DeviceInfo = CBaseInput::FindDeviceInfo(this, v5, IsInjectionDeviceFromKernelHandle);
  v15 = DeviceInfo;
  if ( !DeviceInfo )
    return 0LL;
  if ( *((_QWORD *)DeviceInfo + 57) )
  {
    v16 = 2;
    if ( !v10 )
    {
      v34 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 392LL);
    }
    if ( (*((_DWORD *)v15 + 46) & 0x80u) == 0 )
    {
      v34 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 393LL);
    }
    v17 = *(void **)v15;
    LOBYTE(v34) = 0;
    LOBYTE(v18) = CHidInput::IsTouchpadDevice(v14, v15);
    if ( !v18 || isChildPartition(v20, v19) )
    {
      UserSessionState = W32GetUserSessionState(v20, v19);
      CTouchProcessor::ProcessInput(*(CTouchProcessor **)(UserSessionState + 3256), v17, a2, a4, v32, v33, (bool *)&v34);
    }
    else
    {
      Processor = CPTPProcessorFactory::GetProcessor(v15);
      if ( !Processor )
      {
LABEL_16:
        v16 = 0;
LABEL_17:
        v25 = v16 | ((*((_DWORD *)v15 + 42) & 0x2000u) >> 10);
        if ( a3 == 4 && *((_DWORD *)v15 + 534) == 1 )
          v25 |= 0x80u;
        v26 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 3056);
        v27 = RIMGetPointerInputType(*((_QWORD *)v15 + 57));
        v28 = LINPSourceFromPointerType(v27);
        CInputGlobals::UpdateInputGlobals(
          v26,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          v28,
          0,
          0,
          v25);
        return 0LL;
      }
      CPTPProcessor::ProcessInput(
        Processor,
        v17,
        (unsigned int *)a2,
        a4,
        -__CFSHR__(*((_DWORD *)v15 + 42), 14),
        -__CFSHR__(*(_DWORD *)(*((_QWORD *)v15 + 57) + 368LL), 5),
        (bool *)&v34);
      *((_BYTE *)this + 1352) = *((_BYTE *)Processor + 1984);
    }
    if ( (_BYTE)v34 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v29 = *((_DWORD *)DeviceInfo + 46);
  if ( (v29 & 0x100) != 0 || (v29 & 0x200) != 0 )
  {
    if ( (v29 & 0x40) == 0 )
    {
      v30 = W32GetUserSessionState(v14, v13);
      CInputGlobals::UpdateInputGlobals(
        *(_QWORD *)(v30 + 3056),
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        4u,
        0,
        0,
        (*((_DWORD *)v15 + 42) & 0x2000u) >> 10);
    }
    ApiSetEditionRimDeviceReadNotification(a2, a3, a4, v5);
  }
  return 0LL;
}
