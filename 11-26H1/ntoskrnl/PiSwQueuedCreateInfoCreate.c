/*
 * XREFs of PiSwQueuedCreateInfoCreate @ 0x1407B05E8
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140A7B9C8 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1404575B0 (PsGetCurrentThreadProcessId.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     PnpAllocatePWSTR @ 0x140990AC0 (PnpAllocatePWSTR.c)
 *     PiSwQueuedCreateInfoFree @ 0x140A7AE8C (PiSwQueuedCreateInfoFree.c)
 *     PiSwPnPInfoInit @ 0x140A7C254 (PiSwPnPInfoInit.c)
 *     PnpCopyDevPropertyArray @ 0x140A7C5A0 (PnpCopyDevPropertyArray.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwQueuedCreateInfoCreate(PVOID *a1, __int64 a2)
{
  __int64 Pool2; // rax
  int PWSTR; // ebx
  int v6; // r8d
  void *v7; // rcx

  Pool2 = ExAllocatePool2(0x100uLL);
  *a1 = (PVOID)Pool2;
  if ( !Pool2 )
    goto LABEL_2;
  PWSTR = PnpAllocatePWSTR(*(_QWORD *)(a2 + 8), 200LL, 1466986064LL, Pool2);
  if ( PWSTR >= 0 )
  {
    PWSTR = PiSwPnPInfoInit((char *)*a1 + 8, a2);
    if ( PWSTR >= 0 )
    {
      *((_DWORD *)*a1 + 17) = PsGetCurrentThreadProcessId();
      if ( *(_QWORD *)(a2 + 96) )
      {
        *((_DWORD *)*a1 + 16) = *(_DWORD *)(a2 + 88);
        *((_QWORD *)*a1 + 7) = ExAllocatePool2(0x100uLL);
        v7 = (void *)*((_QWORD *)*a1 + 7);
        if ( !v7 )
        {
LABEL_2:
          PWSTR = -1073741670;
          goto LABEL_9;
        }
        memmove(v7, *(const void **)(a2 + 96), *(unsigned int *)(a2 + 88));
      }
      PWSTR = PnpCopyDevPropertyArray(
                *(_DWORD *)(a2 + 104),
                *(_QWORD *)(a2 + 112),
                v6,
                *(_DWORD *)a1 + 80,
                (__int64)*a1 + 72);
      if ( PWSTR >= 0 )
        return (unsigned int)PWSTR;
    }
  }
LABEL_9:
  if ( *a1 )
  {
    PiSwQueuedCreateInfoFree(*a1);
    *a1 = 0LL;
  }
  return (unsigned int)PWSTR;
}
