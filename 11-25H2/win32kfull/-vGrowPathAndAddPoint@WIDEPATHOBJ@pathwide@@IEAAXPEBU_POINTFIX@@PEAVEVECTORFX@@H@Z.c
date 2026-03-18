/*
 * XREFs of ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140177B24
 * Callers:
 *     ?vAddLeft@WIDENER@pathwide@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1400A41F8 (-vAddLeft@WIDENER@pathwide@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEBU_POINTFIX@@H@Z @ 0x1400A4260 (-vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEBU_POINTFIX@@H@Z.c)
 *     ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400A44FC (-vAddJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400A4884 (-vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?bHobbyize@WIDEPENOBJ@pathwide@@AEAAHQEAVEVECTORFX@@@Z @ 0x1400A4FB4 (-bHobbyize@WIDEPENOBJ@pathwide@@AEAAHQEAVEVECTORFX@@@Z.c)
 *     ?vAddEndCap@WIDENER@pathwide@@IEAAXXZ @ 0x1400A590C (-vAddEndCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@pathwide@@IEAAXXZ @ 0x1400A6614 (-vAddStartCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vAddRoundEndCap@WIDEPENOBJ@pathwide@@QEAAXAEAVWIDENER@2@AEAVLINEDATA@2@HH@Z @ 0x1400A695C (-vAddRoundEndCap@WIDEPENOBJ@pathwide@@QEAAXAEAVWIDENER@2@AEAVLINEDATA@2@HH@Z.c)
 *     ?vReverseConcatenate@WIDEPATHOBJ@pathwide@@QEAAXAEAV12@@Z @ 0x1400A6B94 (-vReverseConcatenate@WIDEPATHOBJ@pathwide@@QEAAXAEAV12@@Z.c)
 *     ?vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1401779F8 (-vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140177AC0 (-vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 * Callees:
 *     ?bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ @ 0x1400A4E98 (-bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ.c)
 *     ?bGrowPath@WIDEPATHOBJ@pathwide@@IEAAHXZ @ 0x1400A63B0 (-bGrowPath@WIDEPATHOBJ@pathwide@@IEAAHXZ.c)
 */

void __fastcall pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
        pathwide::WIDEPATHOBJ *this,
        const struct _POINTFIX *a2,
        struct EVECTORFX *a3,
        int a4)
{
  pathwide::WIDEPATHOBJ *v8; // rcx
  _DWORD *v9; // rcx
  int v10; // eax

  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 20LL) = (*((_QWORD *)this + 16)
                                                                 - *(_QWORD *)(*((_QWORD *)this + 1) + 40LL)
                                                                 - 24LL) >> 3;
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 8LL) = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL)
                                                               + 24LL
                                                               + 8LL
                                                               * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1)
                                                                                             + 40LL)
                                                                                 + 20LL);
  if ( (unsigned int)pathwide::WIDEPATHOBJ::bValid(this) )
  {
    if ( (unsigned int)pathwide::WIDEPATHOBJ::bGrowPath(v8) )
    {
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 16LL) = 0;
      **((struct _POINTFIX **)this + 16) = *a2;
      if ( a3 )
      {
        v9 = (_DWORD *)*((_QWORD *)this + 16);
        v10 = *(_DWORD *)a3;
        if ( a4 )
        {
          *v9 -= v10;
          *(_DWORD *)(*((_QWORD *)this + 16) + 4LL) -= *((_DWORD *)a3 + 1);
        }
        else
        {
          *v9 += v10;
          *(_DWORD *)(*((_QWORD *)this + 16) + 4LL) += *((_DWORD *)a3 + 1);
        }
      }
      *((_QWORD *)this + 16) += 8LL;
    }
    else
    {
      *((_DWORD *)this + 30) = 1;
    }
  }
}
