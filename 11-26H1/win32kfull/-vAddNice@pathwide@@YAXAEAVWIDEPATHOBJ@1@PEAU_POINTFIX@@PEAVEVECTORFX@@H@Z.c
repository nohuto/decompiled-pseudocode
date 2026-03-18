/*
 * XREFs of ?vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x14010C17C
 * Callers:
 *     ?vAddEndCap@WIDENER@pathwide@@IEAAXXZ @ 0x14010A494 (-vAddEndCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@pathwide@@IEAAXXZ @ 0x14010AAB8 (-vAddStartCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?cptAddRound@WIDEPENOBJ@pathwide@@QEAAKAEAVWIDENER@2@AEAVLINEDATA@2@1HHH@Z @ 0x14010BC2C (-cptAddRound@WIDEPENOBJ@pathwide@@QEAAKAEAVWIDENER@2@AEAVLINEDATA@2@1HHH@Z.c)
 *     ?vAddLeftNice@WIDENER@pathwide@@IEAAXPEAVEVECTORFX@@H@Z @ 0x14010C2AC (-vAddLeftNice@WIDENER@pathwide@@IEAAXPEAVEVECTORFX@@H@Z.c)
 * Callees:
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140107558 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall pathwide::vAddNice(
        pathwide *this,
        struct pathwide::WIDEPATHOBJ *a2,
        struct _POINTFIX *a3,
        struct EVECTORFX *a4)
{
  int v4; // r11d
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // rcx
  FIX x; // eax
  int v13; // ecx
  unsigned __int64 v14; // [rsp+30h] [rbp+10h] BYREF

  v4 = *(_DWORD *)a2;
  v6 = *(_DWORD *)a2;
  v14 = 0LL;
  if ( ((*((_BYTE *)a2 + 4) | (unsigned __int8)v6) & 0xF) == 0 )
  {
    if ( (_DWORD)a4 )
    {
      v8 = -a3->x;
      v7 = -a3->y;
      v14 = __PAIR64__(v7, v8);
      LODWORD(a4) = 0;
    }
    else
    {
      v14 = (unsigned __int64)*a3;
      v7 = HIDWORD(v14);
      v8 = v14;
    }
    if ( v8 > 0 )
    {
      v9 = v8 - 1;
    }
    else
    {
      if ( v8 >= 0 )
        goto LABEL_8;
      v9 = v8 + 1;
    }
    LODWORD(v14) = v9;
LABEL_8:
    if ( v7 > 0 )
    {
      v10 = v7 - 1;
    }
    else
    {
      if ( v7 >= 0 )
      {
LABEL_12:
        a3 = (struct _POINTFIX *)&v14;
        goto LABEL_13;
      }
      v10 = v7 + 1;
    }
    HIDWORD(v14) = v10;
    goto LABEL_12;
  }
LABEL_13:
  v11 = (_DWORD *)*((_QWORD *)this + 16);
  if ( (unsigned __int64)v11 >= *((_QWORD *)this + 17) )
  {
    pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(this, (const struct _POINTFIX *)a2, (struct EVECTORFX *)a3, (int)a4);
  }
  else
  {
    x = a3->x;
    if ( (_DWORD)a4 )
    {
      *v11 = v4 - x;
      v13 = *((_DWORD *)a2 + 1) - a3->y;
    }
    else
    {
      *v11 = v4 + x;
      v13 = a3->y + *((_DWORD *)a2 + 1);
    }
    *(_DWORD *)(*((_QWORD *)this + 16) + 4LL) = v13;
    *((_QWORD *)this + 16) += 8LL;
  }
}
