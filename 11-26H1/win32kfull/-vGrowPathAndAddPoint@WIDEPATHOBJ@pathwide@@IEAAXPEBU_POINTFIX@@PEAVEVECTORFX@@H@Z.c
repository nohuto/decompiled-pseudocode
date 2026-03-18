/*
 * XREFs of ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140107558
 * Callers:
 *     ?vReverseConcatenate@WIDEPATHOBJ@pathwide@@QEAAXAEAV12@@Z @ 0x1401083C4 (-vReverseConcatenate@WIDEPATHOBJ@pathwide@@QEAAXAEAV12@@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEBU_POINTFIX@@H@Z @ 0x1401087D8 (-vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEBU_POINTFIX@@H@Z.c)
 *     ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x140108988 (-vAddJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x140108D94 (-bWiden@WIDENER@pathwide@@IEAAHXZ.c)
 *     ?bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z @ 0x14010A140 (-bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z.c)
 *     ?vAddEndCap@WIDENER@pathwide@@IEAAXXZ @ 0x14010A494 (-vAddEndCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@pathwide@@IEAAXXZ @ 0x14010AAB8 (-vAddStartCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x14010B518 (-vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x14010C17C (-vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddLeft@WIDENER@pathwide@@IEAAXAEAVEVECTORFX@@H@Z @ 0x14010C244 (-vAddLeft@WIDENER@pathwide@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1401AC260 (-vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 * Callees:
 *     ?bGrowPath@WIDEPATHOBJ@pathwide@@IEAAHXZ @ 0x140109B28 (-bGrowPath@WIDEPATHOBJ@pathwide@@IEAAHXZ.c)
 *     ?bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ @ 0x14010B9CC (-bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ.c)
 */

void __fastcall pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
        pathwide::WIDEPATHOBJ *this,
        const struct _POINTFIX *a2,
        struct EVECTORFX *a3,
        int a4)
{
  pathwide::WIDEPATHOBJ *v8; // rcx
  int *v9; // rcx
  int v10; // edx
  int v11; // eax

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
        v9 = (int *)*((_QWORD *)this + 16);
        v10 = *(_DWORD *)a3;
        v11 = *v9;
        if ( a4 )
        {
          *v9 = v11 - v10;
          *(_DWORD *)(*((_QWORD *)this + 16) + 4LL) -= *((_DWORD *)a3 + 1);
        }
        else
        {
          *v9 = v10 + v11;
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
