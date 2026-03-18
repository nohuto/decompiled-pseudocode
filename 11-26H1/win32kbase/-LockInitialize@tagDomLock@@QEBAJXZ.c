/*
 * XREFs of ?LockInitialize@tagDomLock@@QEBAJXZ @ 0x140172FE0
 * Callers:
 *     ?InitDomainLocks@@YAJXZ @ 0x140172DB8 (-InitDomainLocks@@YAJXZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

NTSTATUS __fastcall tagDomLock::LockInitialize(tagDomLock *this)
{
  struct _ERESOURCE *v2; // rax

  v2 = (struct _ERESOURCE *)Win32AllocPoolZInitImpl(64LL, 0x68uLL, 0x72657355u);
  *(_QWORD *)this = v2;
  if ( v2 )
    return ExInitializeResourceLite(v2);
  else
    return -1073741801;
}
