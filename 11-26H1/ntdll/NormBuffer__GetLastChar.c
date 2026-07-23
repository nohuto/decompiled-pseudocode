/*
 * XREFs of NormBuffer__GetLastChar @ 0x1800AF40C
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800AE3FC (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NormBuffer__GetLastChar(__int64 a1)
{
  __int64 v1; // r9
  unsigned __int16 *v3; // rax
  unsigned int v5; // ecx
  signed int v6; // eax
  unsigned int v7; // r8d
  __int64 v8; // r10
  char v9; // cl
  char v10; // al
  char v11; // cl

  v1 = *(_QWORD *)(a1 + 40);
  v3 = (unsigned __int16 *)(v1 - 2);
  if ( *(_QWORD *)(a1 + 64) == v1 - 2 )
    return *(unsigned int *)(a1 + 56);
  *(_QWORD *)(a1 + 64) = v3;
  v5 = *v3;
  *(_DWORD *)(a1 + 56) = v5;
  v6 = v5;
  v7 = v5;
  if ( v5 > 0xDC00 && v5 <= 0xDFFF )
  {
    v6 = v5 + ((*(unsigned __int16 *)(v1 - 4) - 55287) << 10);
    *(_DWORD *)(a1 + 56) = v6;
    v7 = v6;
  }
  v8 = *(_QWORD *)(a1 + 112);
  if ( (unsigned __int8)(*(_BYTE *)(((__int64)v6 >> 7) + *(_QWORD *)(v8 + 32)) - 1) > 0xF9u )
  {
    v10 = 0;
    v11 = 0;
  }
  else
  {
    v9 = *(_BYTE *)(*(_QWORD *)(v8 + 40)
                  + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v6 >> 7) + *(_QWORD *)(v8 + 32)) << 7)
                  + (v6 & 0x7F)
                  - 128);
    v10 = v9 & 0xC0;
    v11 = v9 & 0x3F;
  }
  *(_BYTE *)(a1 + 72) = v11;
  *(_BYTE *)(a1 + 73) = v10;
  return v7;
}
