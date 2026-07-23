/*
 * XREFs of _tr_stored_block @ 0x180156B40
 * Callers:
 *     deflate @ 0x180154300 (deflate.c)
 *     deflate_stored @ 0x180155250 (deflate_stored.c)
 *     _tr_flush_block @ 0x180156884 (_tr_flush_block.c)
 * Callees:
 *     bi_windup @ 0x180156CC8 (bi_windup.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

unsigned __int64 __fastcall tr_stored_block(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4)
{
  size_t v4; // rdi
  int v6; // ecx
  __int16 v7; // dx
  __int64 v8; // rcx
  int v9; // edx
  __int16 v10; // r9
  int v11; // eax
  const void *v12; // r11
  unsigned __int64 result; // rax

  v4 = a3;
  v6 = *(_DWORD *)(a1 + 5984);
  v7 = *(_WORD *)(a1 + 5980) | (a4 << v6);
  if ( v6 <= 13 )
  {
    v11 = v6 + 3;
    v10 = *(_WORD *)(a1 + 5980) | (a4 << v6);
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 16);
    *(_WORD *)(a1 + 5980) = v7;
    *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + v8) = *(_BYTE *)(a1 + 5980);
    *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
    v9 = *(_DWORD *)(a1 + 5984);
    ++*(_DWORD *)(a1 + 40);
    v10 = a4 >> (16 - v9);
    v11 = v9 - 13;
  }
  *(_DWORD *)(a1 + 5984) = v11;
  *(_WORD *)(a1 + 5980) = v10;
  bi_windup(a1);
  *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + *(_QWORD *)(a1 + 16)) = v4;
  *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + *(_QWORD *)(a1 + 16)) = BYTE1(v4);
  *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + *(_QWORD *)(a1 + 16)) = ~(_BYTE)v4;
  *(_BYTE *)(*(unsigned int *)(a1 + 40) + *(_QWORD *)(a1 + 16)) = (unsigned __int16)~(_WORD)v4 >> 8;
  result = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
  *(_DWORD *)(a1 + 40) = result;
  if ( (_DWORD)v4 )
    result = (unsigned __int64)memmove((void *)(*(_QWORD *)(a1 + 16) + (unsigned int)result), v12, v4);
  *(_DWORD *)(a1 + 40) += v4;
  return result;
}
