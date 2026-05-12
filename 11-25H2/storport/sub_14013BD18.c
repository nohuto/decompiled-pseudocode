/*
 * XREFs of sub_14013BD18 @ 0x14013BD18
 * Callers:
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 * Callees:
 *     sub_14013BE4C @ 0x14013BE4C (sub_14013BE4C.c)
 */

__int64 __fastcall sub_14013BD18(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = *(unsigned int *)(a1 + 12);
  if ( (unsigned int)(v2 + 1) > *(_DWORD *)(a1 + 8) )
    return 3221225507LL;
  *(_BYTE *)(v2 + *(_QWORD *)a1) = -15;
  v3 = (unsigned int)++*(_DWORD *)(a1 + 12);
  if ( (unsigned int)(v3 + 1) <= *(_DWORD *)(a1 + 8) )
  {
    *(_BYTE *)(v3 + *(_QWORD *)a1) = -7;
    v3 = (unsigned int)++*(_DWORD *)(a1 + 12);
    result = 0LL;
  }
  else
  {
    result = 3221225507LL;
  }
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)(v3 + 1) > *(_DWORD *)(a1 + 8) )
      return 3221225507LL;
    *(_BYTE *)(v3 + *(_QWORD *)a1) = -16;
    ++*(_DWORD *)(a1 + 12);
    result = sub_14013BE4C(a1, 0LL);
    if ( (int)result >= 0 )
    {
      result = sub_14013BE4C(a1, 0LL);
      if ( (int)result >= 0 )
      {
        result = sub_14013BE4C(a1, 0LL);
        if ( (int)result >= 0 )
        {
          v5 = *(unsigned int *)(a1 + 12);
          if ( (unsigned int)(v5 + 1) > *(_DWORD *)(a1 + 8) )
            return 3221225507LL;
          *(_BYTE *)(v5 + *(_QWORD *)a1) = -15;
          ++*(_DWORD *)(a1 + 12);
          return 0LL;
        }
      }
    }
  }
  return result;
}
