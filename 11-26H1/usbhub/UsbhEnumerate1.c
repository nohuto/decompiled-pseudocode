/*
 * XREFs of UsbhEnumerate1 @ 0x1400344E4
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x14001EC90 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhSignalSuspendEvent @ 0x140022970 (UsbhSignalSuspendEvent.c)
 *     UsbhCancelEnumeration @ 0x140033B08 (UsbhCancelEnumeration.c)
 *     UsbhFailDriverResetPort @ 0x140057F70 (UsbhFailDriverResetPort.c)
 *     UsbhHandleOvercurrent @ 0x14005801C (UsbhHandleOvercurrent.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhEnumerate1(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r9
  unsigned int v8; // esi
  __int64 v9; // rcx
  signed __int32 v10; // eax
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // edx
  int v20; // edx
  int v21; // edx
  __int64 v23; // r9
  unsigned int (__fastcall *v24)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v25; // r9
  __int64 v26; // r9
  __int64 v27; // r9
  __int64 v28; // rcx
  signed __int32 v29; // eax
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rdx

  v7 = a3;
  v8 = *(_DWORD *)(a4 + 400);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 880), 0xFFFFFFFF);
        v11 = *(_DWORD *)(v9 + 884);
        v12 = *(_QWORD *)(v9 + 888);
        v13 = 32LL * ((v10 - 1) & v11);
        *(_DWORD *)(v13 + v12) = 827674181;
        *(_QWORD *)(v13 + v12 + 24) = a2;
        *(_QWORD *)(v13 + v12 + 8) = 0LL;
        *(_QWORD *)(v13 + v12 + 16) = a4;
      }
    }
  }
  v14 = a2 - 1;
  if ( !v14 )
  {
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( a1 )
      {
        v28 = *(_QWORD *)(a1 + 64);
        if ( v28 )
        {
          v29 = _InterlockedExchangeAdd((volatile signed __int32 *)(v28 + 880), 0xFFFFFFFF);
          v30 = *(_DWORD *)(v28 + 884);
          v31 = *(_QWORD *)(v28 + 888);
          v32 = 32LL * ((v29 - 1) & v30);
          *(_DWORD *)(v32 + v31) = 1664175685;
          *(_QWORD *)(v32 + v31 + 8) = 0LL;
          *(_QWORD *)(v32 + v31 + 16) = v7;
          *(_QWORD *)(v32 + v31 + 24) = 0LL;
        }
      }
    }
    v24 = (unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140067028[2 * v7];
LABEL_27:
    if ( v24 )
      return v24(a1, a4, a5);
    return v8;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    Log(a1, 4, 1162752357, v7, 0LL);
    v24 = (unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140066A28[2 * v27];
    goto LABEL_27;
  }
  v16 = v15 - 2;
  if ( !v16 )
  {
    Log(a1, 4, 1162752371, v7, 0LL);
    v24 = (unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140066C28[2 * v26];
    goto LABEL_27;
  }
  v17 = v16 - 4;
  if ( !v17 )
  {
    Log(a1, 4, 1162752374, v7, 0LL);
    return (unsigned int)UsbhHandleOvercurrent(a1, 1, a5, a4, a5);
  }
  v18 = v17 - 8;
  if ( !v18 )
  {
    Log(a1, 4, 1162752370, v7, 0LL);
    v24 = (unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140066E28[2 * v25];
    goto LABEL_27;
  }
  v19 = v18 - 65520;
  if ( !v19 )
  {
    Log(a1, 4, 1162752372, v7, 0LL);
    v24 = (unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140067228[2 * v23];
    goto LABEL_27;
  }
  v20 = v19 - 0x10000;
  if ( !v20 )
  {
    Log(a1, 4, 1162752376, v7, 0LL);
    return (unsigned int)UsbhFailDriverResetPort(a1, a4, a5);
  }
  v21 = v20 - 0x20000;
  if ( v21 )
  {
    if ( v21 == 0x40000 )
    {
      Log(a1, 4, 1162752368, v7, 0LL);
      return (unsigned int)UsbhCancelEnumeration(a1, 1u, a4, a5);
    }
  }
  else
  {
    v8 = UsbhCancelEnumeration(a1, 1u, a4, a5);
    UsbhSignalSuspendEvent(a1, a4);
  }
  return v8;
}
