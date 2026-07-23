/*
 * XREFs of KiOpLocateDecodeEntry @ 0x1403D5B20
 * Callers:
 *     KiOpDecode @ 0x1403D53A8 (KiOpDecode.c)
 * Callees:
 *     KiOpFetchNextByte @ 0x1403D5D84 (KiOpFetchNextByte.c)
 */

__int64 __fastcall KiOpLocateDecodeEntry(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // rbx
  unsigned __int8 v5; // cl
  int v6; // ecx
  __int64 result; // rax
  _BYTE *v8; // r14
  char v9; // cl
  char v10; // cl
  char v11; // cl

  v1 = &qword_140002198;
  v3 = KiOpOneByteTable;
  if ( *(_BYTE *)(a1 + 57) )
  {
    v1 = AlpcHandleDataType;
    v3 = KiOpTwoByteTable;
  }
  v4 = v3 - 3;
  while ( 1 )
  {
    v4 += 3;
    if ( v4 == v1 )
      return 0LL;
    v5 = *(_BYTE *)(a1 + 56);
    if ( v5 >= *(_BYTE *)v4 && v5 <= (unsigned __int8)(*((_BYTE *)v4 + 1) + *(_BYTE *)v4 - 1) )
    {
      v6 = *((_DWORD *)v4 + 1);
      if ( !v6 || (v6 & *(_DWORD *)(a1 + 48)) != 0 )
      {
        if ( *((_BYTE *)v4 + 8) == 0xFF && *((_BYTE *)v4 + 9) == 0xFF && *((_BYTE *)v4 + 10) == 0xFF )
          goto LABEL_11;
        v8 = (_BYTE *)(a1 + 65);
        if ( !*(_BYTE *)(a1 + 80) )
        {
          result = KiOpFetchNextByte(a1, a1 + 65);
          if ( (int)result < 0 )
            return result;
          *(_BYTE *)(a1 + 80) = 1;
        }
        v9 = *((_BYTE *)v4 + 8);
        if ( v9 == -1 || v9 == ((*v8 >> 3) & 7) )
        {
          v10 = *((_BYTE *)v4 + 10);
          if ( v10 == -1 || v10 == (*v8 & 7) )
          {
            v11 = *((_BYTE *)v4 + 9);
            if ( v11 == -1 )
              goto LABEL_11;
            if ( (*v8 & 0xC0) == 0xC0 )
            {
              if ( v11 == 3 )
                goto LABEL_11;
            }
            else if ( v11 != 3 )
            {
LABEL_11:
              if ( (*((_DWORD *)v4 + 3) & 0xF4000000) == 0
                || (*((_DWORD *)v4 + 3) & 0xF4000000 & *(_DWORD *)(a1 + 60)) != 0 )
              {
                *(_QWORD *)(a1 + 88) = v4;
                return 0LL;
              }
            }
          }
        }
      }
    }
  }
}
