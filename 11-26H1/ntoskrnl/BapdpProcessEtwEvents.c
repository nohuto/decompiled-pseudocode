/*
 * XREFs of BapdpProcessEtwEvents @ 0x1406CEABC
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140C85BB0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     BapdWriteEtwEvents @ 0x1406CDFBC (BapdWriteEtwEvents.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140CE939C (BapdpQueryData.c)
 */

void __fastcall BapdpProcessEtwEvents(__int64 a1)
{
  unsigned int v1; // r14d
  void *Pool2; // rbx
  unsigned int v3; // esi
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v7[4]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v8; // [rsp+48h] [rbp-18h] BYREF

  v7[0] = -1667627438;
  v1 = 0;
  v7[1] = 1255566311;
  Pool2 = 0LL;
  v7[2] = -363808867;
  v8 = 0LL;
  v3 = 0;
  v7[3] = -1273101358;
  while ( 1 )
  {
    v6 = 0;
    v4 = BapdpQueryData(a1, v7, v3, 0LL, &v6, 0LL);
    v5 = v4 + 0x80000000;
    if ( (v5 & 0x80000000) == 0 && v4 != -1073741789 )
      break;
    if ( v6 > v1 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
        return;
      v1 = v6;
    }
    if ( (int)BapdpQueryData(v5, v7, v3, Pool2, &v6, &v8) < 0
      || (int)BapdWriteEtwEvents((ULONGLONG)&v8, (unsigned __int64)Pool2, v6) < 0 )
    {
      break;
    }
    ++v3;
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
