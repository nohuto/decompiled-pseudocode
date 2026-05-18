/*
 * XREFs of sub_18000F300 @ 0x18000F300
 * Callers:
 *     sub_18000EF50 @ 0x18000EF50 (sub_18000EF50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010948 @ 0x180010948 (sub_180010948.c)
 *     sub_180010A58 @ 0x180010A58 (sub_180010A58.c)
 */

char __fastcall sub_18000F300(LPCWSTR lpModuleName, _DWORD *a2, _BYTE *a3, __int64 a4)
{
  HMODULE v6; // rcx
  __int64 v10; // rax
  CHAR *i; // r9
  HMODULE phModule; // [rsp+30h] [rbp-158h] BYREF
  CHAR Filename[272]; // [rsp+40h] [rbp-148h] BYREF

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
  if ( a3 )
  {
    if ( !GetModuleFileNameA(v6, Filename, 0x104u) )
      return 0;
    v10 = -1LL;
    do
      ++v10;
    while ( Filename[v10] );
    for ( i = &Filename[v10]; i > Filename && *(i - 1) != 92; --i )
      ;
    if ( (int)sub_180010A58(Filename, a4) < 0 )
    {
      if ( a4 )
        *a3 = 0;
    }
    else
    {
      sub_180010948(a3, a4);
    }
  }
  return 1;
}
