/*
 * XREFs of CmpAllocateUnitOfWork @ 0x140AB9B34
 * Callers:
 *     CmSetKeyFlags @ 0x1408B09D8 (CmSetKeyFlags.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140AB95FC (CmpUndoDeleteKeyForTrans.c)
 *     CmSetLastWriteTimeKey @ 0x140B53BB0 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 CmpAllocateUnitOfWork()
{
  __int64 result; // rax

  result = ExAllocatePool2(0x100uLL);
  if ( result )
  {
    *(_QWORD *)(result + 8) = result;
    *(_QWORD *)result = result;
    *(_QWORD *)(result + 40) = result + 32;
    *(_QWORD *)(result + 32) = result + 32;
    *(_QWORD *)(result + 16) = 0LL;
    *(_QWORD *)(result + 24) = 0LL;
    *(_QWORD *)(result + 48) = 0LL;
    *(_QWORD *)(result + 56) = 0LL;
    *(_DWORD *)(result + 64) = 0;
    *(_DWORD *)(result + 68) = 16;
  }
  return result;
}
