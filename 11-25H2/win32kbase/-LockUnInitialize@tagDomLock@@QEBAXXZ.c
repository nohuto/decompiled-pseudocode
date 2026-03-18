/*
 * XREFs of ?LockUnInitialize@tagDomLock@@QEBAXXZ @ 0x14014CCD0
 * Callers:
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1400CF2BC (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x14014CBD0 (-CleanupDomainLocks@@YAXXZ.c)
 *     ?UnInitialize@CFrameIdGenerator@@SAXXZ @ 0x140215CC0 (-UnInitialize@CFrameIdGenerator@@SAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall tagDomLock::LockUnInitialize(PVOID *this)
{
  struct _ERESOURCE *v2; // rcx

  v2 = (struct _ERESOURCE *)*this;
  if ( v2 )
  {
    ExDeleteResourceLite(v2);
    ExFreePoolWithTag(*this, 0);
    *this = 0LL;
  }
}
