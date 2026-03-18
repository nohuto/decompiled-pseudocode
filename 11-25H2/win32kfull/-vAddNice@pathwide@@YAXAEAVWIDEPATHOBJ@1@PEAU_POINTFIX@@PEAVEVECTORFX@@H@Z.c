/*
 * XREFs of ?vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1401779F8
 * Callers:
 *     ?vAddRoundEndCap@WIDEPENOBJ@pathwide@@QEAAXAEAVWIDENER@2@AEAVLINEDATA@2@HH@Z @ 0x1400A695C (-vAddRoundEndCap@WIDEPENOBJ@pathwide@@QEAAXAEAVWIDENER@2@AEAVLINEDATA@2@HH@Z.c)
 *     ?vAddLeftNice@WIDENER@pathwide@@IEAAXPEAVEVECTORFX@@H@Z @ 0x1401776CC (-vAddLeftNice@WIDENER@pathwide@@IEAAXPEAVEVECTORFX@@H@Z.c)
 *     ?cptAddRound@WIDEPENOBJ@pathwide@@QEAAKAEAVWIDENER@2@AEAVLINEDATA@2@1HHH@Z @ 0x140177700 (-cptAddRound@WIDEPENOBJ@pathwide@@QEAAKAEAVWIDENER@2@AEAVLINEDATA@2@1HHH@Z.c)
 * Callees:
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140177B24 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall pathwide::vAddNice(
        pathwide *this,
        struct pathwide::WIDEPATHOBJ *a2,
        struct _POINTFIX *a3,
        struct EVECTORFX *a4)
{
  int v4; // r11d
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // rcx
  FIX x; // eax
  int v12; // ecx
  unsigned __int64 v13; // [rsp+30h] [rbp+10h] BYREF

  v4 = *(_DWORD *)a2;
  v13 = 0LL;
  if ( ((*((_BYTE *)a2 + 4) | (unsigned __int8)v4) & 0xF) == 0 )
  {
    if ( (_DWORD)a4 )
    {
      v6 = -a3->x;
      v7 = -a3->y;
      v13 = __PAIR64__(v7, v6);
      LODWORD(a4) = 0;
    }
    else
    {
      v13 = (unsigned __int64)*a3;
      v7 = HIDWORD(v13);
      v6 = v13;
    }
    if ( v6 > 0 )
    {
      v8 = v6 - 1;
    }
    else
    {
      if ( v6 >= 0 )
        goto LABEL_8;
      v8 = v6 + 1;
    }
    LODWORD(v13) = v8;
LABEL_8:
    if ( v7 <= 0 )
    {
      if ( v7 >= 0 )
        goto LABEL_11;
      v9 = v7 + 1;
    }
    else
    {
      v9 = v7 - 1;
    }
    HIDWORD(v13) = v9;
LABEL_11:
    a3 = (struct _POINTFIX *)&v13;
  }
  v10 = (_DWORD *)*((_QWORD *)this + 16);
  if ( (unsigned __int64)v10 >= *((_QWORD *)this + 17) )
  {
    pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(this, (const struct _POINTFIX *)a2, (struct EVECTORFX *)a3, (int)a4);
  }
  else
  {
    x = a3->x;
    if ( (_DWORD)a4 )
    {
      *v10 = v4 - x;
      v12 = *((_DWORD *)a2 + 1) - a3->y;
    }
    else
    {
      *v10 = v4 + x;
      v12 = a3->y + *((_DWORD *)a2 + 1);
    }
    *(_DWORD *)(*((_QWORD *)this + 16) + 4LL) = v12;
    *((_QWORD *)this + 16) += 8LL;
  }
}
