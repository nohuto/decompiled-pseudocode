/*
 * XREFs of IoReserveDependency @ 0x1407A2520
 * Callers:
 *     <none>
 * Callees:
 *     PipSetDependency @ 0x1407A2CA0 (PipSetDependency.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409B0DD0 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409B0E00 (PnpAcquireDependencyRelationsLock.c)
 */

__int64 __fastcall IoReserveDependency(__int64 a1, _WORD *a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF
  _WORD *v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]

  v3 = a1;
  HIDWORD(v10[0]) = 0;
  v11[1] = 0;
  if ( a1 && a2 && *a2 && (a3 & 3) != 0 && (a3 & 0xFFFFFFFC) == 0 )
  {
    v11[0] = 1;
    LOBYTE(a1) = 1;
    v12 = a2;
    v13 = a3;
    LODWORD(v10[0]) = 0;
    v10[1] = v3;
    PnpAcquireDependencyRelationsLock(a1);
    v4 = PipSetDependency(v10, v11);
    PnpReleaseDependencyRelationsLock(v6, v5, v7, v8, v10[0]);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
