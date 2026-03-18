/*
 * XREFs of ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1400306B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140031C3C (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiWorkerThreadTimerCallback(struct _EX_TIMER *a1, void *a2)
{
  LARGE_INTEGER v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // edx
  char v7; // r9
  __int64 v8; // rdi
  __int64 *v9; // r8
  __int64 v10; // r8
  __int64 v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  union _LARGE_INTEGER v13; // [rsp+58h] [rbp+10h] BYREF

  v13.QuadPart = 0LL;
  v3 = KeQueryPerformanceCounter(&v13);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a2 + 252, &LockHandle);
  if ( v3.QuadPart < *((_QWORD *)a2 + 26) )
  {
    v6 = *((_DWORD *)a2 + 22);
    v7 = 0;
    v8 = 0LL;
    if ( v6 )
    {
      do
      {
        v9 = (__int64 *)*((_QWORD *)a2 + 87);
        if ( (unsigned int)v8 < *((_DWORD *)a2 + 192) )
          v9 += v8;
        v10 = *v9;
        if ( *(_BYTE *)(v10 + 2144) )
        {
          v11 = *(_QWORD *)(v10 + 2120);
          if ( v11 )
          {
            if ( v3.QuadPart > (unsigned __int64)(*(_QWORD *)(v10 + 2128) + v11) )
            {
              VidSchiStopNodeYield((struct _VIDSCH_NODE *)v10);
              v6 = *((_DWORD *)a2 + 22);
              v7 = 1;
            }
          }
        }
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < v6 );
      if ( v7 )
      {
        *((_QWORD *)a2 + 187) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)a2 + 61, 0, 0);
      }
    }
  }
  else
  {
    ExCancelTimer(*((_QWORD *)a2 + 25), 0LL);
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0x_EtwWriteTransfer(v4, &EventYieldCancelExpirationTimer, v5, *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 26) = 0LL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
