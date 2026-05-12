/*
 * XREFs of NvmeAdapterPoFxSetDeviceIdleTimeout @ 0x140124014
 * Callers:
 *     NvmeAdapterInitializePoFx @ 0x140123A1C (NvmeAdapterInitializePoFx.c)
 *     NvmeControllerSystemPowerHint @ 0x14012754C (NvmeControllerSystemPowerHint.c)
 *     NvmeNamespaceProcessSetDevicePowerIrpComplete @ 0x140128C7C (NvmeNamespaceProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 */

void __fastcall NvmeAdapterPoFxSetDeviceIdleTimeout(_QWORD *a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // r14
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v6 = a1[20];
  if ( *(_BYTE *)v6 == 1 )
  {
    v7 = -1;
    if ( a2 == -1 )
      v8 = -1LL;
    else
      v8 = 10000LL * a2;
    v9 = *(_DWORD *)(v6 + 176);
    if ( (v9 & 0x20) == 0 || a4 )
    {
      PoFxSetDeviceIdleTimeout(**(_QWORD **)(v6 + 8), v8);
      *(_DWORD *)(*(_QWORD *)(a1[20] + 8LL) + 128LL) = a2;
    }
    else
    {
      v10 = a1[144];
      memset(&LockHandle, 0, sizeof(LockHandle));
      if ( *(_DWORD *)(v6 + 116) == *(_DWORD *)(v10 + 656) && (v9 & 0x8000) != 0 )
        v7 = 0;
      if ( (*(_DWORD *)(a1[50] + 184LL) & 0x40000000) != 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 632), &LockHandle);
        v11 = a1[144];
        if ( *(_DWORD *)(v11 + 656) )
        {
          v12 = (_QWORD *)(v11 + 640);
          v13 = (_QWORD *)*v12;
          while ( v13 != v12 )
          {
            if ( NvmeNamespaceCheckAndAcquirePoFx((__int64)(v13 - 3)) )
            {
              *(_DWORD *)(*(_QWORD *)(v13[13] + 8LL) + 28LL) = a2;
              PoFxSetDeviceIdleTimeout(**(_QWORD **)(v13[13] + 8LL), v8);
              NvmeNamespaceReleasePoFx((__int64)(v13 - 3));
            }
            v13 = (_QWORD *)*v13;
            v12 = (_QWORD *)(a1[144] + 640LL);
          }
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1[20] + 8LL), 10000LL * v7);
      *(_DWORD *)(*(_QWORD *)(a1[20] + 8LL) + 128LL) = v7;
      *(_DWORD *)(*(_QWORD *)(a1[20] + 8LL) + 132LL) = a2;
    }
  }
}
