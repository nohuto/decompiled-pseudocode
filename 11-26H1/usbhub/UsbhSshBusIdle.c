/*
 * XREFs of UsbhSshBusIdle @ 0x140037004
 * Callers:
 *     UsbhHubSSH_PnpStop @ 0x14005EBF0 (UsbhHubSSH_PnpStop.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 */

LONG __fastcall UsbhSshBusIdle(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // r8
  __int64 v4; // rcx
  signed __int32 v5; // eax
  unsigned int v6; // edx
  __int64 v7; // rcx

  v3 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)FdoExt(a1) + 411, 0LL);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( a1 )
    {
      v4 = *(_QWORD *)(a1 + 64);
      if ( v4 )
      {
        v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 880), 0xFFFFFFFF);
        v6 = *(_DWORD *)(v4 + 884);
        v7 = *(_QWORD *)(v4 + 888);
        v2 = 32LL * ((v5 - 1) & v6);
        *(_DWORD *)(v2 + v7) = 762934082;
        *(_QWORD *)(v2 + v7 + 8) = 0LL;
        *(_QWORD *)(v2 + v7 + 16) = 0LL;
        *(_QWORD *)(v2 + v7 + 24) = v3;
      }
    }
  }
  return UsbhDecHubBusy(a1, v2, v3);
}
