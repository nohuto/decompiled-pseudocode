/*
 * XREFs of ApiSetSchemaExpander_GetNewSchemaSize @ 0x1406DF968
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1406DE7C0 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetSchemaExpander_GetNewSchemaSize(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // esi
  int v4; // r14d
  unsigned int v5; // esi
  int v6; // ebp
  int v7; // r11d
  int v8; // r10d
  int v9; // r9d
  char v10; // al
  int v11; // ecx
  int v12; // edx

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 232) + 3;
  v4 = *(_DWORD *)(v1 + 28);
  *(_DWORD *)(a1 + 244) = v4;
  v5 = (*(_DWORD *)(v1 + 40) + v3) & 0xFFFFFFFC;
  *(_DWORD *)(a1 + 240) = v5;
  v6 = *(_DWORD *)(a1 + 168) + *(unsigned __int16 *)(v1 + 48) * (*(unsigned __int8 *)(v1 + 52) + 8);
  *(_DWORD *)(a1 + 248) = v6;
  v7 = *(_DWORD *)(a1 + 180) + *(unsigned __int16 *)(v1 + 60) * (*(unsigned __int8 *)(v1 + 64) + 8);
  *(_DWORD *)(a1 + 252) = v7;
  v8 = *(_DWORD *)(a1 + 192) + *(unsigned __int16 *)(v1 + 72) * (*(unsigned __int8 *)(v1 + 76) + 8);
  *(_DWORD *)(a1 + 256) = v8;
  v9 = *(_DWORD *)(a1 + 216) + *(unsigned __int16 *)(v1 + 84) * (*(unsigned __int8 *)(v1 + 88) + 8);
  *(_DWORD *)(a1 + 260) = v9;
  v10 = *(_BYTE *)(a1 + 16);
  v11 = *(_DWORD *)(a1 + 204) + *(unsigned __int16 *)(v1 + 96) * (*(unsigned __int8 *)(v1 + 100) + 8);
  *(_DWORD *)(a1 + 264) = v11;
  v12 = *(_DWORD *)(a1 + 228) + *(_DWORD *)(v1 + 108);
  *(_DWORD *)(a1 + 268) = v12;
  return v6 + v7 + v8 + v9 + v11 + v4 + v5 + v12 + (v10 != 0 ? 152 : 124);
}
