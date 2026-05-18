/*
 * XREFs of sub_180055B0C @ 0x180055B0C
 * Callers:
 *     sub_1800553F4 @ 0x1800553F4 (sub_1800553F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180055B0C(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r10d

  result = *(unsigned int *)(a1 + 448);
  if ( (_DWORD)result )
  {
    if ( a2 < *(_QWORD *)(a1 + 456) )
      *(_QWORD *)(a1 + 456) = a2;
    v3 = result + 1;
    result = (a2 + *(_QWORD *)(a1 + 464) * result) / (unsigned int)(result + 1);
    *(_QWORD *)(a1 + 464) = result;
    if ( *(_QWORD *)(a1 + 472) < a2 )
      *(_QWORD *)(a1 + 472) = a2;
  }
  else
  {
    *(_QWORD *)(a1 + 456) = a2;
    v3 = 1;
    *(_QWORD *)(a1 + 464) = a2;
    *(_QWORD *)(a1 + 472) = a2;
  }
  *(_DWORD *)(a1 + 448) = v3;
  return result;
}
