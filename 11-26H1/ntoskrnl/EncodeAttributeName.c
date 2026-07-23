/*
 * XREFs of EncodeAttributeName @ 0x14081EA38
 * Callers:
 *     LocalGetStringForRelativeAttribute @ 0x140A6CA38 (LocalGetStringForRelativeAttribute.c)
 *     GetPrintableAttributeName @ 0x140A701D8 (GetPrintableAttributeName.c)
 * Callees:
 *     IsEncodedAttributeChar @ 0x14081EEA4 (IsEncodedAttributeChar.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 */

__int64 __fastcall EncodeAttributeName(unsigned __int16 *a1, unsigned int a2, __int64 *a3)
{
  unsigned int v3; // ebx
  unsigned __int16 *v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdi
  char v10; // al
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rbp

  v3 = 0;
  v6 = a1;
  LODWORD(v7) = 0;
  if ( !a1 || !a2 || !a3 )
    return 87LL;
  if ( (a2 & 1) != 0 )
  {
    return 1336;
  }
  else
  {
    v8 = SddlpAlloc(5 * a2 + 2LL);
    *a3 = v8;
    if ( v8 )
    {
      v9 = a2 >> 1;
      if ( (_DWORD)v9 )
      {
        do
        {
          v10 = IsEncodedAttributeChar(*v6);
          v11 = *a3;
          if ( v10 )
          {
            *(_WORD *)(v11 + 2LL * (unsigned int)v7) = 37;
            v12 = (unsigned int)(v7 + 2);
            *(_WORD *)(v11 + 2LL * (unsigned int)(v7 + 1)) = a0123456789abcd_0[(unsigned __int64)*v6 >> 12];
            v13 = (unsigned int)(v7 + 3);
            *(_WORD *)(v11 + 2 * v12) = a0123456789abcd_0[*((_BYTE *)v6 + 1) & 0xF];
            *(_WORD *)(v11 + 2 * v13) = a0123456789abcd_0[(*v6 >> 4) & 0xF];
            v7 = (unsigned int)(v13 + 1);
            *(_WORD *)(v11 + 2 * v7) = a0123456789abcd_0[*(_BYTE *)v6 & 0xF];
          }
          else
          {
            *(_WORD *)(v11 + 2LL * (unsigned int)v7) = *v6;
          }
          ++v6;
          LODWORD(v7) = v7 + 1;
          --v9;
        }
        while ( v9 );
      }
    }
    else
    {
      return 8;
    }
  }
  return v3;
}
