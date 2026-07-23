/*
 * XREFs of KsepDbGetShimInfo @ 0x1407BFA9C
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x140A38400 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404D7BFC (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     KsepDbGetSdbString @ 0x1407BFA68 (KsepDbGetSdbString.c)
 *     SdbGetKShimTagRef @ 0x14088814C (SdbGetKShimTagRef.c)
 *     SdbReadGUIDTag @ 0x14088BEE4 (SdbReadGUIDTag.c)
 *     SdbTagRefToTagID @ 0x14088C068 (SdbTagRefToTagID.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 *     SdbReadDWORDTag @ 0x1409D5464 (SdbReadDWORDTag.c)
 *     KseShimDatabaseClose @ 0x1409D5D2C (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x1409D6414 (KseShimDatabaseOpen.c)
 *     KsepDbFreeDriverShims @ 0x1409D926C (KsepDbFreeDriverShims.c)
 */

__int64 __fastcall KsepDbGetShimInfo(__int64 a1, unsigned int a2)
{
  char *v2; // rdi
  __int64 v3; // rsi
  int v4; // eax
  __int64 *v5; // r13
  int SdbString; // ebx
  __int64 Paged; // rax
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // r15
  unsigned int KShimTagRef; // eax
  __int64 v12; // r14
  unsigned int FirstTag; // eax
  __m128i *v14; // rax
  __m128i v15; // xmm1
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // r9
  unsigned int v20; // eax
  __int64 v21; // r9
  int DWORDTag; // eax
  char *v23; // r8
  __int64 v24; // r14
  _DWORD *v25; // rdx
  __int128 v26; // xmm0
  __int64 v28; // [rsp+20h] [rbp-60h] BYREF
  __int64 v29; // [rsp+30h] [rbp-50h]
  __int64 v30; // [rsp+40h] [rbp-40h]
  __int128 v31; // [rsp+50h] [rbp-30h] BYREF
  char v32[16]; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v34; // [rsp+D0h] [rbp+50h] BYREF
  unsigned __int64 v35; // [rsp+D8h] [rbp+58h] BYREF

  v34 = 0;
  v28 = 0LL;
  v2 = 0LL;
  v35 = 0LL;
  v3 = a2;
  v4 = KseShimDatabaseOpen(&v35);
  v5 = (__int64 *)v35;
  SdbString = v4;
  if ( v4 >= 0 )
  {
    Paged = KsepPoolAllocatePaged();
    v8 = *v5;
    v2 = (char *)Paged;
    v35 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    SdbString = -1073741275;
    v30 = v8;
    v9 = 0LL;
    v29 = 0LL;
    while ( (unsigned int)v9 < (unsigned int)v3 )
    {
      v10 = 80 * v9;
      KShimTagRef = SdbGetKShimTagRef(v8, *(_QWORD *)(a1 + 80 * v9 + 24));
      if ( !KShimTagRef )
        goto LABEL_18;
      if ( (unsigned int)SdbTagRefToTagID(v8, KShimTagRef, &v28, &v34) )
      {
        v12 = v28;
        FirstTag = SdbFindFirstTag(v28, v34, 36880LL);
        if ( !FirstTag )
          goto LABEL_18;
        v31 = 0LL;
        v14 = (__m128i *)SdbReadGUIDTag(v32, v12, FirstTag, &v31);
        v15 = *v14;
        v16 = v14->m128i_i64[0] - v29;
        if ( !v16 )
          v16 = _mm_srli_si128(v15, 8).m128i_u64[0] - v35;
        if ( !v16 )
          goto LABEL_18;
        v17 = v34;
        *(__m128i *)&v2[v10] = v15;
        v18 = SdbFindFirstTag(v12, v17, 24579LL);
        if ( !v18 )
          goto LABEL_18;
        SdbString = KsepDbGetSdbString(v12, v18, (__int64)&v2[v10 + 32], v19);
        if ( SdbString < 0 )
          goto LABEL_18;
        v20 = SdbFindFirstTag(v12, v34, 16407LL);
        if ( !v20 )
          goto LABEL_18;
        DWORDTag = SdbReadDWORDTag(v12, v20, 0LL, v21);
        v8 = v30;
        *(_DWORD *)&v2[v10 + 64] = DWORDTag;
      }
      v9 = (unsigned int)(v9 + 1);
    }
    SdbString = 0;
    if ( (_DWORD)v3 )
    {
      v23 = &v2[-a1];
      v24 = v3;
      v25 = (_DWORD *)(a1 + 64);
      do
      {
        *v25 = *(_DWORD *)((char *)v25 + (_QWORD)v23);
        v26 = *(_OWORD *)((char *)v25 + (_QWORD)v23 - 32);
        v25 += 20;
        *((_OWORD *)v25 - 7) = v26;
        *((_OWORD *)v25 - 9) = *(_OWORD *)((char *)v25 + (_QWORD)v23 - 144);
        --v24;
      }
      while ( v24 );
    }
  }
LABEL_18:
  if ( v5 )
    KseShimDatabaseClose(v5);
  if ( SdbString >= 0 )
    KsepPoolFreePaged(v2);
  else
    KsepDbFreeDriverShims(v2, (unsigned int)v3);
  return (unsigned int)SdbString;
}
