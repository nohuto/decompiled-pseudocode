/*
 * XREFs of MiCreatePlaceholderStorage @ 0x14099782C
 * Callers:
 *     MiAllocateDataVad @ 0x140995980 (MiAllocateDataVad.c)
 *     MiReserveUserMemoryPrepare @ 0x140A010AC (MiReserveUserMemoryPrepare.c)
 *     MiCloneAncillaryVadInfo @ 0x140A07A00 (MiCloneAncillaryVadInfo.c)
 *     MiInitializePartialVad @ 0x140AC26F4 (MiInitializePartialVad.c)
 * Callees:
 *     MiConfirmQuotaAmount @ 0x1403C6C30 (MiConfirmQuotaAmount.c)
 *     MiConfirmQuotaProcess @ 0x1403C6C74 (MiConfirmQuotaProcess.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403C6CB0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C6FA0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiCreateVadEvent @ 0x14099F5BC (MiCreateVadEvent.c)
 *     MiAllocateVad @ 0x140A02E80 (MiAllocateVad.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePlaceholderStorage(ULONG_PTR BugCheckParameter1)
{
  __int64 result; // rax
  PVOID v3; // rsi
  unsigned __int8 *v4; // rbx
  int v5; // eax
  int VadEvent; // ebp
  PVOID P; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  P = 0LL;
  result = MiAllocateVad((unsigned int)&P, BugCheckParameter1, 0, 0, 2);
  if ( (int)result >= 0 )
  {
    v3 = P;
    v4 = (unsigned __int8 *)P + 68;
    if ( P != (PVOID)-68LL )
    {
      MiConfirmQuotaProcess((unsigned __int8 *)P + 68, BugCheckParameter1);
      MiConfirmQuotaAmount(v4, 0LL);
    }
    v5 = PsChargeProcessNonPagedPoolQuota(BugCheckParameter1, 0x48uLL);
    if ( v5 < 0 )
    {
      VadEvent = v5;
    }
    else
    {
      if ( v4 )
        *v4 = *v4 & 0xF | 0x40;
      VadEvent = MiCreateVadEvent(BugCheckParameter1, (__int64)MiDeleteVadEventPlaceholder, (__int64)&v8);
      if ( VadEvent >= 0 )
      {
        *(_QWORD *)(v8 + 24) = v3;
        return 0LL;
      }
      if ( v4 )
      {
        MiConfirmQuotaProcess(v4, BugCheckParameter1);
        MiConfirmQuotaAmount(v4, 0x48uLL);
      }
      PsReturnProcessNonPagedPoolQuota(BugCheckParameter1, 0x48uLL);
      if ( v4 )
        *v4 = 0;
    }
    ExFreePoolWithTag(v3, 0);
    return (unsigned int)VadEvent;
  }
  return result;
}
