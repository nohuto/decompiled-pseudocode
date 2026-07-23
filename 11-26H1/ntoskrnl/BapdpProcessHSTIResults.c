/*
 * XREFs of BapdpProcessHSTIResults @ 0x140CE8C38
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140C85BB0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140CE939C (BapdpQueryData.c)
 */

void __fastcall BapdpProcessHSTIResults(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  void *Pool2; // rbx
  _DWORD v4[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v5; // [rsp+50h] [rbp+10h] BYREF

  v4[0] = -1059463388;
  v4[1] = 1314116061;
  v4[2] = -657724523;
  v4[3] = -2040154073;
  v5 = 0;
  v1 = BapdpQueryData(a1, v4, 0LL, 0LL, &v5, 0LL);
  if ( v1 == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v5, 0x49545348u);
    if ( !Pool2 )
      return;
  }
  else
  {
    Pool2 = 0LL;
    if ( v1 < 0 )
      return;
  }
  if ( (int)BapdpQueryData(v2, v4, 0LL, Pool2, &v5, 0LL) < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    LODWORD(dword_140FE4650) = v5;
    qword_140FE4658 = Pool2;
  }
}
