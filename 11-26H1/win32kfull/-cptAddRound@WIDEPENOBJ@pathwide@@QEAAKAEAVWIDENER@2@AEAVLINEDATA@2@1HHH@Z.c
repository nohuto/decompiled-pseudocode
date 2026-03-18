/*
 * XREFs of ?cptAddRound@WIDEPENOBJ@pathwide@@QEAAKAEAVWIDENER@2@AEAVLINEDATA@2@1HHH@Z @ 0x14010BC2C
 * Callers:
 *     ?vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x14010B518 (-vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 * Callees:
 *     ?vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x14010C17C (-vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddLeftNice@WIDENER@pathwide@@IEAAXPEAVEVECTORFX@@H@Z @ 0x14010C2AC (-vAddLeftNice@WIDENER@pathwide@@IEAAXPEAVEVECTORFX@@H@Z.c)
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
  struct EVECTORFX *v7; // rbx
  unsigned int v8; // r12d
  struct pathwide::LINEDATA *v9; // rdi
  struct pathwide::LINEDATA *v10; // r15
  struct _POINTFIX *v13; // r14
  unsigned int v14; // esi
  struct _POINTFIX *i; // rbx
  unsigned __int64 v16; // rcx
  unsigned __int64 v18; // r13
  struct _POINTFIX *v19; // r8
  struct EVECTORFX *j; // rbx
  unsigned __int64 v21; // rcx
  struct EVECTORFX *v22; // rdx
  unsigned __int64 v23; // r15
  struct _POINTFIX *v24; // r8
  struct EVECTORFX *v25; // rdx
  int v26; // [rsp+20h] [rbp-38h]

  v7 = (struct EVECTORFX *)*((_QWORD *)a3 + 2);
  v8 = 0;
  v9 = a4;
  v10 = a3;
  if ( v7 == *((struct EVECTORFX **)a4 + 2) && ((*(_BYTE *)a4 ^ *(_BYTE *)a3) & 1) == 0 )
    return 0LL;
  v13 = (struct _POINTFIX *)*((_QWORD *)a3 + 1);
  v14 = *(_DWORD *)a3 & 1;
  if ( a5 )
  {
    if ( a6 && *((_QWORD *)a3 + 3) <= *((_QWORD *)a3 + 4) )
      pathwide::vAddNice(
        (struct pathwide::WIDENER *)((char *)a2 + 1128),
        (struct pathwide::WIDENER *)((char *)a2 + 692),
        *((struct _POINTFIX **)a3 + 2),
        (struct EVECTORFX *)v14,
        v26);
    for ( i = (struct _POINTFIX *)((char *)v7 + 8); ; i = v13 + 4 )
    {
      if ( v13 == *((struct _POINTFIX **)v9 + 1) )
      {
        v16 = *((_QWORD *)v9 + 2);
        if ( (unsigned __int64)i <= v16 && v14 == (*(_DWORD *)v9 & 1) )
          break;
      }
      v18 = (unsigned __int64)&v13[(unsigned int)(*(_DWORD *)(*((_QWORD *)v10 + 1) + 20LL) - 1) + 3];
      if ( (unsigned __int64)i < v18 )
      {
        v8 += ((v18 - (unsigned __int64)i - 1) >> 3) + 1;
        do
        {
          v19 = i++;
          pathwide::vAddNice(
            (struct pathwide::WIDENER *)((char *)a2 + 1128),
            (struct pathwide::WIDENER *)((char *)a2 + 692),
            v19,
            (struct EVECTORFX *)v14,
            v26);
        }
        while ( (unsigned __int64)i < v18 );
        v9 = a4;
        v10 = a3;
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
        v24 = i++;
        pathwide::vAddNice(
          (struct pathwide::WIDENER *)((char *)a2 + 1128),
          (struct pathwide::WIDENER *)((char *)a2 + 692),
          v24,
          (struct EVECTORFX *)v14,
          v26);
        ++v8;
      }
      while ( (unsigned __int64)i < *((_QWORD *)v9 + 2) );
    }
    if ( a7 )
    {
      if ( *((_QWORD *)v9 + 3) > *((_QWORD *)v9 + 4) )
        pathwide::vAddNice(
          (struct pathwide::WIDENER *)((char *)a2 + 1128),
          (struct pathwide::WIDENER *)((char *)a2 + 692),
          i,
          (struct EVECTORFX *)v14,
          v26);
    }
  }
  else
  {
    if ( a6 && *((_QWORD *)a3 + 3) > *((_QWORD *)a3 + 4) )
      pathwide::WIDENER::vAddLeftNice(a2, v7, v14);
    for ( j = (struct EVECTORFX *)((char *)v7 - 8); ; j = (struct EVECTORFX *)&v13[(unsigned int)(v13[2].y - 1) + 3] )
    {
      if ( v13 == *((struct _POINTFIX **)v9 + 1) )
      {
        v21 = *((_QWORD *)v9 + 2);
        if ( (unsigned __int64)j >= v21 && v14 == (*(_DWORD *)v9 & 1) )
          break;
      }
      v23 = (unsigned __int64)&v13[4];
      if ( j > (struct EVECTORFX *)&v13[4] )
      {
        v8 += (((unsigned __int64)j - v23 - 1) >> 3) + 1;
        do
        {
          v25 = j;
          j = (struct EVECTORFX *)((char *)j - 8);
          pathwide::WIDENER::vAddLeftNice(a2, v25, v14);
        }
        while ( (unsigned __int64)j > v23 );
      }
      v13 = (struct _POINTFIX *)v13[1];
      if ( !v13 )
      {
        v13 = *(struct _POINTFIX **)(*((_QWORD *)this + 1) + 40LL);
        v14 = v14 == 0;
      }
    }
    if ( (unsigned __int64)j > v21 )
    {
      do
      {
        v22 = j;
        j = (struct EVECTORFX *)((char *)j - 8);
        pathwide::WIDENER::vAddLeftNice(a2, v22, v14);
        ++v8;
      }
      while ( (unsigned __int64)j > *((_QWORD *)v9 + 2) );
    }
    if ( a7 && *((_QWORD *)v9 + 3) <= *((_QWORD *)v9 + 4) )
      pathwide::WIDENER::vAddLeftNice(a2, j, v14);
  }
  return v8;
}
