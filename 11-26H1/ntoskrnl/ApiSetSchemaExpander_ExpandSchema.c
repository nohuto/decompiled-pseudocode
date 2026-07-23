/*
 * XREFs of ApiSetSchemaExpander_ExpandSchema @ 0x1406DF84C
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1406DE7C0 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetSchemaExpander_ExpandSchema(__int64 a1, int a2)
{
  __int64 v2; // r9
  __int64 v4; // r10
  int v6; // ecx
  int v7; // ecx
  __int64 result; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // r9

  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 32);
  *(_OWORD *)v4 = *(_OWORD *)v2;
  *(_OWORD *)(v4 + 16) = *(_OWORD *)(v2 + 16);
  *(_OWORD *)(v4 + 32) = *(_OWORD *)(v2 + 32);
  *(_OWORD *)(v4 + 48) = *(_OWORD *)(v2 + 48);
  *(_OWORD *)(v4 + 64) = *(_OWORD *)(v2 + 64);
  *(_OWORD *)(v4 + 80) = *(_OWORD *)(v2 + 80);
  *(_OWORD *)(v4 + 96) = *(_OWORD *)(v2 + 96);
  *(_QWORD *)(v4 + 112) = *(_QWORD *)(v2 + 112);
  *(_DWORD *)(v4 + 120) = *(_DWORD *)(v2 + 120);
  *(_DWORD *)(v4 + 4) = a2;
  v6 = *(_DWORD *)(a1 + 240);
  *(_DWORD *)(v4 + 40) = v6;
  v7 = *(_DWORD *)(v4 + 36) + v6;
  *(_DWORD *)(v4 + 108) = *(_DWORD *)(a1 + 268);
  result = *(unsigned __int16 *)(a1 + 224);
  *(_WORD *)(v4 + 112) += result;
  *(_DWORD *)(v4 + 44) = v7;
  v9 = v7 + *(_DWORD *)(a1 + 248);
  *(_DWORD *)(v4 + 56) = v9;
  v10 = v9 + *(_DWORD *)(a1 + 252);
  *(_DWORD *)(v4 + 68) = v10;
  v11 = v10 + *(_DWORD *)(a1 + 256);
  *(_DWORD *)(v4 + 80) = v11;
  v12 = v11 + *(_DWORD *)(a1 + 260);
  *(_DWORD *)(v4 + 92) = v12;
  *(_DWORD *)(v4 + 104) = *(_DWORD *)(a1 + 264) + v12;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v13 = v4 - *(unsigned __int16 *)(v4 + 18);
    v14 = v2 - *(unsigned __int16 *)(v2 + 18);
    *(_OWORD *)v13 = *(_OWORD *)v14;
    *(_QWORD *)(v13 + 16) = *(_QWORD *)(v14 + 16);
    *(_DWORD *)(v13 + 24) = *(_DWORD *)(v14 + 24);
    *(_DWORD *)(v13 + 4) = a2;
    result = *(unsigned int *)(v4 + 24);
    *(_DWORD *)(v13 + 16) = result;
  }
  return result;
}
