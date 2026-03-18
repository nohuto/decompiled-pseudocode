/*
 * XREFs of sub_14000CAA0 @ 0x14000CAA0
 * Callers:
 *     sub_14000C910 @ 0x14000C910 (sub_14000C910.c)
 * Callees:
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14000CAA0(__int64 a1, __int64 *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // eax

  *(_DWORD *)((char *)a2 + 170) = 0;
  if ( *((_WORD *)a2 + 84) )
  {
    v2 = *(unsigned __int16 *)(a1 + 326);
    v3 = *a2;
    result = (unsigned int)(16 * v2) >> 2;
    if ( !(_DWORD)result )
      return result;
    return sub_140032C80(v3, 0LL, 4LL * (unsigned int)result);
  }
  v5 = *(unsigned __int16 *)(a1 + 324);
  v3 = *a2;
  result = (unsigned int)(16 * v5) >> 2;
  if ( (_DWORD)result )
    return sub_140032C80(v3, 0LL, 4LL * (unsigned int)result);
  return result;
}
