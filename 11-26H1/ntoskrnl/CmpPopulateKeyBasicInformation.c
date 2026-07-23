/*
 * XREFs of CmpPopulateKeyBasicInformation @ 0x140A36330
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14048C128 (CmpQueryKeyDataFromKeyNodeStack.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall CmpPopulateKeyBasicInformation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned __int16 v6; // r10
  size_t v8; // r8
  unsigned int v9; // esi
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned __int8 *v13; // rdx
  __int64 v14; // r8
  _WORD *v15; // rax
  __int16 v16; // cx
  __int64 result; // rax

  v6 = 2 * *(_WORD *)(a2 + 72);
  if ( (*(_BYTE *)(a2 + 2) & 0x20) == 0 )
    v6 = *(_WORD *)(a2 + 72);
  v8 = v6;
  v9 = v6 + 16;
  *a5 = v9;
  if ( a4 < 0x10 )
    return 3221225507LL;
  *(_QWORD *)a3 = *(_QWORD *)a1;
  v10 = *(_DWORD *)(a1 + 8);
  v11 = a4 - 16;
  *(_DWORD *)(a3 + 8) = v10;
  *(_DWORD *)(a3 + 12) = v6;
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
  {
    v12 = v11 >> 1;
    if ( v12 >= *(unsigned __int16 *)(a2 + 72) )
      v12 = *(unsigned __int16 *)(a2 + 72);
    if ( v12 )
    {
      v13 = (unsigned __int8 *)(a2 + 76);
      v14 = v12;
      v15 = (_WORD *)(a3 + 16);
      do
      {
        v16 = *v13++;
        *v15++ = v16;
        --v14;
      }
      while ( v14 );
    }
  }
  else
  {
    if ( v11 <= v6 )
      v8 = v11;
    memmove((void *)(a3 + 16), (const void *)(a2 + 76), v8);
  }
  result = 0LL;
  if ( a4 < v9 )
    return 2147483653LL;
  return result;
}
