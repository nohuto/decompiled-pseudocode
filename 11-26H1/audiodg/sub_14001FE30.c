/*
 * XREFs of sub_14001FE30 @ 0x14001FE30
 * Callers:
 *     sub_14003E3C0 @ 0x14003E3C0 (sub_14003E3C0.c)
 * Callees:
 *     sub_14001FF34 @ 0x14001FF34 (sub_14001FF34.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

char __fastcall sub_14001FE30(LPCWSTR lpModuleName, _DWORD *a2, __int64 a3, __int64 a4)
{
  HMODULE v6; // rcx
  __int64 v9; // rax
  CHAR *i; // r8
  HMODULE phModule; // [rsp+20h] [rbp-158h] BYREF
  CHAR Filename[272]; // [rsp+30h] [rbp-148h] BYREF

  v6 = 0LL;
  phModule = 0LL;
  if ( lpModuleName )
  {
    if ( !GetModuleHandleExW(6u, lpModuleName, &phModule) )
    {
      if ( a2 )
        *a2 = 0;
      return 0;
    }
    v6 = phModule;
  }
  if ( a2 )
  {
    if ( lpModuleName )
      LODWORD(lpModuleName) = (_DWORD)lpModuleName - (_DWORD)v6;
    *a2 = (_DWORD)lpModuleName;
  }
  if ( !a3 )
    return 1;
  if ( GetModuleFileNameA(v6, Filename, 0x104u) )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( Filename[v9] );
    for ( i = &Filename[v9]; i > Filename && *(i - 1) != 92; --i )
      ;
    sub_14001FF34(a3, a4);
    return 1;
  }
  return 0;
}
