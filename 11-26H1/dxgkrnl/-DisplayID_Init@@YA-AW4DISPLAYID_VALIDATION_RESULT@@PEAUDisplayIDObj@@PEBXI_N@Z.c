/*
 * XREFs of ?DisplayID_Init@@YA?AW4DISPLAYID_VALIDATION_RESULT@@PEAUDisplayIDObj@@PEBXI_N@Z @ 0x14009ED58
 * Callers:
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x14009EEB8 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 * Callees:
 *     ?IsValidSection@DisplayID_Section_Parser@@QEBA_NXZ @ 0x14009F238 (-IsValidSection@DisplayID_Section_Parser@@QEBA_NXZ.c)
 */

__int64 __fastcall DisplayID_Init(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rbx
  int v5; // r12d
  unsigned __int64 v6; // rsi
  int v7; // r15d
  unsigned __int8 v8; // al
  __int64 v9; // r14
  unsigned __int64 v10; // rdi
  char v11; // bp
  __int64 v12; // r11
  int v13; // ecx
  unsigned __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v3 = a2;
  if ( !a1 )
    return 7LL;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  if ( !a2 || !a3 )
    return 6LL;
  v5 = 0;
  v6 = a3 + a2;
  if ( a2 + 3 < v6 )
  {
    v7 = 0;
    v8 = *(_BYTE *)(a2 + 1) + 5;
    v14 = a2;
    LOBYTE(v9) = v8;
    v15 = a3;
    v10 = a2 + v8;
    if ( v10 <= v6 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( !DisplayID_Section_Parser::IsValidSection((DisplayID_Section_Parser *)&v14) )
          return 8LL;
        v13 = v7;
        if ( v7 )
        {
          if ( (*(_BYTE *)(v3 + 2) & 0xF) != 0 && (*(_BYTE *)(v3 + 2) & 0xF) != v11 )
            return 9LL;
        }
        else
        {
          v5 = *(unsigned __int8 *)(v3 + 3);
          *(_DWORD *)(v12 + 12) = (unsigned __int8)v9;
          v11 = *(_BYTE *)(v3 + 2) & 0xF;
          *(_BYTE *)(v12 + 24) = v11;
        }
        *(_DWORD *)(v12 + 20) = ++v7;
        if ( v10 + 3 >= v6 )
          break;
        v3 = v10;
        v14 = v10;
        v15 = v6 - v10;
        v9 = (unsigned __int8)(*(_BYTE *)(v10 + 1) + 5);
        v10 += v9;
        if ( v10 > v6 )
          return 10LL;
      }
      if ( v13 == v5 && v10 <= v6 )
      {
        *(_BYTE *)(v12 + 16) = 1;
        return 0LL;
      }
    }
  }
  return 10LL;
}
