/*
 * XREFs of ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1401970A0
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z @ 0x14019FF84 (-Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z.c)
 * Callees:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14030D4B0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

void __fastcall DXGADAPTER::AcquireLocksForStop(DXGADAPTER *this, unsigned __int64 *a2)
{
  bool v3; // zf
  char *v4; // rdi
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v3 = *((_QWORD *)this + 396) == 0LL;
  v4 = (char *)this + 136;
  *a2 = -1LL;
  if ( v3 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v4, 0LL);
  }
  else
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx(v4, 0LL) )
        break;
      KeLeaveCriticalRegion();
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 396), 3LL, 0xFFFFFFFFLL);
      Interval.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
  *((_QWORD *)this + 18) = KeGetCurrentThread();
  DXGADAPTER::AcquireCoreResourceExclusive(this, 2LL, 0LL);
}
