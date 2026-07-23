/*
 * XREFs of _PnpParseIndirectInfString @ 0x140973CE0
 * Callers:
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409551B0 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _PnpRegQueryValueIndirect @ 0x140972A50 (_PnpRegQueryValueIndirect.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14097368C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpParseIndirectInfString(_WORD *a1)
{
  _WORD *v2; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  __int16 v6; // ax
  unsigned int v7; // r8d
  __int64 i; // r9
  __int16 v9; // r8
  int v10; // r8d
  __int64 v11; // rcx

  if ( !a1 )
    return 0;
  v2 = a1;
  v3 = 0x7FFFLL;
  do
  {
    if ( !*v2 )
      break;
    ++v2;
    --v3;
  }
  while ( v3 );
  v4 = (0x7FFF - v3) & -(__int64)(v3 != 0);
  if ( !v3 || v4 < 5 || *a1 != 64 )
    return 0;
  v6 = a1[1];
  v7 = 1;
  while ( v6 && v6 != 44 )
    v6 = a1[++v7];
  if ( a1[v7] != 44 || a1[v7 + 1] != 37 )
    return 0;
  for ( i = v7 + 2; ; i = (unsigned int)(i + 1) )
  {
    v9 = a1[i];
    if ( !v9 || v9 == 59 )
      break;
  }
  v10 = 0;
  if ( a1[i] == 59 )
    v10 = i;
  if ( v10 )
  {
    v11 = (unsigned int)(v10 - 1);
  }
  else
  {
    if ( v4 > 0xFFFFFFFF )
      return 0;
    v11 = (unsigned int)(v4 - 1);
  }
  return a1[v11] == 37;
}
