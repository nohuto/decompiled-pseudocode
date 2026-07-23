/*
 * XREFs of MinCryptParseRevocationList @ 0x1408A801C
 * Callers:
 *     MinCrypK_ParseRevocationList @ 0x1407216F8 (MinCrypK_ParseRevocationList.c)
 * Callees:
 *     MinCryptHashMemory @ 0x1407215D0 (MinCryptHashMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x1408A9AF0 (MinAsn1ParseSingleExtensionValue.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MinCryptParseRevocationList(__int64 a1, int a2, _QWORD *a3)
{
  _DWORD *v4; // rdi
  int v5; // ebx
  unsigned int i; // r14d
  unsigned __int64 v7; // rsi
  __int64 j; // r15
  unsigned int v9; // edx
  char *v10; // rcx
  __int64 Pool2; // rax
  __int128 Size; // [rsp+50h] [rbp-48h] BYREF
  __int128 v14; // [rsp+60h] [rbp-38h] BYREF
  int v15; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v16; // [rsp+B0h] [rbp+18h]

  v16 = a3;
  v15 = a2;
  Size = 0LL;
  LOBYTE(v15) = 0;
  v14 = 0LL;
  v4 = 0LL;
  if ( (int)MinAsn1ParseSingleExtensionValue(&qword_140BE0938, a1, &v15, &Size) >= 0
    && (_BYTE)v15
    && (_DWORD)Size == 2
    && **((_WORD **)&Size + 1) == 0x8664 )
  {
    if ( (int)MinAsn1ParseSingleExtensionValue(&qword_140BE0928, a1, &v15, &Size) >= 0
      && (_BYTE)v15
      && (_DWORD)Size == 4
      && !**((_DWORD **)&Size + 1) )
    {
      for ( i = 0; i < 2; ++i )
      {
        v7 = 0LL;
        for ( j = 0LL; (unsigned int)j < 0xD; j = (unsigned int)(j + 1) )
        {
          LODWORD(v14) = *((_DWORD *)&off_140BE3110 + 4 * (unsigned int)j + 2);
          *((_QWORD *)&v14 + 1) = *(&off_140BE3110 + 2 * (unsigned int)j);
          if ( (int)MinAsn1ParseSingleExtensionValue(&v14, a1, &v15, &Size) < 0 )
            goto LABEL_15;
          if ( (_BYTE)v15 )
          {
            if ( i )
            {
              v9 = Size;
              v4[4 * j + 8] = Size;
              v10 = (char *)v4 + v7 + 240;
              *(_QWORD *)&v4[4 * (unsigned int)j + 10] = v10;
              memmove(v10, *((const void **)&Size + 1), v9);
            }
            if ( v7 + (unsigned int)Size < v7 )
            {
              v7 = -1LL;
              v5 = -1073741675;
            }
            else
            {
              v7 += (unsigned int)Size;
              v5 = 0;
            }
            if ( v5 < 0 )
              goto LABEL_39;
          }
        }
        if ( !i )
        {
          if ( v7 + 240 < v7 )
            v5 = -1073741675;
          else
            v5 = 0;
          if ( v5 < 0 )
            goto LABEL_39;
          Pool2 = ExAllocatePool2(0x102uLL);
          v4 = (_DWORD *)Pool2;
          if ( !Pool2 )
          {
            v5 = -1073741801;
            goto LABEL_39;
          }
          memset_0((void *)(Pool2 + 32), 0, 0xD0uLL);
        }
      }
      if ( (v4[52] & 0xFFFFFFF7) != 0 )
      {
        v5 = -1069350909;
      }
      else if ( (v4[56] & 0x1F) != 0 )
      {
LABEL_15:
        v5 = -1073740760;
      }
      else
      {
        v5 = MinCryptHashMemory(32780LL);
        if ( v5 >= 0 )
        {
          *v16 = v4;
          v4 = 0LL;
        }
      }
    }
    else
    {
      v5 = -1073741788;
    }
  }
  else
  {
    v5 = -1073741735;
  }
LABEL_39:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72634943u);
  return (unsigned int)v5;
}
