/*
 * XREFs of LdrDisableThreadCalloutsForDll @ 0x1800E0680
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 */

__int64 __fastcall LdrDisableThreadCalloutsForDll(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int LoadedDllByHandle; // ebx
  __int64 v5; // rcx
  int v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  v8 = 0LL;
  if ( !byte_1801CB8C8 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v8, &v7, a4);
    if ( LoadedDllByHandle >= 0 )
    {
      v5 = v8;
      if ( !*(_WORD *)(v8 + 110) )
        *(_BYTE *)(v8 + 106) |= 4u;
      LdrpDereferenceModule(v5);
    }
  }
  return (unsigned int)LoadedDllByHandle;
}
