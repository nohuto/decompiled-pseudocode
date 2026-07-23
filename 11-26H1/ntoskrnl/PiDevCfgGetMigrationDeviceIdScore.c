/*
 * XREFs of PiDevCfgGetMigrationDeviceIdScore @ 0x1404D7770
 * Callers:
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A46B84 (PiDevCfgFindDeviceMigrationNode.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 */

__int64 __fastcall PiDevCfgGetMigrationDeviceIdScore(wchar_t *Str1, wchar_t *Str2)
{
  const wchar_t *v2; // rbx
  const wchar_t *v3; // rdi
  unsigned __int16 v4; // r12
  char v5; // r15
  unsigned __int16 v6; // r14
  const wchar_t *v7; // rbp
  const wchar_t *i; // rsi
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // cx
  __int64 v12; // rax
  unsigned __int16 v13; // cx
  unsigned __int16 v15; // si
  __int64 v16; // rax
  __int64 v17; // rax
  const wchar_t *v18; // rdi
  bool v19; // zf
  int v20; // eax
  __int64 v21; // rax
  const wchar_t *v22; // rbx

  v2 = Str2;
  v3 = Str1;
  v4 = 0;
  v5 = 0;
  if ( !Str1 )
    return (unsigned __int16)-1;
  if ( !Str2 )
    return (unsigned __int16)-1;
  v6 = 0x4000;
  v7 = Str2;
  if ( !*Str2 )
    return (unsigned __int16)-1;
  do
  {
    for ( i = v3; *i; i += v9 + 1 )
    {
      if ( !wcsicmp(i, v7) )
      {
        v5 = 1;
        break;
      }
      v9 = -1LL;
      do
        ++v9;
      while ( i[v9] );
    }
    v10 = v4 | v6;
    if ( *i )
      v10 = v4;
    v4 = v10;
    v11 = v6 >> 1;
    if ( v6 <= 2u )
      v11 = v6;
    v12 = -1LL;
    do
      ++v12;
    while ( v7[v12] );
    v6 = v11;
    v7 += v12 + 1;
  }
  while ( *v7 );
  if ( v5 )
  {
    v15 = v4 | 0x8000;
    if ( !wcsicmp(v3, v2) )
      v15 = v4;
    v16 = -1LL;
    do
      ++v16;
    while ( v3[v16] );
    while ( 1 )
    {
      v19 = v3[v16 + 1] == 0;
      v17 = -1LL;
      if ( v19 )
        break;
      do
        ++v17;
      while ( v3[v17] );
      v18 = &v3[v17];
      v16 = -1LL;
      v3 = v18 + 1;
      do
        ++v16;
      while ( v3[v16] );
    }
    do
      ++v17;
    while ( v2[v17] );
    while ( v2[v17 + 1] )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( v2[v21] );
      v22 = &v2[v21];
      v17 = -1LL;
      v2 = v22 + 1;
      do
        ++v17;
      while ( v2[v17] );
    }
    v20 = wcsicmp(v3, v2);
    v13 = v15 | 1;
    if ( !v20 )
      return v15;
  }
  else
  {
    return (unsigned __int16)-1;
  }
  return v13;
}
