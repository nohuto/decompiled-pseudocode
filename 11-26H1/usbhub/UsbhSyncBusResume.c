/*
 * XREFs of UsbhSyncBusResume @ 0x140009A74
 * Callers:
 *     UsbhSshSuspendHub @ 0x140006848 (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x140008C2C (UsbhSshResumeDownstream.c)
 *     UsbhFdoSetD0Cold @ 0x140030750 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoSetD0Warm @ 0x140037E34 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x140012A78 (UsbhDispatch_BusEvent.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhSyncBusResume(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  signed __int32 v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  signed __int32 v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx

  FdoExt(a1, a2, a3, a4);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 880), 0xFFFFFFFF);
        v8 = *(_DWORD *)(v6 + 884);
        v9 = *(_QWORD *)(v6 + 888);
        v10 = 32LL * ((v7 - 1) & v8);
        *(_DWORD *)(v10 + v9) = 1045578064;
        *(_QWORD *)(v10 + v9 + 8) = 0LL;
        *(_QWORD *)(v10 + v9 + 16) = 0LL;
        *(_QWORD *)(v10 + v9 + 24) = 0LL;
      }
    }
  }
  v11 = (int)UsbhDispatch_BusEvent(a1, a2, 8LL);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 880), 0xFFFFFFFF);
        v14 = *(_DWORD *)(v12 + 884);
        v15 = *(_QWORD *)(v12 + 888);
        v16 = 32LL * ((v13 - 1) & v14);
        *(_DWORD *)(v16 + v15) = 1012023632;
        *(_QWORD *)(v16 + v15 + 8) = 0LL;
        *(_QWORD *)(v16 + v15 + 16) = 0LL;
        *(_QWORD *)(v16 + v15 + 24) = v11;
      }
    }
  }
  return (unsigned int)v11;
}
