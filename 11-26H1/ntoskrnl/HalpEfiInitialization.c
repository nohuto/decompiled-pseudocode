/*
 * XREFs of HalpEfiInitialization @ 0x140CB4F20
 * Callers:
 *     HalpFirmwareInitDiscard @ 0x140CB55F4 (HalpFirmwareInitDiscard.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024F100 (KeRegisterBugCheckReasonCallback.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpEfiInitialization(__int64 a1)
{
  __int128 v2; // xmm0
  LONG v3; // eax
  int v4; // edi
  __int64 *v5; // rcx
  __int64 v6; // rax

  if ( (*(_DWORD *)(a1 + 264) & 1) == 0 )
  {
    HalpDeviceBlockUnblockPushLock.WaitBlockFill6[72] = 0;
    return 0LL;
  }
  v2 = *(_OWORD *)(a1 + 264);
  HalpDeviceBlockUnblockPushLock.WaitBlockFill6[72] = 1;
  *(_OWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[96] = v2;
  *(_OWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[112] = *(_OWORD *)(a1 + 280);
  *(_OWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[128] = *(_OWORD *)(a1 + 296);
  *(_OWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[144] = *(_OWORD *)(a1 + 312);
  HIDWORD(HalpDeviceBlockUnblockPushLock.ReadOperationCount) = 0;
  HalpDeviceBlockUnblockPushLock.ReadTransferCount = 0LL;
  LODWORD(HalpDeviceBlockUnblockPushLock.WriteOperationCount) = 0;
  v3 = *(_DWORD *)(a1 + 292);
  v4 = *(_DWORD *)(a1 + 288);
  *(_DWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[160] = v4;
  HalpDeviceBlockUnblockPushLock.WaitBlock[3].SpareLong = v3;
  if ( v3 || !*(_QWORD *)(a1 + 280) )
  {
    v4 = -1073741823;
LABEL_9:
    KeBugCheckEx(0x5Cu, 0x5000uLL, v4, 0LL, 0LL);
  }
  if ( v4 < 0 )
    goto LABEL_9;
  v5 = *(__int64 **)(a1 + 280);
  HalEfiRuntimeServicesBlock[0] = *v5;
  qword_141201878 = v5[1];
  qword_141201880 = v5[10];
  qword_141201888 = v5[6];
  qword_141201890 = v5[7];
  qword_141201898 = v5[8];
  qword_1412018A0 = v5[11];
  qword_1412018A8 = v5[12];
  v6 = v5[13];
  HalpEfiRuntimeCallbackRecord.State = 0;
  qword_1412018B0 = v6;
  KeRegisterBugCheckReasonCallback(
    &HalpEfiRuntimeCallbackRecord,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HalpEfiBugCheckAddPagesCallback,
    KbCallbackAddPages,
    (PUCHAR)"HalEfiRuntime");
  if ( (*(_DWORD *)(a1 + 264) & 2) != 0 )
    HalEfiRuntimeServicesTable = (__int64 *)HalpIumEfiWrapperTable;
  return (unsigned int)v4;
}
