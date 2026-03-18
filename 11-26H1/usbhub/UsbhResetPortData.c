/*
 * XREFs of UsbhResetPortData @ 0x1400087E4
 * Callers:
 *     UsbhDeletePdo @ 0x140007770 (UsbhDeletePdo.c)
 *     UsbhDeregisterPdo @ 0x1400467AC (UsbhDeregisterPdo.c)
 * Callees:
 *     UsbhSignalSyncDeviceResetPdo @ 0x1400088C8 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhDerefPdo @ 0x1400089B0 (UsbhDerefPdo.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 */

__int64 __fastcall UsbhResetPortData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  signed __int32 v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rax

  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 880), 0xFFFFFFFF);
        v7 = *(_DWORD *)(v5 + 884);
        v8 = *(_QWORD *)(v5 + 888);
        v9 = 32LL * ((v6 - 1) & v7);
        *(_DWORD *)(v9 + v8) = 1952739442;
        *(_QWORD *)(v9 + v8 + 8) = 0LL;
        *(_QWORD *)(v9 + v8 + 16) = a2;
        *(_QWORD *)(v9 + v8 + 24) = a3;
      }
    }
  }
  v10 = PdoExt(a2);
  result = UsbhGetPortData(a1, *(unsigned __int16 *)(v10 + 1428));
  if ( result )
  {
    *(_QWORD *)(result + 392) = 0LL;
    _InterlockedExchange((volatile __int32 *)(result + 428), 0);
    v12 = PdoExt(a2);
    *(_DWORD *)(v12 + 1424) &= ~8u;
    UsbhSignalSyncDeviceResetPdo(a1, a2, 3221225486LL);
    return UsbhDerefPdo(a1, a2, 0LL, 1279349827LL);
  }
  return result;
}
