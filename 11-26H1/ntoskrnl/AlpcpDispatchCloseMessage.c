/*
 * XREFs of AlpcpDispatchCloseMessage @ 0x1408EF2B0
 * Callers:
 *     AlpcpSendCloseMessage @ 0x1408F0FC8 (AlpcpSendCloseMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     AlpcpLogClosePort @ 0x1407C4AA0 (AlpcpLogClosePort.c)
 *     AlpcpSetMessageCommunicationInfo @ 0x1408EE8DC (AlpcpSetMessageCommunicationInfo.c)
 *     AlpcpSetOwnerPortMessage @ 0x1408EEA60 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1408EEAA0 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x1409922B4 (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 */

__int64 __fastcall AlpcpDispatchCloseMessage(__int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  _QWORD *v7; // r15
  __int64 result; // rax
  __int64 v9; // rsi
  char v10; // r12
  PVOID v11; // rbx
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v4 = *a1;
  v5 = a1[1];
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v7 = *(_QWORD **)(v4 + 16);
  v13 = 0LL;
  Object = 0LL;
  result = AlpcpReferenceAndLockTargetPortsAndCommunicationInfo(v4, &v13, (__int64 *)&Object, a4);
  if ( (int)result >= 0 )
  {
    v9 = v13;
    if ( (*(_DWORD *)(v13 + 256) & 0x20000) != 0 )
    {
      *(_DWORD *)(v5 + 40) |= 0x200u;
      v10 = 1;
      v11 = Object;
      *(_WORD *)(v5 + 244) &= ~0x2000u;
      *(_DWORD *)(v5 + 44) = _InterlockedIncrement((volatile signed __int32 *)v11 + 100);
      *(_QWORD *)(v5 + 120) = *((_QWORD *)v11 + 7);
      AlpcpSetMessageCommunicationInfo(v5, (ULONG_PTR)v7);
      *(_QWORD *)(v5 + 192) = *v7;
      if ( (*(_DWORD *)(v4 + 256) & 0x1000) != 0 )
      {
        AlpcpSetOwnerPortMessage(v5, v11);
      }
      else
      {
        AlpcpSetOwnerPortMessage(v5, (void *)v4);
        if ( v11 != (PVOID)v9 )
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 44, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v11 + 44);
          KeAbPostRelease((unsigned __int64)v11 + 352);
        }
        v10 = 0;
      }
      if ( LOBYTE(stru_140E66D40.CycleTime) )
        AlpcpLogClosePort(v5);
      a1[4] = v9;
      a1[2] = (__int64)v7;
      AlpcpCompleteDispatchMessage(a1);
      if ( v10 && v11 != (PVOID)v9 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 44, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v11 + 44);
        KeAbPostRelease((unsigned __int64)v11 + 352);
      }
      ObfDereferenceObject(v11);
      return 0LL;
    }
    else
    {
      AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo(v7, v13, Object);
      return 3221227271LL;
    }
  }
  return result;
}
