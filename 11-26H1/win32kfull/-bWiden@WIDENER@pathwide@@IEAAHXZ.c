/*
 * XREFs of ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x140108D94
 * Callers:
 *     ??0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x140109C68 (--0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140107558 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vPrependBeforeSubpath@WIDEPATHOBJ@pathwide@@QEAAXXZ @ 0x1401077F8 (-vPrependBeforeSubpath@WIDEPATHOBJ@pathwide@@QEAAXXZ.c)
 *     ?vReverseConcatenate@WIDEPATHOBJ@pathwide@@QEAAXAEAV12@@Z @ 0x1401083C4 (-vReverseConcatenate@WIDEPATHOBJ@pathwide@@QEAAXAEAV12@@Z.c)
 *     ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x140108988 (-vAddJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?vPrependBeforeFigure@WIDEPATHOBJ@pathwide@@QEAAXXZ @ 0x140108D1C (-vPrependBeforeFigure@WIDEPATHOBJ@pathwide@@QEAAXXZ.c)
 *     ?vNextStyleEvent@STYLER@pathwide@@QEAAXXZ @ 0x1401090F4 (-vNextStyleEvent@STYLER@pathwide@@QEAAXXZ.c)
 *     ?bBeginFigure@WIDEPATHOBJ@pathwide@@QEAAHXZ @ 0x140109AD8 (-bBeginFigure@WIDEPATHOBJ@pathwide@@QEAAHXZ.c)
 *     ?vEndFigure@WIDEPATHOBJ@pathwide@@QEAAXXZ @ 0x140109C18 (-vEndFigure@WIDEPATHOBJ@pathwide@@QEAAXXZ.c)
 *     ?bValid@WIDENER@pathwide@@QEBAHXZ @ 0x14010A0FC (-bValid@WIDENER@pathwide@@QEBAHXZ.c)
 *     ?vAddEndCap@WIDENER@pathwide@@IEAAXXZ @ 0x14010A494 (-vAddEndCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@pathwide@@IEAAXXZ @ 0x14010AAB8 (-vAddStartCap@WIDENER@pathwide@@IEAAXXZ.c)
 */

__int64 __fastcall pathwide::WIDENER::bWiden(pathwide::WIDENER *this)
{
  struct EVECTORFX *v2; // r8
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  const struct _POINTFIX *v10; // rdi
  __int64 v11; // rdx
  struct PATHALLOC *v12; // rcx
  struct _POINTFIX *v13; // rcx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  pathwide::WIDEPATHOBJ *v19; // rdi
  pathwide::WIDEPATHOBJ *v20; // rcx
  char v21; // r10
  __int64 v22; // rax

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
          goto LABEL_12;
        if ( v3 )
        {
          v15 = v3 - 1;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( !v17 )
              {
                v18 = 0;
                goto LABEL_26;
              }
              if ( v17 == 1 )
              {
                v18 = 1;
LABEL_26:
                pathwide::WIDENER::vAddJoin(this, v18, v2);
              }
            }
            else
            {
              pathwide::WIDENER::vAddJoin(this, 0, v2);
              pathwide::WIDEPATHOBJ::vEndFigure((pathwide::WIDENER *)((char *)this + 976));
              v19 = (pathwide::WIDENER *)((char *)this + 1128);
              pathwide::WIDEPATHOBJ::vEndFigure((pathwide::WIDENER *)((char *)this + 1128));
              v20 = (pathwide::WIDENER *)((char *)this + 1128);
              if ( (v21 & 8) == 0 )
              {
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 142) + 40LL) + 16LL) |= 8u;
                if ( !(unsigned int)pathwide::WIDEPATHOBJ::bBeginFigure(v20) )
                  return 0LL;
                pathwide::WIDEPATHOBJ::vReverseConcatenate(
                  (pathwide::WIDENER *)((char *)this + 1128),
                  (pathwide::WIDENER *)((char *)this + 976));
