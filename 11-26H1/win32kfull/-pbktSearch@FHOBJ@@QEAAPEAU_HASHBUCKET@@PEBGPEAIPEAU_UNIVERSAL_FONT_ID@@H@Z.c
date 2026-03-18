/*
 * XREFs of ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140153230
 * Callers:
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEBG@Z @ 0x1400CA61C (-bFindBitmapFont@MAPPER@@QEAAHPEBG@Z.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x14033A2B4 (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
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
  const unsigned __int16 *v7; // r10
  unsigned __int16 v9; // r8
  unsigned int i; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // rdx
  const unsigned __int16 *j; // rax
  int v16; // eax

  v5 = 0LL;
  v7 = a2;
  if ( a2 )
  {
    v9 = *a2;
    for ( i = 0; *a2; LOBYTE(v9) = *a2 )
    {
      ++a2;
      i = (unsigned __int8)v9 + 257 * i;
    }
    v11 = *((_QWORD *)this + 1);
LABEL_5:
    v12 = i % *(_DWORD *)(v11 + 8);
    if ( a3 )
      *a3 = v12;
    v13 = *(__int64 **)(*((_QWORD *)this + 1) + 8 * v12 + 40);
    while ( 1 )
    {
      if ( !v13 )
        return (struct _HASHBUCKET *)v5;
      if ( !a4 )
        break;
      v16 = *((_DWORD *)v13 + 15);
      if ( v16 == 1 && *(_DWORD *)a4 == 1 )
      {
        if ( *((_DWORD *)v13 + 16) == *((_DWORD *)a4 + 1) )
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
    if ( v7 && (!a5 || (v13[4] & 2) != 0) )
    {
      for ( j = v7; *j == *(const unsigned __int16 *)((char *)j + (char *)v13 - (char *)v7 + 60); ++j )
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
    i = *(_DWORD *)a4;
    if ( *(_DWORD *)a4 == 1 )
      i = *((_DWORD *)a4 + 1);
    v11 = *((_QWORD *)this + 1);
    goto LABEL_5;
  }
  return 0LL;
}
