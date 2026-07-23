/*
 * XREFs of PsImpersonateContainerOfThread @ 0x1404AB3F8
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407C3470 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     PspUpdateContainerImpersonation @ 0x14037FEA0 (PspUpdateContainerImpersonation.c)
 */

__int64 __fastcall PsImpersonateContainerOfThread(_QWORD *Object)
{
  return PspUpdateContainerImpersonation((ULONG_PTR)KeGetCurrentThread(), Object);
}
