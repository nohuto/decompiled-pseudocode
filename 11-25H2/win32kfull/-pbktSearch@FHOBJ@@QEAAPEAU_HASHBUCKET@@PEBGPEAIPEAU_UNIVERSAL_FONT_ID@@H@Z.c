/*
 * XREFs of ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x14010F900
 * Callers:
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEBG@Z @ 0x14010F718 (-bFindBitmapFont@MAPPER@@QEAAHPEBG@Z.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x14031E75C (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     <none>
 */

struct _HASHBUCKET *__fastcall FHOBJ::pbktSearch(
        FHOBJ *this,
        const unsigned __int16 *a2,
        unsigned int *a3,
        struct _UNIVERSAL_FONT_ID *a4,
        int a5)
{
  __int64 *v5; // rbx
  const unsigned __int16 *v8; // r10
  unsigned __int16 v9; // r8
  unsigned int i; // eax
  __int64 v11; // rdx
  _DWORD *v12; // r9
  __int64 *v13; // rdx
  const unsigned __int16 *j; // rcx
  int v16; // eax
  unsigned int v17; // eax

  v5 = 0LL;
  v8 = a2;
  if ( a2 )
  {
    v9 = *a2;
    for ( i = 0; *a2; LOBYTE(v9) = *a2 )
    {
      ++a2;
      i = (unsigned __int8)v9 + 257 * i;
    }
    v11 = i % *(_DWORD *)(*((_QWORD *)this + 1) + 8LL);
    v12 = (_DWORD *)((char *)a4 + 4);
LABEL_5:
    if ( a3 )
      *a3 = v11;
    v13 = *(__int64 **)(*((_QWORD *)this + 1) + 8 * v11 + 40);
    while ( 1 )
    {
      if ( !v13 )
        return (struct _HASHBUCKET *)v5;
      if ( !a4 )
        break;
      v16 = *((_DWORD *)v13 + 15);
      if ( v16 == 1 && *(_DWORD *)a4 == 1 )
      {
        if ( *((_DWORD *)v13 + 16) == *v12 )
          return (struct _HASHBUCKET *)v13;
LABEL_20:
        v13 = (__int64 *)*v13;
      }
      else
      {
        if ( v16 == *(_DWORD *)a4 )
          return (struct _HASHBUCKET *)v13;
        v13 = (__int64 *)*v13;
      }
    }
    if ( v8 && (!a5 || (v13[4] & 2) != 0) )
    {
      for ( j = v8; *j == *(const unsigned __int16 *)((char *)j + (char *)v13 - (char *)v8 + 60); ++j )
      {
        if ( !*j )
        {
          if ( !a5 && (v13[4] & 2) != 0 )
          {
            v5 = v13;
            goto LABEL_20;
          }
          return (struct _HASHBUCKET *)v13;
        }
      }
    }
    goto LABEL_20;
  }
  if ( a4 )
  {
    v17 = *(_DWORD *)a4;
    if ( *(_DWORD *)a4 == 1 )
      v17 = *((_DWORD *)a4 + 1);
    v11 = v17 % *(_DWORD *)(*((_QWORD *)this + 1) + 8LL);
    v12 = (_DWORD *)((char *)a4 + 4);
    goto LABEL_5;
  }
  return 0LL;
}
