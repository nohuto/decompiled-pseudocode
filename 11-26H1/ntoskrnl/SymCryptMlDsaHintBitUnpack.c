/*
 * XREFs of SymCryptMlDsaHintBitUnpack @ 0x140571D00
 * Callers:
 *     SymCryptMlDsaSigDecode @ 0x140572C2C (SymCryptMlDsaSigDecode.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SymCryptMlDsaHintBitUnpack(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // edi
  unsigned int v8; // esi
  _BYTE *v9; // r12
  unsigned int v10; // edx
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  _BYTE *v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // edx
  _BYTE *i; // rcx

  v3 = 0;
  v7 = 0;
  v8 = 0;
  if ( *a3 )
  {
    do
    {
      v9 = &a3[1024 * (unsigned __int64)v8];
      memset_0(v9 + 8, 0, 0x400uLL);
      v10 = *(unsigned __int8 *)(a1 + 25);
      v11 = *(unsigned __int8 *)(v10 + v8 + a2);
      if ( v11 < v7 || v11 > v10 )
        return 32784;
      v12 = v7;
      if ( v7 < v11 )
      {
        v13 = (_BYTE *)(a2 + v7);
        while ( v7 <= v12 || *(_BYTE *)(v7 - 1 + a2) < *v13 )
        {
          v14 = (unsigned __int8)*v13;
          ++v7;
          ++v13;
          *(_DWORD *)&v9[4 * v14 + 8] = 1;
          if ( v7 >= v11 )
            goto LABEL_9;
        }
        return 32784;
      }
LABEL_9:
      ;
    }
    while ( ++v8 < (unsigned __int8)*a3 );
  }
  v15 = *(unsigned __int8 *)(a1 + 25);
  if ( v7 < v15 )
  {
    for ( i = (_BYTE *)(a2 + v7); !*i; ++i )
    {
      if ( ++v7 >= v15 )
        return v3;
    }
    return 32784;
  }
  return v3;
}
