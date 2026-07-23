/*
 * XREFs of BapdpProcessBitlockerStatus @ 0x140CE8894
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140C85BB0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140CE939C (BapdpQueryData.c)
 *     BapdpRegisterBitlockerStatus @ 0x140CE957C (BapdpRegisterBitlockerStatus.c)
 */

void __fastcall BapdpProcessBitlockerStatus(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  void *Pool2; // rbx
  _DWORD v4[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v5; // [rsp+50h] [rbp+10h] BYREF

  v4[0] = -1116405225;
  v4[1] = 1086728798;
  v4[2] = 1008263083;
  v4[3] = 722433735;
  v5 = 0;
  v1 = BapdpQueryData(a1, v4, 0LL, 0LL, &v5, 0LL);
  if ( v1 == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, v5, 0x64506142u);
    if ( !Pool2 )
      return;
  }
  else
  {
    Pool2 = 0LL;
    if ( v1 < 0 )
      return;
  }
  if ( (int)BapdpQueryData(v2, v4, 0LL, Pool2, &v5, 0LL) >= 0 )
    BapdpRegisterBitlockerStatus(Pool2);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
