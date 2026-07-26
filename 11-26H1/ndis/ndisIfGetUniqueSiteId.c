/*
 * XREFs of ndisIfGetUniqueSiteId @ 0x1400D2C80
 * Callers:
 *     ndisIfCreateNetworkBlock @ 0x1400D298C (ndisIfCreateNetworkBlock.c)
 * Callees:
 *     <none>
 */

__int64 ndisIfGetUniqueSiteId()
{
  __int64 result; // rax
  unsigned int v1; // ecx
  unsigned int v2; // edx
  __int64 i; // rax
  unsigned int v4; // ecx

  if ( byte_14011F660 )
  {
    v1 = dword_14011CE70;
  }
  else
  {
    dword_14011CE70 = dword_14011CE70 & 0xF0000000 | (dword_14011CE70 + 1) & 0xFFFFFFF;
    result = dword_14011CE70 & 0xFFFFFFF;
    if ( (dword_14011CE70 & 0xFFFFFFF) != 0xFFFFFFF )
      return result;
    byte_14011F660 = 1;
    v1 = dword_14011CE70 & 0xF0000000 | 0x7FFFFFF;
    dword_14011CE70 = v1;
  }
  v2 = v1 & 0xFFFFFFF;
LABEL_6:
  if ( ++v2 == 0xFFFFFFF )
  {
    result = 0xFFFFFFFLL;
    v4 = v1 & 0xF0000000 | 0xFFFFFFE;
  }
  else
  {
    for ( i = qword_14011E9E8; (__int64 *)i != &qword_14011E9E8; i = *(_QWORD *)i )
    {
      if ( v2 == *(_DWORD *)(i + 88) )
        goto LABEL_6;
    }
    v4 = v2 & 0xFFFFFFF | v1 & 0xF0000000;
    result = v2;
  }
  dword_14011CE70 = v4;
  return result;
}
