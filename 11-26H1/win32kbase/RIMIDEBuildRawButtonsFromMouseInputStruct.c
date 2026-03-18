/*
 * XREFs of RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x140155218
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x140154EE8 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDEBuildRawButtonsFromMouseInputStruct(int a1, __int64 a2)
{
  unsigned int v2; // r10d
  int v5; // r9d
  int v6; // r8d
  int v7; // edx
  int v8; // r9d
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax

  v2 = *(_DWORD *)(a2 + 12);
  v5 = (v2 >> 1) & 1 | 2;
  if ( (v2 & 8) == 0 )
    v5 = (*(_DWORD *)(a2 + 12) >> 1) & 1;
  v6 = v5 | 4;
  if ( (v2 & 0x20) == 0 )
    v6 = v5;
  if ( (v2 & 0x80u) != 0 )
  {
    v10 = *(_DWORD *)(a2 + 8);
    v11 = v6 | 8;
    if ( v10 != 1 )
      v11 = v6;
    v6 = v11;
    if ( v10 == 2 )
      v6 = v11 | 0x10;
  }
  v7 = (v2 >> 2) & 1 | 2;
  if ( (v2 & 0x10) == 0 )
    v7 = (v2 >> 2) & 1;
  v8 = v7 | 4;
  if ( (v2 & 0x40) == 0 )
    v8 = v7;
  if ( (v2 & 0x100) != 0 )
  {
    v12 = *(_DWORD *)(a2 + 8);
    v13 = v8 | 8;
    if ( v12 != 1 )
      v13 = v8;
    v8 = v13;
    if ( v12 == 2 )
      v8 = v13 | 0x10;
  }
  return ~v8 & (a1 | (unsigned int)v6);
}
