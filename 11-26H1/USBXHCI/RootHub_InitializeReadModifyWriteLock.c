/*
 * XREFs of RootHub_InitializeReadModifyWriteLock @ 0x14004A410
 * Callers:
 *     RootHub_PrepareHardware @ 0x14007D980 (RootHub_PrepareHardware.c)
 * Callees:
 *     DynamicLock_Create @ 0x1400564F4 (DynamicLock_Create.c)
 */

__int64 __fastcall RootHub_InitializeReadModifyWriteLock(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  char v4; // dl

  v2 = a1[6];
  v3 = 120LL * a2;
  v4 = *(_BYTE *)(a1[1] + 1001LL);
  *(_BYTE *)(v3 + v2 + 32) = 0;
  return DynamicLock_Create(*a1, *(_QWORD *)(a1[1] + 72LL), v4 != 0, v3 + v2 + 24);
}
