/*
 * XREFs of ??_GCInputManager@@QEAAPEAXI@Z @ 0x1401C4CF8
 * Callers:
 *     ?DestroySessionGlobal@CInputManager@@SAXXZ @ 0x140248090 (-DestroySessionGlobal@CInputManager@@SAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAA@XZ @ 0x140165114 (--1-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAA@XZ.c)
 */

char *__fastcall CInputManager::`scalar deleting destructor'(char *Buffer, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  CStructDynamicArray<CInputManager::PointerCaptureInfo>::~CStructDynamicArray<CInputManager::PointerCaptureInfo>(
    (__int64)(Buffer + 16),
    a2,
    a3,
    a4);
  GreDeleteFastMutex(Buffer, v5, v6, v7);
  return Buffer;
}
