/*
 * XREFs of ?HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180017EBC
 * Callers:
 *     ?HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z @ 0x1800181B0 (-HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z.c)
 * Callees:
 *     CemRcTableFindOrInsertEx @ 0x180016A90 (CemRcTableFindOrInsertEx.c)
 */

void __fastcall HampClientPkgInsert(struct _HAM_CLIENT_CONTEXT *a1, struct _HAM_CLIENT_PACKAGE_CONTEXT *a2)
{
  __int64 v2; // [rsp+20h] [rbp-18h]
  unsigned __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 3) <= 1 )
    __fastfail(0xEu);
  CemRcTableFindOrInsertEx(
    (__int64)a1 + 72,
    (__int64)a2 + 48,
    (__int64 (__fastcall *)(__int64, unsigned __int64))HampClientPkgCompareByHandle,
    (unsigned __int64)a2,
    v2,
    &v3);
}
