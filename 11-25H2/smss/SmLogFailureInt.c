/*
 * XREFs of SmLogFailureInt @ 0x140008078
 * Callers:
 *     SmpExecuteImage @ 0x140003090 (SmpExecuteImage.c)
 *     SmpTerminateCSR @ 0x140006C40 (SmpTerminateCSR.c)
 *     SmpExecPgm @ 0x140006F70 (SmpExecPgm.c)
 *     SmpSbCreateSession @ 0x140007470 (SmpSbCreateSession.c)
 *     SmpDestroyControlBlock @ 0x140007BF4 (SmpDestroyControlBlock.c)
 *     SmpCreatePagingFileDescriptor @ 0x14000FE40 (SmpCreatePagingFileDescriptor.c)
 *     SmpCreateVolumeDescriptor @ 0x1400102D4 (SmpCreateVolumeDescriptor.c)
 *     SmpInitializeKnownDlls @ 0x1400158F0 (SmpInitializeKnownDlls.c)
 *     SmpLoadSubSystem @ 0x140016D30 (SmpLoadSubSystem.c)
 *     SmpSetTargetAttributes @ 0x14001859C (SmpSetTargetAttributes.c)
 *     SmpUnhandledExceptionFilter @ 0x140019234 (SmpUnhandledExceptionFilter.c)
 *     SmpWaitForStatusChange @ 0x1400195CC (SmpWaitForStatusChange.c)
 * Callees:
 *     SmpInternalLogFailure @ 0x1400036FC (SmpInternalLogFailure.c)
 *     memset_0 @ 0x14001EFBF (memset_0.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

_OWORD *__fastcall SmLogFailureInt(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  _BYTE v10[200]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v11; // [rsp+E8h] [rbp-40h]
  __int64 v12; // [rsp+F0h] [rbp-38h]

  memset_0(v10, 0, 0xE0uLL);
  v11 = a3;
  v12 = a4;
  return SmpInternalLogFailure(a1, a2, a5, (__int64)v10);
}
