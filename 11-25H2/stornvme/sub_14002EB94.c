/*
 * XREFs of sub_14002EB94 @ 0x14002EB94
 * Callers:
 *     sub_14001ED94 @ 0x14001ED94 (sub_14001ED94.c)
 *     sub_140028860 @ 0x140028860 (sub_140028860.c)
 *     sub_14002B8B8 @ 0x14002B8B8 (sub_14002B8B8.c)
 *     sub_14002C324 @ 0x14002C324 (sub_14002C324.c)
 * Callees:
 *     sub_140014D70 @ 0x140014D70 (sub_140014D70.c)
 */

__int64 __fastcall sub_14002EB94(__int64 a1)
{
  unsigned int v2; // edi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 56) & 0x800000) == 0 )
  {
    v2 = 0;
    if ( !*(_BYTE *)(a1 + 20) )
    {
      if ( *(_WORD *)(a1 + 330) )
      {
        do
        {
          sub_140014D70(a1, *(_QWORD *)(a1 + 936) + 208LL * v2, 0LL, 0LL);
          result = *(unsigned __int16 *)(a1 + 330);
          ++v2;
        }
        while ( v2 < (unsigned int)result );
      }
    }
  }
  return result;
}
