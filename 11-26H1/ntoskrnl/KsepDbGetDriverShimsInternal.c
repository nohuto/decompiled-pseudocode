/*
 * XREFs of KsepDbGetDriverShimsInternal @ 0x1409E47C0
 * Callers:
 *     KsepDbGetDriverShims @ 0x1409E45DC (KsepDbGetDriverShims.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404DE51C (KsepPoolAllocatePaged.c)
 *     KsepDbGetSdbString @ 0x1407BCA08 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x140885AE4 (SdbReadGUIDTag.c)
 *     SdbTagRefToTagID @ 0x140885C68 (SdbTagRefToTagID.c)
 *     KsepDbFreeDriverShims @ 0x1409E3D40 (KsepDbFreeDriverShims.c)
 *     SdbGetDatabaseMatchEx @ 0x1409E57D4 (SdbGetDatabaseMatchEx.c)
 *     SdbFindNextTag @ 0x1409E783C (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x1409E8510 (SdbFindFirstTag.c)
 *     SdbReadDWORDTag @ 0x1409E8A54 (SdbReadDWORDTag.c)
 */

__int64 __fastcall KsepDbGetDriverShimsInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        unsigned int *a7)
{
  unsigned int v7; // ebp
  unsigned int *v8; // r12
  _QWORD *v10; // r13
  _QWORD *Paged; // rsi
  __int64 v12; // r8
  unsigned int DatabaseMatch; // eax
  int SdbString; // ebx
  __int64 v15; // rdi
  unsigned int FirstTag; // eax
  unsigned int v17; // ebx
  unsigned int NextTag; // eax
  unsigned int v19; // r14d
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // r9
  unsigned int v23; // eax
  __int64 v24; // r9
  unsigned int v25; // eax
  __int64 v26; // r9
  unsigned int v27; // eax
  __int64 v28; // r9
  __int128 v30; // [rsp+40h] [rbp-58h] BYREF
  __int128 v31; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+B0h] [rbp+18h] BYREF

  v7 = 0;
  v8 = a7;
  v10 = a6;
  Paged = 0LL;
  v12 = *(_QWORD *)(a3 + 8);
  *a7 = 0;
  *v10 = 0LL;
  *(_QWORD *)&v30 = 0LL;
  v32 = 0;
  DatabaseMatch = SdbGetDatabaseMatchEx(a1, 0LL, v12);
  if ( !DatabaseMatch
    || !(unsigned int)SdbTagRefToTagID(a1, DatabaseMatch, &v30, (int *)&v32)
    || (v15 = v30, (FirstTag = SdbFindFirstTag(v30, v32, 28710LL)) == 0) )
  {
    SdbString = -1073741275;
LABEL_3:
    KsepDbFreeDriverShims(Paged, *v8);
    return (unsigned int)SdbString;
  }
  v17 = 0;
  do
  {
    FirstTag = SdbFindNextTag(v15, v32, FirstTag);
    ++v17;
  }
  while ( FirstTag );
  *v8 = v17;
  Paged = (_QWORD *)KsepPoolAllocatePaged();
  if ( !Paged )
  {
    SdbString = -1073741801;
    goto LABEL_3;
  }
  NextTag = SdbFindFirstTag(v15, v32, 28710LL);
  while ( 1 )
  {
    v19 = NextTag;
    if ( !NextTag )
      break;
    if ( v7 < *v8 )
    {
      v20 = SdbFindFirstTag(v15, NextTag, 36880LL);
      if ( v20 )
      {
        v30 = 0LL;
        *(_OWORD *)&Paged[10 * v7] = *SdbReadGUIDTag(&v31, v15, v20, &v30);
      }
      v21 = SdbFindFirstTag(v15, v19, 24577LL);
      if ( v21 )
      {
        SdbString = KsepDbGetSdbString(v15, v21, (__int64)&Paged[10 * v7 + 2], v22);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      v23 = SdbFindFirstTag(v15, v19, 24579LL);
      if ( v23 )
      {
        SdbString = KsepDbGetSdbString(v15, v23, (__int64)&Paged[10 * v7 + 4], v24);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      v25 = SdbFindFirstTag(v15, v19, 16407LL);
      if ( v25 )
        LODWORD(Paged[10 * v7 + 8]) = SdbReadDWORDTag(v15, v25, 0LL, v26);
      v27 = SdbFindFirstTag(v15, v19, 24584LL);
      if ( v27 )
      {
        SdbString = KsepDbGetSdbString(v15, v27, (__int64)&Paged[10 * v7 + 6], v28);
        if ( SdbString < 0 )
          goto LABEL_3;
      }
      HIDWORD(Paged[10 * v7 + 8]) = 1;
    }
    NextTag = SdbFindNextTag(v15, v32, v19);
    ++v7;
  }
  *v10 = Paged;
  return 0;
}
