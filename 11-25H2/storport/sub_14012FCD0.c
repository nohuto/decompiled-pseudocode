/*
 * XREFs of sub_14012FCD0 @ 0x14012FCD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400BCC38 @ 0x1400BCC38 (sub_1400BCC38.c)
 *     sub_14012FF7C @ 0x14012FF7C (sub_14012FF7C.c)
 *     sub_140130818 @ 0x140130818 (sub_140130818.c)
 *     sub_140130C44 @ 0x140130C44 (sub_140130C44.c)
 */

NTSTATUS __fastcall sub_14012FCD0(char *Context)
{
  __int64 v2; // rax
  int v3; // eax

  if ( (int)sub_1400BCC38((__int64)Context) >= 0 )
  {
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 200LL), Executive, 0, 0, 0LL);
    v2 = *((_QWORD *)Context + 17);
    if ( (v2 & 0x80000000) == 0 )
    {
      while ( 1 )
      {
        if ( (v2 & 2) != 0 && *((_DWORD *)Context + 142) == 4 )
          goto LABEL_18;
        _interlockedbittestandreset((volatile signed __int32 *)Context + 268, 3u);
        if ( **((_DWORD **)Context + 159) )
          goto LABEL_18;
        v3 = sub_14012FF7C(Context) - 2;
        if ( !v3 )
          break;
        if ( v3 == 1 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 192LL) )
          {
            KeCancelTimer((PKTIMER)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 128LL));
            KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 64LL));
            _InterlockedCompareExchange(
              (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 192LL),
              0,
              1);
          }
          if ( (Context[136] & 2) == 0 )
          {
            sub_140130818(Context);
LABEL_16:
            if ( !_InterlockedCompareExchange(
                    (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 192LL),
                    1,
                    0) )
              KeSetCoalescableTimer(
                (PKTIMER)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 128LL),
                (LARGE_INTEGER)-50000000LL,
                0x7D0u,
                0x12Cu,
                (PKDPC)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 64LL));
            goto LABEL_18;
          }
          *((_DWORD *)Context + 142) = 4;
          *((_DWORD *)Context + 294) = 39;
          KeClearEvent((PRKEVENT)(Context + 232));
          IoQueueWorkItem(
            *((PIO_WORKITEM *)Context + 20),
            (PIO_WORKITEM_ROUTINE)sub_1400E2990,
            DelayedWorkQueue,
            Context);
        }
LABEL_18:
        KeWaitForSingleObject((PVOID)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 200LL), Executive, 0, 0, 0LL);
        v2 = *((_QWORD *)Context + 17);
        if ( (v2 & 0x80000000) != 0 )
          goto LABEL_19;
      }
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 192LL) )
      {
        KeCancelTimer((PKTIMER)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 128LL));
        KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 64LL));
        _InterlockedCompareExchange(
          (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 192LL),
          0,
          1);
      }
      sub_140130C44(Context, *(PSLIST_HEADER *)(*((_QWORD *)Context + 159) + 32LL));
      goto LABEL_16;
    }
LABEL_19:
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 69));
  }
  return PsTerminateSystemThread(0);
}
