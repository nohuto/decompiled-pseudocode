/*
 * XREFs of HalpHandleMachineCheck @ 0x14057AD9C
 * Callers:
 *     HalHandleMcheck @ 0x14057E0B0 (HalHandleMcheck.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140330C68 (KxTryToAcquireSpinLock.c)
 *     HalpMceHandler @ 0x14057B244 (HalpMceHandler.c)
 *     HalpMceHandlerWithRendezvous @ 0x14057B518 (HalpMceHandlerWithRendezvous.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
