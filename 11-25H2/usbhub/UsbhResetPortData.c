/*
 * XREFs of UsbhResetPortData @ 0x140010110
 * Callers:
 *     UsbhDeletePdo @ 0x14000E690 (UsbhDeletePdo.c)
 *     UsbhDeregisterPdo @ 0x140046C6C (UsbhDeregisterPdo.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1400101F4 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhDerefPdo @ 0x1400102D0 (UsbhDerefPdo.c)
 */

__int64 __fastcall UsbhResetPortData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rcx
  _DWORD *v7; // rax
  __int64 result; // rax
  _DWORD *v9; // rax

  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
        *(_DWORD *)v6 = 1952739442;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = a2;
        *(_QWORD *)(v6 + 24) = a3;
      }
    }
  }
  v7 = PdoExt(a2);
  result = UsbhGetPortData(a1, *((_WORD *)v7 + 714));
  if ( result )
  {
    *(_QWORD *)(result + 392) = 0LL;
    _InterlockedExchange((volatile __int32 *)(result + 428), 0);
    v9 = PdoExt(a2);
    v9[356] &= ~8u;
    UsbhSignalSyncDeviceResetPdo(a1, a2, 3221225486LL);
    return UsbhDerefPdo(a1, a2, 0LL, 1279349827LL);
  }
  return result;
}
