/*
 * XREFs of UsbhPCE_Disable @ 0x140013E18
 * Callers:
 *     UsbhBusPause_Action @ 0x14001498C (UsbhBusPause_Action.c)
 *     UsbhQueueDriverOvercurrent @ 0x14003FCE0 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x14003FE60 (UsbhQueueOvercurrentReset.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x140045530 (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x14001E924 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     UsbhBusUnlatchPdo @ 0x140021BAC (UsbhBusUnlatchPdo.c)
 *     UsbhCancelEnumeration @ 0x140033B08 (UsbhCancelEnumeration.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhPCE_Disable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  signed __int32 v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rcx
  signed __int32 v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rcx
  signed __int32 v26; // eax
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rbp
  __int64 v32; // rcx
  signed __int32 v33; // eax
  unsigned int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  KIRQL v40; // r15
  __int64 v41; // rcx
  signed __int32 v42; // eax
  unsigned int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // r14
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rcx
  signed __int32 v52; // eax
  unsigned int v53; // edx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rbp
  __int64 Pool2; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rdx
  __int64 v60; // rdx
  int v61; // r9d

  v5 = (unsigned __int16)a2;
  FdoExt(a1, a2, a3, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      66,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v5,
      a3);
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
        *(_DWORD *)(v7 + v13) = 842024272;
        *(_QWORD *)(v7 + v13 + 8) = 0LL;
        *(_QWORD *)(v7 + v13 + 16) = 0LL;
        *(_QWORD *)(v7 + v13 + 24) = v5;
      }
    }
  }
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 880), 0xFFFFFFFF);
        v16 = *(_DWORD *)(v14 + 884);
        v17 = *(_QWORD *)(v14 + 888);
        v7 = 32LL * ((v15 - 1) & v16);
        *(_DWORD *)(v7 + v17) = 1413771367;
        *(_QWORD *)(v7 + v17 + 8) = 0LL;
        *(_QWORD *)(v7 + v17 + 16) = v5;
        *(_QWORD *)(v7 + v17 + 24) = 0LL;
      }
    }
  }
  if ( (_WORD)v5 )
  {
    v18 = FdoExt(a1, v7, v8, v9);
    if ( (unsigned __int16)v5 <= *(unsigned __int8 *)(FdoExt(a1, v19, v20, v21) + 2938) )
    {
      v22 = *(_QWORD *)(v18 + 3056);
      if ( v22 )
      {
        v23 = v5;
        v24 = v22 + 2928 * v5 - 2928;
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v25 = *(_QWORD *)(a1 + 64);
            if ( v25 )
            {
              v26 = _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 880), 0xFFFFFFFF);
              v27 = *(_DWORD *)(v25 + 884);
              v28 = *(_QWORD *)(v25 + 888);
              v29 = 32LL * ((v26 - 1) & v27);
              *(_DWORD *)(v29 + v28) = 1044672615;
              *(_QWORD *)(v29 + v28 + 8) = 0LL;
              *(_QWORD *)(v29 + v28 + 16) = v23;
              *(_QWORD *)(v29 + v28 + 24) = v24;
            }
          }
        }
        if ( v24 )
        {
          UsbhDispatch_PortChangeQueueNullEvent(a1, v24, 2LL, a3);
          v30 = 0LL;
          v31 = *(unsigned __int16 *)(v24 + 4);
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            if ( a1 )
            {
              v32 = *(_QWORD *)(a1 + 64);
              if ( v32 )
              {
                v33 = _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 880), 0xFFFFFFFF);
                v34 = *(_DWORD *)(v32 + 884);
                v35 = *(_QWORD *)(v32 + 888);
                v36 = 32LL * ((v33 - 1) & v34);
                *(_DWORD *)(v36 + v35) = 1329877100;
                *(_QWORD *)(v36 + v35 + 8) = 0LL;
                *(_QWORD *)(v36 + v35 + 16) = v31;
                *(_QWORD *)(v36 + v35 + 24) = 1884308559LL;
              }
            }
          }
          v40 = KeAcquireSpinLockRaiseToDpc(&HubG);
          qword_140070600 = (__int64)&dword_140070608;
          if ( (UsbhLogMask & 8) != 0 )
          {
            if ( a1 )
            {
              v41 = *(_QWORD *)(a1 + 64);
              if ( v41 )
              {
                v42 = _InterlockedExchangeAdd((volatile signed __int32 *)(v41 + 880), 0xFFFFFFFF);
                v43 = *(_DWORD *)(v41 + 884);
                v44 = *(_QWORD *)(v41 + 888);
                v37 = 32LL * ((v42 - 1) & v43);
                *(_DWORD *)(v37 + v44) = 1413771367;
                *(_QWORD *)(v37 + v44 + 8) = 0LL;
                *(_QWORD *)(v37 + v44 + 16) = v31;
                *(_QWORD *)(v37 + v44 + 24) = 0LL;
              }
            }
          }
          if ( (_WORD)v31 )
          {
            v45 = FdoExt(a1, v37, v38, v39);
            if ( (unsigned __int16)v31 <= *(unsigned __int8 *)(FdoExt(a1, v46, v47, v48) + 2938) )
            {
              v49 = *(_QWORD *)(v45 + 3056);
              if ( v49 )
              {
                v50 = v49 + 2928 * v31 - 2928;
                if ( (UsbhLogMask & 8) != 0 )
                {
                  if ( a1 )
                  {
                    v51 = *(_QWORD *)(a1 + 64);
                    if ( v51 )
                    {
                      v52 = _InterlockedExchangeAdd((volatile signed __int32 *)(v51 + 880), 0xFFFFFFFF);
                      v53 = *(_DWORD *)(v51 + 884);
                      v54 = *(_QWORD *)(v51 + 888);
                      v55 = 32LL * ((v52 - 1) & v53);
                      *(_DWORD *)(v55 + v54) = 1044672615;
                      *(_QWORD *)(v55 + v54 + 8) = 0LL;
                      *(_QWORD *)(v55 + v54 + 16) = v31;
                      *(_QWORD *)(v55 + v54 + 24) = v50;
                    }
                  }
                }
                if ( v50 )
                {
                  v30 = *(_QWORD *)(v50 + 392);
                  if ( v30 )
                  {
                    v56 = PdoExt(*(_QWORD *)(v50 + 392));
                    Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
                    if ( Pool2 )
                    {
                      *(_DWORD *)Pool2 = 1668571500;
                      *(_QWORD *)(Pool2 + 32) = v30;
                      *(_DWORD *)(Pool2 + 24) = 1884308559;
                      *(_QWORD *)(Pool2 + 40) = 0LL;
                      v58 = (_QWORD *)(Pool2 + 8);
                      v59 = *(_QWORD **)(v56 + 1280);
                      if ( *v59 != v56 + 1272 )
                        __fastfail(3u);
                      *v58 = v56 + 1272;
                      v58[1] = v59;
                      *v59 = v58;
                      *(_QWORD *)(v56 + 1280) = v58;
                    }
                    else
                    {
                      ++*(_DWORD *)(v56 + 1288);
                    }
                  }
                }
              }
            }
          }
          qword_140070600 = 0LL;
          KeReleaseSpinLock(&HubG, v40);
          if ( v30 )
          {
            v60 = *(unsigned int *)(v24 + 400);
            *(_QWORD *)(v24 + 376) = v24 + 24;
            *(_DWORD *)(v24 + 416) = 1;
            UsbhCancelEnumeration(a1, v60, v24, v30);
            *(_QWORD *)(v24 + 376) = 0LL;
            if ( *(_DWORD *)(v24 + 416) )
              UsbhBusUnlatchPdo(a1, v30, v24, v61, 0LL);
            else
              *(_DWORD *)(v24 + 400) = 0;
          }
        }
      }
    }
  }
}
