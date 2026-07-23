/*
 * XREFs of SymCryptMlDsaPkDecode @ 0x140571FA8
 * Callers:
 *     SymCryptMlDsakeySetValue @ 0x140560834 (SymCryptMlDsakeySetValue.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptMlDsaExpandA @ 0x140571968 (SymCryptMlDsaExpandA.c)
 *     SymCryptMlDsaPolyElementDecode @ 0x140572318 (SymCryptMlDsaPolyElementDecode.c)
 *     SymCryptMlDsaTemporariesAllocateAndInitialize @ 0x140573204 (SymCryptMlDsaTemporariesAllocateAndInitialize.c)
 *     SymCryptMlDsaVectorNTT @ 0x1405738A0 (SymCryptMlDsaVectorNTT.c)
 *     SymCryptMlDsaVectorSetZero @ 0x1405739AC (SymCryptMlDsaVectorSetZero.c)
 *     SymCryptShake128Append @ 0x140573BC0 (SymCryptShake128Append.c)
 *     SymCryptShake256Init @ 0x140573CA4 (SymCryptShake256Init.c)
 *     SymCryptShake256Result @ 0x140573CC4 (SymCryptShake256Result.c)
 *     SymCryptCallbackFree @ 0x140727498 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptMlDsaPkDecode(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned int *v8; // rdi
  __int128 *v9; // r15
  _BYTE *v10; // rcx
  unsigned int v11; // r14d
  __int128 *v12; // rax
  __int128 *v13; // rcx
  __int64 v14; // rdx
  __int128 v15; // xmm0

  v6 = *(_QWORD *)(a4 + 8);
  if ( a2 == *(_DWORD *)(v6 + 48) )
  {
    v8 = (unsigned int *)SymCryptMlDsaTemporariesAllocateAndInitialize(v6, 0, 0, 0, 320);
    if ( v8 )
    {
      if ( *(_BYTE *)(a4 + 20) )
      {
        *(_QWORD *)(a4 + 22) = 0LL;
        *(_QWORD *)(a4 + 30) = 0LL;
        *(_QWORD *)(a4 + 38) = 0LL;
        *(_QWORD *)(a4 + 46) = 0LL;
        *(_BYTE *)(a4 + 20) = 0;
      }
      if ( *(_BYTE *)(a4 + 21) )
      {
        *(_QWORD *)(a4 + 54) = 0LL;
        *(_QWORD *)(a4 + 62) = 0LL;
        *(_QWORD *)(a4 + 70) = 0LL;
        *(_QWORD *)(a4 + 78) = 0LL;
        SymCryptMlDsaVectorSetZero(*(_QWORD *)(a4 + 200));
        SymCryptMlDsaVectorSetZero(*(_QWORD *)(a4 + 208));
        SymCryptMlDsaVectorSetZero(*(_QWORD *)(a4 + 216));
        *(_BYTE *)(a4 + 21) = 0;
      }
      *(_OWORD *)(a4 + 86) = *a1;
      v9 = a1 + 2;
      *(_OWORD *)(a4 + 102) = a1[1];
      SymCryptShake256Init(v8 + 8);
      SymCryptShake128Append(v8 + 8, a4 + 86, 32LL);
      v10 = *(_BYTE **)(a4 + 192);
      v11 = 0;
      if ( *v10 )
      {
        while ( 1 )
        {
          v12 = (__int128 *)*((_QWORD *)v8 + 37);
          v13 = v9;
          v14 = 2LL;
          do
          {
            v15 = *v13;
            v13 += 8;
            *v12 = v15;
            v12 += 8;
            *(v12 - 7) = *(v13 - 7);
            *(v12 - 6) = *(v13 - 6);
            *(v12 - 5) = *(v13 - 5);
            *(v12 - 4) = *(v13 - 4);
            *(v12 - 3) = *(v13 - 3);
            *(v12 - 2) = *(v13 - 2);
            *(v12 - 1) = *(v13 - 1);
            --v14;
          }
          while ( v14 );
          *v12 = *v13;
          v12[1] = v13[1];
          v12[2] = v13[2];
          v12[3] = v13[3];
          v7 = SymCryptMlDsaPolyElementDecode(
                 *((_QWORD *)v8 + 37),
                 10LL,
                 0LL,
                 ((unsigned __int64)v11 << 10) + *(_QWORD *)(a4 + 192) + 8LL);
          if ( v7 )
            break;
          SymCryptShake128Append(v8 + 8, *((_QWORD *)v8 + 37), 320LL);
          v10 = *(_BYTE **)(a4 + 192);
          v9 += 20;
          if ( ++v11 >= (unsigned __int8)*v10 )
            goto LABEL_14;
        }
      }
      else
      {
LABEL_14:
        SymCryptMlDsaVectorNTT(v10);
        v7 = SymCryptMlDsaExpandA((void *)(a4 + 86), 0x20uLL, *(_BYTE **)(a4 + 184));
        if ( !v7 )
          SymCryptShake256Result(v8 + 8, a4 + 118);
      }
      SymCryptWipe((__int64)v8, *v8);
      SymCryptCallbackFree(v8);
    }
    else
    {
      return 32783;
    }
  }
  else
  {
    return 32769;
  }
  return v7;
}
