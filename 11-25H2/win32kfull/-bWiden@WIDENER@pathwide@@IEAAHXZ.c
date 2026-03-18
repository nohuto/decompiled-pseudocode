/*
 * XREFs of ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x1400A5C54
 * Callers:
 *     ??0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A5104 (--0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400A44FC (-vAddJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?bValid@WIDENER@pathwide@@QEBAHXZ @ 0x1400A5420 (-bValid@WIDENER@pathwide@@QEBAHXZ.c)
 *     ?vAddEndCap@WIDENER@pathwide@@IEAAXXZ @ 0x1400A590C (-vAddEndCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vNextStyleEvent@STYLER@pathwide@@QEAAXXZ @ 0x1400A5EEC (-vNextStyleEvent@STYLER@pathwide@@QEAAXXZ.c)
 *     ?bBeginFigure@WIDEPATHOBJ@pathwide@@QEAAHXZ @ 0x1400A6360 (-bBeginFigure@WIDEPATHOBJ@pathwide@@QEAAHXZ.c)
 *     ?vAddStartCap@WIDENER@pathwide@@IEAAXXZ @ 0x1400A6614 (-vAddStartCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vReverseConcatenate@WIDEPATHOBJ@pathwide@@QEAAXAEAV12@@Z @ 0x1400A6B94 (-vReverseConcatenate@WIDEPATHOBJ@pathwide@@QEAAXAEAV12@@Z.c)
 *     ?vEndFigure@WIDEPATHOBJ@pathwide@@QEAAXXZ @ 0x1400A6EE4 (-vEndFigure@WIDEPATHOBJ@pathwide@@QEAAXXZ.c)
 *     ?vPrependBeforeFigure@WIDEPATHOBJ@pathwide@@QEAAXXZ @ 0x1400A761C (-vPrependBeforeFigure@WIDEPATHOBJ@pathwide@@QEAAXXZ.c)
 *     ?vPrependBeforeSubpath@WIDEPATHOBJ@pathwide@@QEAAXXZ @ 0x14022CC90 (-vPrependBeforeSubpath@WIDEPATHOBJ@pathwide@@QEAAXXZ.c)
 */