LABEL_34:
                pathwide::WIDEPATHOBJ::vEndFigure(v19);
                v22 = *(_QWORD *)(*((_QWORD *)this + 142) + 40LL);
                goto LABEL_35;
              }
              if ( !(unsigned int)pathwide::WIDEPATHOBJ::bBeginFigure(v20) )
                return 0LL;
              pathwide::WIDEPATHOBJ::vReverseConcatenate(
                (pathwide::WIDENER *)((char *)this + 1128),
                (pathwide::WIDENER *)((char *)this + 976));
              pathwide::WIDEPATHOBJ::vEndFigure((pathwide::WIDENER *)((char *)this + 1128));
              pathwide::WIDEPATHOBJ::vPrependBeforeSubpath((pathwide::WIDENER *)((char *)this + 1128));
              pathwide::WIDEPATHOBJ::vPrependBeforeFigure((pathwide::WIDENER *)((char *)this + 1128));
              v22 = *(_QWORD *)(*((_QWORD *)this + 142) + 40LL);
LABEL_35:
              *(_DWORD *)(v22 + 16) |= 8u;
            }
          }
          else
          {
LABEL_12:
            pathwide::WIDENER::vAddEndCap(this);
            pathwide::WIDEPATHOBJ::vEndFigure((pathwide::WIDENER *)((char *)this + 976));
            if ( !(unsigned int)pathwide::WIDENER::bValid(this) )
              return 0LL;
            v7 = *(_QWORD *)(*((_QWORD *)this + 123) + 40LL);
            if ( v7 )
            {
              do
              {
                v8 = v7 + 24;
                v9 = *(_QWORD *)(v7 + 8);
                v10 = (const struct _POINTFIX *)(v7 + 8 * (*(unsigned int *)(v7 + 20) + 3LL));
                while ( (unsigned __int64)v10 > v8 )
                {
                  v13 = (struct _POINTFIX *)*((_QWORD *)this + 157);
                  --v10;
                  if ( (unsigned __int64)v13 >= *((_QWORD *)this + 158) )
                  {
                    pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint((pathwide::WIDENER *)((char *)this + 1128), v10, 0LL, 0);
                  }
                  else
                  {
                    *v13 = *v10;
                    *((_QWORD *)this + 157) += 8LL;
                  }
                }
                v11 = *((_QWORD *)this + 123);
                v12 = *(struct PATHALLOC **)(v11 + 24);
                *(_QWORD *)(v11 + 24) = *(_QWORD *)v12;
                freepathalloc(v12);
                v7 = v9;
              }
              while ( v9 );
            }
            *(_QWORD *)(*((_QWORD *)this + 123) + 24LL) = 0LL;
            *(_QWORD *)(*((_QWORD *)this + 123) + 40LL) = 0LL;
            *(_QWORD *)(*((_QWORD *)this + 123) + 32LL) = 0LL;
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
      v4 = v3 - 6;
      if ( !v4 )
        break;
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 1 )
            return pathwide::WIDENER::bValid(this);
        }
        else
        {
          if ( !(unsigned int)pathwide::WIDEPATHOBJ::bBeginFigure((pathwide::WIDENER *)((char *)this + 1128)) )
            return 0LL;
          pathwide::WIDENER::vAddStartCap(this);
          pathwide::WIDEPATHOBJ::vEndFigure((pathwide::WIDENER *)((char *)this + 1128));
          pathwide::WIDEPATHOBJ::vPrependBeforeFigure((pathwide::WIDENER *)((char *)this + 1128));
        }
      }
      else if ( !*((_DWORD *)this + 321) )
      {
        v19 = (pathwide::WIDENER *)((char *)this + 1128);
        if ( !(unsigned int)pathwide::WIDEPATHOBJ::bBeginFigure((pathwide::WIDENER *)((char *)this + 1128)) )
          return 0LL;
        pathwide::WIDENER::vAddStartCap(this);
        pathwide::WIDENER::vAddEndCap(this);
        goto LABEL_34;
      }
    }
    if ( !(unsigned int)pathwide::WIDEPATHOBJ::bBeginFigure((pathwide::WIDENER *)((char *)this + 976))
      || !(unsigned int)pathwide::WIDEPATHOBJ::bBeginFigure((pathwide::WIDENER *)((char *)this + 1128)) )
    {
      return 0LL;
    }
    pathwide::WIDENER::vAddStartCap(this);
  }
}
