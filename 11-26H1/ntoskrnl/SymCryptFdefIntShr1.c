/*
 * XREFs of SymCryptFdefIntShr1 @ 0x140567AF0
 * Callers:
 *     SymCryptIntShr1 @ 0x14055E8E4 (SymCryptIntShr1.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SymCryptFdefIntShr1(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 *v8; // r11
  unsigned __int64 v9; // rax
  unsigned __int64 result; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)(a2 + 32);
  v5 = (unsigned int)(8 * *(_DWORD *)(a3 + 4));
  if ( v5 > 1 )
  {
    v6 = 1LL;
    v7 = a2 - a3;
    v8 = (unsigned __int64 *)(a3 + 32);
    do
    {
      ++v3;
      ++v6;
      v9 = (v4 >> 1) | (*(unsigned __int64 *)((char *)v8 + v7 + 8) << 63);
      v4 = *(unsigned __int64 *)((char *)v8 + v7 + 8);
      *v8++ = v9;
    }
    while ( v6 < v5 );
  }
  result = (v4 >> 1) | ((unsigned __int64)a1 << 63);
  *(_QWORD *)(a3 + 8 * v3 + 32) = result;
  return result;
}
