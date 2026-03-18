/*
 * XREFs of UsbhSshSetPortsBusyState @ 0x14000FDA0
 * Callers:
 *     UsbhDeletePdo @ 0x14000E690 (UsbhDeletePdo.c)
 *     UsbhPdoDevicePowerState @ 0x14000EBA4 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1400106D0 (UsbhPdoSetD0.c)
 *     UsbhSet_Pdo_Dx @ 0x140010FD8 (UsbhSet_Pdo_Dx.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1400111E0 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhSshPropagateResume @ 0x14002E46C (UsbhSshPropagateResume.c)
 *     UsbhBusIf_ResumeChildHub @ 0x140037F80 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhPdoPnp_EnablePdo @ 0x14003A400 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhDeregisterPdo @ 0x140046C6C (UsbhDeregisterPdo.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x14004986C (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhDriverNotFoundWorker @ 0x14004FB80 (UsbhDriverNotFoundWorker.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000A860 (UsbhDecHubBusy.c)
 *     UsbhDisableTimerObject @ 0x14000C938 (UsbhDisableTimerObject.c)
 *     UsbhSshPortsBusy @ 0x14001049C (UsbhSshPortsBusy.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhEnableTimerObject @ 0x14002EA20 (UsbhEnableTimerObject.c)
 */

LONG __fastcall UsbhSshSetPortsBusyState(__int64 a1, unsigned __int16 a2, int a3, unsigned int a4)
{
  __int64 v4; // rsi
  LONG result; // eax
  _DWORD *v9; // rbx
  BOOL v10; // r8d
  unsigned __int16 v11; // dx
  char v12; // cl
  int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rcx
  _DWORD *v16; // rax
  BOOL v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // r15
  __int64 v21; // rdx
  _DWORD *v22; // rax

  v4 = a2;
  result = a2 - 1;
  if ( (unsigned __int16)(a2 - 1) <= 0x7Eu )
  {
    v9 = FdoExt(a1);
    KeWaitForSingleObject(v9 + 790, Executive, 0, 0, 0LL);
    v10 = v9[830] || v9[831] || v9[832] || v9[833];
    v11 = (unsigned __int16)v4 >> 5;
    v12 = v4 & 0x1F;
    v13 = a3 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        v9[v11 + 830] |= 1 << v12;
        if ( (UsbhLogMask & 0x10000) != 0 )
        {
          if ( a1 )
          {
            v14 = *(_QWORD *)(a1 + 64);
            if ( v14 )
            {
              v15 = *(_QWORD *)(v14 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
              *(_DWORD *)v15 = 1112568659;
              *(_QWORD *)(v15 + 16) = v10;
              *(_QWORD *)(v15 + 8) = 0LL;
              *(_QWORD *)(v15 + 24) = v4;
            }
          }
        }
        if ( !v10 )
        {
          v16 = FdoExt(a1);
          UsbhSshPortsBusy(a1, v16 + 478, a4);
          UsbhDisableTimerObject(a1, (__int64)(v9 + 800));
        }
      }
    }
    else
    {
      v9[v11 + 830] &= ~(1 << v12);
      v17 = v9[830] || v9[831] || v9[832] || v9[833];
      if ( (UsbhLogMask & 0x10000) != 0 )
      {
        if ( a1 )
        {
          v18 = *(_QWORD *)(a1 + 64);
          if ( v18 )
          {
            v19 = *(_QWORD *)(v18 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
            *(_DWORD *)v19 = 1230009171;
            *(_QWORD *)(v19 + 16) = v10;
            *(_QWORD *)(v19 + 8) = 0LL;
            *(_QWORD *)(v19 + 24) = v4;
          }
        }
      }
      if ( v10 && !v17 )
      {
        FdoExt(a1);
        v20 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)FdoExt(a1) + 414, 0LL);
        Log(a1, 0x10000, 1213419565, 0, (__int64)v20);
        UsbhDecHubBusy(a1, v21, v20);
        v22 = FdoExt(a1);
        UsbhEnableTimerObject(a1, (_DWORD)v9 + 3200, v9[1314], 0, (__int64)(v22 + 478), 2001228627);
      }
    }
    return KeReleaseSemaphore((PRKSEMAPHORE)(v9 + 790), 16, 1, 0);
  }
  return result;
}
