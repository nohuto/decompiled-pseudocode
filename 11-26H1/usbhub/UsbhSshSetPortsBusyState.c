/*
 * XREFs of UsbhSshSetPortsBusyState @ 0x140008460
 * Callers:
 *     UsbhDeletePdo @ 0x140007770 (UsbhDeletePdo.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1400120E4 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhSet_Pdo_Dx @ 0x14001451C (UsbhSet_Pdo_Dx.c)
 *     UsbhPdoDevicePowerState @ 0x1400156F0 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x140016CD0 (UsbhPdoSetD0.c)
 *     UsbhSshPropagateResume @ 0x1400341AC (UsbhSshPropagateResume.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1400362D0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhPdoPnp_EnablePdo @ 0x140039E34 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhDeregisterPdo @ 0x1400467AC (UsbhDeregisterPdo.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1400493F8 (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhDriverNotFoundWorker @ 0x140050050 (UsbhDriverNotFoundWorker.c)
 * Callees:
 *     UsbhDisableTimerObject @ 0x140007330 (UsbhDisableTimerObject.c)
 *     UsbhSshPortsBusy @ 0x140008B80 (UsbhSshPortsBusy.c)
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhEnableTimerObject @ 0x14002BB10 (UsbhEnableTimerObject.c)
 */

LONG __fastcall UsbhSshSetPortsBusyState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v5; // r12d
  int v6; // ebp
  LONG result; // eax
  __int64 v9; // rbx
  __int64 v10; // r9
  _BOOL8 v11; // r8
  unsigned __int16 v12; // dx
  char v13; // cl
  int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  _BOOL8 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax

  v4 = (unsigned __int16)a2;
  v5 = a4;
  v6 = a3;
  result = (unsigned __int16)a2 - 1;
  if ( (unsigned __int16)(a2 - 1) <= 0x7Eu )
  {
    v9 = FdoExt(a1, a2, a3, a4);
    KeWaitForSingleObject((PVOID)(v9 + 3160), Executive, 0, 0, 0LL);
    v11 = *(_DWORD *)(v9 + 3320) || *(_DWORD *)(v9 + 3324) || *(_DWORD *)(v9 + 3328) || *(_DWORD *)(v9 + 3332);
    v12 = (unsigned __int16)v4 >> 5;
    v13 = v4 & 0x1F;
    v14 = v6 - 1;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        v15 = v9 + 4LL * v12;
        *(_DWORD *)(v15 + 3320) |= 1 << v13;
        if ( (UsbhLogMask & 0x10000) != 0 )
        {
          if ( a1 )
          {
            v15 = *(_QWORD *)(a1 + 64);
            if ( v15 )
            {
              v15 = 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884))
                  + *(_QWORD *)(v15 + 888);
              *(_DWORD *)v15 = 1112568659;
              *(_QWORD *)(v15 + 16) = v11;
              *(_QWORD *)(v15 + 8) = 0LL;
              *(_QWORD *)(v15 + 24) = v4;
            }
          }
        }
        if ( !v11 )
        {
          v16 = FdoExt(a1, v15, v11, v10);
          UsbhSshPortsBusy(a1, v16 + 1912, v5);
          UsbhDisableTimerObject(a1, v9 + 3200, v17, v18);
        }
      }
    }
    else
    {
      v19 = v9 + 4LL * v12;
      *(_DWORD *)(v19 + 3320) &= ~(1 << v13);
      v20 = *(_DWORD *)(v9 + 3320) || *(_DWORD *)(v9 + 3324) || *(_DWORD *)(v9 + 3328) || *(_DWORD *)(v9 + 3332);
      if ( (UsbhLogMask & 0x10000) != 0 )
      {
        if ( a1 )
        {
          v19 = *(_QWORD *)(a1 + 64);
          if ( v19 )
          {
            v19 = 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884))
                + *(_QWORD *)(v19 + 888);
            *(_DWORD *)v19 = 1230009171;
            *(_QWORD *)(v19 + 16) = v11;
            *(_QWORD *)(v19 + 8) = 0LL;
            *(_QWORD *)(v19 + 24) = v4;
          }
        }
      }
      if ( v11 && !v20 )
      {
        FdoExt(a1, v19, v11, v20);
        v24 = _InterlockedExchange64((volatile __int64 *)(FdoExt(a1, v21, v22, v23) + 3312), 0LL);
        Log(a1, 0x10000, 1213419565, 0, v24);
        UsbhDecHubBusy(a1, v25, v24);
        v29 = FdoExt(a1, v26, v27, v28);
        UsbhEnableTimerObject(a1, v9 + 3200, *(_DWORD *)(v9 + 5256), 0, v29 + 1912, 2001228627);
      }
    }
    return KeReleaseSemaphore((PRKSEMAPHORE)(v9 + 3160), 16, 1, 0);
  }
  return result;
}
