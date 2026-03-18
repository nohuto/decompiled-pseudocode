/*
 * XREFs of ?HMDoubleFree@@YAXPEAX@Z @ 0x14018FCD0
 * Callers:
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D0E14 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 *     ?CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z @ 0x1401B34C0 (-CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn HMDoubleFree(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0x164u, 0x1BuLL, BugCheckParameter2, 0LL, 0LL);
}