__int64 __fastcall pathwide::WIDENER::bWiden(pathwide::WIDENER *this)
{
  struct EVECTORFX *v2; // r8
  int v3; // ecx
  struct pathwide::WIDEPATHOBJ *v4; // r10
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // ecx
  pathwide::WIDEPATHOBJ *v12; // rbx
  pathwide::WIDEPATHOBJ *v13; // rcx
  char v14; // r10
  __int64 v15; // rax

  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            pathwide::STYLER::vNextStyleEvent(this);
            v3 = *((_DWORD *)this + 172);
            if ( v3 > 5 )
              break;
            if ( v3 == 5 )
              goto LABEL_3;
            if ( v3 )
            {
              v6 = v3 - 1;
              if ( v6 )
              {
                v7 = v6 - 1;
                if ( v7 )
                {
                  v8 = v7 - 1;
                  if ( !v8 )
                  {
                    v9 = 0;
                    goto LABEL_14;
                  }
                  if ( v8 == 1 )
                  {
                    v9 = 1;
LABEL_14:
                    pathwide::WIDENER::vAddJoin(this, v9, v2);
                  }
                }
                else
                {
                  pathwide::WIDENER::vAddJoin(this, 0, v2);
                  pathwide::WIDEPATHOBJ::vEndFigure((pathwide::WIDENER *)((char *)this + 976));
                  v12 = (pathwide::WIDENER *)((char *)this + 1128);
                  pathwide::WIDEPATHOBJ::vEndFigure((pathwide::WIDENER *)((char *)this + 1128));
                  v13 = (pathwide::WIDENER *)((char *)this + 1128);
                  if ( (v14 & 8) == 0 )
                  {
                    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 142) + 40LL) + 16LL) |= 8u;
                    if ( !(unsigned int)pathwide::WIDEPATHOBJ::bBeginFigure(v13) )
                      return 0LL;
                    pathwide::WIDEPATHOBJ::vReverseConcatenate(
                      (pathwide::WIDENER *)((char *)this + 1128),
                      (pathwide::WIDENER *)((char *)this + 976));
LABEL_25:
                    pathwide::WIDEPATHOBJ::vEndFigure(v12);
                    v15 = *(_QWORD *)(*((_QWORD *)this + 142) + 40LL);
                    goto LABEL_26;
                  }
                  if ( !(unsigned int)pathwide::WIDEPATHOBJ::bBeginFigure(v13) )
                    return 0LL;
                  pathwide::WIDEPATHOBJ::vReverseConcatenate(
                    (pathwide::WIDENER *)((char *)this + 1128),
                    (pathwide::WIDENER *)((char *)this + 976));
                  pathwide::WIDEPATHOBJ::vEndFigure((pathwide::WIDENER *)((char *)this + 1128));
                  pathwide::WIDEPATHOBJ::vPrependBeforeSubpath((pathwide::WIDENER *)((char *)this + 1128));
                  pathwide::WIDEPATHOBJ::vPrependBeforeFigure((pathwide::WIDENER *)((char *)this + 1128));
                  v15 = *(_QWORD *)(*((_QWORD *)this + 142) + 40LL);
LABEL_26:
                  *(_DWORD *)(v15 + 16) |= 8u;
                }
              }
              else
              {
LABEL_3:
                pathwide::WIDENER::vAddEndCap(this);
                pathwide::WIDEPATHOBJ::vEndFigure((pathwide::WIDENER *)((char *)this + 976));
                if ( !(unsigned int)pathwide::WIDENER::bValid(this) )
                  return 0LL;
                pathwide::WIDEPATHOBJ::vReverseConcatenate((pathwide::WIDENER *)((char *)this + 1128), v4);
                pathwide::WIDEPATHOBJ::vEndFigure((pathwide::WIDENER *)((char *)this + 1128));
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 142) + 40LL) + 16LL) |= 8u;
                *((_DWORD *)this + 10) |= 8u;
              }
            }
            else
            {
              if ( !(unsigned int)pathwide::WIDEPATHOBJ::bBeginFigure((pathwide::WIDENER *)((char *)this + 976))
                || !(unsigned int)pathwide::WIDEPATHOBJ::bBeginFigure((pathwide::WIDENER *)((char *)this + 1128)) )
              {
                return 0LL;
              }
              *((_DWORD *)this + 10) &= ~8u;
              *((_QWORD *)this + 159) = *(_QWORD *)(*((_QWORD *)this + 142) + 40LL);
            }
          }
          v5 = v3 - 6;
          if ( v5 )
            break;
          if ( !(unsigned int)pathwide::WIDEPATHOBJ::bBeginFigure((pathwide::WIDENER *)((char *)this + 976))
            || !(unsigned int)pathwide::WIDEPATHOBJ::bBeginFigure((pathwide::WIDENER *)((char *)this + 1128)) )
          {
            return 0LL;
          }
          pathwide::WIDENER::vAddStartCap(this);
        }
        v10 = v5 - 1;
        if ( v10 )
          break;
        if ( !*((_DWORD *)this + 321) )
        {
          v12 = (pathwide::WIDENER *)((char *)this + 1128);
          if ( !(unsigned int)pathwide::WIDEPATHOBJ::bBeginFigure((pathwide::WIDENER *)((char *)this + 1128)) )
            return 0LL;
          pathwide::WIDENER::vAddStartCap(this);
          pathwide::WIDENER::vAddEndCap(this);
          goto LABEL_25;
        }
      }
      v11 = v10 - 1;
      if ( v11 )
        break;
      if ( !(unsigned int)pathwide::WIDEPATHOBJ::bBeginFigure((pathwide::WIDENER *)((char *)this + 1128)) )
        return 0LL;
      pathwide::WIDENER::vAddStartCap(this);
      pathwide::WIDEPATHOBJ::vEndFigure((pathwide::WIDENER *)((char *)this + 1128));
      pathwide::WIDEPATHOBJ::vPrependBeforeFigure((pathwide::WIDENER *)((char *)this + 1128));
    }
  }
  while ( v11 != 1 );
  return pathwide::WIDENER::bValid(this);
}
