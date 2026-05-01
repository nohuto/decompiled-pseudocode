/*
 * XREFs of AslpFileVerQueryBlock @ 0x18009E4B4
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x18009DA90 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileQueryVersionString @ 0x18009E148 (AslpFileQueryVersionString.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslStringDuplicate @ 0x180099864 (AslStringDuplicate.c)
 *     AslpFileStringTokenize @ 0x18009E37C (AslpFileStringTokenize.c)
 *     AslpFileVerBlockGetValueOffset @ 0x18009E440 (AslpFileVerBlockGetValueOffset.c)
 */

__int64 __fastcall AslpFileVerQueryBlock(unsigned __int16 *a1, __int64 a2, unsigned __int16 **a3, _QWORD *a4)
{
  unsigned __int16 *i; // rdi
  const char *v7; // r9
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  _WORD *v12; // rcx
  char *v13; // rsi
  unsigned __int16 *v14; // rbx
  __int16 v15; // bp
  const wchar_t *v16; // r14
  unsigned int v17; // ecx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  _WORD *v21; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+80h] [rbp+8h] BYREF
  _WORD *v23; // [rsp+98h] [rbp+20h] BYREF

  i = a1;
  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  *a4 = 0LL;
  if ( a1[2] )
  {
    v7 = "Version block invalid";
    v8 = 2787LL;
LABEL_3:
    v9 = -1073741811;
    AslLogCallPrintf(1LL, "AslpFileVerQueryBlock", v8, v7);
    goto LABEL_26;
  }
  v10 = AslStringDuplicate(&v23, a2);
  v9 = v10;
  if ( v10 < 0 )
  {
    AslLogCallPrintf(1LL, "AslpFileVerQueryBlock", 2793LL, "AslStringDuplicate failed [%x]", v10);
    goto LABEL_26;
  }
  if ( *i > 0x7FFFu )
  {
    v7 = "VersionBlock is too long";
    v8 = 2805LL;
    goto LABEL_3;
  }
  if ( *i < 8u )
  {
    v7 = "VersionBlock not long enough";
    v8 = 2810LL;
    goto LABEL_3;
  }
  v12 = v23;
  v13 = (char *)i + *i;
  v14 = (unsigned __int16 *)v13;
  v15 = *((_WORD *)v13 - 1);
  *((_WORD *)v13 - 1) = 0;
LABEL_11:
  v16 = AslpFileStringTokenize(v12, v11, &v21);
  if ( v16 )
  {
    v17 = (_DWORD)v13 - (_DWORD)i;
    if ( (unsigned int)((_DWORD)v13 - (_DWORD)i) >= 8 )
    {
      v18 = *i;
      if ( (unsigned int)v18 <= v17 && (int)AslpFileVerBlockGetValueOffset(&v22, (__int64)i, v17) >= 0 )
      {
        v19 = v22 + ((i[1] + 3LL) & 0xFFFFFFFFFFFFFFFCuLL);
        v22 = v19;
        if ( v19 <= v18 )
        {
          v14 = (unsigned __int16 *)((char *)i + v18);
          for ( i = (unsigned __int16 *)((char *)i + v19);
                i < v14 && *i > 8u && *i <= (unsigned __int64)((char *)v14 - (char *)i);
                i = (unsigned __int16 *)((char *)i + ((*i + 3LL) & 0xFFFFFFFFFFFFFFFCuLL)) )
          {
            if ( !_wcsicmp(v16, i + 3) )
            {
              v12 = 0LL;
              goto LABEL_11;
            }
          }
        }
      }
    }
    v9 = -1073741275;
  }
  else
  {
    *a3 = i;
    *a4 = (char *)v14 - (char *)i;
    v9 = 0;
  }
  *((_WORD *)v13 - 1) = v15;
LABEL_26:
  AslFree(NtCurrentPeb()->ProcessHeap, v23);
  return v9;
}
