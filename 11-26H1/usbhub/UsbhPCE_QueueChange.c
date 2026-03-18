/*
 * XREFs of UsbhPCE_QueueChange @ 0x140030160
 * Callers:
 *     UsbhReset1Debounce @ 0x140058A70 (UsbhReset1Debounce.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEvent @ 0x14001E94C (UsbhDispatch_PortChangeQueueEvent.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_QueueChange(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v9; // rcx
  signed __int32 v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdx
  _DWORD *v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  signed __int32 v18; // eax
  unsigned int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // [rsp+28h] [rbp-40h]

  v5 = a2;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      75,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v5);
  result = (unsigned int)UsbhLogMask;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 880), 0xFFFFFFFF);
        v11 = *(_DWORD *)(v9 + 884);
        v12 = *(_QWORD *)(v9 + 888);
        v13 = (v10 - 1) & v11;
        result = 1413771367LL;
        v13 *= 32LL;
        *(_DWORD *)(v13 + v12) = 1413771367;
        *(_QWORD *)(v13 + v12 + 8) = 0LL;
        *(_QWORD *)(v13 + v12 + 16) = v5;
        *(_QWORD *)(v13 + v12 + 24) = 0LL;
      }
    }
  }
  if ( (_WORD)v5 )
  {
    v14 = FdoExt(a1);
    result = (__int64)FdoExt(a1);
    if ( (unsigned __int16)v5 <= *(unsigned __int8 *)(result + 2938) )
    {
      v15 = *((_QWORD *)v14 + 382);
      if ( v15 )
      {
        result = (unsigned int)UsbhLogMask;
        v16 = v15 + 2928 * v5 - 2928;
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v17 = *(_QWORD *)(a1 + 64);
            if ( v17 )
            {
              v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 880), 0xFFFFFFFF);
              v19 = *(_DWORD *)(v17 + 884);
              v20 = *(_QWORD *)(v17 + 888);
              v21 = (v18 - 1) & v19;
              result = 1044672615LL;
              v21 *= 32LL;
              *(_DWORD *)(v21 + v20) = 1044672615;
              *(_QWORD *)(v21 + v20 + 8) = 0LL;
              *(_QWORD *)(v21 + v20 + 16) = v5;
              *(_QWORD *)(v21 + v20 + 24) = v16;
            }
          }
        }
        if ( v16 )
          result = UsbhDispatch_PortChangeQueueEvent(a1, v16, 4, a4, a3, 0, 0LL);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v22) = v5;
      return WPP_RECORDER_SF_d(
               WPP_GLOBAL_Control->DeviceExtension,
               0,
               1,
               76,
               (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
               v22);
    }
  }
  return result;
}
