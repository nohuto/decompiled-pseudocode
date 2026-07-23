/*
 * XREFs of ExpInitExpCheckTestSigningInfo @ 0x1406D3E80
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 */

_BOOL8 __fastcall ExpInitExpCheckTestSigningInfo(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  NTSTATUS v3; // eax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  ULONG v6; // [rsp+58h] [rbp+20h] BYREF

  v5 = 8LL;
  v6 = 0;
  v3 = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v5, 8u, &v6);
  if ( v3 >= 0 && (v5 & 0x200000000LL) != 0 )
    LOBYTE(ExSaPageGroupDescriptorArrayLock.WriteTransferCount) = 1;
  return v3 >= 0;
}
