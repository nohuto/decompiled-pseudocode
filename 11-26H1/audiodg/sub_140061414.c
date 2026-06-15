/*
 * XREFs of sub_140061414 @ 0x140061414
 * Callers:
 *     sub_14003D780 @ 0x14003D780 (sub_14003D780.c)
 *     sub_140061B80 @ 0x140061B80 (sub_140061B80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140061414(__int64 a1)
{
  __int64 i; // r8
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
    {
      result = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      if ( result )
        return result;
    }
  }
  return 0LL;
}
