/*
 * XREFs of KsepDbGetDriverShimsInternal @ 0x1409D8FD8
 * Callers:
 *     KsepDbGetDriverShims @ 0x1409D8DF4 (KsepDbGetDriverShims.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404D7BFC (KsepPoolAllocatePaged.c)
 *     KsepDbGetSdbString @ 0x1407BFA68 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x14088BEE4 (SdbReadGUIDTag.c)
 *     SdbTagRefToTagID @ 0x14088C068 (SdbTagRefToTagID.c)
 *     SdbFindNextTag @ 0x1409D4254 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     SdbReadDWORDTag @ 0x1409D5464 (SdbReadDWORDTag.c)
 *     SdbGetDatabaseMatchEx @ 0x1409D745C (SdbGetDatabaseMatchEx.c)
 *     KsepDbFreeDriverShims @ 0x1409D926C (KsepDbFreeDriverShims.c)
 */

__int64 __fastcall KsepDbGetDriverShimsInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 *a6,
        unsigned int *a7)
{
  unsigned int v7; // ebp
  unsigned int *v8; // r12
  __int64 *v10; // r13
  __int64 Paged; // rsi
  const wchar_t *v12; // r8
  unsigned int DatabaseMatch; // eax
  int SdbString; // ebx
  __int64 v15; // rdi
  unsigned int FirstTag; // eax
  __int64 v17; // r9
  unsigned int v18; // ebx
  unsigned int NextTag; // eax
  __int64 v20; // r9
  unsigned int v21; // r14d
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // r9
  unsigned int v25; // eax
  __int64 v26; // r9
  unsigned int v27; // eax
  unsigned int v28; // eax
  __int64 v30; // [rsp+28h] [rbp-70h]
  __int128 v31; // [rsp+40h] [rbp-58h] BYREF
  __int128 v32; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v33; // [rsp+B0h] [rbp+18h] BYREF

  v7 = 0;
  v8 = a7;
  v10 = a6;
  Paged = 0LL;
  v12 = *(const wchar_t **)(a3 + 8);
  v30 = a5;
  *a7 = 0;
  *v10 = 0LL;
  *(_QWORD *)&v31 = 0LL;
  v33 = 0;
  DatabaseMatch = SdbGetDatabaseMatchEx(a1, 0, v12, a4, a4, v30, a2);
  if ( !DatabaseMatch
    || !(unsigned int)SdbTagRefToTagID(a1, DatabaseMatch, &v31, (int *)&v33)
    || (v15 = v31, (FirstTag = SdbFindFirstTag(v31, v33, 28710)) == 0) )
  {
    SdbString = -1073741275;
LABEL_3:
    KsepDbFreeDriverShims(Paged, *v8);
    return (unsigned int)SdbString;
  }
  v18 = 0;
  do
  {
    FirstTag = SdbFindNextTag(v15, v33, FirstTag, v17);
    ++v18;
  }
  while ( FirstTag );
  *v8 = v18;
  Paged = KsepPoolAllocatePaged();
  if ( !Paged )
  {
    SdbString = -1073741801;
    goto LABEL_3;
  }
  NextTag = SdbFindFirstTag(v15, v33, 28710);
  while ( 1 )
  {
    v21 = NextTag;
    if ( !NextTag )
      break;
    if ( v7 < *v8 )
    {
      v22 = SdbFindFirstTag(v15, NextTag, 36880);
      if ( v22 )
      {
        v31 = 0LL;
        *(_OWORD *)(Paged + 80LL * v7) = *SdbReadGUIDTag(&v32, v15, v22, &v31);
      }
      v23 = SdbFindFirstTag(v15, v21, 24577);
      if ( v23 )
      {
        SdbString = KsepDbGetSdbString(v15, v23, Paged + 80LL * v7 + 16, v24);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      v25 = SdbFindFirstTag(v15, v21, 24579);
      if ( v25 )
      {
        SdbString = KsepDbGetSdbString(v15, v25, Paged + 80LL * v7 + 32, v26);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      v27 = SdbFindFirstTag(v15, v21, 16407);
      if ( v27 )
        *(_DWORD *)(Paged + 80LL * v7 + 64) = SdbReadDWORDTag(v15, v27, 0);
      v28 = SdbFindFirstTag(v15, v21, 24584);
      if ( v28 )
      {
        SdbString = KsepDbGetSdbString(v15, v28, Paged + 80LL * v7 + 48, v20);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      *(_DWORD *)(Paged + 80LL * v7 + 68) = 1;
    }
    NextTag = SdbFindNextTag(v15, v33, v21, v20);
    ++v7;
  }
  *v10 = Paged;
  return 0;
}
