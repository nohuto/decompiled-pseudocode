/*
 * XREFs of LdrIsModuleSxsRedirected @ 0x18015BAF0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 */

bool __fastcall LdrIsModuleSxsRedirected(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  bool v4; // bl
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v6 = 0LL;
  if ( (int)LdrpFindLoadedDllByHandle(a1, &v6, 0LL, a4) >= 0 )
  {
    v4 = (*(_DWORD *)(v6 + 104) & 0x10000000) != 0;
    LdrpDereferenceModule(v6);
  }
  return v4;
}
