/*
 * XREFs of ??_GCInputManager@@QEAAPEAXI@Z @ 0x14023D8DC
 * Callers:
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x14014CD10 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 *     ?DestroySessionGlobal@CInputManager@@SAXXZ @ 0x14023D910 (-DestroySessionGlobal@CInputManager@@SAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAA@XZ @ 0x140129DBC (--1-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAA@XZ.c)
 */

char *__fastcall CInputManager::`scalar deleting destructor'(char *Buffer)
{
  CStructDynamicArray<CInputManager::PointerCaptureInfo>::~CStructDynamicArray<CInputManager::PointerCaptureInfo>((__int64)(Buffer + 16));
  GreDeleteFastMutex(Buffer);
  return Buffer;
}
