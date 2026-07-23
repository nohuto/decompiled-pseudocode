/*
 * XREFs of BapdpProcessResumeInformation @ 0x140CE8D0C
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140C85BB0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140CE939C (BapdpQueryData.c)
 *     BapdpRegisterResumeInformation @ 0x140CE9A64 (BapdpRegisterResumeInformation.c)
 */

void __fastcall BapdpProcessResumeInformation(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  void *Pool2; // rbx
  _DWORD v4[4]; // [rsp+30h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+50h] [rbp+10h] BYREF

  v4[0] = 1623809380;
  v4[1] = 1116188130;
  v4[2] = 871391376;
  v4[3] = 785389825;
  DataSize = 0;
  v1 = BapdpQueryData(a1, v4, 0LL, 0LL, &DataSize, 0LL);
  if ( v1 == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, DataSize, 0x64506142u);
    if ( !Pool2 )
      return;
  }
  else
  {
    Pool2 = 0LL;
    if ( v1 < 0 )
      return;
  }
  if ( (int)BapdpQueryData(v2, v4, 0LL, Pool2, &DataSize, 0LL) >= 0 )
    BapdpRegisterResumeInformation(Pool2, DataSize);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
