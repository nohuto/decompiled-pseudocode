/*
 * XREFs of UsbhAcquireApiLock @ 0x14001F2B0
 * Callers:
 *     UsbhIoctlGetHubCaps @ 0x14001EB4C (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x14001EF24 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlCyclePort @ 0x14004D390 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetHubCapsEx @ 0x14004D6AC (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x14004D974 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004DC58 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004DEE8 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x14004E304 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x14004E5F8 (UsbhIoctlResetStuckHub.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 */

__int64 __fastcall UsbhAcquireApiLock(__int64 a1, unsigned int a2, _BYTE *a3)
{
  __int64 v3; // r14
  __int64 v6; // r9
  __int64 v7; // rcx
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  _DWORD *v10; // rsi
  char v11; // cl
  __int64 v12; // rcx
  __int64 v13; // r10
  unsigned int v14; // r9d
  __int64 v15; // r8
  __int64 result; // rax
  __int64 v17; // rdx

  v3 = a2;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v7 = 724652097;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = 0LL;
        *(_QWORD *)(v7 + 24) = a2;
      }
    }
  }
  v8 = FdoExt(a1);
  KeWaitForSingleObject(v8 + 1230, Executive, 0, 0, 0LL);
  v9 = FdoExt(a1) + 434;
  v10 = FdoExt(a1);
  KeWaitForSingleObject(v10 + 1240, Executive, 0, 0, 0LL);
  v9[14] = v10[340];
  v9[15] = 11;
  v9[12] = 827278406;
  *((_QWORD *)v9 + 3) = KeGetCurrentThread();
  v11 = v10[6] + 1;
  *((_QWORD *)v10 + 166) = v9;
  v12 = v11 & 7;
  *a3 = 1;
  v10[6] = v12;
  v12 *= 32LL;
  *(_DWORD *)((char *)v10 + v12 + 28) = 11;
  *(_DWORD *)((char *)v10 + v12 + 32) = v10[340];
  *(_DWORD *)((char *)v10 + v12 + 36) = v10[340];
  *(_DWORD *)((char *)v10 + v12 + 40) = v3;
  v13 = (int)v10[340];
  if ( v10[340] == 5 )
  {
    v14 = 0;
  }
  else
  {
    if ( v10[340] == 6 )
      Log(a1, 32, 1095774563, 0LL, v3);
    v14 = -1073741810;
  }
  if ( (UsbhLogMask & 0x20) == 0 || !a1 )
    return v14;
  v15 = *(_QWORD *)(a1 + 64);
  result = v14;
  if ( v15 )
  {
    v17 = *(_QWORD *)(v15 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
    *(_DWORD *)v17 = 556879937;
    *(_QWORD *)(v17 + 16) = (int)v14;
    *(_QWORD *)(v17 + 8) = 0LL;
    *(_QWORD *)(v17 + 24) = v13;
  }
  return result;
}
