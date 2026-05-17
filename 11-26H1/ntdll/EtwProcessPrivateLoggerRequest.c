/*
 * XREFs of EtwProcessPrivateLoggerRequest @ 0x180076830
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800525B0 (EtwDeliverDataBlock.c)
 *     EtwpProcessNotification @ 0x180052AB0 (EtwpProcessNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     EtwpFlushUmLogger @ 0x18007654C (EtwpFlushUmLogger.c)
 *     EtwpStopUmLogger @ 0x180076678 (EtwpStopUmLogger.c)
 *     EtwpValidateLoggerInfo @ 0x180076A08 (EtwpValidateLoggerInfo.c)
 *     EtwpQueryUmLogger @ 0x180076A54 (EtwpQueryUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x180076BBC (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x180076C98 (EtwpUpdateUmLogger.c)
 *     EtwpStartUmLogger @ 0x180076EBC (EtwpStartUmLogger.c)
 */

__int64 __fastcall EtwProcessPrivateLoggerRequest(__int64 a1)
{
  bool v2; // cf
  __int128 v3; // xmm0
  __int64 v4; // rdx
  int v5; // edi
  int v6; // edi
  unsigned int v7; // ebp
  __int64 v8; // rcx
  int started; // eax
  int v10; // eax
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 4) < 0xF8u;
  v13 = 0;
  v12 = 0;
  if ( v2 )
    return 4209LL;
  v3 = *(_OWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 168) = *(_DWORD *)(a1 + 20);
  v5 = EtwpValidateLoggerInfo(a1 + 72);
  if ( v5 )
    goto LABEL_6;
  v6 = *(_DWORD *)(a1 + 76);
  v7 = *(_DWORD *)(a1 + 72);
  RtlAcquireSRWLockExclusive(&EtwpPrivSessionLock, v4);
  switch ( v6 )
  {
    case 1:
      started = EtwpStartUmLogger(v8, &v13, &v12, a1 + 72);
      break;
    case 2:
      started = EtwpStopUmLogger(v7, (__int64)&v13, (__int64)&v12, a1 + 72);
      break;
    case 3:
      started = EtwpQueryUmLogger(v7, &v13, &v12, a1 + 72);
      break;
    case 4:
      started = EtwpUpdateUmLogger(v7, &v13, &v12, a1 + 72);
      break;
    case 5:
      started = EtwpFlushUmLogger(v7, &v13, &v12, a1 + 72);
      break;
    case 6:
      started = EtwpIncrementUmLoggerFile(v7, &v13, &v12, a1 + 72);
      break;
    default:
      v5 = 87;
      RtlReleaseSRWLockExclusive(&EtwpPrivSessionLock);
      goto LABEL_6;
  }
  v5 = started;
  RtlReleaseSRWLockExclusive(&EtwpPrivSessionLock);
  if ( v5 )
LABEL_6:
    v10 = 76;
  else
    v10 = *(_DWORD *)(a1 + 72) + 72;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 4) = v10;
  *(_DWORD *)a1 = 4;
  *(_OWORD *)(a1 + 40) = v3;
  *(_DWORD *)(a1 + 32) = NtCurrentTeb()->ClientId.UniqueProcess;
  if ( v5 )
    *(_DWORD *)(a1 + 72) = v5;
  return 0LL;
}
