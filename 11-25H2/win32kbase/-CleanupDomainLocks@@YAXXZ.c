/*
 * XREFs of ?CleanupDomainLocks@@YAXXZ @ 0x14014CBD0
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     InitCreateUserCrit @ 0x1402EB1A4 (InitCreateUserCrit.c)
 * Callees:
 *     ?LockUnInitialize@tagDomLock@@QEBAXXZ @ 0x14014CCD0 (-LockUnInitialize@tagDomLock@@QEBAXXZ.c)
 */

void __fastcall CleanupDomainLocks(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = W32GetUserSessionState(a1, a2) + 42272;
  tagDomLock::LockUnInitialize((tagDomLock *)v2);
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 8));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 16));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 32));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 40));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 48));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 56));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 64));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 72));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 80));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 88));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 96));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 104));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 112));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 128));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 120));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 136));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 144));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 152));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 160));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 168));
  tagDomLock::LockUnInitialize((tagDomLock *)(v2 + 176));
}
