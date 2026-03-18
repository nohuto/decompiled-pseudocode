/*
 * XREFs of GreCreateFastMutex @ 0x1401C7DD0
 * Callers:
 *     EngCreateFastMutex @ 0x1401C77C0 (EngCreateFastMutex.c)
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

struct _FAST_MUTEX *GreCreateFastMutex()
{
  struct _FAST_MUTEX *v0; // rax
  struct _FAST_MUTEX *v1; // rbx

  v0 = (struct _FAST_MUTEX *)Win32AllocPoolImpl(64LL, 0x48uLL, 0x6D736647u);
  v1 = v0;
  if ( v0 )
  {
    KeInitializeGuardedMutex(v0);
    *(_QWORD *)&v1[1].Count = 0LL;
    LODWORD(v1[1].Owner) = 0;
  }
  return v1;
}
