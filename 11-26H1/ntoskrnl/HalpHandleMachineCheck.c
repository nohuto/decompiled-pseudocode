/*
 * XREFs of HalpHandleMachineCheck @ 0x14057D2CC
 * Callers:
 *     HalHandleMcheck @ 0x1405805D0 (HalHandleMcheck.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140332C98 (KxTryToAcquireSpinLock.c)
 *     HalpMceHandler @ 0x14057D774 (HalpMceHandler.c)
 *     HalpMceHandlerWithRendezvous @ 0x14057DA48 (HalpMceHandlerWithRendezvous.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpHandleMachineCheck(__int64 a1)
{
  __int64 i; // rbx
  __int64 v3; // rdx

  _InterlockedIncrement(&WheapCriticalStateRefCount);
  if ( HalpMceBroadcast )
  {
    for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; ; i = *(_QWORD *)(i + 184) )
    {
      if ( !i )
      {
        HalpMceHandlerWithRendezvous(a1);
        goto LABEL_12;
      }
      if ( (guard_dispatch_icall_no_overrides(*(_QWORD *)(i + 172), 378LL) & 8) != 0 )
        break;
    }
    while ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&HalpMceLocalHandlingLock) )
      _mm_pause();
    LOBYTE(v3) = 1;
    HalpMceHandler(a1, v3);
    KxReleaseSpinLock(&HalpMceLocalHandlingLock);
  }
  else
  {
    HalpMceHandler(a1, 0LL);
  }
LABEL_12:
  _InterlockedDecrement(&WheapCriticalStateRefCount);
}
