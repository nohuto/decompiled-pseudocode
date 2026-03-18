/*
 * XREFs of PsImpersonateContainerOfThread @ 0x1404B1D38
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407C0410 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     PspUpdateContainerImpersonation @ 0x14037E0F0 (PspUpdateContainerImpersonation.c)
 */

__int64 __fastcall PsImpersonateContainerOfThread(_QWORD *Object)
{
  return PspUpdateContainerImpersonation((ULONG_PTR)KeGetCurrentThread(), Object);
}
