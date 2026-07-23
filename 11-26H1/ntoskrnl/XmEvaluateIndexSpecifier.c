/*
 * XREFs of XmEvaluateIndexSpecifier @ 0x1405B0F38
 * Callers:
 *     XmEvaluateAddressSpecifier @ 0x1404A1CE8 (XmEvaluateAddressSpecifier.c)
 * Callees:
 *     XmGetCodeByte @ 0x1404A2170 (XmGetCodeByte.c)
 *     XmGetLongImmediate @ 0x140533904 (XmGetLongImmediate.c)
 *     longjmp @ 0x140535DC0 (longjmp.c)
 */

__int64 __fastcall XmEvaluateIndexSpecifier(__int64 a1, int a2)
{
  unsigned __int8 CodeByte; // al
  int v5; // ebp
  __int64 v6; // rsi
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  int LongImmediate; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // edx
  int v21; // ebx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // edx
  int v26; // ebx

  CodeByte = XmGetCodeByte(a1);
  v5 = CodeByte >> 6;
  v6 = (CodeByte >> 3) & 7;
  v7 = (8 * a2) | CodeByte & 7;
  if ( v7 > 0xC )
  {
    if ( v7 <= 0x12 )
    {
      if ( v7 == 18 )
      {
        v21 = *(_DWORD *)(a1 + 32);
      }
      else
      {
        v17 = v7 - 13;
        if ( !v17 )
        {
          LongImmediate = *(_DWORD *)(a1 + 44) + XmGetCodeByte(a1);
          goto LABEL_13;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          LongImmediate = *(_DWORD *)(a1 + 48) + XmGetCodeByte(a1);
          return (unsigned int)(LongImmediate + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          LongImmediate = *(_DWORD *)(a1 + 52) + XmGetCodeByte(a1);
          return (unsigned int)(LongImmediate + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
        }
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 != 1 )
            goto LABEL_49;
          v21 = *(_DWORD *)(a1 + 28);
        }
        else
        {
          v21 = *(_DWORD *)(a1 + 24);
        }
      }
LABEL_56:
      LongImmediate = v21 + XmGetLongImmediate(a1);
      return (unsigned int)(LongImmediate + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
    }
    v22 = v7 - 19;
    if ( !v22 )
    {
      v21 = *(_DWORD *)(a1 + 36);
      goto LABEL_56;
    }
    v23 = v22 - 1;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          if ( v25 != 1 )
            goto LABEL_49;
          v21 = *(_DWORD *)(a1 + 52);
        }
        else
        {
          v21 = *(_DWORD *)(a1 + 48);
        }
        goto LABEL_56;
      }
      v26 = *(_DWORD *)(a1 + 44);
    }
    else
    {
      v26 = *(_DWORD *)(a1 + 40);
    }
    LongImmediate = v26 + XmGetLongImmediate(a1);
    goto LABEL_13;
  }
  if ( v7 == 12 )
  {
    LongImmediate = *(_DWORD *)(a1 + 40) + XmGetCodeByte(a1);
  }
  else
  {
    if ( v7 > 6 )
    {
      v13 = v7 - 7;
      if ( !v13 )
      {
        LongImmediate = *(_DWORD *)(a1 + 52);
        return (unsigned int)(LongImmediate + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
      }
      v14 = v13 - 1;
      if ( !v14 )
      {
        LongImmediate = *(_DWORD *)(a1 + 24) + XmGetCodeByte(a1);
        return (unsigned int)(LongImmediate + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
        LongImmediate = *(_DWORD *)(a1 + 28) + XmGetCodeByte(a1);
        return (unsigned int)(LongImmediate + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        LongImmediate = *(_DWORD *)(a1 + 32) + XmGetCodeByte(a1);
        return (unsigned int)(LongImmediate + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
      }
      if ( v16 == 1 )
      {
        LongImmediate = *(_DWORD *)(a1 + 36) + XmGetCodeByte(a1);
        return (unsigned int)(LongImmediate + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
      }
      goto LABEL_49;
    }
    if ( v7 == 6 )
    {
      LongImmediate = *(_DWORD *)(a1 + 48);
      return (unsigned int)(LongImmediate + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
    }
    if ( !v7 )
    {
      LongImmediate = *(_DWORD *)(a1 + 24);
      return (unsigned int)(LongImmediate + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      LongImmediate = *(_DWORD *)(a1 + 28);
      return (unsigned int)(LongImmediate + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      LongImmediate = *(_DWORD *)(a1 + 32);
      return (unsigned int)(LongImmediate + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      LongImmediate = *(_DWORD *)(a1 + 36);
      return (unsigned int)(LongImmediate + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
    }
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        LongImmediate = XmGetLongImmediate(a1);
        return (unsigned int)(LongImmediate + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
      }
LABEL_49:
      longjmp((_JBTYPE *)(a1 + 160), 7);
    }
    LongImmediate = *(_DWORD *)(a1 + 40);
  }
LABEL_13:
  if ( !*(_BYTE *)(a1 + 140) )
    *(_DWORD *)(a1 + 116) = 2;
  return (unsigned int)(LongImmediate + (*(_DWORD *)(a1 + 4 * v6 + 24) << v5));
}
