/*
 * XREFs of VerifierPoCallDriver @ 0x140C349F0
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriverSpecifyReturn @ 0x1404D5EB0 (IofCallDriverSpecifyReturn.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VerifierPoCallDriver(void *a1, ULONG_PTR a2)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( pXdvPoCallDriver )
    return guard_dispatch_icall_no_overrides((__int64)a1, a2);
  else
    return IofCallDriverSpecifyReturn(a1, a2, retaddr);
}
