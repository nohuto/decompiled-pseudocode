/*
 * XREFs of UsbhDisableDeviceForWake @ 0x14002D984
 * Callers:
 *     UsbhPdoSetD0 @ 0x140016CD0 (UsbhPdoSetD0.c)
 *     UsbhPdoSetD0_Finish @ 0x14004BA84 (UsbhPdoSetD0_Finish.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x14002DA80 (UsbhSyncSendCommandToDevice.c)
 */

__int64 __fastcall UsbhDisableDeviceForWake(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbp
  __int64 v5; // r8
  __int64 v6; // rcx
  signed __int32 v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+88h] [rbp+20h] BYREF

  LOWORD(v13) = 0;
  FdoExt(a1);
  v4 = PdoExt(a2);
  v12 = 65792LL;
  v5 = (int)UsbhSyncSendCommandToDevice(a1, a2, (unsigned int)&v12, 0, (__int64)&v13);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v13 = 1802980932;
        v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 880), 0xFFFFFFFF);
        v8 = *(_DWORD *)(v6 + 884);
        v9 = *(_QWORD *)(v6 + 888);
        v10 = 32LL * ((v7 - 1) & v8);
        *(_DWORD *)(v10 + v9) = v13;
        *(_QWORD *)(v10 + v9 + 8) = 0LL;
        *(_QWORD *)(v10 + v9 + 16) = v5;
        *(_QWORD *)(v10 + v9 + 24) = 0LL;
      }
    }
  }
  if ( (int)v5 >= 0 )
    v4[355] &= ~0x8000u;
  return (unsigned int)v5;
}
