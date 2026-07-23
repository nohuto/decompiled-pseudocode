/*
 * XREFs of LdrProcessRelocationBlockLongLong @ 0x1800D5400
 * Callers:
 *     LdrRelocateImageWithBias @ 0x1800D5304 (LdrRelocateImageWithBias.c)
 *     LdrProcessRelocationBlock @ 0x18013BEC0 (LdrProcessRelocationBlock.c)
 *     LdrProcessRelocationBlockEx @ 0x18013BEF0 (LdrProcessRelocationBlockEx.c)
 * Callees:
 *     LdrpArmProcessRelocation @ 0x1800D5550 (LdrpArmProcessRelocation.c)
 *     LdrpThumbProcessRelocation @ 0x1800D561C (LdrpThumbProcessRelocation.c)
 */

unsigned __int16 *__fastcall LdrProcessRelocationBlockLongLong(
        unsigned __int16 a1,
        __int64 a2,
        int a3,
        unsigned __int16 *a4,
        __int64 a5)
{
  unsigned __int16 *v5; // rbx
  int v7; // r14d
  unsigned __int64 v8; // rdi
  int v9; // r8d
  unsigned int v10; // r9d
  _QWORD *v11; // rax
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d

  v5 = a4;
  v7 = a1;
  v8 = (unsigned __int64)&a4[a3];
  while ( 1 )
  {
    if ( (unsigned __int64)v5 >= v8 )
      return v5;
    v9 = *v5 >> 12;
    if ( ((1 << v9) & 0x3A0) != 0 )
      break;
    v10 = 1;
    v11 = (_QWORD *)(a2 + (*v5 & 0xFFF));
    if ( v9 == 10 )
    {
      *v11 += a5;
    }
    else if ( v9 )
    {
      v13 = v9 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            if ( v15 == 1 )
            {
              v10 = 2;
              *(_WORD *)v11 = (v5[1] + (unsigned int)a5 + (*(unsigned __int16 *)v11 << 16) + 0x8000) >> 16;
            }
            else
            {
              v10 = 0;
            }
          }
          else
          {
            *(_DWORD *)v11 += a5;
          }
        }
        else
        {
          *(_WORD *)v11 += a5;
        }
      }
      else
      {
        *(_WORD *)v11 = ((unsigned int)a5 + (*(unsigned __int16 *)v11 << 16)) >> 16;
      }
    }
LABEL_6:
    if ( !v10 )
      return 0LL;
    v5 += v10;
  }
  if ( (_WORD)v7 == 448 )
  {
    v10 = LdrpArmProcessRelocation(v5, a2, a5);
    goto LABEL_6;
  }
  if ( v7 == 450 || v7 == 452 )
  {
    v10 = LdrpThumbProcessRelocation(v5, a2, a5);
    goto LABEL_6;
  }
  return 0LL;
}
