/*
 * XREFs of LdrIsModuleSxsRedirected @ 0x18015B9B0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 */

BOOLEAN __cdecl LdrIsModuleSxsRedirected(PVOID DllHandle)
{
  char *v1; // r9
  _BOOL8 v2; // rbx
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v2) = 0;
  BaseAddress = 0LL;
  if ( (int)LdrpFindLoadedDllByHandle(DllHandle, (__int64 *)&BaseAddress, 0LL, v1) >= 0 )
  {
    v2 = (*((_DWORD *)BaseAddress + 26) & 0x10000000) != 0;
    LdrpDereferenceModule((char *)BaseAddress);
  }
  return v2;
}
