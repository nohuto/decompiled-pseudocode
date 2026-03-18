/*
 * XREFs of sub_14000CB00 @ 0x14000CB00
 * Callers:
 *     sub_14000C910 @ 0x14000C910 (sub_14000C910.c)
 * Callees:
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14000CB00(__int64 a1, __int64 *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // eax

  *((_DWORD *)a2 + 13) = 0;
  *((_WORD *)a2 + 28) = 0;
  *((_WORD *)a2 + 68) = 0;
  if ( *((_WORD *)a2 + 24) )
  {
    v2 = *(unsigned __int16 *)(a1 + 326);
    v3 = *a2;
    result = (unsigned int)(v2 << 6) >> 2;
    if ( !(_DWORD)result )
      return result;
    return sub_140032C80(v3, 0LL, 4LL * (unsigned int)result);
  }
  v5 = *(unsigned __int16 *)(a1 + 324);
  v3 = *a2;
  result = (unsigned int)(v5 << 6) >> 2;
  if ( (_DWORD)result )
    return sub_140032C80(v3, 0LL, 4LL * (unsigned int)result);
  return result;
}
