/*
 * XREFs of bi_flush @ 0x180156C48
 * Callers:
 *     flush_pending @ 0x1801556B4 (flush_pending.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bi_flush(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 5984);
  if ( (_DWORD)result == 16 )
  {
    *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5980);
    *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5981);
    result = 0LL;
    *(_DWORD *)(a1 + 5984) = 0;
  }
  else
  {
    if ( (int)result < 8 )
      return result;
    *(_BYTE *)((unsigned int)(*(_DWORD *)(a1 + 40))++ + *(_QWORD *)(a1 + 16)) = *(_BYTE *)(a1 + 5980);
    *(_DWORD *)(a1 + 5984) -= 8;
    result = *(unsigned __int8 *)(a1 + 5981);
  }
  *(_WORD *)(a1 + 5980) = result;
  return result;
}
