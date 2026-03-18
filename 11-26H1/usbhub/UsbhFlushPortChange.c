/*
 * XREFs of UsbhFlushPortChange @ 0x14003B818
 * Callers:
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     UsbhFdoColdStartPdo @ 0x140030D10 (UsbhFdoColdStartPdo.c)
 *     UsbhFdoSetD0Warm @ 0x140037E34 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhSyncSendCommand @ 0x1400175B0 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhFlushPortChange(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  __int64 v3; // rdi
  int v6; // eax
  unsigned int v7; // r10d
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int16 v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF
  __int16 v12; // [rsp+6Ch] [rbp+24h]
  __int16 v13; // [rsp+6Eh] [rbp+26h]

  v3 = a2;
  v10 = 0;
  FdoExt(a1);
  v11 = 1048867;
  v12 = v3;
  v13 = 0;
  v6 = UsbhSyncSendCommand(a1, (__int64)&v11, 0LL, &v10, v9, a3);
  Log(a1, 8, 1718382659, v6, v3);
  return v7;
}
