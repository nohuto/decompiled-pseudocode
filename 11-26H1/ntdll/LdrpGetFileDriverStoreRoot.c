/*
 * XREFs of LdrpGetFileDriverStoreRoot @ 0x1800DC68C
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x1800DC74C (RtlStringCchCopyNW.c)
 *     _wcsnicmp @ 0x180128DF0 (_wcsnicmp.c)
 */

bool __fastcall LdrpGetFileDriverStoreRoot(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  __int64 v5; // rax
  _WORD *v7; // rbx
  int v8; // eax
  const wchar_t *v10; // rbx
  __int64 v11; // rdx

  v3 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a1 + 2 * v5) );
  v7 = (_WORD *)(a1 + 2LL * (unsigned int)v5);
  v8 = 0;
  while ( (unsigned __int64)v7 > a1 )
  {
    if ( *v7 == 92 && ++v8 == 4 )
    {
      v10 = v7 + 1;
      if ( !wcsnicmp(L"DriverStore", v10, 0xBuLL) )
        return (int)RtlStringCchCopyNW(a3, v11, a1, ((__int64)((__int64)v10 - a1) >> 1) + 11) >= 0;
      return v3;
    }
    --v7;
  }
  return v3;
}
