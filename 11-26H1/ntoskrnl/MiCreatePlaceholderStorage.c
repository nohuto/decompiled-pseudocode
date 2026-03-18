/*
 * XREFs of MiCreatePlaceholderStorage @ 0x1409C684C
 * Callers:
 *     MiReserveUserMemoryPrepare @ 0x14095B7EC (MiReserveUserMemoryPrepare.c)
 *     MiCloneAncillaryVadInfo @ 0x140961D0C (MiCloneAncillaryVadInfo.c)
 *     MiAllocateDataVad @ 0x1409C49A0 (MiAllocateDataVad.c)
 *     MiInitializePartialVad @ 0x140AC0654 (MiInitializePartialVad.c)
 * Callees:
 *     MiConfirmQuotaAmount @ 0x1403BCDC0 (MiConfirmQuotaAmount.c)
 *     MiConfirmQuotaProcess @ 0x1403BCE04 (MiConfirmQuotaProcess.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403BCE40 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403BD130 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiAllocateVad @ 0x14095D5C0 (MiAllocateVad.c)
 *     MiCreateVadEvent @ 0x1409CE5DC (MiCreateVadEvent.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  result = MiAllocateVad((__int64 *)&P, BugCheckParameter1, 0LL, 0LL, 2);
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
