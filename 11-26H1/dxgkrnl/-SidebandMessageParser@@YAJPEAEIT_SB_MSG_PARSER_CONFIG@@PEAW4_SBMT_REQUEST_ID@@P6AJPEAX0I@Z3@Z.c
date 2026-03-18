/*
 * XREFs of ?SidebandMessageParser@@YAJPEAEIT_SB_MSG_PARSER_CONFIG@@PEAW4_SBMT_REQUEST_ID@@P6AJPEAX0I@Z3@Z @ 0x1400A5344
 * Callers:
 *     NtDxgkDisplayPortOperation @ 0x140077020 (NtDxgkDisplayPortOperation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SidebandMessageParser(unsigned __int8 *a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  char v5; // r8
  unsigned __int8 *v8; // r11
  unsigned __int8 *v9; // r9
  int v10; // ecx
  unsigned int v11; // r10d
  unsigned int v12; // eax
  unsigned int v13; // r10d
  unsigned __int8 *v14; // rdx
  unsigned __int8 *v15; // r11
  unsigned int v16; // r10d
  int v17; // eax

  v5 = 0;
  v8 = a1;
  while ( a2 )
  {
    v9 = v8;
    if ( (*v8 & 0xF0u) < 0x10 )
      break;
    v10 = *v8 >> 4;
    if ( v8 == a1 )
    {
      v5 = v10 | v5 & 0xF0;
    }
    else if ( v10 != (v5 & 0xF) )
    {
      return 3221225485LL;
    }
    v11 = a2 - 1;
    v12 = 4 * v10 / 8;
    if ( v12 > v11 )
      break;
    v13 = v11 - v12;
    v14 = &v8[v12];
    if ( v13 < 2 )
      break;
    v15 = v14 + 3;
    v16 = v13 - 2;
    if ( (*(_WORD *)(v14 + 1) & 0x3Fu) > v16 )
      break;
    if ( *(__int16 *)(v14 + 1) < 0 )
    {
      if ( v9 != a1 )
        return 3221225485LL;
      v17 = *v15;
      if ( (v17 & 0x80u) != 0 )
        return 3221225485LL;
      if ( *a4 == 127 )
      {
        *a4 = v17;
      }
      else if ( v17 != *a4 )
      {
        return 3221225485LL;
      }
    }
    v8 = &v15[*(_WORD *)(v14 + 1) & 0x3F];
    a2 = v16 - (*(_WORD *)(v14 + 1) & 0x3F);
    if ( (*(_WORD *)(v14 + 1) & 0x4000) != 0 )
    {
      if ( !a2 )
        return 0LL;
      return 3221225485LL;
    }
  }
  return 3221225485LL;
}
