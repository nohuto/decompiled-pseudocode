/*
 * XREFs of StorSetAllIoGatewayBusy @ 0x1400AF9A8
 * Callers:
 *     StorSetIoGatewayBusy @ 0x1400AFB5C (StorSetIoGatewayBusy.c)
 * Callees:
 *     StorGetOutstandingIoCount @ 0x14005C75C (StorGetOutstandingIoCount.c)
 *     StorSetAllIoGatewayNotBusy @ 0x1400AFAE4 (StorSetAllIoGatewayNotBusy.c)
 */

__int64 __fastcall StorSetAllIoGatewayBusy(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 i; // r14
  _DWORD *v9; // rdi
  unsigned int v10; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = StorGetOutstandingIoCount(v3);
  v6 = result;
  if ( (_DWORD)result )
  {
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 48) + 1056LL), 1, 0);
    if ( !(_DWORD)result )
    {
      v7 = *(_QWORD *)(a1 + 48);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v7 + 1032); i = (unsigned int)(i + 1) )
      {
        v9 = (_DWORD *)(a1 + 320 * i);
        v10 = v9[48];
        if ( FeatureFixKcsanRacyAccessV2 )
        {
          if ( a2 > v10 )
            goto LABEL_12;
          v10 = v9[48];
        }
        else if ( a2 > v10 )
        {
LABEL_12:
          v9[8] = 0;
          goto LABEL_8;
        }
        v9[8] = v10 - a2;
LABEL_8:
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 320 * i), &LockHandle);
        v9[10] = 1850304845;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v7 = *(_QWORD *)(a1 + 48);
      }
      if ( v6 <= a2 )
        *(_DWORD *)(v7 + 1048) = 0;
      else
        *(_DWORD *)(v7 + 1048) = v6 - a2;
      _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 48) + 1056LL), 2, 1);
      result = StorGetOutstandingIoCount(*(_QWORD *)(a1 + 48));
      if ( !(_DWORD)result )
        return StorSetAllIoGatewayNotBusy(*(_QWORD *)(a1 + 48));
    }
  }
  return result;
}
