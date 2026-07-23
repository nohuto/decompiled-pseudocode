/*
 * XREFs of ApiSetSchemaExpander_Initialize @ 0x1406DFA84
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1406DE7C0 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetSchemaExpander_Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  char v6; // dl
  __int64 result; // rax

  if ( *(_DWORD *)a1 == 6 && *(_DWORD *)(a1 + 16) > 8u && (v5 = a1 + 28, *(_BYTE *)v5 == 7) )
  {
    v6 = 1;
  }
  else
  {
    v6 = 0;
    v5 = a1 + 28;
  }
  *(_BYTE *)(a3 + 16) = v6;
  if ( *(_DWORD *)a1 != 6 || *(_DWORD *)(a1 + 16) <= 8u || *(_BYTE *)v5 != 7 )
    v5 = a1;
  *(_QWORD *)(a3 + 8) = v5;
  *(_QWORD *)(a3 + 24) = a2;
  *(_QWORD *)(a3 + 40) = 0LL;
  if ( v6 )
    *(_WORD *)(a3 + 236) = *(_WORD *)(a1 + 12);
  *(_WORD *)(a3 + 172) = *(_WORD *)(v5 + 48);
  *(_WORD *)(a3 + 184) = *(_WORD *)(v5 + 60);
  *(_WORD *)(a3 + 196) = *(_WORD *)(v5 + 72);
  *(_WORD *)(a3 + 208) = *(_WORD *)(v5 + 96);
  *(_WORD *)(a3 + 220) = *(_WORD *)(v5 + 84);
  *(_OWORD *)(a3 + 48) = *(_OWORD *)v5;
  *(_OWORD *)(a3 + 64) = *(_OWORD *)(v5 + 16);
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(v5 + 32);
  *(_OWORD *)(a3 + 96) = *(_OWORD *)(v5 + 48);
  *(_OWORD *)(a3 + 112) = *(_OWORD *)(v5 + 64);
  *(_OWORD *)(a3 + 128) = *(_OWORD *)(v5 + 80);
  *(_OWORD *)(a3 + 144) = *(_OWORD *)(v5 + 96);
  result = *(unsigned int *)(v5 + 112);
  *(_DWORD *)(a3 + 160) = result;
  return result;
}
