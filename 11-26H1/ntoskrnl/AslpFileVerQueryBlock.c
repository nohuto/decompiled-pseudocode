/*
 * XREFs of AslpFileVerQueryBlock @ 0x1409E5068
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x14088EB5C (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileQueryVersionString @ 0x1409E3618 (AslpFileQueryVersionString.c)
 * Callees:
 *     AslpFileStringTokenize @ 0x1404DFFE8 (AslpFileStringTokenize.c)
 *     AslpFileVerBlockGetValueOffset @ 0x1404E69FC (AslpFileVerBlockGetValueOffset.c)
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 *     AslStringDuplicate @ 0x1409E3DCC (AslStringDuplicate.c)
 *     AslFree @ 0x1409E6BD8 (AslFree.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileVerQueryBlock(unsigned __int16 *a1, unsigned __int16 *a2, unsigned __int16 **a3, _QWORD *a4)
{
  unsigned __int16 *i; // rdi
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rax
  char *v10; // rsi
  __int16 v11; // bp
  unsigned __int16 *v12; // rbx
  _WORD *v13; // rcx
  signed __int64 v14; // rcx
  const wchar_t *v15; // r14
  unsigned __int16 v16; // r11
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v20; // rax
  const char *v21; // r9
  int v22; // r8d
  _WORD *v23; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp+8h] BYREF
  _WORD *v25; // [rsp+98h] [rbp+20h] BYREF

  i = a1;
  v25 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  *a4 = 0LL;
  if ( a1[2] )
  {
    v21 = "Version block invalid";
    v22 = 2787;
LABEL_24:
    v8 = -1073741811;
    AslLogCallPrintf(1, (unsigned int)"AslpFileVerQueryBlock", v22, (_DWORD)v21);
    goto LABEL_15;
  }
  v8 = AslStringDuplicate((__int64 *)&v25, a2);
  if ( v8 < 0 )
  {
    AslLogCallPrintf(1, (unsigned int)"AslpFileVerQueryBlock", 2793, (unsigned int)"AslStringDuplicate failed [%x]");
    goto LABEL_15;
  }
  v9 = *i;
  if ( (unsigned __int16)v9 > 0x7FFFu )
  {
    v21 = "VersionBlock is too long";
    v22 = 2805;
    goto LABEL_24;
  }
  if ( (unsigned __int16)v9 < 8u )
  {
    v21 = "VersionBlock not long enough";
    v22 = 2810;
    goto LABEL_24;
  }
  v10 = (char *)i + v9;
  v11 = *(unsigned __int16 *)((char *)i + v9 - 2);
  v12 = (unsigned __int16 *)v10;
  *((_WORD *)v10 - 1) = 0;
  v13 = v25;
LABEL_6:
  v15 = AslpFileStringTokenize(v13, v7, &v23);
  if ( v15 )
  {
    v14 = (unsigned int)((_DWORD)v10 - (_DWORD)i);
    if ( (unsigned int)v14 >= 8
      && *i <= (unsigned int)v14
      && (int)AslpFileVerBlockGetValueOffset(&v24, (__int64)i, (unsigned int)v14) >= 0 )
    {
      v17 = *i;
      v18 = v24 + ((i[1] + 3LL) & 0xFFFFFFFFFFFFFFFCuLL);
      v24 = v18;
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
            goto LABEL_6;
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
LABEL_15:
  AslFree(v14, v25);
  return (unsigned int)v8;
}
