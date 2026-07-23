/*
 * XREFs of CmpResetCachedSecurity @ 0x140B48144
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1409C9150 (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x14046BB10 (CmpFindSecurityCellCacheIndex.c)
 */

__int64 __fastcall CmpResetCachedSecurity(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( !CmpFindSecurityCellCacheIndex(a1, a2, &v4) )
    return 3221226021LL;
  result = 0LL;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1896) + 16LL * v4 + 8) + 28LL) = 0;
  return result;
}
