/*
 * XREFs of ExpParseEfiPath @ 0x140A2DC08
 * Callers:
 *     ExpTranslateEfiPath @ 0x140A2D97C (ExpTranslateEfiPath.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpParseEfiPath(char *Src, _QWORD *a2, _QWORD *a3, char *a4)
{
  unsigned int v4; // ebp
  _QWORD *v5; // r15
  char *v6; // r14
  unsigned int v7; // esi
  unsigned int v9; // ebx
  char v10; // r11
  char v11; // al
  char *v12; // r13
  unsigned int v13; // r12d
  char *v14; // r10
  char v15; // cl
  char v16; // al
  _WORD *Pool2; // rdi
  void *v18; // rax
  unsigned int v20; // esi
  int v21; // eax
  unsigned int v22; // r15d

  v4 = 0;
  v5 = a3;
  v6 = 0LL;
  v7 = 0;
  v9 = -1073741811;
  v10 = 1;
  while ( 1 )
  {
    v11 = *Src & 0x7F;
    if ( v11 == 127 )
      return v9;
    if ( v11 == 4 && Src[1] == 1 )
      break;
    Src += *((unsigned __int16 *)Src + 1);
  }
  v12 = Src;
  v9 = 0;
  v13 = *((unsigned __int16 *)Src + 1);
  v14 = &Src[(unsigned __int8)Src[2] | (unsigned __int64)((unsigned __int8)Src[3] << 8)];
  v15 = *v14;
  if ( (*v14 & 0x7F) == 4 && v14[1] == 4 )
  {
    v6 = v14;
    while ( 1 )
    {
      v21 = *((unsigned __int16 *)v14 + 1);
      if ( v21 + v7 - 4 < v7 )
        break;
      v7 = v21 + v7 - 4;
      if ( v21 + v13 < v13 )
      {
        v13 = -1;
        goto LABEL_31;
      }
      v13 += v21;
      v14 += ((unsigned __int8)v14[3] << 8) | (unsigned __int64)(unsigned __int8)v14[2];
      v15 = *v14;
      if ( (*v14 & 0x7F) != 4 || v14[1] != 4 )
        goto LABEL_7;
    }
    v7 = -1;
LABEL_31:
    v15 = *v14;
    v9 = -1073741675;
  }
LABEL_7:
  if ( (v15 & 0x7F) != 0x7F )
    return (unsigned int)-1073741811;
  if ( (v9 & 0x80000000) != 0 )
    return v9;
  v16 = v12[41];
  if ( v16 == 2 )
  {
LABEL_10:
    *a4 = v10;
    if ( v7 )
    {
      v20 = v7 + 2;
      Pool2 = (_WORD *)ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
        return 3221225626LL;
      while ( (*v6 & 0x7F) != 0x7F )
      {
        v22 = *((unsigned __int16 *)v6 + 1) - 4;
        if ( v22 >= v20 )
          goto LABEL_35;
        memmove((char *)Pool2 + v4, v6 + 4, v22);
        v20 -= v22;
        v4 += v22;
        v6 += *((unsigned __int16 *)v6 + 1);
      }
      v5 = a3;
      Pool2[(unsigned __int64)v4 >> 1] = 0;
    }
    else
    {
      Pool2 = 0LL;
    }
    v18 = (void *)ExAllocatePool2(0x40uLL);
    *a2 = v18;
    if ( v18 )
    {
      memmove(v18, v12, v13);
      *v5 = Pool2;
      return v9;
    }
    if ( Pool2 )
LABEL_35:
      ExFreePoolWithTag(Pool2, 0);
    return 3221225626LL;
  }
  if ( v16 == 1 )
  {
    v10 = 0;
    goto LABEL_10;
  }
  return 3221225485LL;
}
