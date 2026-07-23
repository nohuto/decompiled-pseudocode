/*
 * XREFs of CmpBuildMachineHiveCache @ 0x14085D9F4
 * Callers:
 *     CmInitSystem2 @ 0x140D10B0C (CmInitSystem2.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     CmSiEventTupleInitialize @ 0x1404C1CA4 (CmSiEventTupleInitialize.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpMachineHiveCachePopulateEntry @ 0x14085DD0C (CmpMachineHiveCachePopulateEntry.c)
 *     CmpHiveCacheCreateHiveEntry @ 0x14086808C (CmpHiveCacheCreateHiveEntry.c)
 *     IoCreateDriver @ 0x140B5A8C0 (IoCreateDriver.c)
 */

void CmpBuildMachineHiveCache()
{
  int Driver; // eax
  unsigned int v1; // ebx
  $08E725EC6134F01F525383E5528526A8 *v2; // rdi
  __int64 v3; // rsi
  int v4; // r14d
  _DWORD *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  int HiveEntry; // eax
  int v11; // ebp
  wchar_t **v12; // rbx
  int v13; // eax
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]

  Driver = IoCreateDriver(CmHiveCacheDriverName, CmHiveCacheDriverSetup);
  if ( Driver < 0 )
    KeBugCheckEx(0x51u, 0x30uLL, Driver, 0LL, 0LL);
  v1 = 0;
  v2 = &CmpKeyLockTracker.320;
  v3 = 7LL;
  while ( v1 < 7 )
  {
    v4 = 0;
    if ( !v1 || v1 == 3 )
      v4 = 1;
    v5 = (_DWORD *)((char *)&CmpKeyLockTracker.320 + 832 * v1);
    memset_0(v5 + 97, 0, 0x1BCuLL);
    memset_0(v5, 0, 0x180uLL);
    v6 = 0LL;
    v5[94] = 1;
    do
    {
      CmSiEventTupleInitialize((_DWORD *)((char *)v5 + v6 + 208));
      v6 = v7 + 16;
    }
    while ( v8 != 1 );
    v5[84] = v4;
    v5[96] = v1;
    v15 = 0LL;
    v14 = 0LL;
    CmpInitializeThreadInfo((_KAFFINITY_EX *)&v14);
    v9 = (__int64)(v5 + 98);
    HiveEntry = CmpHiveCacheCreateHiveEntry(v5, v5 + 98);
    v11 = HiveEntry;
    if ( HiveEntry < 0 )
      SetFailureLocation(v9, 0, 50, HiveEntry, 48);
    CmCleanupThreadInfo((_KAFFINITY_EX **)&v14);
    if ( v11 < 0 )
      KeBugCheckEx(0x51u, 0x29uLL, v1, 0LL, 0LL);
    ++v1;
  }
  v12 = CmpMachineHiveList;
  do
  {
    v13 = CmpMachineHiveCachePopulateEntry(v2, v12);
    if ( v13 < 0 )
      SetFailureLocation((__int64)&v2[2].WaitBlock[0].WaitListEntry.Blink, 0, 53, v13, 16);
    v2 = ($08E725EC6134F01F525383E5528526A8 *)((char *)v2 + 832);
    v12 += 23;
    --v3;
  }
  while ( v3 );
}
