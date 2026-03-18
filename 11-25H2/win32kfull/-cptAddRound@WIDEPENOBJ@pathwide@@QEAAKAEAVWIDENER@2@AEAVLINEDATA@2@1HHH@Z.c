/*
 * XREFs of ?cptAddRound@WIDEPENOBJ@pathwide@@QEAAKAEAVWIDENER@2@AEAVLINEDATA@2@1HHH@Z @ 0x140177700
 * Callers:
 *     ?vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400A4884 (-vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 * Callees:
 *     ?vAddLeftNice@WIDENER@pathwide@@IEAAXPEAVEVECTORFX@@H@Z @ 0x1401776CC (-vAddLeftNice@WIDENER@pathwide@@IEAAXPEAVEVECTORFX@@H@Z.c)
 *     ?vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1401779F8 (-vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

__int64 __fastcall pathwide::WIDEPENOBJ::cptAddRound(
        pathwide::WIDEPENOBJ *this,
        struct pathwide::WIDENER *a2,
        struct pathwide::LINEDATA *a3,
        struct pathwide::LINEDATA *a4,
        int a5,
        int a6,
        int a7)
{
  struct _POINTFIX *v7; // rbx
  unsigned int v8; // r12d
  struct pathwide::LINEDATA *v9; // rsi
  struct pathwide::WIDENER *v11; // r15
  char *v12; // r13
  struct _POINTFIX *v13; // rdi
  unsigned int v14; // ebp
  struct _POINTFIX *i; // rbx
  unsigned __int64 v16; // rcx
  unsigned __int64 v18; // r14
  struct _POINTFIX *j; // rbx
  unsigned __int64 v20; // rcx
  struct _POINTFIX *v21; // rdx
  unsigned __int64 v22; // r14
  struct _POINTFIX *v23; // r8
  struct pathwide::WIDEPATHOBJ *v24; // rsi
  pathwide *v25; // r15
  struct _POINTFIX *v26; // r8
  struct _POINTFIX *v27; // rdx
  int v28; // [rsp+20h] [rbp-48h]

  v7 = (struct _POINTFIX *)*((_QWORD *)a3 + 2);
  v8 = 0;
  v9 = a4;
  v11 = a2;
  if ( v7 == *((struct _POINTFIX **)a4 + 2) && ((*(_BYTE *)a4 ^ *(_BYTE *)a3) & 1) == 0 )
    return 0LL;
  v12 = (char *)a3 + 8;
  v13 = (struct _POINTFIX *)*((_QWORD *)a3 + 1);
  v14 = *(_DWORD *)a3 & 1;
  if ( a5 )
  {
    if ( a6 && *((_QWORD *)a3 + 3) <= *((_QWORD *)a3 + 4) )
    {
      pathwide::vAddNice(
        (struct pathwide::WIDENER *)((char *)a2 + 1128),
        (struct pathwide::WIDENER *)((char *)a2 + 692),
        *((struct _POINTFIX **)a3 + 2),
        (struct EVECTORFX *)v14,
        v28);
      v12 = (char *)a3 + 8;
    }
    for ( i = v7 + 1; ; i = v13 + 4 )
    {
      if ( v13 == *((struct _POINTFIX **)v9 + 1) )
      {
        v16 = *((_QWORD *)v9 + 2);
        if ( (unsigned __int64)i <= v16 && v14 == (*(_DWORD *)v9 & 1) )
          break;
      }
      v18 = (unsigned __int64)&v13[(unsigned int)(*(_DWORD *)(*(_QWORD *)v12 + 20LL) - 1) + 3];
      if ( (unsigned __int64)i < v18 )
      {
        v24 = (struct pathwide::WIDENER *)((char *)v11 + 692);
        v25 = (struct pathwide::WIDENER *)((char *)v11 + 1128);
        v8 += ((v18 - (unsigned __int64)i - 1) >> 3) + 1;
        do
        {
          v26 = i++;
          pathwide::vAddNice(v25, v24, v26, (struct EVECTORFX *)v14, v28);
        }
        while ( (unsigned __int64)i < v18 );
        v9 = a4;
        v11 = a2;
      }
      v13 = (struct _POINTFIX *)*v13;
      if ( !v13 )
      {
        v13 = *(struct _POINTFIX **)(*((_QWORD *)this + 1) + 32LL);
        v14 = v14 == 0;
      }
    }
    if ( (unsigned __int64)i < v16 )
    {
      do
      {
        v23 = i++;
        pathwide::vAddNice(
          (struct pathwide::WIDENER *)((char *)v11 + 1128),
          (struct pathwide::WIDENER *)((char *)v11 + 692),
          v23,
          (struct EVECTORFX *)v14,
          v28);
        ++v8;
      }
      while ( (unsigned __int64)i < *((_QWORD *)v9 + 2) );
    }
    if ( a7 )
    {
      if ( *((_QWORD *)v9 + 3) > *((_QWORD *)v9 + 4) )
        pathwide::vAddNice(
          (struct pathwide::WIDENER *)((char *)v11 + 1128),
          (struct pathwide::WIDENER *)((char *)v11 + 692),
          i,
          (struct EVECTORFX *)v14,
          v28);
    }
  }
  else
  {
    if ( a6 && *((_QWORD *)a3 + 3) > *((_QWORD *)a3 + 4) )
      pathwide::WIDENER::vAddLeftNice(a2, v7, v14);
    for ( j = v7 - 1; ; j = &v13[(unsigned int)(v13[2].y - 1) + 3] )
    {
      if ( v13 == *((struct _POINTFIX **)v9 + 1) )
      {
        v20 = *((_QWORD *)v9 + 2);
        if ( (unsigned __int64)j >= v20 && v14 == (*(_DWORD *)v9 & 1) )
          break;
      }
      v22 = (unsigned __int64)&v13[4];
      if ( j > &v13[4] )
      {
        v8 += (((unsigned __int64)j - v22 - 1) >> 3) + 1;
        do
        {
          v27 = j--;
          pathwide::WIDENER::vAddLeftNice(v11, v27, v14);
        }
        while ( (unsigned __int64)j > v22 );
      }
      v13 = (struct _POINTFIX *)v13[1];
      if ( !v13 )
      {
        v13 = *(struct _POINTFIX **)(*((_QWORD *)this + 1) + 40LL);
        v14 = v14 == 0;
      }
    }
    if ( (unsigned __int64)j > v20 )
    {
      do
      {
        v21 = j--;
        pathwide::WIDENER::vAddLeftNice(v11, v21, v14);
        ++v8;
      }
      while ( (unsigned __int64)j > *((_QWORD *)v9 + 2) );
    }
    if ( a7 && *((_QWORD *)v9 + 3) <= *((_QWORD *)v9 + 4) )
      pathwide::WIDENER::vAddLeftNice(v11, j, v14);
  }
  return v8;
}
