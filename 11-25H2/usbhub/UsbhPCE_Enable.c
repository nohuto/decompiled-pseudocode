/*
 * XREFs of UsbhPCE_Enable @ 0x14000D168
 * Callers:
 *     UsbhBusResume_Action @ 0x14000CC28 (UsbhBusResume_Action.c)
 *     UsbhSyncResumePort @ 0x1400358D0 (UsbhSyncResumePort.c)
 *     UsbhOvercurrentResetWorker @ 0x14003FF90 (UsbhOvercurrentResetWorker.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x1400068C8 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_Enable(__int64 a1, int a2, unsigned __int16 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx

  v3 = a3;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      56,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v3);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v7 = 825247056;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = 0LL;
        *(_QWORD *)(v7 + 24) = v3;
      }
    }
  }
  result = (unsigned int)UsbhLogMask;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        result = 1413771367LL;
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = 1413771367;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = v3;
        *(_QWORD *)(v10 + 24) = 0LL;
      }
    }
  }
  if ( (_WORD)v3 )
  {
    v11 = FdoExt(a1);
    result = (__int64)FdoExt(a1);
    if ( (unsigned __int16)v3 <= *(unsigned __int8 *)(result + 2938) )
    {
      v12 = *((_QWORD *)v11 + 382);
      if ( v12 )
      {
        result = (unsigned int)UsbhLogMask;
        v13 = v12 + 2928 * v3 - 2928;
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v14 = *(_QWORD *)(a1 + 64);
            if ( v14 )
            {
              result = 1044672615LL;
              v15 = *(_QWORD *)(v14 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
              *(_DWORD *)v15 = 1044672615;
              *(_QWORD *)(v15 + 8) = 0LL;
              *(_QWORD *)(v15 + 16) = v3;
              *(_QWORD *)(v15 + 24) = v13;
            }
          }
        }
        if ( v13 )
          return UsbhDispatch_PortChangeQueueNullEvent(a1, v13, 1, a2);
      }
    }
  }
  return result;
}
