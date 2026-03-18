/*
 * XREFs of UsbhPCE_Disable @ 0x140003E98
 * Callers:
 *     UsbhBusPause_Action @ 0x14000333C (UsbhBusPause_Action.c)
 *     UsbhQueueDriverOvercurrent @ 0x140040200 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x140040380 (UsbhQueueOvercurrentReset.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1400459F4 (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x1400068C8 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhBusUnlatchPdo @ 0x14001CCB0 (UsbhBusUnlatchPdo.c)
 *     UsbhCancelEnumeration @ 0x140035C04 (UsbhCancelEnumeration.c)
 *     WPP_RECORDER_SF_dq @ 0x14003ECF4 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhPCE_Disable(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rdi
  int v6; // edx
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  KIRQL v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbp
  __int64 Pool2; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // rdx
  int v35; // r9d

  v4 = a2;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      66,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v4,
      a3);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 842024272;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_QWORD *)(v9 + 24) = v4;
      }
    }
  }
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 1413771367;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = v4;
        *(_QWORD *)(v11 + 24) = 0LL;
      }
    }
  }
  if ( (_WORD)v4 )
  {
    v12 = FdoExt(a1);
    if ( (unsigned __int16)v4 <= *(unsigned __int8 *)(FdoExt(a1) + 2938) )
    {
      v13 = *(_QWORD *)(v12 + 3056);
      if ( v13 )
      {
        v14 = v4;
        v15 = v13 + 2928 * v4 - 2928;
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v16 = *(_QWORD *)(a1 + 64);
            if ( v16 )
            {
              v17 = *(_QWORD *)(v16 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
              *(_DWORD *)v17 = 1044672615;
              *(_QWORD *)(v17 + 8) = 0LL;
              *(_QWORD *)(v17 + 16) = v14;
              *(_QWORD *)(v17 + 24) = v15;
            }
          }
        }
        if ( v15 )
        {
          UsbhDispatch_PortChangeQueueNullEvent(a1, v15, 2LL, a3);
          v18 = 0LL;
          v19 = *(unsigned __int16 *)(v15 + 4);
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            if ( a1 )
            {
              v20 = *(_QWORD *)(a1 + 64);
              if ( v20 )
              {
                v21 = *(_QWORD *)(v20 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
                *(_DWORD *)v21 = 1329877100;
                *(_QWORD *)(v21 + 8) = 0LL;
                *(_QWORD *)(v21 + 16) = v19;
                *(_QWORD *)(v21 + 24) = 1884308559LL;
              }
            }
          }
          v22 = KeAcquireSpinLockRaiseToDpc(&HubG);
          qword_14006F5A0 = (__int64)&dword_14006F5A8;
          if ( (UsbhLogMask & 8) != 0 )
          {
            if ( a1 )
            {
              v23 = *(_QWORD *)(a1 + 64);
              if ( v23 )
              {
                v24 = *(_QWORD *)(v23 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
                *(_DWORD *)v24 = 1413771367;
                *(_QWORD *)(v24 + 8) = 0LL;
                *(_QWORD *)(v24 + 16) = v19;
                *(_QWORD *)(v24 + 24) = 0LL;
              }
            }
          }
          if ( (_WORD)v19 )
          {
            v25 = FdoExt(a1);
            if ( (unsigned __int16)v19 <= *(unsigned __int8 *)(FdoExt(a1) + 2938) )
            {
              v26 = *(_QWORD *)(v25 + 3056);
              if ( v26 )
              {
                v27 = v26 + 2928 * v19 - 2928;
                if ( (UsbhLogMask & 8) != 0 )
                {
                  if ( a1 )
                  {
                    v28 = *(_QWORD *)(a1 + 64);
                    if ( v28 )
                    {
                      v29 = *(_QWORD *)(v28 + 888)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
                      *(_DWORD *)v29 = 1044672615;
                      *(_QWORD *)(v29 + 8) = 0LL;
                      *(_QWORD *)(v29 + 16) = v19;
                      *(_QWORD *)(v29 + 24) = v27;
                    }
                  }
                }
                if ( v27 )
                {
                  v18 = *(_QWORD *)(v27 + 392);
                  if ( v18 )
                  {
                    v30 = PdoExt(*(_QWORD *)(v27 + 392));
                    Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
                    if ( Pool2 )
                    {
                      *(_DWORD *)Pool2 = 1668571500;
                      *(_QWORD *)(Pool2 + 32) = v18;
                      *(_DWORD *)(Pool2 + 24) = 1884308559;
                      *(_QWORD *)(Pool2 + 40) = 0LL;
                      v32 = (_QWORD *)(Pool2 + 8);
                      v33 = *(_QWORD **)(v30 + 1280);
                      if ( *v33 != v30 + 1272 )
                        __fastfail(3u);
                      *v32 = v30 + 1272;
                      v32[1] = v33;
                      *v33 = v32;
                      *(_QWORD *)(v30 + 1280) = v32;
                    }
                    else
                    {
                      ++*(_DWORD *)(v30 + 1288);
                    }
                  }
                }
              }
            }
          }
          qword_14006F5A0 = 0LL;
          KeReleaseSpinLock(&HubG, v22);
          if ( v18 )
          {
            v34 = *(unsigned int *)(v15 + 400);
            *(_QWORD *)(v15 + 376) = v15 + 24;
            *(_DWORD *)(v15 + 416) = 1;
            UsbhCancelEnumeration(a1, v34, v15, v18);
            *(_QWORD *)(v15 + 376) = 0LL;
            if ( *(_DWORD *)(v15 + 416) )
              UsbhBusUnlatchPdo(a1, v18, v15, v35, 0LL);
            else
              *(_DWORD *)(v15 + 400) = 0;
          }
        }
      }
    }
  }
}
