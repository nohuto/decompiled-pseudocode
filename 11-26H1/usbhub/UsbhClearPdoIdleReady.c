/*
 * XREFs of UsbhClearPdoIdleReady @ 0x140011788
 * Callers:
 *     UsbhIdleIrp_ReleaseIrp @ 0x140013D04 (UsbhIdleIrp_ReleaseIrp.c)
 *     UsbhPdoDevicePowerState @ 0x1400156F0 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x140016CD0 (UsbhPdoSetD0.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1400362D0 (UsbhBusIf_ResumeChildHub.c)
 * Callees:
 *     UsbhRefPdoDeviceHandle @ 0x1400118A0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x140011B50 (UsbhDerefPdoDeviceHandle.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhClearPdoIdleReady(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rcx
  signed __int32 v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rax

  v6 = PdoExt(a2);
  result = UsbhRefPdoDeviceHandle(a1, a2, a3, 1232235619LL);
  v11 = result;
  if ( result )
  {
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v12 = *(_QWORD *)(a1 + 64);
        if ( v12 )
        {
          v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 880), 0xFFFFFFFF);
          v14 = *(_DWORD *)(v12 + 884);
          v15 = *(_QWORD *)(v12 + 888);
          v8 = 32LL * ((v13 - 1) & v14);
          *(_DWORD *)(v8 + v15) = 826893938;
          *(_QWORD *)(v8 + v15 + 8) = 0LL;
          *(_QWORD *)(v8 + v15 + 16) = 0LL;
          *(_QWORD *)(v8 + v15 + 24) = v11;
        }
      }
    }
    *(_DWORD *)(v6 + 1784) = 0;
    v16 = FdoExt(a1, v8, v9, v10);
    if ( *(_QWORD *)(v16 + 4480) )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v16 + 4480))(*(_QWORD *)(v16 + 4232), v11, 0LL);
    return UsbhDerefPdoDeviceHandle(a1, v11, a3, 1232235619LL);
  }
  return result;
}
