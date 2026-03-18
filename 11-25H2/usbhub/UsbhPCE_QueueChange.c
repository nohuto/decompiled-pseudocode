/*
 * XREFs of UsbhPCE_QueueChange @ 0x140034868
 * Callers:
 *     UsbhReset1Debounce @ 0x140058510 (UsbhReset1Debounce.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEvent @ 0x1400068F0 (UsbhDispatch_PortChangeQueueEvent.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_QueueChange(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD *v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // [rsp+28h] [rbp-40h]
  int v17; // [rsp+28h] [rbp-40h]

  v5 = a2;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v17 = v5;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      75,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v17);
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
        *(_QWORD *)(v10 + 16) = v5;
        *(_QWORD *)(v10 + 24) = 0LL;
      }
    }
  }
  if ( (_WORD)v5 )
  {
    v11 = FdoExt(a1);
    result = (__int64)FdoExt(a1);
    if ( (unsigned __int16)v5 <= *(unsigned __int8 *)(result + 2938) )
    {
      v12 = *((_QWORD *)v11 + 382);
      if ( v12 )
      {
        result = (unsigned int)UsbhLogMask;
        v13 = v12 + 2928 * v5 - 2928;
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
              *(_QWORD *)(v15 + 16) = v5;
              *(_QWORD *)(v15 + 24) = v13;
            }
          }
        }
        if ( v13 )
          result = UsbhDispatch_PortChangeQueueEvent(a1, v13, 4, a4, a3, 0, 0LL);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v16) = v5;
      return WPP_RECORDER_SF_d(
               WPP_GLOBAL_Control->DeviceExtension,
               0,
               1,
               76,
               (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
               v16);
    }
  }
  return result;
}
