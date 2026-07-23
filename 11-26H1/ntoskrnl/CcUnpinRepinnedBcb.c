/*
 * XREFs of CcUnpinRepinnedBcb @ 0x1404A3690
 * Callers:
 *     <none>
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     CcUnpinFileDataEx @ 0x1402C11D0 (CcUnpinFileDataEx.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039C3F8 (MmSetAddressRangeModifiedEx.c)
 *     MmFlushSection @ 0x14039C7A0 (MmFlushSection.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14039CB54 (CcReferenceSharedCacheMapFileObject.c)
 *     CcPostDeferredWrites @ 0x14039D37C (CcPostDeferredWrites.c)
 *     CcSetDirtyPinnedData @ 0x14039F000 (CcSetDirtyPinnedData.c)
 *     CcIsFatalWriteError @ 0x140467230 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushSection @ 0x1404A3858 (CcPerfLogFlushSection.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __stdcall CcUnpinRepinnedBcb(PVOID Bcb, BOOLEAN WriteThrough, PIO_STATUS_BLOCK IoStatus)
{
  __int64 v5; // rsi
  __int64 v6; // r13
  unsigned __int64 v7; // r15
  _QWORD *v8; // rbp
  __int64 v9; // rax
  ULONG_PTR v10; // [rsp+60h] [rbp+8h]

  if ( *(_WORD *)Bcb != 765 )
    KeBugCheckEx(0x34u, 0x2677uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = *((_QWORD *)Bcb + 22);
  v6 = *(_QWORD *)(v5 + 600);
  v7 = *(_QWORD *)(v5 + 536);
  v8 = (_QWORD *)(v6 + 1104);
  if ( !CcEnablePerVolumeLazyWriter )
    v8 = (_QWORD *)(v7 + 1168);
  IoStatus->Status = 0;
  if ( WriteThrough )
  {
    if ( (*(_DWORD *)(v5 + 152) & 0x200) != 0 )
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Bcb + 72), 1u);
    if ( *((_BYTE *)Bcb + 2) )
    {
      MmSetAddressRangeModifiedEx(*((_QWORD *)Bcb + 23));
      CcUnpinFileDataEx((char *)Bcb, 1, 2);
      v9 = CcReferenceSharedCacheMapFileObject(v5);
      v10 = v9;
      if ( (xmmword_140FC0C10 & 0x20000) != 0 )
      {
        CcPerfLogFlushSection(0, v5, (_DWORD)Bcb + 8, *((_DWORD *)Bcb + 1), 1);
        v9 = v10;
      }
      MmFlushSection(*(_QWORD *)(v9 + 40), (struct _KTHREAD **)Bcb + 1, *((unsigned int *)Bcb + 1), 0LL, IoStatus, 1);
      ObFastDereferenceObjectDeferDelete((signed __int64 *)(v5 + 96), v10, 0x63536343u);
      if ( IoStatus->Status < 0 && !CcIsFatalWriteError(*((_QWORD *)Bcb + 22), IoStatus->Status) )
        CcSetDirtyPinnedData(Bcb, 0LL);
      CcUnpinFileDataEx((char *)Bcb, 0, 0);
      if ( (_QWORD *)*v8 != v8 )
        CcPostDeferredWrites(v7, v6);
    }
    else
    {
      CcUnpinFileDataEx((char *)Bcb, 0, 0);
    }
  }
  else
  {
    CcUnpinFileDataEx((char *)Bcb, 1, 0);
    IoStatus->Status = 0;
  }
}
