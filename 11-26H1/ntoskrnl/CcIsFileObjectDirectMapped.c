/*
 * XREFs of CcIsFileObjectDirectMapped @ 0x1403845D4
 * Callers:
 *     CcCopyWriteWontFlush @ 0x14026B440 (CcCopyWriteWontFlush.c)
 *     CcCanIWrite @ 0x140383700 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x140383E50 (CcCanIWriteStreamEx.c)
 * Callees:
 *     KeRcuReadUnlock @ 0x1402206B0 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x140384590 (KeRcuReadLock.c)
 */

bool __fastcall CcIsFileObjectDirectMapped(__int64 a1)
{
  bool v2; // di
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = 0;
  KeRcuReadLock(a1);
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 8);
    if ( v4 )
      v2 = (*(_DWORD *)(v4 + 152) & 0x40000000) != 0;
  }
  KeRcuReadUnlock();
  return v2;
}
