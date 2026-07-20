/*
 * XREFs of SmLogFailureInt @ 0x140007A08
 * Callers:
 *     SmpExecuteImage @ 0x140005010 (SmpExecuteImage.c)
 *     SmpTerminateCSR @ 0x1400056C0 (SmpTerminateCSR.c)
 *     SmpExecPgm @ 0x140006990 (SmpExecPgm.c)
 *     SmpSbCreateSession @ 0x140006E70 (SmpSbCreateSession.c)
 *     SmpDestroyControlBlock @ 0x1400075E8 (SmpDestroyControlBlock.c)
 *     SmpCreatePagingFileDescriptor @ 0x14000FA78 (SmpCreatePagingFileDescriptor.c)
 *     SmpCreateVolumeDescriptor @ 0x14000FF10 (SmpCreateVolumeDescriptor.c)
 *     SmpInitializeKnownDlls @ 0x1400154E0 (SmpInitializeKnownDlls.c)
 *     SmpLoadSubSystem @ 0x1400169E8 (SmpLoadSubSystem.c)
 *     SmpSetTargetAttributes @ 0x140018268 (SmpSetTargetAttributes.c)
 *     SmpUnhandledExceptionFilter @ 0x140018EAC (SmpUnhandledExceptionFilter.c)
 *     SmpWaitForStatusChange @ 0x140019224 (SmpWaitForStatusChange.c)
 * Callees:
 *     SmpInternalLogFailure @ 0x140005424 (SmpInternalLogFailure.c)
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
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
