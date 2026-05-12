/*
 * XREFs of sub_1400C14AC @ 0x1400C14AC
 * Callers:
 *     sub_1400C1594 @ 0x1400C1594 (sub_1400C1594.c)
 *     sub_1400C18E0 @ 0x1400C18E0 (sub_1400C18E0.c)
 *     sub_1400C1AB0 @ 0x1400C1AB0 (sub_1400C1AB0.c)
 *     sub_1400C1C80 @ 0x1400C1C80 (sub_1400C1C80.c)
 *     sub_1401867AC @ 0x1401867AC (sub_1401867AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400C14AC(
        __int64 a1,
        unsigned __int16 a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  int v7; // eax
  int v8; // ecx
  __int64 result; // rax

  *(_BYTE *)(a1 + 40) = a3;
  v7 = *(_DWORD *)(a1 + 40);
  *(_BYTE *)a1 = -46;
  v8 = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(a5 << 15)) & 0x8000;
  *(_DWORD *)(a1 + 40) = v8;
  if ( a3 == -47 )
    *(_DWORD *)(a1 + 40) = v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(a4 << 8)) & 0x100;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_BYTE *)(a1 + 60) = 5;
  *(_DWORD *)(a1 + 42) = (a6 >> 2) - 1;
  result = *(_DWORD *)(a1 + 60) & 0xFF0000FF;
  *(_DWORD *)(a1 + 60) = result | (a2 << 8);
  return result;
}
