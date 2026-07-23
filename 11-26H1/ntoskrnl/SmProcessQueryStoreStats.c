/*
 * XREFs of SmProcessQueryStoreStats @ 0x1409BC61C
 * Callers:
 *     PfpPrivSourceEnum @ 0x14091DEAC (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoWs @ 0x1409BBBE8 (EtwpLogMemInfoWs.c)
 * Callees:
 *     ?SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z @ 0x140356940 (-SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SmProcessQueryStoreStats(struct _EPROCESS *a1, _QWORD *a2, _QWORD *a3)
{
  int v6; // r9d
  _ST_DATA_MGR_STATS::$94C4BE97FD0F81C7851F3B6009F5EE10 *Space; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 RegionsInUse; // rax
  struct _ST_STATS v12; // [rsp+20h] [rbp-628h] BYREF

  memset_0(&v12, 0, sizeof(v12));
  v6 = SmpProcessQueryStoreStats(a1, &v12);
  if ( v6 >= 0 )
  {
    if ( a2 )
    {
      Space = v12.Basic.UserData.Space;
      v9 = 0LL;
      v10 = 8LL;
      do
      {
        RegionsInUse = Space->RegionsInUse;
        ++Space;
        v9 += v12.Basic.RegionSize * RegionsInUse;
        --v10;
      }
      while ( v10 );
      *a2 = v9;
    }
    if ( a3 )
      *a3 = (unsigned __int64)v12.Basic.UserData.PagesStored << 12;
  }
  return (unsigned int)v6;
}
