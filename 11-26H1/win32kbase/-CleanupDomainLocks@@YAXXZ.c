/*
 * XREFs of ?CleanupDomainLocks@@YAXXZ @ 0x14018AA70
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     InitCreateUserCrit @ 0x1402F1D28 (InitCreateUserCrit.c)
 * Callees:
 *     ?LockUnInitialize@tagDomLock@@QEBAXXZ @ 0x14018AB70 (-LockUnInitialize@tagDomLock@@QEBAXXZ.c)
 */

void __fastcall CleanupDomainLocks(int a1, int a2, int a3)
{
  __int64 v3; // rbx

  v3 = W32GetUserSessionState(a1, a2, a3) + 42296;
  tagDomLock::LockUnInitialize((tagDomLock *)v3);
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 8));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 16));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 32));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 40));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 48));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 56));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 64));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 72));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 80));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 88));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 96));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 104));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 112));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 128));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 120));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 136));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 144));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 152));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 160));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 168));
  tagDomLock::LockUnInitialize((tagDomLock *)(v3 + 176));
}
