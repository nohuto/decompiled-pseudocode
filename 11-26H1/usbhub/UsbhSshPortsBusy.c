/*
 * XREFs of UsbhSshPortsBusy @ 0x140008B80
 * Callers:
 *     UsbhSshSetPortsBusyState @ 0x140008460 (UsbhSshSetPortsBusyState.c)
 *     UsbhCreatePdo @ 0x14000C9F0 (UsbhCreatePdo.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 */

__int64 __fastcall UsbhSshPortsBusy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v5; // edi
  __int64 v7; // rsi
  signed __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // r9
  __int64 v11; // r10
  int v12; // r11d
  __int64 v13; // rdx
  __int64 v14; // r10

  v4 = a3;
  v5 = a2;
  v7 = FdoExt(a1, a2, a3, a4);
  v8 = UsbhIncHubBusy(a1, v5, a1, 1649439603, v4);
  result = Log(
             a1,
             0x10000,
             1213419563,
             _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 3312), v8, 0LL),
             v8);
  if ( v10 )
  {
    Log(a1, v12, 1213419570, v10, v11);
    return UsbhDecHubBusy(a1, v13, v14);
  }
  return result;
}
