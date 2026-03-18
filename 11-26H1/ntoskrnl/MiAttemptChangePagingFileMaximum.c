/*
 * XREFs of MiAttemptChangePagingFileMaximum @ 0x1406F866C
 * Callers:
 *     MiStoreContractVirtualPagefileApc @ 0x1404BC6C0 (MiStoreContractVirtualPagefileApc.c)
 *     MiStoreExtendVirtualPagefile @ 0x1405117D8 (MiStoreExtendVirtualPagefile.c)
 *     MiUpdateExistingPageFile @ 0x14086C380 (MiUpdateExistingPageFile.c)
 * Callees:
 *     MiChangePagingFileMaximum @ 0x1406F88B0 (MiChangePagingFileMaximum.c)
 *     MiPagefileMaximumChangePrepare @ 0x1406F8F04 (MiPagefileMaximumChangePrepare.c)
 *     MiReleasePageHash @ 0x14070FEE0 (MiReleasePageHash.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAttemptChangePagingFileMaximum(__int64 a1, unsigned int a2)
{
  int v4; // edi
  __int64 v5; // rcx
  void *v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v4 = MiPagefileMaximumChangePrepare(a2, *(_QWORD *)(a1 + 184) != 0LL, &v8, &v9);
  if ( v4 < 0 )
  {
    v5 = v8;
    v6 = v9;
  }
  else
  {
    MiChangePagingFileMaximum(a1, v9, v8);
    v5 = 0LL;
    v6 = 0LL;
    v4 = 0;
  }
  if ( v5 )
    MiReleasePageHash(v5, a2);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v4;
}
