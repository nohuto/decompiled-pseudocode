/*
 * XREFs of UsbhEnumerate1 @ 0x140036138
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x140004D00 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhSignalSuspendEvent @ 0x14001DCD4 (UsbhSignalSuspendEvent.c)
 *     UsbhCancelEnumeration @ 0x140035C04 (UsbhCancelEnumeration.c)
 *     UsbhFailDriverResetPort @ 0x140057A10 (UsbhFailDriverResetPort.c)
 *     UsbhHandleOvercurrent @ 0x140057ABC (UsbhHandleOvercurrent.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhEnumerate1(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // esi
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  int v16; // edx
  int v17; // edx
  __int64 v19; // r9
  unsigned int (__fastcall *v20)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx

  v5 = *(_DWORD *)(a4 + 400);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 827674181;
        *(_QWORD *)(v9 + 24) = a2;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a4;
      }
    }
  }
  v10 = a2 - 1;
  if ( !v10 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( a1 )
      {
        v24 = *(_QWORD *)(a1 + 64);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
          *(_DWORD *)v25 = 1664175685;
          *(_QWORD *)(v25 + 16) = a3;
          *(_QWORD *)(v25 + 8) = 0LL;
          *(_QWORD *)(v25 + 24) = 0LL;
        }
      }
    }
    v20 = (unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140066228[2 * a3];
LABEL_27:
    if ( v20 )
      return v20(a1, a4, a5);
    return v5;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    Log(a1, 4, 1162752357, a3, 0LL);
    v20 = (unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140065A28[2 * v23];
    goto LABEL_27;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    Log(a1, 4, 1162752371, a3, 0LL);
    v20 = (unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140065E28[2 * v22];
    goto LABEL_27;
  }
  v13 = v12 - 4;
  if ( !v13 )
  {
    Log(a1, 4, 1162752374, a3, 0LL);
    return (unsigned int)UsbhHandleOvercurrent(a1, 1, a5, a4, a5);
  }
  v14 = v13 - 8;
  if ( !v14 )
  {
    Log(a1, 4, 1162752370, a3, 0LL);
    v20 = (unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140066028[2 * v21];
    goto LABEL_27;
  }
  v15 = v14 - 65520;
  if ( !v15 )
  {
    Log(a1, 4, 1162752372, a3, 0LL);
    v20 = (unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140065C28[2 * v19];
    goto LABEL_27;
  }
  v16 = v15 - 0x10000;
  if ( !v16 )
  {
    Log(a1, 4, 1162752376, a3, 0LL);
    return (unsigned int)UsbhFailDriverResetPort(a1, a4, a5);
  }
  v17 = v16 - 0x20000;
  if ( v17 )
  {
    if ( v17 == 0x40000 )
    {
      Log(a1, 4, 1162752368, a3, 0LL);
      return (unsigned int)UsbhCancelEnumeration(a1, 1u, a4, a5);
    }
  }
  else
  {
    v5 = UsbhCancelEnumeration(a1, 1u, a4, a5);
    UsbhSignalSuspendEvent(a1, a4);
  }
  return v5;
}
