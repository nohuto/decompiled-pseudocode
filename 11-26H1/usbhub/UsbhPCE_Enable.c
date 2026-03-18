/*
 * XREFs of UsbhPCE_Enable @ 0x140013680
 * Callers:
 *     UsbhSyncResumePort @ 0x140010E74 (UsbhSyncResumePort.c)
 *     UsbhBusResume_Action @ 0x140012FB0 (UsbhBusResume_Action.c)
 *     UsbhOvercurrentResetWorker @ 0x14003FA80 (UsbhOvercurrentResetWorker.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x14001E924 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_Enable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  signed __int32 v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx
  signed __int32 v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  signed __int32 v27; // eax
  unsigned int v28; // r9d
  __int64 v29; // rcx
  __int64 v30; // r9

  v4 = (unsigned __int16)a3;
  FdoExt(a1, a2, a3, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      56,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 880), 0xFFFFFFFF);
        v12 = *(_DWORD *)(v10 + 884);
        v13 = *(_QWORD *)(v10 + 888);
        v7 = 32LL * ((v11 - 1) & v12);
        *(_DWORD *)(v7 + v13) = 825247056;
        *(_QWORD *)(v7 + v13 + 8) = 0LL;
        *(_QWORD *)(v7 + v13 + 16) = 0LL;
        *(_QWORD *)(v7 + v13 + 24) = v4;
      }
    }
  }
  result = (unsigned int)UsbhLogMask;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 880), 0xFFFFFFFF);
        v17 = *(_DWORD *)(v15 + 884);
        v18 = *(_QWORD *)(v15 + 888);
        v19 = (v16 - 1) & v17;
        result = 1413771367LL;
        v7 = 32 * v19;
        *(_DWORD *)(v7 + v18) = 1413771367;
        *(_QWORD *)(v7 + v18 + 8) = 0LL;
        *(_QWORD *)(v7 + v18 + 16) = v4;
        *(_QWORD *)(v7 + v18 + 24) = 0LL;
      }
    }
  }
  if ( (_WORD)v4 )
  {
    v20 = FdoExt(a1, v7, v8, v9);
    result = FdoExt(a1, v21, v22, v23);
    if ( (unsigned __int16)v4 <= *(unsigned __int8 *)(result + 2938) )
    {
      v24 = *(_QWORD *)(v20 + 3056);
      if ( v24 )
      {
        result = (unsigned int)UsbhLogMask;
        v25 = v24 + 2928 * v4 - 2928;
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v26 = *(_QWORD *)(a1 + 64);
            if ( v26 )
            {
              v27 = _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 880), 0xFFFFFFFF);
              v28 = *(_DWORD *)(v26 + 884);
              v29 = *(_QWORD *)(v26 + 888);
              v30 = (v27 - 1) & v28;
              result = 1044672615LL;
              v30 *= 32LL;
              *(_DWORD *)(v30 + v29) = 1044672615;
              *(_QWORD *)(v30 + v29 + 8) = 0LL;
              *(_QWORD *)(v30 + v29 + 16) = v4;
              *(_QWORD *)(v30 + v29 + 24) = v25;
            }
          }
        }
        if ( v25 )
          return UsbhDispatch_PortChangeQueueNullEvent(a1, v25, 1LL, a2);
      }
    }
  }
  return result;
}
