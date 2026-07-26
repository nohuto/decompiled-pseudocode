/*
 * XREFs of ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x14014D46C
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___ @ 0x14014C91C (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033.c)
 *     ndisBlowStringListIntoAtoms @ 0x14014DEEC (ndisBlowStringListIntoAtoms.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x14014E40C (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 *     ndisLoadNamedFilterAltitudes @ 0x14014E884 (ndisLoadNamedFilterAltitudes.c)
 *     ndisReplaceBindTokens @ 0x14014EF58 (ndisReplaceBindTokens.c)
 *     ndisBindBuilderLoadSettings @ 0x1401919DC (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     ?AllocateBuckets@?$KHashTableBase@$00@Rtl@@CAPEAX_KPEAX@Z @ 0x14014D3DC (-AllocateBuckets@-$KHashTableBase@$00@Rtl@@CAPEAX_KPEAX@Z.c)
 *     ?AtomCompare@?$KStringAtomTableBase@$00@Rtl@@CAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x14014D414 (-AtomCompare@-$KStringAtomTableBase@$00@Rtl@@CAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     ?FreeBuckets@?$KHashTableBase@$00@Rtl@@CAXPEAX0@Z @ 0x14014D440 (-FreeBuckets@-$KHashTableBase@$00@Rtl@@CAXPEAX0@Z.c)
 *     ?Hash@?$KStringAtomTableBase@$00@Rtl@@CA_KPEB_W_K@Z @ 0x14014D7A8 (-Hash@-$KStringAtomTableBase@$00@Rtl@@CA_KPEB_W_K@Z.c)
 */

char *__fastcall Rtl::KStringAtomTableBase<1>::GetAtom(__int64 a1, _WORD *a2)
{
  __int64 v3; // rdi
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // r9
  int v8; // r8d
  size_t v9; // rdi
  char *result; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  char *Buckets; // r8
  char v15; // cl
  unsigned __int64 v16; // rcx
  unsigned int v17; // edi
  __int64 v18; // rbp
  __int64 v19; // r11
  _QWORD *v20; // r9
  __int64 v21; // rdx
  void *v22; // rcx
  __int64 v23; // [rsp+50h] [rbp+8h]
  __int64 v24; // [rsp+50h] [rbp+8h]

  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  v5 = Rtl::KStringAtomTableBase<1>::Hash(a2, v3);
  v6 = 0LL;
LABEL_4:
  v7 = v5 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
  if ( v6 )
    goto LABEL_7;
  v8 = *(_DWORD *)(a1 + 4) >> 5;
  if ( v8 )
  {
    v6 = *(_QWORD *)(a1 + 8)
       + 8LL
       * ((v8 - 1) & (HIBYTE(v7)
                    - 877075889
                    + 442596621 * (unsigned __int8)v7
                    + 37
                    * (BYTE6(v7)
                     + 37
                     * (BYTE5(v7) + 37
                                  * (BYTE4(v7) + 37 * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (unsigned int)BYTE1(v7))))))));
LABEL_7:
    while ( 1 )
    {
      v6 = *(_QWORD *)v6;
      if ( (v6 & 1) != 0 )
        break;
      if ( v7 == ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v6 + 8)) )
      {
        if ( !v6 )
          break;
        if ( !Rtl::KStringAtomTableBase<1>::AtomCompare(v6, (__int64)a2) )
          goto LABEL_4;
        return (char *)v6;
      }
    }
  }
  v9 = 2 * v3 + 2;
  result = (char *)ExAllocatePoolWithTag(PagedPool, v9 + 16, 0x6D74414Bu);
  v6 = (__int64)result;
  if ( result )
  {
    memmove(result + 16, a2, v9);
    *(_QWORD *)(v6 + 8) = v5;
    v23 = v5 & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    v11 = *(_QWORD *)(a1 + 8);
    v12 = ((*(_DWORD *)(a1 + 4) >> 5) - 1) & (HIBYTE(v23)
                                            + 37
                                            * (BYTE6(v23)
                                             + 37
                                             * (BYTE5(v23)
                                              + 37
                                              * (BYTE4(v23)
                                               + 37
                                               * (BYTE3(v23)
                                                + 374026047
                                                + 37
                                                * (BYTE2(v23)
                                                 + 37 * (BYTE1(v23) + 37 * (unsigned int)(unsigned __int8)v23)))))));
    *(_QWORD *)v6 = *(_QWORD *)(v11 + 8 * v12);
    *(_QWORD *)(v11 + 8 * v12) = v6;
    ++*(_DWORD *)a1;
    v13 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
    if ( *(_DWORD *)a1 >= (unsigned int)v13 )
    {
      if ( (unsigned int)v13 < 4 )
        v13 = 4LL;
      Buckets = (char *)Rtl::KHashTableBase<1>::AllocateBuckets(8LL * (unsigned int)v13, a1);
      if ( Buckets )
      {
        if ( (((_DWORD)v13 - 1) & (unsigned int)v13) != 0 )
        {
          v15 = -1;
          do
          {
            ++v15;
            LODWORD(v13) = (unsigned int)v13 >> 1;
          }
          while ( (_DWORD)v13 );
          v13 = (unsigned int)(1 << v15);
        }
        if ( (unsigned int)v13 > 0x4000000 )
          v13 = 0x4000000LL;
        v16 = (unsigned int)v13;
        if ( Buckets > &Buckets[8 * v13] )
          v16 = 0LL;
        if ( v16 )
          memset64(Buckets, a1 | 1, v16);
        v17 = 0;
        v18 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v19 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v20 = *(_QWORD **)(v19 + 8LL * v17);
              if ( ((unsigned __int8)v20 & 1) != 0 )
                break;
              *(_QWORD *)(v19 + 8LL * v17) = *v20;
              v24 = v18 & v20[1];
              v21 = ((_DWORD)v13 - 1) & (HIBYTE(v24)
                                       + 37
                                       * (BYTE6(v24)
                                        + 37
                                        * (BYTE5(v24)
                                         + 37
                                         * (BYTE4(v24)
                                          + 37
                                          * (BYTE3(v24)
                                           + 374026047
                                           + 37
                                           * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * (unsigned int)(unsigned __int8)v24)))))));
              *v20 = *(_QWORD *)&Buckets[8 * v21];
              *(_QWORD *)&Buckets[8 * v21] = v20;
            }
            ++v17;
          }
          while ( v17 < *(_DWORD *)(a1 + 4) >> 5 );
        }
        v22 = *(void **)(a1 + 8);
        *(_QWORD *)(a1 + 8) = Buckets;
        *(_DWORD *)(a1 + 4) = (32 * v13) | *(_DWORD *)(a1 + 4) & 0x1F;
        if ( v22 )
          Rtl::KHashTableBase<1>::FreeBuckets(v22, a1);
      }
    }
    return (char *)v6;
  }
  return result;
}
