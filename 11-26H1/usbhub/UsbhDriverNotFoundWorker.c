/*
 * XREFs of UsbhDriverNotFoundWorker @ 0x140050050
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSshSetPortsBusyState @ 0x140008460 (UsbhSshSetPortsBusyState.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     UsbhDisablePort @ 0x140024098 (UsbhDisablePort.c)
 *     UsbhEnableTimerObject @ 0x14002BB10 (UsbhEnableTimerObject.c)
 */

__int64 __fastcall UsbhDriverNotFoundWorker(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 PortData; // rax

  v6 = PdoExt(a3);
  KeWaitForSingleObject(v6 + 724, Executive, 0, 0, 0LL);
  if ( PdoExt(a3)[280] == 100 )
  {
    v9 = v6[355];
    if ( (v9 & 0x18000000) != 0 )
    {
      if ( (v9 & 0x10000000) != 0 )
        UsbhEnableTimerObject(
          a1,
          (__int64)(v6 + 426),
          10000,
          *((unsigned __int16 *)v6 + 714),
          *((_QWORD *)v6 + 105),
          0x77464E44u);
    }
    else
    {
      v6[355] = v9 | 0x8000000;
      PortData = UsbhGetPortData(a1, a2, v7, v8);
      UsbhDisablePort(a1, PortData);
      UsbhSshSetPortsBusyState(a1, a2, 1LL, 0LL);
    }
  }
  KeSetEvent((PRKEVENT)(v6 + 724), 0, 0);
  UsbhUnlatchPdo(a1, a3, 0LL, 0x444E4654u);
  return 0LL;
}
