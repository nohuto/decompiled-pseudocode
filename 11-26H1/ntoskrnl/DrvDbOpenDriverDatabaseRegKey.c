/*
 * XREFs of DrvDbOpenDriverDatabaseRegKey @ 0x140B2BB4C
 * Callers:
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x1408A43CC (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408A4D3C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbDispatchDriverDatabase @ 0x140A880C0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140B258C4 (DrvDbGetDriverDatabaseMappedProperty.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     DrvDbCreateDatabaseNode @ 0x1408A5A58 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x1408A5D90 (DrvDbDestroyDatabaseNode.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1409788FC (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x140978AEC (DrvDbUnloadDatabaseNode.c)
 *     DrvDbFindDatabaseNode @ 0x140979718 (DrvDbFindDatabaseNode.c)
 */

__int64 __fastcall DrvDbOpenDriverDatabaseRegKey(
        __int64 *a1,
        const WCHAR *a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        _DWORD *a6)
{
  char v10; // bp
  int DatabaseNode; // eax
  int v12; // edi
  UNICODE_STRING *v14; // rbx
  struct _KTHREAD *CurrentThread; // rax
  const UNICODE_STRING *v16[2]; // [rsp+50h] [rbp-28h] BYREF

  v16[0] = 0LL;
  v10 = 0;
  if ( wcsicmp(a2, L"*") )
  {
    DatabaseNode = DrvDbFindDatabaseNode((__int64)a1, a2, v16);
    v12 = DatabaseNode;
    if ( DatabaseNode == -1073741772 )
    {
      if ( !a4 )
        return (unsigned int)v12;
      v12 = DrvDbCreateDatabaseNode((__int64)a1, a2, 0LL, 0, 0LL, 16, 0LL, 0LL, (__int64 *)v16);
      if ( v12 < 0 )
        return (unsigned int)v12;
      v10 = 1;
    }
    else if ( DatabaseNode < 0 )
    {
      return (unsigned int)v12;
    }
    v14 = (UNICODE_STRING *)v16[0];
  }
  else
  {
    v14 = (UNICODE_STRING *)a1[4];
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)v14[9].Buffer, 1u);
  if ( (*(_DWORD *)&v14[4].Length & 1) != 0 || (v12 = DrvDbLoadDatabaseNode(a1, (__int64)v14), v12 >= 0) )
  {
    v12 = PnpCtxRegOpenKey(*a1, *(_QWORD *)&v14[6].Length, 0LL, 0, a3, a5);
    if ( (*(_DWORD *)&v14[4].Length & 1) == 0 )
      DrvDbUnloadDatabaseNode((__int64)a1, (__int64)v14);
    if ( v12 >= 0 && a6 )
      *a6 = 2;
  }
  ExReleaseResourceLite((PERESOURCE)v14[9].Buffer);
  KeLeaveCriticalRegion();
  if ( v12 < 0 && v10 )
    DrvDbDestroyDatabaseNode((__int64)a1, v14);
  return (unsigned int)v12;
}
