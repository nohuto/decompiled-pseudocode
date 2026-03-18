/*
 * XREFs of VerifierPoCallDriver @ 0x140B802E0
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriverSpecifyReturn @ 0x14049FA00 (IofCallDriverSpecifyReturn.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __fastcall VerifierPoCallDriver(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  if ( pXdvPoCallDriver )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return IofCallDriverSpecifyReturn(a1, a2);
}
