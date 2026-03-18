/*
 * XREFs of ?LockUnInitialize@tagDomLock@@QEBAXXZ @ 0x14018AB70
 * Callers:
 *     ?CleanupDomainLocks@@YAXXZ @ 0x14018AA70 (-CleanupDomainLocks@@YAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall tagDomLock::LockUnInitialize(char **this)
{
  char *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = *this;
  if ( v2 )
  {
    ExDeleteResourceLite((PERESOURCE)v2);
    GreDeleteFastMutex(*this, v3, v4, v5);
    *this = 0LL;
  }
}
