/*
 * XREFs of SymCryptFdefIntSetValueUint32 @ 0x14056FF00
 * Callers:
 *     SymCryptIntSetValueUint32 @ 0x14055E8B4 (SymCryptIntSetValueUint32.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptFdefIntSetValueUint32(int a1, __int64 a2)
{
  _DWORD *v2; // rbx
  __int64 result; // rax

  v2 = (_DWORD *)(a2 + 32);
  result = SymCryptWipe(a2 + 32, (unsigned int)(*(_DWORD *)(a2 + 4) << 6));
  *v2 = a1;
  return result;
}
