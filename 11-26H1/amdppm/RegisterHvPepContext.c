/*
 * XREFs of RegisterHvPepContext @ 0x14003E278
 * Callers:
 *     RegisterHvLpiStates @ 0x14003DE6C (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x14003E360 (RegisterVmIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     memset @ 0x14000EA40 (memset.c)
 */

NTSTATUS __fastcall RegisterHvPepContext(__int64 a1)
{
  NTSTATUS result; // eax
  _QWORD v3[18]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v3, 0, 0x88uLL);
  result = KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), (PPROCESSOR_NUMBER)v3 + 1);
  if ( result >= 0 )
  {
    LODWORD(v3[0]) = 87;
    v3[1] = a1 + 1120;
    LODWORD(v3[12]) = 1;
    return ((__int64 (__fastcall *)(_QWORD *))qword_140015910)(v3);
  }
  return result;
}
