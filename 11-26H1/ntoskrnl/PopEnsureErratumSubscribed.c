/*
 * XREFs of PopEnsureErratumSubscribed @ 0x140606D90
 * Callers:
 *     PoRegisterPowerSettingCallback @ 0x140B05F90 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     RtlpComputeCrcInternal @ 0x1404878F0 (RtlpComputeCrcInternal.c)
 *     ExSubscribeWnfStateChange @ 0x140948A90 (ExSubscribeWnfStateChange.c)
 */

void __fastcall PopEnsureErratumSubscribed(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1[1] )
  {
    v2 = *a1;
    v5 = MEMORY[0xFFFFF78000000014];
    v3 = RtlpComputeCrcInternal((unsigned __int64)&v5, 8uLL, 0LL);
    v4 = RtlpComputeCrcInternal(v2, 8uLL, v3);
    a1[2] = v4;
    a1[3] = RtlpComputeCrcInternal(v2, 8uLL, v4);
    ExSubscribeWnfStateChange((_DWORD)a1 + 8, v2, 1, 0, (__int64)PopErratumUpdateCallback, (__int64)a1);
  }
}
