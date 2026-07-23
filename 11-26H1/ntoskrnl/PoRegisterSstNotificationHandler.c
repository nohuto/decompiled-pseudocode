/*
 * XREFs of PoRegisterSstNotificationHandler @ 0x140609A10
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PoRegisterSstNotificationHandler(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 Pool2; // rax
  _QWORD *v6; // rdi
  KIRQL v7; // al
  _QWORD *v8; // rcx

  v2 = 0;
  if ( a1 && a2 && *(_DWORD *)a1 && *(_QWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)a1 <= 1u )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      v6 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = *(_DWORD *)a1;
        *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a1 + 16);
        v7 = KeAcquireSpinLockRaiseToDpc(&PopSstNotificationHandlerListLock);
        v8 = (_QWORD *)qword_140F12278;
        if ( *(PVOID **)qword_140F12278 != &PopSstNotificationHandlerList )
          __fastfail(3u);
        *v6 = &PopSstNotificationHandlerList;
        v6[1] = v8;
        *v8 = v6;
        qword_140F12278 = (__int64)v6;
        KeReleaseSpinLock(&PopSstNotificationHandlerListLock, v7);
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
