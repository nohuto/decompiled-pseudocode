/*
 * XREFs of RtlpValidRelativeAttribute @ 0x1409E0D60
 * Callers:
 *     RtlpValidAttributeAce @ 0x1409E0CF0 (RtlpValidAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140478794 (RtlStringCbLengthW.c)
 */

char __fastcall RtlpValidRelativeAttribute(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // r11d
  __int64 v5; // r8
  unsigned int v6; // eax
  unsigned int v7; // edx
  _WORD *v8; // rcx
  unsigned __int64 i; // rax
  unsigned int v11; // ecx
  __int64 v12; // rcx
  unsigned int m; // ecx
  unsigned int k; // edx
  unsigned int j; // esi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r10d
  __int64 v19; // rcx
  size_t pcbLength; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a1 )
    return 0;
  if ( a2 < 0x14 )
    return 0;
  if ( *((_WORD *)a1 + 3) )
    return 0;
  if ( (a1[2] & 0xFFC0) != 0 )
    return 0;
  v5 = a1[3];
  if ( !(_DWORD)v5 )
    return 0;
  v6 = *a1;
  if ( a2 < *a1 )
    return 0;
  v7 = a2 - v6;
  if ( v7 < 4 )
    return 0;
  v8 = (_WORD *)((char *)a1 + v6);
  if ( !v8 )
    return 0;
  for ( i = (unsigned __int64)v7 >> 1; i; --i )
  {
    if ( !*v8 )
      break;
    ++v8;
  }
  if ( !i || (unsigned __int64)(4 * v5) > 0xFFFFFFFF || a2 - 16 < 4 * (int)v5 )
    return 0;
  switch ( *((_WORD *)a1 + 2) )
  {
    case 1:
    case 2:
      while ( v2 < (unsigned int)v5 )
      {
        v11 = a1[v2 + 4];
        if ( a2 < v11 || a2 - v11 < 8 )
          return 0;
        ++v2;
      }
      return 1;
    case 3:
      for ( j = 0; j < a1[3]; ++j )
      {
        v19 = a1[j + 4];
        if ( a2 < (unsigned int)v19
          || a2 - (unsigned int)v19 < 2
          || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v19), a2 - (unsigned int)v19, &pcbLength) < 0 )
        {
          return 0;
        }
      }
      return 1;
    case 5:
      for ( k = 0; k < (unsigned int)v5; ++k )
      {
        v17 = a1[k + 4];
        if ( a2 < (unsigned int)v17 )
          return 0;
        if ( a2 - (unsigned int)v17 < 4 )
          return 0;
        v18 = *(unsigned int *)((char *)a1 + v17);
        if ( !v18 || (int)v17 + 4 < (unsigned int)v17 || a2 - ((_DWORD)v17 + 4) < v18 )
          return 0;
      }
      return 1;
    case 6:
      for ( m = 0; m < (unsigned int)v5; ++m )
      {
        v16 = a1[m + 4];
        if ( a2 < (unsigned int)v16 || a2 - (unsigned int)v16 < 8 || *(_QWORD *)((char *)a1 + v16) > 1uLL )
          return 0;
      }
      return 1;
  }
  if ( *((_WORD *)a1 + 2) != 16 )
    return 0;
  while ( v2 < (unsigned int)v5 )
  {
    v12 = a1[v2 + 4];
    if ( a2 < (unsigned int)v12
      || a2 - (unsigned int)v12 < 4
      || (int)v12 + 4 < (unsigned int)v12
      || a2 - ((_DWORD)v12 + 4) < *(unsigned int *)((char *)a1 + v12) )
    {
      return 0;
    }
    ++v2;
  }
  return 1;
}
