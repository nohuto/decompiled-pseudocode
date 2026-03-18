/*
 * XREFs of IopFreeIrp @ 0x140268590
 * Callers:
 *     IovFreeIrpPrivate @ 0x140C459C0 (IovFreeIrpPrivate.c)
 * Callees:
 *     ExReturnPoolQuota @ 0x140264B30 (ExReturnPoolQuota.c)
 *     IopFreeIrpExtension @ 0x140268930 (IopFreeIrpExtension.c)
 *     IopFreeReserveIrp @ 0x14050D934 (IopFreeReserveIrp.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeIrp(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  bool v4; // zf
  __int64 v5; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  char v7; // al
  __int16 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdi
  char v13; // al

  if ( *(_WORD *)BugCheckParameter2 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter2, 0x2845uLL, 0LL, 0LL);
  v4 = (*(_BYTE *)(BugCheckParameter2 + 71) & 0x40) == 0;
  *(_WORD *)BugCheckParameter2 = 0;
  if ( !v4 )
  {
    LOBYTE(a3) = 1;
    IopFreeIrpExtension(BugCheckParameter2, 0xFFFFFFFFLL, a3);
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 71) & 0x21) == 0x21 )
  {
    IopFreeReserveIrp(BugCheckParameter2);
  }
  else
  {
    v5 = *(unsigned __int16 *)(BugCheckParameter2 + 4);
    if ( (unsigned int)v5 >= (unsigned int)KeNumberProcessors_0
      || (_mm_lfence(), (CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v5]) == 0LL) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
    }
    v7 = *(_BYTE *)(BugCheckParameter2 + 71);
    if ( (v7 & 8) != 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 71) = v7 ^ 8;
      _InterlockedIncrement(&CurrentPrcb->LookasideIrpFloat);
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 71) & 4) != 0
      && (((__int64)IopSessionNotificationLock.Timer.Header.WaitListHead.Blink & 3) == 0
       || (v8 = *(_WORD *)(BugCheckParameter2 + 2),
           v8 == 72 * SBYTE4(IopSessionNotificationLock.SchedulerSharedSwappablePage) + 208)
       || v8 == 72 * SLOBYTE(IopSessionNotificationLock.SchedulerSharedSwappablePage) + 208
       || v8 == 280) )
    {
      v9 = *(unsigned __int16 *)(BugCheckParameter2 + 2);
      if ( (unsigned __int16)v9 < (unsigned __int16)(72
                                                   * SBYTE4(IopSessionNotificationLock.SchedulerSharedSwappablePage)
                                                   + 208) )
      {
        if ( (unsigned __int16)v9 < (unsigned __int16)(72
                                                     * SLOBYTE(IopSessionNotificationLock.SchedulerSharedSwappablePage)
                                                     + 208) )
        {
          v10 = 2112LL;
          v11 = 2120LL;
        }
        else
        {
          v10 = 2128LL;
          v11 = 2136LL;
        }
      }
      else
      {
        v10 = 2144LL;
        v11 = 2152LL;
      }
      *(_QWORD *)(BugCheckParameter2 + 56) = v9;
      v12 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v10);
      ++*(_DWORD *)(v12 + 28);
      if ( *(_WORD *)v12 < *(_WORD *)(v12 + 16)
        || (++*(_DWORD *)(v12 + 32),
            v12 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v11),
            ++*(_DWORD *)(v12 + 28),
            *(_WORD *)v12 < *(_WORD *)(v12 + 16)) )
      {
        v13 = *(_BYTE *)(BugCheckParameter2 + 71);
        if ( (v13 & 1) != 0 )
        {
          *(_BYTE *)(BugCheckParameter2 + 71) = v13 ^ 1;
          ExReturnPoolQuota(BugCheckParameter2);
        }
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)v12, (PSLIST_ENTRY)BugCheckParameter2);
      }
      else
      {
        ++*(_DWORD *)(v12 + 32);
        ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
      }
    }
    else
    {
      ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
    }
  }
}
