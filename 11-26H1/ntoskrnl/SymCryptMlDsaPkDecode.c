/*
 * XREFs of SymCryptMlDsaPkDecode @ 0x140572D9C
 * Callers:
 *     SymCryptMlDsakeySetValue @ 0x14055E310 (SymCryptMlDsakeySetValue.c)
 * Callees:
 *     SymCryptWipe @ 0x140556458 (SymCryptWipe.c)
 *     SymCryptMlDsaExpandA @ 0x140572788 (SymCryptMlDsaExpandA.c)
 *     SymCryptMlDsaPolyElementDecode @ 0x14057310C (SymCryptMlDsaPolyElementDecode.c)
 *     SymCryptMlDsaTemporariesAllocateAndInitialize @ 0x140573FA0 (SymCryptMlDsaTemporariesAllocateAndInitialize.c)
 *     SymCryptMlDsaVectorNTT @ 0x14057463C (SymCryptMlDsaVectorNTT.c)
 *     SymCryptMlDsaVectorSetZero @ 0x140574748 (SymCryptMlDsaVectorSetZero.c)
 *     SymCryptShake128Append @ 0x14057495C (SymCryptShake128Append.c)
 *     SymCryptShake256Init @ 0x140574A40 (SymCryptShake256Init.c)
 *     SymCryptShake256Result @ 0x140574A60 (SymCryptShake256Result.c)
 *     SymCryptCallbackFree @ 0x1407228C8 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptMlDsaPkDecode(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned int v7; // esi
  unsigned int *v8; // rdi
  __int128 v9; // xmm1
  __int128 *v10; // r15
  _BYTE *v11; // rcx
  unsigned int v12; // ebp
  __int128 *v13; // rax
  __int128 *v14; // rcx
  __int64 v15; // rdx
  __int128 v16; // xmm0

  v5 = *(_QWORD *)(a4 + 8);
  v7 = 0;
  if ( a2 == *(_DWORD *)(v5 + 48) )
  {
    v8 = (unsigned int *)SymCryptMlDsaTemporariesAllocateAndInitialize(v5, 0, 0, 0, 320);
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
      v9 = a1[1];
      v10 = a1 + 2;
      *(_OWORD *)(a4 + 102) = v9;
      SymCryptShake256Init(v8 + 8);
      SymCryptShake128Append(v8 + 8, a4 + 86, 32LL);
      v11 = *(_BYTE **)(a4 + 192);
      v12 = 0;
      if ( *v11 )
      {
        while ( 1 )
        {
          v13 = (__int128 *)*((_QWORD *)v8 + 37);
          v14 = v10;
          v15 = 2LL;
          do
          {
            v16 = *v14;
            v14 += 8;
            *v13 = v16;
            v13 += 8;
            *(v13 - 7) = *(v14 - 7);
            *(v13 - 6) = *(v14 - 6);
            *(v13 - 5) = *(v14 - 5);
            *(v13 - 4) = *(v14 - 4);
            *(v13 - 3) = *(v14 - 3);
            *(v13 - 2) = *(v14 - 2);
            *(v13 - 1) = *(v14 - 1);
            --v15;
          }
          while ( v15 );
          *v13 = *v14;
          v13[1] = v14[1];
          v13[2] = v14[2];
          v13[3] = v14[3];
          v7 = SymCryptMlDsaPolyElementDecode(
                 *((_QWORD *)v8 + 37),
                 10LL,
                 0LL,
                 ((unsigned __int64)v12 << 10) + *(_QWORD *)(a4 + 192) + 8LL);
          if ( v7 )
            break;
          SymCryptShake128Append(v8 + 8, *((_QWORD *)v8 + 37), 320LL);
          v11 = *(_BYTE **)(a4 + 192);
          v10 += 20;
          if ( ++v12 >= (unsigned __int8)*v11 )
            goto LABEL_14;
        }
      }
      else
      {
LABEL_14:
        SymCryptMlDsaVectorNTT(v11);
        SymCryptMlDsaExpandA((void *)(a4 + 86), 0x20uLL, *(unsigned __int8 **)(a4 + 184));
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
