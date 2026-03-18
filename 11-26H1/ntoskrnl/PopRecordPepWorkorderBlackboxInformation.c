/*
 * XREFs of PopRecordPepWorkorderBlackboxInformation @ 0x140613160
 * Callers:
 *     PopRecordPoBlackboxInformation @ 0x1407E39E0 (PopRecordPoBlackboxInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void PopRecordPepWorkorderBlackboxInformation()
{
  unsigned int v0; // edi
  void *v1; // rbx
  KIRQL v2; // al
  struct _KTHREAD *v3; // rcx
  KIRQL v4; // bp
  __int64 v5; // rdx
  __int64 v6; // rsi
  _DWORD *Pool2; // rax
  _DWORD *v8; // r9
  struct _KTHREAD *i; // r8
  unsigned __int64 v10; // kr00_8
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v13; // rax
  __int128 InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  __int128 v15; // [rsp+40h] [rbp-18h]

  InputBuffer = 0LL;
  v0 = 0;
  v1 = 0LL;
  v15 = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F12420.PriorityFloorCounts[24]);
  v3 = *(struct _KTHREAD **)&stru_140F12420.ThreadFlags2;
  v4 = v2;
  if ( *(struct _KTHREAD **)&stru_140F12420.ThreadFlags2 == (struct _KTHREAD *)&stru_140F12420.512 )
    goto LABEL_13;
  do
  {
    v3 = *(struct _KTHREAD **)&v3->Header.Lock;
    v5 = v0++;
  }
  while ( v3 != (struct _KTHREAD *)&stru_140F12420.512 );
  if ( !v0 )
  {
LABEL_13:
    v6 = 0LL;
  }
  else
  {
    v6 = 48 * v5 + 64;
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    v1 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 1;
      v8 = Pool2 + 4;
      Pool2[1] = v6;
      Pool2[2] = v0;
      for ( i = *(struct _KTHREAD **)&stru_140F12420.ThreadFlags2; i != (struct _KTHREAD *)&stru_140F12420.512; v8 += 12 )
      {
        v10 = MEMORY[0xFFFFF78000000008] - (unsigned __int64)i->ApcState.ApcListHead[0].Blink;
        *((_QWORD *)v8 + 1) = i;
        *v8 = v10 / 0x2710;
        *((_QWORD *)v8 + 2) = i->TrapFrame;
        Flink = i->ApcState.ApcListHead[0].Flink;
        *((_QWORD *)v8 + 3) = Flink;
        if ( Flink )
        {
          v8[8] = Flink->Flink;
          if ( Flink != (struct _LIST_ENTRY *)-8LL )
          {
            Blink = Flink->Blink;
            if ( Blink )
            {
              v13 = Blink[4].Flink;
              if ( v13 )
                *((_QWORD *)v8 + 5) = v13[6].Flink;
            }
          }
        }
        i = *(struct _KTHREAD **)&i->Header.Lock;
      }
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F12420.PriorityFloorCounts[24], v4);
  if ( v6 )
  {
    DWORD2(v15) = 7;
    *(_QWORD *)&InputBuffer = v1;
    *((_QWORD *)&InputBuffer + 1) = (unsigned int)v6;
    NtPowerInformation(UpdateBlackBoxRecorder, &InputBuffer, 0x20u, 0LL, 0);
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0x42424F50u);
}
