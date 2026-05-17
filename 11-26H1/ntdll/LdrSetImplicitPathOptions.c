/*
 * XREFs of LdrSetImplicitPathOptions @ 0x18015BBE0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 */

__int64 __fastcall LdrSetImplicitPathOptions(unsigned __int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  int LoadedDllByHandle; // edi
  __int64 v6; // rcx
  int v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  if ( (~((LdrpPolicyBits & 4 | 0x7B) << 8) & a2) != 0 || !a2 )
    return 3221225485LL;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v9, &v8, a4);
  if ( LoadedDllByHandle >= 0 )
  {
    v6 = v9;
    *(_DWORD *)(v9 + 272) = a2;
    LdrpDereferenceModule(v6);
  }
  return (unsigned int)LoadedDllByHandle;
}
