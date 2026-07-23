/*
 * XREFs of WdipSemUpdateProviderEntryForEvent @ 0x140827C7C
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140826454 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WdipSemUpdateProviderEntryForEvent(__int64 a1, char a2)
{
  __int64 v2; // r11
  unsigned __int8 v4; // dl
  __int64 result; // rax
  __int64 v7; // r8
  unsigned int v8; // r9d
  unsigned int v9; // ecx
  int v10; // edx
  unsigned int v11; // r8d

  v2 = *(_QWORD *)(a1 + 40);
  v4 = *(_BYTE *)(a1 + 18);
  result = v4;
  v7 = *(_QWORD *)(v2 + 24) | *(_QWORD *)(a1 + 24);
  v8 = *(unsigned __int8 *)(v2 + 16);
  *(_DWORD *)(v2 + 32) |= *(_DWORD *)(a1 + 36);
  ++*(_DWORD *)(v2 + 40);
  *(_QWORD *)(v2 + 24) = v7;
  if ( v4 <= (unsigned __int8)v8 )
    result = v8;
  *(_BYTE *)(v2 + 36) |= 1u;
  *(_BYTE *)(v2 + 16) = result;
  if ( a2 )
  {
    v9 = *(unsigned __int8 *)(a1 + 18);
    v10 = *(_DWORD *)(a1 + 36);
    *(_QWORD *)(v2 + 56) |= *(_QWORD *)(a1 + 24);
    result = v9;
    v11 = *(unsigned __int8 *)(v2 + 48);
    *(_DWORD *)(v2 + 64) |= v10;
    if ( (unsigned __int8)v9 <= (unsigned __int8)v11 )
      result = v11;
    *(_BYTE *)(v2 + 68) |= 1u;
    *(_BYTE *)(v2 + 48) = result;
  }
  return result;
}
