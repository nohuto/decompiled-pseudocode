/*
 * XREFs of SepCompareSidAndAttributeArrays @ 0x140A3BD38
 * Callers:
 *     SeCompareTokens @ 0x140A3BAE0 (SeCompareTokens.c)
 *     SepCompareClaimAttributes @ 0x140A3BE1C (SepCompareClaimAttributes.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 */

char __fastcall SepCompareSidAndAttributeArrays(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // r12
  unsigned int v8; // ebx
  _BYTE *v9; // rsi
  __int64 v10; // rbp
  unsigned int i; // ebp
  unsigned int j; // ebp
  unsigned int v14; // esi
  __int64 v15; // r14
  void *v16; // rax
  unsigned int v17; // esi
  __int64 v18; // r14
  void *v19; // rcx
  void *v20; // [rsp+20h] [rbp-38h]
  void *v21; // [rsp+20h] [rbp-38h]

  v7 = a1;
  if ( a2 == a4 )
  {
    v8 = 0;
    if ( a2 )
    {
      v9 = (_BYTE *)(a3 + 8);
      v10 = a1 - a3;
      while ( RtlEqualSid(*(PSID *)&v9[v10 - 8], *((PSID *)v9 - 1)) && ((v9[v10] ^ *v9) & 0x14) == 0 )
      {
        ++v8;
        v9 += 16;
        if ( v8 >= a2 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      if ( v8 == a2 )
        return 1;
    }
    for ( i = v8; i < a2; ++i )
    {
      v14 = v8;
      if ( v8 >= a4 )
      {
LABEL_21:
        if ( v14 == a4 )
          return 0;
      }
      else
      {
        v15 = 16LL * i;
        v16 = *(void **)(v15 + v7);
        v20 = v16;
        while ( !RtlEqualSid(v16, *(PSID *)(a3 + 16LL * v14))
             || ((*(_BYTE *)(v15 + a1 + 8) ^ *(_BYTE *)(a3 + 16LL * v14 + 8)) & 0x14) != 0 )
        {
          v16 = v20;
          if ( ++v14 >= a4 )
            goto LABEL_21;
        }
      }
      v7 = a1;
    }
    for ( j = v8; j < a4; ++j )
    {
      v17 = v8;
      if ( v8 < a2 )
      {
        v18 = 16LL * j;
        v19 = *(void **)(v18 + a3);
        v21 = v19;
        while ( !RtlEqualSid(v19, *(PSID *)(a1 + 16LL * v17))
             || ((*(_BYTE *)(v18 + a3 + 8) ^ *(_BYTE *)(a1 + 16LL * v17 + 8)) & 0x14) != 0 )
        {
          v19 = v21;
          if ( ++v17 >= a2 )
          {
            if ( v17 == a2 )
              return 0;
            break;
          }
        }
      }
    }
    return 1;
  }
  return 0;
}
