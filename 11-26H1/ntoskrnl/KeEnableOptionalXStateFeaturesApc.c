/*
 * XREFs of KeEnableOptionalXStateFeaturesApc @ 0x1405EF310
 * Callers:
 *     PspEnableProcessOptionalXStateFeatures @ 0x140B643BC (PspEnableProcessOptionalXStateFeatures.c)
 * Callees:
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 *     KxEnableOptionalXStateFeatures @ 0x1405EF914 (KxEnableOptionalXStateFeatures.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall KeEnableOptionalXStateFeaturesApc(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+38h] [rbp-20h]
  __int128 v10; // [rsp+40h] [rbp-18h]
  char v11; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 112);
  v2 = *(_QWORD *)(a1 + 88);
  v4 = *(_QWORD *)(a1 + 104);
  v11 = 0;
  if ( (int)KxEnableOptionalXStateFeatures(v1, v4, v2, &v11) < 0 || !v11 )
  {
    v5 = *(_QWORD *)(a1 + 96);
    if ( v5 )
    {
      v7 = 0LL;
      v6[0] = 8;
      v10 = 0LL;
      v6[1] = 5;
      v9 = v5;
      v8 = v1;
      MmDeleteKernelStack(v6);
    }
  }
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 120), 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 120), 0);
}
