/*
 * XREFs of AslpFileVerQueryBlock @ 0x1409D7CBC
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x140894F58 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileQueryVersionString @ 0x140B46780 (AslpFileQueryVersionString.c)
 * Callees:
 *     AslpFileStringTokenize @ 0x1404D96C8 (AslpFileStringTokenize.c)
 *     AslpFileVerBlockGetValueOffset @ 0x1404DFE9C (AslpFileVerBlockGetValueOffset.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslStringDuplicate @ 0x1409D8BA8 (AslStringDuplicate.c)
 */

__int64 __fastcall AslpFileVerQueryBlock(unsigned __int16 *a1, __int64 a2, unsigned __int16 **a3, _QWORD *a4)
{
  unsigned __int16 *i; // rdi
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rax
  char *v10; // rsi
  __int16 v11; // bp
  unsigned __int16 *v12; // rbx
  _WORD *v13; // rcx
  __int64 v14; // rcx
  const wchar_t *v15; // r14
  unsigned __int16 v16; // r11
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v20; // rax
  _WORD *v21; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+80h] [rbp+8h] BYREF
  _WORD *v23; // [rsp+98h] [rbp+20h] BYREF

  i = a1;
  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  *a4 = 0LL;
  if ( a1[2] )
    goto LABEL_21;
  v8 = AslStringDuplicate(&v23, a2);
  if ( v8 < 0 )
  {
    AslLogCallPrintf(1LL, (__int64)"AslpFileVerQueryBlock");
    goto LABEL_14;
  }
  v9 = *i;
  if ( (__int16)v9 < 8 )
  {
LABEL_21:
    v8 = -1073741811;
    AslLogCallPrintf(1LL, (__int64)"AslpFileVerQueryBlock");
  }
  else
  {
    v10 = (char *)i + v9;
    v11 = *(unsigned __int16 *)((char *)i + v9 - 2);
    v12 = (unsigned __int16 *)v10;
    *((_WORD *)v10 - 1) = 0;
    v13 = v23;
LABEL_5:
    v15 = AslpFileStringTokenize(v13, v7, &v21);
    if ( v15 )
    {
      v14 = (unsigned int)((_DWORD)v10 - (_DWORD)i);
      if ( (unsigned int)v14 >= 8
        && *i <= (unsigned int)v14
        && (int)AslpFileVerBlockGetValueOffset(&v22, (__int64)i, (unsigned int)v14) >= 0 )
      {
        v17 = *i;
        v18 = v22 + ((i[1] + 3LL) & 0xFFFFFFFFFFFFFFFCuLL);
        v22 = v18;
        if ( v18 <= v17 )
        {
          v12 = (unsigned __int16 *)((char *)i + v17);
          for ( i = (unsigned __int16 *)((char *)i + v18);
                i < v12;
                i = (unsigned __int16 *)((char *)i + ((*i + 3LL) & 0xFFFFFFFFFFFFFFFCuLL)) )
          {
            v20 = *i;
            if ( (unsigned __int16)v20 <= v16 )
              break;
            v14 = (char *)v12 - (char *)i;
            if ( v20 > (char *)v12 - (char *)i )
              break;
            if ( !wcsicmp(v15, i + 3) )
            {
              v13 = 0LL;
              goto LABEL_5;
            }
            v16 = 8;
          }
        }
      }
      v8 = -1073741275;
    }
    else
    {
      *a3 = i;
      *a4 = (char *)v12 - (char *)i;
      v8 = 0;
    }
    *((_WORD *)v10 - 1) = v11;
  }
LABEL_14:
  AslFree(v14, v23);
  return (unsigned int)v8;
}
