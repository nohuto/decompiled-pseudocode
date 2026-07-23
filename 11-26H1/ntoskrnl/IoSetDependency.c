/*
 * XREFs of IoSetDependency @ 0x1407A25B0
 * Callers:
 *     <none>
 * Callees:
 *     PipSetDependency @ 0x1407A2CA0 (PipSetDependency.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409B0DD0 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409B0E00 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409B0EBC (PipProcessRebuildPowerRelationsQueue.c)
 */

__int64 __fastcall IoSetDependency(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]

  v3 = a1;
  HIDWORD(v10[0]) = 0;
  v11[1] = 0;
  if ( a1 && a2 && (a3 & 3) != 0 && (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( a1 == a2 )
      return 3221225473LL;
    LOBYTE(a1) = 1;
    LODWORD(v10[0]) = 0;
    v10[1] = v3;
    v11[0] = 0;
    v12 = a2;
    v13 = a3;
    PnpAcquireDependencyRelationsLock(a1);
    v5 = PipSetDependency(v10, v11);
    PnpReleaseDependencyRelationsLock(v7, v6, v8, v9, v10[0]);
    if ( v5 >= 0 )
      PipProcessRebuildPowerRelationsQueue();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
