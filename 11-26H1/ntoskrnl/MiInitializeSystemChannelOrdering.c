/*
 * XREFs of MiInitializeSystemChannelOrdering @ 0x140D031BC
 * Callers:
 *     MiInitializeChannelOrdering @ 0x14087C32C (MiInitializeChannelOrdering.c)
 * Callees:
 *     <none>
 */

char __fastcall MiInitializeSystemChannelOrdering(__int64 a1, unsigned int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  unsigned __int8 v4; // cl
  _BYTE *v5; // rax
  char *i; // rcx
  __int64 v7; // rax
  char result; // al
  __int64 v9; // rcx
  unsigned __int8 j; // dl
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // dl

  v2 = 2LL;
  v3 = *(_QWORD *)(a1 + 16) + 56320LL * a2;
  v4 = qword_141000FB8[250 * a2];
  v5 = (_BYTE *)(v3 + 14149);
  do
  {
    if ( (v4 & 1) != 0 )
      *v5 = 2;
    v4 >>= 1;
    ++v5;
    --v2;
  }
  while ( v2 );
  for ( i = (char *)qword_140E2D868; *(_QWORD *)i != -1LL; i += 16 )
  {
    if ( *((unsigned __int16 *)i + 5) == a2 )
    {
      v7 = (unsigned __int8)i[12];
      if ( (unsigned __int8)v7 < (unsigned __int8)byte_140E2D898 )
      {
        if ( i[14] )
        {
          if ( *(_BYTE *)(v7 + v3 + 14149) != 2 )
            *(_BYTE *)(v7 + v3 + 14149) = 1;
        }
        else
        {
          *(_BYTE *)(v7 + v3 + 14149) = 2;
        }
      }
    }
  }
  result = byte_140E2D898;
  v9 = 0LL;
  for ( j = 0; j < (unsigned __int8)byte_140E2D898; ++j )
  {
    if ( *(_BYTE *)(j + v3 + 14149) == 2 )
    {
      *(_BYTE *)(v9 + v3 + 14145) = j;
      *(_BYTE *)(v9 + v3 + 14147) = j;
      v9 = (unsigned int)(v9 + 1);
    }
    result = byte_140E2D898;
  }
  v11 = 0;
  if ( result )
  {
    do
    {
      if ( *(_BYTE *)(v11 + v3 + 14149) == 1 )
      {
        *(_BYTE *)(v9 + v3 + 14145) = v11;
        *(_BYTE *)(v9 + v3 + 14147) = v11;
        v9 = (unsigned int)(v9 + 1);
      }
      result = byte_140E2D898;
      ++v11;
    }
    while ( v11 < (unsigned __int8)byte_140E2D898 );
  }
  v12 = 0;
  if ( result )
  {
    do
    {
      result = v12;
      if ( !*(_BYTE *)(v12 + v3 + 14149) )
      {
        *(_BYTE *)(v9 + v3 + 14145) = v12;
        *(_BYTE *)(v9 + v3 + 14147) = v12;
        v9 = (unsigned int)(v9 + 1);
      }
      ++v12;
    }
    while ( v12 < (unsigned __int8)byte_140E2D898 );
  }
  return result;
}
