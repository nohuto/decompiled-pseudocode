/*
 * XREFs of IopIoRingSetupCompletionWait @ 0x1404D6910
 * Callers:
 *     NtSubmitIoRing @ 0x1404D6640 (NtSubmitIoRing.c)
 *     IopProcessIoRingEntry @ 0x140B02A30 (IopProcessIoRingEntry.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall IopIoRingSetupCompletionWait(__int64 a1, unsigned int a2, unsigned int a3, char a4, _BYTE *a5)
{
  unsigned int v5; // edi
  __int64 v6; // r13
  unsigned int v8; // ebx
  KIRQL v11; // r10
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned __int64 v14; // rdx

  v5 = 0;
  v6 = a2;
  v8 = a3;
  *a5 = 0;
  if ( a3 != -1 && a3 > *(_DWORD *)(a1 + 28) )
    return 3221225713LL;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
  v12 = *(_QWORD *)(a1 + 120);
  v13 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL) - **(_DWORD **)(a1 + 80));
  v14 = v6 + v13 + *(_QWORD *)(a1 + 112) - v12;
  if ( v14 <= *(unsigned int *)(a1 + 28) )
  {
    if ( v8 != -1 )
    {
      if ( v8 <= (unsigned int)v14 )
        goto LABEL_11;
      if ( !a4 )
      {
        v5 = -1073741583;
        goto LABEL_13;
      }
    }
    v8 = v6 + v13 + *(_DWORD *)(a1 + 112) - v12;
LABEL_11:
    if ( v8 > (unsigned int)v13 )
    {
      *(_BYTE *)(a1 + 160) = 1;
      *(_QWORD *)(a1 + 128) = v12 + v8 - (unsigned int)v13;
      *a5 = 1;
    }
    goto LABEL_13;
  }
  v5 = -1069154296;
LABEL_13:
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 104), v11);
  return v5;
}
