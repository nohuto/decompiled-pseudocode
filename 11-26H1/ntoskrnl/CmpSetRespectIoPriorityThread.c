/*
 * XREFs of CmpSetRespectIoPriorityThread @ 0x1404BD9B4
 * Callers:
 *     CmpDoFileWrite @ 0x140AE48C8 (CmpDoFileWrite.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpSetRespectIoPriorityThread(__int64 a1, char a2)
{
  bool result; // al

  result = (*(_DWORD *)(a1 + 1444) & 0x80) != 0;
  *(_DWORD *)(a1 + 1444) ^= ((unsigned __int8)*(_DWORD *)(a1 + 1444) ^ (unsigned __int8)(a2 << 7)) & 0x80;
  return result;
}
