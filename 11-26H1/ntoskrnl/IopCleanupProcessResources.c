/*
 * XREFs of IopCleanupProcessResources @ 0x140A288F0
 * Callers:
 *     IopCloseFile @ 0x140A285C0 (IopCloseFile.c)
 * Callees:
 *     IopCancelIrpsInFileObjectList @ 0x140515BDC (IopCancelIrpsInFileObjectList.c)
 *     IopCleanupFileObjectIosbRange @ 0x140796FF0 (IopCleanupFileObjectIosbRange.c)
 */

void __fastcall IopCleanupProcessResources(__int64 a1, __int64 a2, __int64 a3)
{
  IopCancelIrpsInFileObjectList(a1, a2, 0, 0, 1, 1);
  for ( ; a3; a3 = *(_QWORD *)(a3 + 40) )
  {
    if ( *(_QWORD *)(a3 + 32) == a2 )
      IopCleanupFileObjectIosbRange(a3);
  }
}
