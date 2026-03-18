/*
 * XREFs of ?INIT_CRIT_RESOURCE@@YAPEAU_FAST_ERESOURCE@@XZ @ 0x1401B5A80
 * Callers:
 *     InitCreateUserCrit @ 0x1402EB1A4 (InitCreateUserCrit.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

struct _FAST_ERESOURCE *INIT_CRIT_RESOURCE(void)
{
  __int64 v0; // rax
  __int64 v1; // rbx

  v0 = Win32AllocPoolZInitImpl(64LL, 0x68uLL, 0x72657355u);
  v1 = v0;
  if ( v0 )
    ExInitializeFastResource(v0, 0LL);
  return (struct _FAST_ERESOURCE *)v1;
}
