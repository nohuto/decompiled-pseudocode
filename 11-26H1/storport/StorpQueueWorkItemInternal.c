/*
 * XREFs of StorpQueueWorkItemInternal @ 0x14007D808
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     RaidAcquireAdapterRemoveLock @ 0x14002F6B4 (RaidAcquireAdapterRemoveLock.c)
 *     NvmeAdapterAcquireRemoveLock @ 0x14004B464 (NvmeAdapterAcquireRemoveLock.c)
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     WPP_SF_qqq @ 0x14006F5D8 (WPP_SF_qqq.c)
 */

__int64 __fastcall StorpQueueWorkItemInternal(
        __int64 a1,
        signed __int64 a2,
        volatile signed __int64 *a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned int v9; // ebx
  int *v10; // rdi
  int *v11; // rsi
  int v12; // eax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v13; // rcx
  _DWORD *v14; // rax
  struct _IO_WORKITEM *v15; // rcx
  int *v17; // [rsp+50h] [rbp+8h] BYREF
  int *v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  if ( !a1 || !a2 || !a3 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x40u,
        (__int64)&WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids,
        a1,
        a2,
        a3);
    }
    return (unsigned int)-1056964602;
  }
  if ( *((_DWORD *)a3 + 6) )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x41u,
        (__int64)&WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    }
    return (unsigned int)-1056964596;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    RaidpPortGetAdapter(a1, &v18, &v17);
    v10 = v18;
    v11 = v17;
    if ( v18 )
    {
      v12 = RaidAcquireAdapterRemoveLock((__int64)v18);
LABEL_20:
      if ( v12 >= 0 )
      {
        if ( _InterlockedCompareExchange64(a3 + 1, a2, 0LL) )
        {
          v9 = -1056964596;
          if ( v10 )
            v13 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)v10 + 42);
          else
            v13 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)v11 + 19);
          ExReleaseRundownProtectionCacheAware(v13);
        }
        else
        {
          v14 = a5;
          v15 = (struct _IO_WORKITEM *)*a3;
          *((_QWORD *)a3 + 2) = a4;
          if ( v14 )
            IoQueueWorkItemToNode(v15, StorPortWorkItemRoutine, 1LL, a3, *v14);
          else
            IoQueueWorkItem(v15, (PIO_WORKITEM_ROUTINE)StorPortWorkItemRoutine, DelayedWorkQueue, (PVOID)a3);
          return 0;
        }
      }
      else
      {
        return (unsigned int)-1056964599;
      }
      return v9;
    }
    if ( v17 )
    {
      v12 = NvmeAdapterAcquireRemoveLock((__int64)v17);
      goto LABEL_20;
    }
    return (unsigned int)-1056964602;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x42u,
      (__int64)&WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
  }
  return (unsigned int)-1056964600;
}
