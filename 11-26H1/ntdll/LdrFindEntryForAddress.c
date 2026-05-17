/*
 * XREFs of LdrFindEntryForAddress @ 0x1800C6110
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrInitShimEngineDynamic @ 0x1800C5320 (LdrInitShimEngineDynamic.c)
 *     LdrpIsReparsePoint @ 0x1800C5E78 (LdrpIsReparsePoint.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByAddress @ 0x1800C6170 (LdrpFindLoadedDllByAddress.c)
 */

__int64 __fastcall LdrFindEntryForAddress(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( !a1 )
    return 3221225781LL;
  result = LdrpFindLoadedDllByAddress(a1, &v7, &v6);
  v4 = result;
  if ( (int)result >= 0 )
  {
    v5 = v7;
    *a2 = v7;
    LdrpDereferenceModule(v5);
    return v4;
  }
  return result;
}
