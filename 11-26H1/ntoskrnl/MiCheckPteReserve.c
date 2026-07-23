/*
 * XREFs of MiCheckPteReserve @ 0x1404BD5F8
 * Callers:
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckPteReserve(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  ULONG_PTR v6; // r10
  const signed __int64 *v7; // rdx
  unsigned __int64 v8; // r10
  volatile signed __int32 *v9; // r9
  __int64 result; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  volatile signed __int32 *v13; // r9
  unsigned int v14; // eax
  unsigned __int64 v15; // r8
  int v16; // r8d
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  int v20; // edx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r15

  v6 = a2 << 25 >> 16;
  if ( !a3 )
    KeBugCheckEx(0xDAu, 0x200uLL, a2 << 25 >> 16, 0LL, 0LL);
  v20 = *(_DWORD *)(a1 + 40) & 1;
  LOBYTE(v17) = 2;
  v21 = 2 * ((unsigned __int64)(unsigned int)((a2 - *(_QWORD *)(a1 + 32)) >> 3) >> (4 * (unsigned __int8)v20));
  v15 = v21;
  v22 = v21 + 2 * ((a3 >> (4 * (unsigned __int8)v20)) - 1);
  while ( 1 )
  {
    v7 = *(const signed __int64 **)(a1 + 24);
    if ( v15 >= v22 )
      break;
    if ( !_bittest64(v7, v15) )
      KeBugCheckEx(0xDAu, 0x201uLL, v6, v6 + (((v15 << 11) - (v21 << 11)) & 0xFFFFFFFFFFFFF000uLL), a3);
    v11 = v15 & 0x1F;
    LOBYTE(v12) = 1;
    v13 = (volatile signed __int32 *)v7 + (v15 >> 5);
    if ( v11 + 1 <= 0x20 )
    {
      v14 = ~(1 << v11);
LABEL_13:
      _InterlockedAnd(v13, v14);
      goto LABEL_14;
    }
    if ( (v15 & 0x1F) == 0 )
      goto LABEL_16;
    _InterlockedAnd(v13++, ~(((1 << (32 - (v15 & 0x1F))) - 1) << v11));
    v12 = 1LL - (32 - (unsigned int)(v15 & 0x1F));
    if ( v12 >= 0x20 )
    {
      v19 = v12 >> 5;
      v12 += -32LL * (v12 >> 5);
      do
      {
        *v13++ = 0;
        --v19;
      }
      while ( v19 );
    }
    if ( v12 )
    {
LABEL_16:
      v14 = -1 << v12;
      goto LABEL_13;
    }
LABEL_14:
    v15 += 2LL;
  }
  v8 = v15 & 0x1F;
  v9 = (volatile signed __int32 *)v7 + (v15 >> 5);
  result = v8 + 2;
  if ( v8 + 2 > 0x20 )
  {
    if ( (v15 & 0x1F) == 0 )
      goto LABEL_8;
    v16 = v15 & 0x1F;
    result = (unsigned int)~(((1 << (32 - v16)) - 1) << v8);
    _InterlockedAnd(v9, result);
    v17 = 2LL - (unsigned int)(32 - v16);
    ++v9;
    if ( v17 >= 0x20 )
    {
      v18 = v17 >> 5;
      result = -32LL * (v17 >> 5);
      v17 += result;
      do
      {
        *v9++ = 0;
        --v18;
      }
      while ( v18 );
    }
    if ( v17 )
LABEL_8:
      _InterlockedAnd(v9, -1 << v17);
  }
  else
  {
    result = (unsigned int)~(3 << v8);
    _InterlockedAnd(v9, result);
  }
  return result;
}
