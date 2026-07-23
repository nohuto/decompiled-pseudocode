/*
 * XREFs of XmAamOp @ 0x1405AF4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall XmAamOp(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // r9d
  __int64 result; // rax

  v1 = *(unsigned __int8 *)(a1 + 24);
  v2 = *(unsigned __int8 *)(a1 + 108);
  *(_BYTE *)(a1 + 25) = *(_BYTE *)(a1 + 24) / *(_BYTE *)(a1 + 108);
  *(_BYTE *)(a1 + 24) = v1 % v2;
  result = *((unsigned __int8 *)XmBitCount + (*(_WORD *)(a1 + 24) & 0xF));
  *(_DWORD *)(a1 + 16) = (*(_DWORD *)(a1 + 16) & 0xFFFFFF3F | (*(_WORD *)(a1 + 24) == 0 ? 0x40 : 0) | HIBYTE(*(unsigned __int16 *)(a1 + 24)) & 0xFFFF80) ^ ((*(_BYTE *)(a1 + 16) & 0x3F | (unsigned __int8)((*(_WORD *)(a1 + 24) == 0 ? 0x40 : 0) | HIBYTE(*(_WORD *)(a1 + 24)) & 0x80)) ^ (unsigned __int8)(4 * ~(result + *((_BYTE *)XmBitCount + (((unsigned __int64)*(unsigned __int16 *)(a1 + 24) >> 4) & 0xF))))) & 4;
  return result;
}
