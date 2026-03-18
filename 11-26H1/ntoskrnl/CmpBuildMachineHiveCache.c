/*
 * XREFs of CmpBuildMachineHiveCache @ 0x140857664
 * Callers:
 *     CmInitSystem2 @ 0x140D0A83C (CmInitSystem2.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     SetFailureLocation @ 0x140494894 (SetFailureLocation.c)
 *     CmSiEventTupleInitialize @ 0x1404C7F64 (CmSiEventTupleInitialize.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpMachineHiveCachePopulateEntry @ 0x14085797C (CmpMachineHiveCachePopulateEntry.c)
 *     CmpHiveCacheCreateHiveEntry @ 0x140861CAC (CmpHiveCacheCreateHiveEntry.c)
 *     IoCreateDriver @ 0x140B57970 (IoCreateDriver.c)
 */

void CmpBuildMachineHiveCache()
{
  int Driver; // eax
  unsigned int v1; // ebx
  PVOID *p_Object; // rdi
  __int64 v3; // rsi
  int v4; // r14d
  PVOID *v5; // rbp
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
  p_Object = &CmpKeyLockTracker.WaitBlock[0].Object;
  v3 = 7LL;
  while ( v1 < 7 )
  {
    v4 = 0;
    if ( !v1 || v1 == 3 )
      v4 = 1;
    v5 = &CmpKeyLockTracker.WaitBlock[0].Object + 104 * v1;
    memset_0((char *)v5 + 388, 0, 0x1BCuLL);
    memset_0(v5, 0, 0x180uLL);
    v6 = 0LL;
    *((_DWORD *)v5 + 94) = 1;
    do
    {
      CmSiEventTupleInitialize((PVOID *)((char *)v5 + v6 + 208));
      v6 = v7 + 16;
    }
    while ( v8 != 1 );
    *((_DWORD *)v5 + 84) = v4;
    *((_DWORD *)v5 + 96) = v1;
    v15 = 0LL;
    v14 = 0LL;
    CmpInitializeThreadInfo((_KAFFINITY_EX *)&v14);
    v9 = (__int64)(v5 + 49);
    HiveEntry = CmpHiveCacheCreateHiveEntry(v5, v5 + 49);
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
    v13 = CmpMachineHiveCachePopulateEntry(p_Object, v12);
    if ( v13 < 0 )
      SetFailureLocation((__int64)(p_Object + 49), 0, 53, v13, 16);
    p_Object += 104;
    v12 += 23;
    --v3;
  }
  while ( v3 );
}
