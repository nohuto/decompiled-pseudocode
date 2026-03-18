/*
 * XREFs of ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1400D3070
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140060B24 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     RIMGetPointerInputType @ 0x140074390 (RIMGetPointerInputType.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1400D3370 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     LINPSourceFromPointerType @ 0x1400D36A4 (LINPSourceFromPointerType.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D36E0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1400D4970 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1400D4990 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x140189344 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionRimDeviceReadNotification @ 0x140227E4C (ApiSetEditionRimDeviceReadNotification.c)
 */

__int64 __fastcall CHidInput::ProcessInput(
        CHidInput *this,
        LARGE_INTEGER *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5)
{
  void *v5; // rbx
  int v10; // esi
  int LowPart; // eax
  struct DEVICEINFO *DeviceInfo; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  struct DEVICEINFO *v16; // rdi
  __int64 v17; // rax
  void *v18; // r13
  int v19; // edx
  int v20; // ecx
  struct CPTPProcessor *Processor; // rsi
  int v22; // r8d
  __int64 v23; // rbx
  __int64 v24; // rdx
  int v25; // r8d
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 UserSessionState; // rax
  int v30; // eax
  __int64 v31; // rax
  int v32; // [rsp+20h] [rbp-48h]
  int v33; // [rsp+28h] [rbp-40h]
  int v34; // [rsp+80h] [rbp+18h] BYREF

  v5 = a5;
  v10 = a3 & 0x1C;
  if ( (a3 & 0x1C) != 0 )
    LowPart = a2[24].LowPart;
  else
    LowPart = CBaseInput::IsInjectionDeviceFromKernelHandle(this, a5);
  DeviceInfo = CBaseInput::FindDeviceInfo(this, v5, LowPart);
  v16 = DeviceInfo;
  if ( DeviceInfo )
  {
    if ( *((_QWORD *)DeviceInfo + 57) )
    {
      if ( !v10 )
      {
        v34 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 391LL);
      }
      if ( (*((_DWORD *)v16 + 46) & 0x80u) == 0 )
      {
        v34 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 392LL);
      }
      v17 = *((_QWORD *)v16 + 57);
      v18 = *(void **)v16;
      LOBYTE(v34) = 0;
      if ( v17 && *(_DWORD *)(v17 + 24) == 7 && !isChildPartition(v14, v13, v15) )
      {
        Processor = CPTPProcessorFactory::GetProcessor(v16);
        if ( Processor )
        {
          CPTPProcessor::ProcessInput(
            Processor,
            v18,
            a2,
            a4,
            -__CFSHR__(*((_DWORD *)v16 + 42), 14),
            -__CFSHR__(*(_DWORD *)(*((_QWORD *)v16 + 57) + 368LL), 5),
            (bool *)&v34);
          *((_BYTE *)this + 1344) = *((_BYTE *)Processor + 1984);
        }
      }
      else
      {
        UserSessionState = W32GetUserSessionState(v14, v13, v15);
        CTouchProcessor::ProcessInput(*(PERESOURCE **)(UserSessionState + 3256), v18, a2, a4, v32, v33, (bool *)&v34);
      }
      v23 = *(_QWORD *)(W32GetUserSessionState(v20, v19, v22) + 3056);
      v26 = RIMGetPointerInputType(*((_QWORD *)v16 + 57), v24, v25);
      v27 = LINPSourceFromPointerType(v26);
      CInputGlobals::UpdateInputGlobals(
        v23,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        v27);
    }
    else
    {
      v30 = *((_DWORD *)DeviceInfo + 46);
      if ( (v30 & 0x100) != 0 || (v30 & 0x200) != 0 )
      {
        if ( (v30 & 0x40) == 0 )
        {
          v31 = W32GetUserSessionState(v14, v13, v15);
          CInputGlobals::UpdateInputGlobals(
            *(_QWORD *)(v31 + 3056),
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            4LL);
        }
        ApiSetEditionRimDeviceReadNotification(a2, a3, a4, v5);
      }
    }
  }
  return 0LL;
}
