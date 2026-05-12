/*
 * XREFs of RaidRemovePendingDeviceQueue @ 0x140057CFC
 * Callers:
 *     RaidRemoveIoQueue @ 0x140057CBC (RaidRemoveIoQueue.c)
 * Callees:
 *     RiPeekDeviceQueue @ 0x140023F80 (RiPeekDeviceQueue.c)
 *     RiDecrementDeviceQueueCount @ 0x1400241C8 (RiDecrementDeviceQueueCount.c)
 *     RiDisableDeviceQueueFastPath @ 0x14002DED0 (RiDisableDeviceQueueFastPath.c)
 *     RaUnitUnlockForwardIo @ 0x1400429E0 (RaUnitUnlockForwardIo.c)
 */

__int64 __fastcall RaidRemovePendingDeviceQueue(__int64 a1)
{
  KIRQL v2; // bp
  union _SLIST_HEADER *v3; // rax
  __int64 v4; // rbx
  unsigned __int64 Alignment; // rcx
  _QWORD *Region; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rax

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  RiDisableDeviceQueueFastPath((struct _EX_RUNDOWN_REF *)a1, 1);
  v3 = RiPeekDeviceQueue((union _SLIST_HEADER *)a1);
  v4 = (__int64)v3;
  if ( !v3 )
    goto LABEL_17;
  if ( *(_QWORD *)(a1 + 144) == a1 + 144 )
  {
    ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 112));
  }
  else
  {
    Alignment = v3->Alignment;
    if ( *(union _SLIST_HEADER **)(v3->Alignment + 8) != v3 )
      goto LABEL_18;
    Region = (_QWORD *)v3->Region;
    if ( *Region != v4 )
      goto LABEL_18;
    *Region = Alignment;
    *(_QWORD *)(Alignment + 8) = Region;
  }
  if ( (*(_BYTE *)(v4 + 22) & 0x20) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v4 + 64) + 8LL);
    v8 = 96LL;
    if ( *(_BYTE *)(v7 + 2) != 40 )
      v8 = 48LL;
    v9 = (_QWORD *)(*(_QWORD *)(v8 + v7) + 24LL);
    v10 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) == v9 )
    {
      v11 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v11 == v9 )
      {
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        goto LABEL_13;
      }
    }
LABEL_18:
    __fastfail(3u);
  }
LABEL_13:
  *(_BYTE *)(v4 + 20) &= 0xFCu;
  RiDecrementDeviceQueueCount(a1, v4);
  if ( (*(_BYTE *)(v4 + 20) & 4) != 0 )
  {
    v12 = *(_QWORD *)(a1 - 720 + 32);
    if ( v12 )
    {
      if ( (*(_DWORD *)(v12 + 80) & 0x100) != 0 )
        RaUnitUnlockForwardIo(a1 - 720, 0);
    }
  }
LABEL_17:
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v2);
  return v4;
}
