/*
 * XREFs of ?ndisPcwNotifyMiniportRemoval@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140137E00
 * Callers:
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007F1A0 (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwNotifyMiniportRemoval(struct _NDIS_MINIPORT_BLOCK *a1)
{
  wchar_t *Buffer; // rax
  wchar_t *v3; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&ndisPcwMutex, 0LL);
  Buffer = a1->Reserved4.Buffer;
  if ( Buffer )
  {
    --*((_DWORD *)Buffer + 42);
    *((_QWORD *)a1->Reserved4.Buffer + 22) = 0LL;
    v3 = a1->Reserved4.Buffer;
    if ( !*((_DWORD *)v3 + 42) )
      ExFreePoolWithTag(v3, 0);
  }
  ExReleasePushLockExclusiveEx(&ndisPcwMutex, 0LL);
  KeLeaveCriticalRegion();
}
