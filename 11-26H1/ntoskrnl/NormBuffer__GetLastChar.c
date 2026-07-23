/*
 * XREFs of NormBuffer__GetLastChar @ 0x140621FDC
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x14080DFB8 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     Normalization__PageLookup @ 0x14080E7D4 (Normalization__PageLookup.c)
 *     Normalization__TableLookup @ 0x14080E7EC (Normalization__TableLookup.c)
 */

__int64 __fastcall NormBuffer__GetLastChar(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int16 *v3; // rax
  unsigned int v5; // ecx
  __int64 v6; // rdx
  unsigned __int8 v7; // r8
  __int64 v8; // r10
  unsigned int v9; // r11d
  char v10; // al
  char v11; // cl
  char v12; // cl

  v1 = *(_QWORD *)(a1 + 40);
  v3 = (unsigned __int16 *)(v1 - 2);
  if ( *(_QWORD *)(a1 + 64) == v1 - 2 )
    return *(unsigned int *)(a1 + 56);
  *(_QWORD *)(a1 + 64) = v3;
  v5 = *v3;
  *(_DWORD *)(a1 + 56) = v5;
  v6 = v5;
  if ( v5 > 0xDC00 && v5 <= 0xDFFF )
  {
    v6 = v5 + ((*(unsigned __int16 *)(v1 - 4) - 55287) << 10);
    *(_DWORD *)(a1 + 56) = v6;
  }
  v7 = Normalization__PageLookup(*(_QWORD *)(a1 + 112), v6);
  v10 = 0;
  if ( v7 && v7 < 0xFBu )
  {
    v11 = Normalization__TableLookup();
    v10 = v11 & 0xC0;
    v12 = v11 & 0x3F;
  }
  else
  {
    v12 = 0;
  }
  *(_BYTE *)(v8 + 72) = v12;
  *(_BYTE *)(v8 + 73) = v10;
  return v9;
}
