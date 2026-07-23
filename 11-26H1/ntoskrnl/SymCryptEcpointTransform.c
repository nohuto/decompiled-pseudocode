/*
 * XREFs of SymCryptEcpointTransform @ 0x140566B94
 * Callers:
 *     SymCryptEcpointGetValue @ 0x1405667FC (SymCryptEcpointGetValue.c)
 *     SymCryptEcpointSetValue @ 0x140566990 (SymCryptEcpointSetValue.c)
 * Callees:
 *     SymCryptModElementCopy @ 0x14055EA54 (SymCryptModElementCopy.c)
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 *     SymCryptModElementIsZero @ 0x14055EAD0 (SymCryptModElementIsZero.c)
 *     SymCryptModElementSetValueUint32 @ 0x14055EBAC (SymCryptModElementSetValueUint32.c)
 *     SymCryptModInv @ 0x14055ECD8 (SymCryptModInv.c)
 *     SymCryptModMul @ 0x14055ED14 (SymCryptModMul.c)
 *     SymCryptEcpointCopy @ 0x140566700 (SymCryptEcpointCopy.c)
 */

__int64 __fastcall SymCryptEcpointTransform(
        __int64 a1,
        _BYTE *a2,
        _BYTE *a3,
        int a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbp
  unsigned int v9; // ebx
  int v13; // r9d
  int v14; // ecx
  int v15; // esi
  int v16; // ecx
  __int64 v17; // r12
  __int64 *v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rax
  _BYTE *v21; // rbx
  _BYTE *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // r12
  _BYTE *v26; // rbx
  __int128 v28; // [rsp+30h] [rbp-48h] BYREF

  v8 = a7;
  v9 = 0;
  v28 = 0LL;
  v13 = a4 - 1;
  if ( v13 )
  {
    if ( v13 != 1 )
      return 32782;
    v14 = 34;
  }
  else
  {
    v14 = 17;
  }
  v15 = *(_DWORD *)(a1 + 8);
  if ( !a5 )
  {
    v15 = v14;
    v14 = *(_DWORD *)(a1 + 8);
  }
  if ( v14 == v15 )
  {
    SymCryptEcpointCopy(a1, a2, a3);
    return v9;
  }
  switch ( v14 )
  {
    case 17:
      if ( v15 == 34 )
      {
        SymCryptModElementCopy();
        SymCryptModElementSetValueUint32(
          0,
          *(_DWORD **)(a1 + 616),
          (__int64)&a3[*(unsigned int *)(a1 + 36) + 32],
          a7,
          a8);
        return v9;
      }
      if ( v15 == 98 )
      {
        SymCryptModElementCopy();
        goto LABEL_22;
      }
      return 32779;
    case 34:
      if ( v15 == 17 || (unsigned int)(v15 - 67) <= 0x1F && (v16 = -2147352575, _bittest(&v16, v15 - 67)) )
      {
        v17 = (__int64)(a2 + 32);
        SymCryptModElementCopy();
        if ( v15 == 67 || v15 == 84 )
        {
          SymCryptModElementCopy();
          SymCryptModElementSetValueUint32(
            1,
            *(_DWORD **)(a1 + 616),
            (__int64)&a3[2 * *(_DWORD *)(a1 + 36) + 32],
            a7,
            a8);
          if ( v15 == 84 )
            SymCryptModMul(*(_DWORD **)(a1 + 616), v17);
          goto LABEL_25;
        }
        if ( v15 != 98 )
          return v9;
LABEL_22:
        SymCryptModElementSetValueUint32(
          1,
          *(_DWORD **)(a1 + 616),
          (__int64)&a3[*(unsigned int *)(a1 + 36) + 32],
          a7,
          a8);
LABEL_25:
        *a3 = 1;
        return v9;
      }
      return 32779;
    case 67:
      if ( v15 != 17 && v15 != 34 )
        return 32779;
      v18 = (__int64 *)&v28;
      v19 = 2LL;
      do
      {
        *v18++ = SymCryptModElementCreate();
        v20 = *(unsigned int *)(a1 + 36);
        v8 += v20;
        --v19;
      }
      while ( v19 );
      v21 = &a2[(unsigned int)(2 * v20)];
      if ( (unsigned int)SymCryptModElementIsZero() )
        return 32785;
      v9 = SymCryptModInv(*(_DWORD **)(a1 + 616), (__int64)(v21 + 32));
      if ( !v9 )
      {
        SymCryptModMul(*(_DWORD **)(a1 + 616), v28);
        SymCryptModMul(*(_DWORD **)(a1 + 616), (__int64)(a2 + 32));
        if ( v15 == 34 )
        {
          SymCryptModMul(*(_DWORD **)(a1 + 616), v28);
          goto LABEL_42;
        }
      }
      break;
    case 84:
      if ( v15 != 17 && v15 != 34 )
        return 32779;
      SymCryptModElementCreate();
      v22 = &a2[2 * *(_DWORD *)(a1 + 36)];
      if ( (unsigned int)SymCryptModElementIsZero() )
        return 32785;
      v9 = SymCryptModInv(*(_DWORD **)(a1 + 616), (__int64)(v22 + 32));
      if ( !v9 )
      {
        SymCryptModMul(*(_DWORD **)(a1 + 616), (__int64)(a2 + 32));
        if ( v15 == 34 )
LABEL_42:
          SymCryptModMul(*(_DWORD **)(a1 + 616), (__int64)&a2[*(unsigned int *)(a1 + 36) + 32]);
      }
      break;
    case 98:
      if ( v15 == 17 || v15 == 34 )
      {
        SymCryptModElementCreate();
        v23 = *(unsigned int *)(a1 + 36);
        v24 = v23 + a7;
        v25 = a8 - v23;
        v26 = &a2[v23];
        if ( (unsigned int)SymCryptModElementIsZero() )
          return 32785;
        v9 = SymCryptModInv(*(_DWORD **)(a1 + 616), (__int64)(v26 + 32));
        if ( !v9 )
        {
          SymCryptModMul(*(_DWORD **)(a1 + 616), (__int64)(a2 + 32));
          if ( v15 == 34 )
            SymCryptModElementSetValueUint32(
              0,
              *(_DWORD **)(a1 + 616),
              (__int64)&a3[*(unsigned int *)(a1 + 36) + 32],
              v24,
              v25);
        }
      }
      break;
    default:
      return 32779;
  }
  return v9;
}
