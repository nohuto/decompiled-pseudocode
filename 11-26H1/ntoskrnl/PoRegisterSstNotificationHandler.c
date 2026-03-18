/*
 * XREFs of PoRegisterSstNotificationHandler @ 0x140606F10
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PoRegisterSstNotificationHandler(__int64 a1, struct _LIST_ENTRY **a2)
{
  unsigned int v2; // ebx
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v6; // rdi
  KIRQL v7; // al
  struct _LIST_ENTRY *Flink; // rcx

  v2 = 0;
  if ( a1 && a2 && *(_DWORD *)a1 && *(_QWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)a1 <= 1u )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      v6 = (struct _LIST_ENTRY *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = *(_DWORD *)a1;
        *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a1 + 16);
        v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F11D08.WaitBlock[2].WaitListEntry.Blink);
        Flink = stru_140F11D08.WaitBlock[2].WaitListEntry.Flink;
        if ( stru_140F11D08.WaitBlock[2].WaitListEntry.Flink->Flink != (struct _LIST_ENTRY *)&stru_140F11D08.WaitBlockFill11[88] )
          __fastfail(3u);
        v6->Flink = (struct _LIST_ENTRY *)&stru_140F11D08.WaitBlockFill11[88];
        v6->Blink = Flink;
        Flink->Flink = v6;
        stru_140F11D08.WaitBlock[2].WaitListEntry.Flink = v6;
        KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F11D08.WaitBlock[2].WaitListEntry.Blink, v7);
        *a2 = v6;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
