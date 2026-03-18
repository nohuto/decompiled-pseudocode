/*
 * XREFs of UsbhQueuePauseChange @ 0x140003C48
 * Callers:
 *     UsbhBusPause_Action @ 0x14000333C (UsbhBusPause_Action.c)
 *     UsbhHubProcessIsr @ 0x14000AC30 (UsbhHubProcessIsr.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEvent @ 0x1400068F0 (UsbhDispatch_PortChangeQueueEvent.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhQueuePauseChange(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v4; // ebp
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // [rsp+88h] [rbp+20h]

  v3 = a2;
  v4 = a3;
  HIDWORD(v16) = 0;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v7 = 829912937;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = a3;
        *(_QWORD *)(v7 + 24) = a2;
      }
    }
  }
  LODWORD(v16) = 0x80000;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      79,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      a2);
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
    result = FdoExt(a1);
    if ( (unsigned __int16)v3 <= *(unsigned __int8 *)(result + 2938) )
    {
      v12 = *(_QWORD *)(v11 + 3056);
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
          result = UsbhDispatch_PortChangeQueueEvent(a1, v13, 4, v4, v16, 0, 0LL);
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
               v3);
  }
  return result;
}
