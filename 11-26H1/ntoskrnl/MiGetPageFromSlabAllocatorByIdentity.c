/*
 * XREFs of MiGetPageFromSlabAllocatorByIdentity @ 0x1404FCF8C
 * Callers:
 *     MiGetPageFromSlabAllocator @ 0x14033C53C (MiGetPageFromSlabAllocator.c)
 * Callees:
 *     MiGetPageFromSlabEntry @ 0x1403599BC (MiGetPageFromSlabEntry.c)
 */

__int64 __fastcall MiGetPageFromSlabAllocatorByIdentity(__int64 a1, unsigned __int8 a2, _QWORD *a3)
{
  __int64 v4; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r15
  _QWORD *i; // r14
  _QWORD *v10; // rsi
  __int64 result; // rax
  _QWORD *v12; // rbx

  v4 = a2;
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    if ( a2 == 0xFF )
      goto LABEL_7;
    v6 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * a2);
  }
  else
  {
    v6 = (_QWORD *)(a1 + 32);
  }
  if ( v6 && *v6 == 1LL )
    return -1LL;
LABEL_7:
  v7 = 0LL;
  v8 = 16LL * a2;
  for ( i = *(_QWORD **)(v8 + *(_QWORD *)(a1 + 88)); i != (_QWORD *)(v8 + *(_QWORD *)(a1 + 88)); i = (_QWORD *)*i )
  {
    v10 = i - 3;
    if ( i - 3 == *(_QWORD **)(a1 + 48) )
    {
      v7 = (__int64)(i - 3);
    }
    else
    {
      result = MiGetPageFromSlabEntry((__int64)(i - 3), a1);
      if ( result != -1 )
        goto LABEL_15;
    }
  }
  if ( v7 )
  {
    *(_QWORD *)(a1 + 48) = v7 | 2;
    v10 = (_QWORD *)v7;
    result = MiGetPageFromSlabEntry(v7, a1);
    if ( result != -1 )
    {
LABEL_15:
      *a3 = v10;
      return result;
    }
  }
  if ( *(_DWORD *)(a1 + 128) != 8 )
  {
    v12 = (_QWORD *)(a1 + 32);
LABEL_20:
    if ( v12 )
      *v12 = 1LL;
    return -1LL;
  }
  if ( (_BYTE)v4 != 0xFF )
  {
    v12 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v4);
    goto LABEL_20;
  }
  return -1LL;
}
