/*
 * XREFs of IopDeleteDriver @ 0x140AC9150
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushQueuedDpcs @ 0x1405163E0 (KeFlushQueuedDpcs.c)
 *     IoUnregisterPriorityCallback @ 0x1405CDDA0 (IoUnregisterPriorityCallback.c)
 *     PnpDriverObjectDereferenceComplete @ 0x140AC9214 (PnpDriverObjectDereferenceComplete.c)
 *     MmUnloadSystemImage @ 0x140AC9260 (MmUnloadSystemImage.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteDriver(__int64 a1, signed __int64 a2)
{
  _QWORD *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  _QWORD *v8; // rbx

  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 48) + 40LL);
  if ( v3 )
  {
    do
    {
      v8 = (_QWORD *)*v3;
      ExFreePoolWithTag(v3, 0);
      v3 = v8;
    }
    while ( v8 );
  }
  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
    IoUnregisterPriorityCallback(a1, a2);
  if ( *(_QWORD *)(a1 + 40) )
  {
    KeFlushQueuedDpcs();
    MmUnloadSystemImage(*(_QWORD *)(a1 + 40));
    PnpDriverObjectDereferenceComplete();
  }
  v4 = *(void **)(a1 + 64);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = *(void **)(*(_QWORD *)(a1 + 48) + 32LL);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = *(void **)(*(_QWORD *)(a1 + 48) + 48LL);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = *(void **)(*(_QWORD *)(a1 + 48) + 56LL);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
