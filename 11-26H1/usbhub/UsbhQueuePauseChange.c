/*
 * XREFs of UsbhQueuePauseChange @ 0x1400142C4
 * Callers:
 *     UsbhBusPause_Action @ 0x14001498C (UsbhBusPause_Action.c)
 *     UsbhHubProcessIsr @ 0x14001C3D0 (UsbhHubProcessIsr.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEvent @ 0x14001E94C (UsbhDispatch_PortChangeQueueEvent.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhQueuePauseChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // ebp
  __int64 v7; // rcx
  signed __int32 v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rcx
  signed __int32 v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  signed __int32 v24; // eax
  unsigned int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // [rsp+88h] [rbp+20h]

  v4 = (unsigned __int16)a2;
  v5 = a3;
  HIDWORD(v28) = 0;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 880), 0xFFFFFFFF);
        v9 = *(_DWORD *)(v7 + 884);
        v10 = *(_QWORD *)(v7 + 888);
        a2 = 32LL * ((v8 - 1) & v9);
        *(_DWORD *)(a2 + v10) = 829912937;
        *(_QWORD *)(a2 + v10 + 8) = 0LL;
        *(_QWORD *)(a2 + v10 + 16) = a3;
        *(_QWORD *)(a2 + v10 + 24) = v4;
      }
    }
  }
  LODWORD(v28) = 0x80000;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      79,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v4);
  result = (unsigned int)UsbhLogMask;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 880), 0xFFFFFFFF);
        v14 = *(_DWORD *)(v12 + 884);
        v15 = *(_QWORD *)(v12 + 888);
        v16 = (v13 - 1) & v14;
        result = 1413771367LL;
        a2 = 32 * v16;
        *(_DWORD *)(a2 + v15) = 1413771367;
        *(_QWORD *)(a2 + v15 + 8) = 0LL;
        *(_QWORD *)(a2 + v15 + 16) = v4;
        *(_QWORD *)(a2 + v15 + 24) = 0LL;
      }
    }
  }
  if ( (_WORD)v4 )
  {
    v17 = FdoExt(a1, a2, a3, a4);
    result = FdoExt(a1, v18, v19, v20);
    if ( (unsigned __int16)v4 <= *(unsigned __int8 *)(result + 2938) )
    {
      v21 = *(_QWORD *)(v17 + 3056);
      if ( v21 )
      {
        result = (unsigned int)UsbhLogMask;
        v22 = v21 + 2928 * v4 - 2928;
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v23 = *(_QWORD *)(a1 + 64);
            if ( v23 )
            {
              v24 = _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 880), 0xFFFFFFFF);
              v25 = *(_DWORD *)(v23 + 884);
              v26 = *(_QWORD *)(v23 + 888);
              v27 = (v24 - 1) & v25;
              result = 1044672615LL;
              v27 *= 32LL;
              *(_DWORD *)(v27 + v26) = 1044672615;
              *(_QWORD *)(v27 + v26 + 8) = 0LL;
              *(_QWORD *)(v27 + v26 + 16) = v4;
              *(_QWORD *)(v27 + v26 + 24) = v22;
            }
          }
        }
        if ( v22 )
          result = UsbhDispatch_PortChangeQueueEvent(a1, v22, 4, v5, v28, 0, 0LL);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_d(
               WPP_GLOBAL_Control->DeviceExtension,
               0,
               1,
               80,
               (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
               v4);
  }
  return result;
}
